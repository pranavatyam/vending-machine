package vending_pkg;
    // Parameters from Specification
    parameter int MAX_ITEMS      = 1024;        // [cite: 34]
    parameter int MAX_CURRENCY   = 100;         // [cite: 35]
    parameter logic [15:0] EMPTY_CODE = 16'hFFFF; // [cite: 46]

    // Clock frequencies
    parameter int SYS_CLK_FREQ   = 100_000_000; // 100MHz [cite: 33]
    parameter int APB_CLK_FREQ   = 50_000_000;  // 50MHz [cite: 51]

    // Widths based on Log-base-2 [cite: 92, 94]
    parameter int ITEM_ADDR_W    = $clog2(MAX_ITEMS);
    parameter int CURR_VAL_W     = $clog2(MAX_CURRENCY + 1); 
    
    // Supported Currency Values: 5, 10, 15, 20, 50, 100 [cite: 41]
    typedef enum logic [CURR_VAL_W-1:0] {
        RS_5   = 7'd5,
        RS_10  = 7'd10,
        RS_15  = 7'd15,
        RS_20  = 7'd20,
        RS_50  = 7'd50,
        RS_100 = 7'd100
    } currency_e;
endpackage
