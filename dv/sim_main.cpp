#include <iostream>
#include "Vtb_top.h"
#include "verilated.h"
#include "verilated_vcd_c.h"

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    Vtb_top* top = new Vtb_top;

    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace(tfp, 99);
    tfp->open("waveform.vcd");

    vluint64_t last_currency_time = 0;
    bool counting_latency = false;
    vluint64_t main_time = 0;

    // Run for 1500 ticks to ensure we see the full transaction
    while (!Verilated::gotFinish() && main_time < 1500) {
        
        // --- Clock Generation ---
        if ((main_time % 5) == 0) top->clk = !top->clk;
        if ((main_time % 10) == 0) top->pclk = !top->pclk;

        // --- TEST SEQUENCE ---

        // 1. Release Reset
        if (main_time == 50) { 
            top->rstn = 1; top->prstn = 1; 
        }

        // 2. Config Mode: Set Item #0 to 15 Rs with 10 units in stock
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

        // 4. User inserts 20 Rs
        if (main_time == 400) {
            top->currency_valid = 1;
            top->currency_value = 20;
        }
        if (main_time == 410) top->currency_valid = 0;

        // --- MONITORING LOGIC ---

        // Start counting latency when currency is inserted
        if (top->currency_valid && top->clk) {
            last_currency_time = main_time;
            counting_latency = true;
        }

        // Check result when dispense occurs
        if (top->item_dispense_valid && counting_latency) {
            int latency_cycles = (main_time - last_currency_time) / 10;
            std::cout << "-------------------------------------------" << std::endl;
            std::cout << "Transaction Result at time " << main_time << std::endl;
            std::cout << ">>> Latency: " << latency_cycles << " cycles." << std::endl;
            std::cout << ">>> Change Dispensed: " << (int)top->currency_change << " Rs" << std::endl;
            
            if (latency_cycles < 10) {
                std::cout << "SUCCESS: Latency is within spec (<10 clocks)" << std::endl;
            } else {
                std::cout << "FAILURE: Latency exceeds 10 clocks!" << std::endl;
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
    return 0;
}