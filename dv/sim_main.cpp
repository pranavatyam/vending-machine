#include <iostream>
#include <iomanip>
#include "Vtb_top.h"
#include "verilated.h"
#include "verilated_vcd_c.h"

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    Vtb_top* top = new Vtb_top;

    // Setup Waveform Tracing for Surfer
    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace(tfp, 99);
    tfp->open("waveform.vcd");

    vluint64_t main_time = 0;
    vluint64_t last_currency_time = 0;
    bool counting_latency = false;

    std::cout << "Starting Vending Machine Controller Simulation..." << std::endl;

    while (!Verilated::gotFinish() && main_time < 1500) {
        
        // --- Clock Generation ---
        // 100MHz System Clock (10ns period)
        if ((main_time % 5) == 0) top->clk = !top->clk;
        // 50MHz APB Clock (20ns period)
        if ((main_time % 10) == 0) top->pclk = !top->pclk;

        // --- TEST CASE 1: Successful 15 Rs Purchase ---

        // 1. Reset Release
        if (main_time == 50) { 
            top->rstn = 1; top->prstn = 1; 
        }

        // 2. Config Mode: Set Item #0 (Price: 15, Qty: 10)
        if (main_time == 100) {
            top->cfg_mode = 1;
            top->psel = 1;
            top->pwrite = 1;
            top->paddr = 0x40000004;      
            top->pwdata = (10 << 16) | 15; // [23:16]=Qty, [15:0]=Price
        }
        if (main_time == 140) { top->psel = 0; top->cfg_mode = 0; }

        // 3. User selects Item #0, Qty 1
        if (main_time == 200) {
            top->item_select_valid = 1;
            top->item_select = 0;
            top->no_of_items = 1;
        }
        if (main_time == 210) top->item_select_valid = 0;

        // 4. User inserts 20 Rs Note
        if (main_time == 400) {
            top->currency_valid = 1;
            top->currency_value = 20;
        }
        if (main_time == 410) top->currency_valid = 0;

        // --- TEST CASE 2: Out-of-Stock / Empty Item ---

        // 5. Select Item #2 (Not configured, so Qty is 0)
        if (main_time == 800) {
            top->item_select_valid = 1;
            top->item_select = 2; 
            top->no_of_items = 1;
        }
        if (main_time == 810) top->item_select_valid = 0;

        // 6. Insert 10 Rs (Expect full refund and Empty Code)
        if (main_time == 900) {
            top->currency_valid = 1;
            top->currency_value = 10;
        }
        if (main_time == 910) top->currency_valid = 0;

        // --- MONITORING & ASSERTIONS ---

        // Record time of last currency input for latency check
        if (top->currency_valid && top->clk) {
            last_currency_time = main_time;
            counting_latency = true;
        }

        // Check outputs when dispense valid pulses
        if (top->item_dispense_valid && top->clk) {
            int latency_cycles = (main_time - last_currency_time) / 10;
            
            std::cout << "\n[SIM MONITOR - TIME " << main_time << "]" << std::endl;
            std::cout << "Transaction Detected!" << std::endl;
            std::cout << "  - Latency: " << latency_cycles << " cycles" << std::endl;
            std::cout << "  - Dispense Code: 0x" << std::hex << (int)top->item_dispense << std::endl;
            std::cout << "  - Change: " << std::dec << (int)top->currency_change << " Rs" << std::endl;

            // Spec Verification: Latency must be < 10 cycles
            if (latency_cycles < 10) {
                std::cout << "  ✅ Latency Spec: PASS" << std::endl;
            } else {
                std::cout << "  ❌ Latency Spec: FAIL (>10 cycles)" << std::endl;
            }

            // Spec Verification: Empty Item Handling (FFFF check)
            if (main_time > 800) {
                if (top->item_dispense == 0x3FF && top->currency_change == 10) {
                    std::cout << "  ✅ Empty Item Handling: PASS" << std::endl;
                } else {
                    std::cout << "  ❌ Empty Item Handling: FAIL" << std::endl;
                }
            }
            std::cout << "-------------------------------------------" << std::endl;
            counting_latency = false;
        }

        top->eval();
        if (tfp) tfp->dump(main_time);
        main_time++;
    }

    tfp->close();
    delete top;
    std::cout << "Simulation Complete." << std::endl;
    return 0;
}