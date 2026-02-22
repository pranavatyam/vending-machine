// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_top.h for the primary calling header

#ifndef VERILATED_VTB_TOP___024ROOT_H_
#define VERILATED_VTB_TOP___024ROOT_H_  // guard

#include "verilated.h"


class Vtb_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_top___024root final {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(pclk,0,0);
    VL_IN8(rstn,0,0);
    VL_IN8(prstn,0,0);
    VL_IN8(cfg_mode,0,0);
    VL_IN8(currency_valid,0,0);
    VL_IN8(currency_value,6,0);
    VL_IN8(item_select_valid,0,0);
    VL_IN8(no_of_items,7,0);
    VL_IN8(psel,0,0);
    VL_IN8(pwrite,0,0);
    VL_OUT8(pready,0,0);
    VL_OUT8(item_dispense_valid,0,0);
    VL_OUT8(no_of_items_out,7,0);
    CData/*6:0*/ tb_top__DOT__dut__DOT__sync_curr_val;
    CData/*7:0*/ tb_top__DOT__dut__DOT__sync_qty;
    CData/*0:0*/ tb_top__DOT__dut__DOT__fsm_disp_en;
    CData/*0:0*/ tb_top__DOT__dut__DOT__v_item_valid;
    CData/*0:0*/ tb_top__DOT__dut__DOT__v_no_items;
    CData/*0:0*/ tb_top__DOT__dut__DOT__input_inst__DOT__sync_curr_valid;
    CData/*0:0*/ tb_top__DOT__dut__DOT__input_inst__DOT__sync_item_valid;
    CData/*2:0*/ tb_top__DOT__dut__DOT__input_inst__DOT__curr_vld_sync;
    CData/*2:0*/ tb_top__DOT__dut__DOT__input_inst__DOT__item_vld_sync;
    CData/*2:0*/ tb_top__DOT__dut__DOT__fsm_inst__DOT__current_state;
    CData/*2:0*/ tb_top__DOT__dut__DOT__fsm_inst__DOT__next_state;
    CData/*7:0*/ tb_top__DOT__dut__DOT__fsm_inst__DOT__latched_qty;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__rstn__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__pclk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__prstn__0;
    VL_IN16(item_select,9,0);
    VL_OUT16(item_dispense,9,0);
    VL_OUT16(currency_change,15,0);
    SData/*9:0*/ tb_top__DOT__dut__DOT__sync_item_sel;
    SData/*9:0*/ tb_top__DOT__dut__DOT__fsm_inst__DOT__latched_item;
    VL_IN(paddr,31,0);
    VL_IN(pwdata,31,0);
    VL_OUT(prdata,31,0);
    IData/*31:0*/ tb_top__DOT__dut__DOT__cfg_inst__DOT__reg_vending_cfg;
    IData/*31:0*/ tb_top__DOT__dut__DOT__cfg_inst__DOT__unnamedblk2__DOT__index;
    IData/*31:0*/ tb_top__DOT__dut__DOT__cfg_inst__DOT__unnamedblk1__DOT__i;
    IData/*31:0*/ tb_top__DOT__dut__DOT__fsm_inst__DOT__total_cost;
    IData/*31:0*/ tb_top__DOT__dut__DOT__fsm_inst__DOT__accumulated_curr;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<IData/*31:0*/, 1024> tb_top__DOT__dut__DOT__cfg_inst__DOT__item_mem;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VicoTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    VlUnpacked<CData/*0:0*/, 5> __Vm_traceActivity;
    VlNBACommitQueue<VlUnpacked<IData/*31:0*/, 1024>, true, IData/*31:0*/, 1> __VdlyCommitQueuetb_top__DOT__dut__DOT__cfg_inst__DOT__item_mem;

    // INTERNAL VARIABLES
    Vtb_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_top___024root(Vtb_top__Syms* symsp, const char* namep);
    ~Vtb_top___024root();
    VL_UNCOPYABLE(Vtb_top___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
