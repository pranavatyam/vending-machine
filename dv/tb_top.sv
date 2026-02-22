`timescale 1ns/1ps
import vending_pkg::*;

module tb_top (
    // Pass signals up to the C++ wrapper
    input logic clk,
    input logic pclk,
    input logic rstn,
    input logic prstn,
    input logic cfg_mode,
    
    // Inputs to drive
    input logic currency_valid,
    input logic [CURR_VAL_W-1:0] currency_value,
    input logic item_select_valid,
    input logic [ITEM_ADDR_W-1:0] item_select,
    input logic [7:0] no_of_items,

    // APB Inputs
    input logic [31:0] paddr,
    input logic [31:0] pwdata,
    input logic psel,
    input logic pwrite,

    // Outputs to monitor
    output logic [31:0] prdata,
    output logic pready,
    output logic item_dispense_valid,
    output logic [ITEM_ADDR_W-1:0] item_dispense,
    output logic [7:0] no_of_items_out,
    output logic [15:0] currency_change
);

    // Instantiate the Vendor Controller DUT [cite: 1, 19]
    vending_top dut (
        .clk(clk),
        .rstn(rstn),
        .cfg_mode(cfg_mode),
        .currency_valid(currency_valid),
        .currency_value(currency_value),
        .item_select_valid(item_select_valid),
        .item_select(item_select),
        .no_of_items(no_of_items),
        .pclk(pclk),
        .prstn(prstn),
        .paddr(paddr),
        .psel(psel),
        .pwrite(pwrite),
        .pwdata(pwdata),
        .prdata(prdata),
        .pready(pready),
        .item_dispense_valid(item_dispense_valid),
        .item_dispense(item_dispense),
        .no_of_items_out(no_of_items_out),
        .currency_change(currency_change)
    );

    initial begin
        $dumpfile("waveform.vcd"); 
        $dumpvars(0, tb_top);      
    end

endmodule
