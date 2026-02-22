import vending_pkg::*;

module vending_input_ctrl (
    input  logic                    clk,
    input  logic                    rstn,
    
    // Asynchronous Inputs
    input  logic                    async_currency_valid,
    input  logic [CURR_VAL_W-1:0]   async_currency_value,
    input  logic                    async_item_valid,    
    input  logic [ITEM_ADDR_W-1:0]  async_item_select,   
    input  logic [7:0]              async_no_of_items,   

    // Synchronized Outputs
    output logic                    sync_curr_valid,
    output logic [CURR_VAL_W-1:0]   sync_curr_value,
    output logic                    sync_item_valid,
    output logic [ITEM_ADDR_W-1:0]  sync_item_select,
    output logic [7:0]              sync_no_of_items
);

    logic [2:0] curr_vld_sync;
    logic [2:0] item_vld_sync;

    always_ff @(posedge clk or negedge rstn) begin
        if (!rstn) begin
            curr_vld_sync <= 3'b0;
            item_vld_sync <= 3'b0;
        end else begin
            curr_vld_sync <= {curr_vld_sync[1:0], async_currency_valid};
            item_vld_sync <= {item_vld_sync[1:0], async_item_valid};
        end
    end

    assign sync_curr_valid = curr_vld_sync[1] && !curr_vld_sync[2];
    assign sync_item_valid = item_vld_sync[1] && !item_vld_sync[2];

    always_ff @(posedge clk or negedge rstn) begin
        if (!rstn) begin
            sync_curr_value  <= '0;
            sync_item_select <= '0;
            sync_no_of_items <= '0;
        end else begin
            if (sync_curr_valid) 
                sync_curr_value <= async_currency_value;
            
            if (sync_item_valid) begin
                sync_item_select <= async_item_select;
                sync_no_of_items <= async_no_of_items;
            end
        end
    end

endmodule
