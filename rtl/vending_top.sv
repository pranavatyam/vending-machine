import vending_pkg::*;

module vending_top (
    // General Interfaces [cite: 90]
    input logic clk,      
    input logic rstn,     
    input logic cfg_mode, 

    // Currency Interface [cite: 92]
    input logic currency_valid,
    input logic [CURR_VAL_W-1:0]   currency_value,

    // Item Selection Interface [cite: 94]
    input logic item_select_valid,
    input logic [ITEM_ADDR_W-1:0] item_select,
    input logic [7:0] no_of_items,

    // APB Configuration Interface [cite: 99]
    input logic pclk,     
    input logic prstn,
    input logic [31:0] paddr,
    input logic psel,
    input logic pwrite,
    input logic [31:0] pwdata,
    output logic [31:0] prdata,
    output logic pready,

    // Item Dispense Interface [cite: 101]
    output logic item_dispense_valid,
    output logic [ITEM_ADDR_W-1:0] item_dispense,
    output logic [7:0] no_of_items_out,
    output logic [15:0] currency_change 
);

    // Internal Signal Interconnects
    logic sync_curr_valid, sync_item_valid;
    logic [CURR_VAL_W-1:0] sync_curr_val;
    logic [ITEM_ADDR_W-1:0] sync_item_sel, fsm_item_idx;
    logic [7:0] sync_qty, fsm_avail;
    logic [15:0] fsm_val;
    logic fsm_disp_en, v_item_valid, v_no_items;

    // Input Control: Synchronization & Edge Detection [cite: 20]
    vending_input_ctrl input_inst (
        .clk(clk), .rstn(rstn),
        .async_currency_valid(currency_valid), .async_currency_value(currency_value),
        .async_item_valid(item_select_valid), .async_item_select(item_select),
        .async_no_of_items(no_of_items),
        .sync_curr_valid(sync_curr_valid), .sync_curr_value(sync_curr_val),
        .sync_item_valid(sync_item_valid), .sync_item_select(sync_item_sel),
        .sync_no_of_items(sync_qty)
    );

    // Configuration Block: APB Registers [cite: 26]
    vending_cfg_regs cfg_inst (
        .pclk(pclk), .prstn(prstn), .paddr(paddr), .psel(psel),
        .pwrite(pwrite), .pwdata(pwdata), .prdata(prdata), .pready(pready),
        .fsm_item_index(fsm_item_idx), .fsm_item_val(fsm_val),
        .fsm_avail_count(fsm_avail), .fsm_dispense_en(fsm_disp_en)
    );

    // Main Logic: Finite State Machine [cite: 21]
    vending_fsm fsm_inst (
        .clk(clk), .rstn(rstn), .cfg_mode(cfg_mode),
        .item_select_valid(sync_item_valid), .item_select(sync_item_sel),
        .no_of_items(sync_qty), .currency_valid(sync_curr_valid),
        .currency_value(sync_curr_val), .fsm_item_index(fsm_item_idx),
        .fsm_item_val(fsm_val), .fsm_avail_count(fsm_avail),
        .fsm_dispense_en(fsm_disp_en), .item_dispense_valid(v_item_valid),
        .item_dispense(item_dispense), .no_of_items_out(no_of_items_out),
        .currency_change(currency_change)
    );

    assign item_dispense_valid = v_item_valid;

endmodule
