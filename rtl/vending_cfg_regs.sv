import vending_pkg::*;

module vending_cfg_regs (
    // APB Interface (50MHz)
    input  logic                    pclk,
    input  logic                    prstn,
    input  logic [31:0]             paddr,
    input  logic                    psel,
    input  logic                    pwrite,
    input  logic [31:0]             pwdata,
    output logic [31:0]             prdata,
    output logic                    pready,

    // Interface to Main FSM (100MHz System Clock)
    input  logic [ITEM_ADDR_W-1:0]  fsm_item_index,
    output logic [15:0]             fsm_item_val,
    output logic [7:0]              fsm_avail_count,
    input  logic                         fsm_dispense_en
);

    // Internal Storage: [31:24] disp_items, [23:16] avail_items, [15:0] item_val
    logic [31:0] item_mem [0:MAX_ITEMS-1];
    logic [31:0] reg_vending_cfg; // Main config at 0x4000_0000

    // APB Write & Internal Update Logic
    always_ff @(posedge pclk or negedge prstn) begin
        if (!prstn) begin
            reg_vending_cfg <= '0;
            for (int i = 0; i < MAX_ITEMS; i++) item_mem[i] <= '0;
        end else begin
            // Handle Vendor/Host SW writes via APB
            if (psel && pwrite) begin
                if (paddr == 32'h4000_0000) begin
                    reg_vending_cfg <= pwdata;
                end else if (paddr >= 32'h4000_0004) begin
                    static int index = (paddr - 32'h4000_0004) >> 2;
                    if (index < MAX_ITEMS) begin
                        // Load item value and available count; reset dispensed count
                        item_mem[index] <= {8'h00, pwdata[23:0]};
                    end
                end
            end
            
            // Handle FSM updates (increment dispensed, decrement available)
            if (fsm_dispense_en) begin
                item_mem[fsm_item_index][31:24] <= item_mem[fsm_item_index][31:24] + 1'b1;
                item_mem[fsm_item_index][23:16] <= item_mem[fsm_item_index][23:16] - 1'b1;
            end
        end
    end

    // APB Read Logic
    assign pready = 1'b1; // Zero-wait state response
    assign prdata = (paddr == 32'h4000_0000) ? reg_vending_cfg :
                    (paddr >= 32'h4000_0004) ? item_mem[(paddr - 32'h4000_0004) >> 2] : '0;

    // Continuous output to FSM
    assign fsm_item_val    = item_mem[fsm_item_index][15:0];
    assign fsm_avail_count = item_mem[fsm_item_index][23:16];

endmodule
