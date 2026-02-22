import vending_pkg::*;

module vending_fsm (
    input  logic                    clk,
    input  logic                    rstn,
    input  logic                    cfg_mode,

    // Interface from Input Control (Synchronized)
    input  logic                    item_select_valid,
    input  logic [ITEM_ADDR_W-1:0]  item_select,
    input  logic [7:0]              no_of_items,
    input  logic                    currency_valid,
    input  logic [CURR_VAL_W-1:0]   currency_value,

    // Interface from CFG Block
    output logic [ITEM_ADDR_W-1:0]  fsm_item_index,
    input  logic [15:0]             fsm_item_val,
    input  logic [7:0]              fsm_avail_count,
    output logic                    fsm_dispense_en,

    // Output Interface
    output logic                    item_dispense_valid,
    output logic [ITEM_ADDR_W-1:0]  item_dispense,
    output logic [7:0]              no_of_items_out,
    output logic [15:0]             currency_change
);

    typedef enum logic [2:0] {
        IDLE        = 3'b000,
        CALC_COST   = 3'b001,
        ACCUMULATE  = 3'b010,
        DISPENSE    = 3'b011,
        REFUND      = 3'b100
    } state_e;

    state_e current_state, next_state;
    logic [31:0] total_cost;
    logic [31:0] accumulated_curr;
    logic [ITEM_ADDR_W-1:0] latched_item;
    logic [7:0] latched_qty;

    assign fsm_item_index = latched_item;

    always_ff @(posedge clk or negedge rstn) begin
        if (!rstn) 
            current_state <= IDLE;
        else if (cfg_mode) 
            current_state <= IDLE; 
        else 
            current_state <= next_state;
    end

    always_comb begin
        next_state = current_state;
        fsm_dispense_en = 1'b0;
        item_dispense_valid = 1'b0;

        case (current_state)
            IDLE: begin
                if (item_select_valid) next_state = CALC_COST;
            end
            CALC_COST: begin
                if (fsm_avail_count < latched_qty) 
                    next_state = REFUND; 
                else 
                    next_state = ACCUMULATE;
            end
            ACCUMULATE: begin
                if (accumulated_curr >= total_cost) 
                    next_state = DISPENSE;
            end
            DISPENSE: begin
                item_dispense_valid = 1'b1; 
                fsm_dispense_en = 1'b1;
                next_state = IDLE;
            end
            REFUND: begin
                item_dispense_valid = 1'b1; 
                next_state = IDLE;
            end
            default: next_state = IDLE;
        endcase
    end

    always_ff @(posedge clk) begin
        if (current_state == IDLE && item_select_valid) begin
            latched_item <= item_select;
            latched_qty  <= no_of_items;
            accumulated_curr <= '0;
        end else if (current_state == ACCUMULATE && currency_valid) begin
            accumulated_curr <= accumulated_curr + 32'(currency_value);
        end
        
        if (current_state == CALC_COST) begin
            total_cost <= fsm_item_val * latched_qty;
        end
    end

    assign currency_change = (current_state == REFUND) ? accumulated_curr[15:0] :
                             (current_state == DISPENSE) ? (accumulated_curr - total_cost) : '0;
                             
    assign item_dispense = (current_state == REFUND) ? EMPTY_CODE[ITEM_ADDR_W-1:0] : latched_item;
    assign no_of_items_out = (current_state == REFUND) ? 8'h0 : latched_qty;

endmodule
