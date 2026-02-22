import vending_pkg::*;

module vending_output_ctrl (
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

    // Register outputs to ensure a clean timing path and 
    // single-cycle pulse width.
    always_ff @(posedge clk or negedge rstn) begin
        if (!rstn) begin
            item_dispense_valid <= 1'b0;
            item_dispense       <= '0;
            no_of_items         <= 8'h0;
            currency_change     <= 16'h0;
        end else begin
            // Pulse generation: fsm_dispense_valid is expected to be 
            // a single pulse from the FSM logic.
            item_dispense_valid <= fsm_dispense_valid;
            
            if (fsm_dispense_valid) begin
                item_dispense   <= fsm_item_out;
                no_of_items     <= fsm_no_of_items;
                currency_change <= fsm_change_val;
            end else begin
                // Optional: Clear data when valid is low for power/clarity
                item_dispense   <= '0;
                no_of_items     <= 8'h0;
                currency_change <= 16'h0;
            end
        end
    end

endmodule
