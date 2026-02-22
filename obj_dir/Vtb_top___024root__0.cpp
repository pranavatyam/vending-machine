// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_top___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

void Vtb_top___024root___eval_triggers__ico(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval_triggers__ico\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VicoTriggered
                                      [0U]) | (IData)((IData)(vlSelfRef.__VicoFirstIteration)));
    vlSelfRef.__VicoFirstIteration = 0U;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_top___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
}

bool Vtb_top___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___trigger_anySet__ico\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

void Vtb_top___024root___ico_sequent__TOP__0(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___ico_sequent__TOP__0\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.prdata = ((0x40000000U == vlSelfRef.paddr)
                         ? vlSelfRef.tb_top__DOT__dut__DOT__cfg_inst__DOT__reg_vending_cfg
                         : ((0x40000004U <= vlSelfRef.paddr)
                             ? vlSelfRef.tb_top__DOT__dut__DOT__cfg_inst__DOT__item_mem
                            [(0x000003ffU & ((vlSelfRef.paddr 
                                              - (IData)(0x40000004U)) 
                                             >> 2U))]
                             : 0U));
}

void Vtb_top___024root___eval_ico(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval_ico\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered[0U])) {
        Vtb_top___024root___ico_sequent__TOP__0(vlSelf);
    }
}

bool Vtb_top___024root___eval_phase__ico(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval_phase__ico\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VicoExecute;
    // Body
    Vtb_top___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = Vtb_top___024root___trigger_anySet__ico(vlSelfRef.__VicoTriggered);
    if (__VicoExecute) {
        Vtb_top___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_top___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

void Vtb_top___024root___eval_triggers__act(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval_triggers__act\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    (((((~ (IData)(vlSelfRef.prstn)) 
                                                        & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__prstn__0)) 
                                                       << 3U) 
                                                      | (((IData)(vlSelfRef.pclk) 
                                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__pclk__0))) 
                                                         << 2U)) 
                                                     | ((((~ (IData)(vlSelfRef.rstn)) 
                                                          & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__rstn__0)) 
                                                         << 1U) 
                                                        | ((IData)(vlSelfRef.clk) 
                                                           & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk__0)))))));
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__rstn__0 = vlSelfRef.rstn;
    vlSelfRef.__Vtrigprevexpr___TOP__pclk__0 = vlSelfRef.pclk;
    vlSelfRef.__Vtrigprevexpr___TOP__prstn__0 = vlSelfRef.prstn;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_top___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
}

bool Vtb_top___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___trigger_anySet__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

void Vtb_top___024root___nba_sequent__TOP__0(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___nba_sequent__TOP__0\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.rstn) {
        vlSelfRef.tb_top__DOT__dut__DOT__input_inst__DOT__curr_vld_sync 
            = ((6U & ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__input_inst__DOT__curr_vld_sync) 
                      << 1U)) | (IData)(vlSelfRef.currency_valid));
        vlSelfRef.tb_top__DOT__dut__DOT__input_inst__DOT__item_vld_sync 
            = ((6U & ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__input_inst__DOT__item_vld_sync) 
                      << 1U)) | (IData)(vlSelfRef.item_select_valid));
    } else {
        vlSelfRef.tb_top__DOT__dut__DOT__input_inst__DOT__curr_vld_sync = 0U;
        vlSelfRef.tb_top__DOT__dut__DOT__input_inst__DOT__item_vld_sync = 0U;
    }
}

void Vtb_top___024root___nba_sequent__TOP__1(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___nba_sequent__TOP__1\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vdly__tb_top__DOT__dut__DOT__fsm_inst__DOT__accumulated_curr;
    __Vdly__tb_top__DOT__dut__DOT__fsm_inst__DOT__accumulated_curr = 0;
    // Body
    __Vdly__tb_top__DOT__dut__DOT__fsm_inst__DOT__accumulated_curr 
        = vlSelfRef.tb_top__DOT__dut__DOT__fsm_inst__DOT__accumulated_curr;
    if ((1U == (IData)(vlSelfRef.tb_top__DOT__dut__DOT__fsm_inst__DOT__current_state))) {
        vlSelfRef.tb_top__DOT__dut__DOT__fsm_inst__DOT__total_cost 
            = ((0x0000ffffU & vlSelfRef.tb_top__DOT__dut__DOT__cfg_inst__DOT__item_mem
                [vlSelfRef.tb_top__DOT__dut__DOT__fsm_inst__DOT__latched_item]) 
               * (IData)(vlSelfRef.tb_top__DOT__dut__DOT__fsm_inst__DOT__latched_qty));
    }
    if (((0U == (IData)(vlSelfRef.tb_top__DOT__dut__DOT__fsm_inst__DOT__current_state)) 
         & (IData)(vlSelfRef.tb_top__DOT__dut__DOT__input_inst__DOT__sync_item_valid))) {
        __Vdly__tb_top__DOT__dut__DOT__fsm_inst__DOT__accumulated_curr = 0U;
        vlSelfRef.tb_top__DOT__dut__DOT__fsm_inst__DOT__latched_qty 
            = vlSelfRef.tb_top__DOT__dut__DOT__sync_qty;
    } else if (((2U == (IData)(vlSelfRef.tb_top__DOT__dut__DOT__fsm_inst__DOT__current_state)) 
                & (IData)(vlSelfRef.tb_top__DOT__dut__DOT__input_inst__DOT__sync_curr_valid))) {
        __Vdly__tb_top__DOT__dut__DOT__fsm_inst__DOT__accumulated_curr 
            = (vlSelfRef.tb_top__DOT__dut__DOT__fsm_inst__DOT__accumulated_curr 
               + (IData)(vlSelfRef.tb_top__DOT__dut__DOT__sync_curr_val));
    }
    vlSelfRef.tb_top__DOT__dut__DOT__fsm_inst__DOT__accumulated_curr 
        = __Vdly__tb_top__DOT__dut__DOT__fsm_inst__DOT__accumulated_curr;
}

void Vtb_top___024root___nba_sequent__TOP__2(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___nba_sequent__TOP__2\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VdlyVal__tb_top__DOT__dut__DOT__cfg_inst__DOT__item_mem__v0;
    __VdlyVal__tb_top__DOT__dut__DOT__cfg_inst__DOT__item_mem__v0 = 0;
    SData/*9:0*/ __VdlyDim0__tb_top__DOT__dut__DOT__cfg_inst__DOT__item_mem__v0;
    __VdlyDim0__tb_top__DOT__dut__DOT__cfg_inst__DOT__item_mem__v0 = 0;
    CData/*7:0*/ __VdlyVal__tb_top__DOT__dut__DOT__cfg_inst__DOT__item_mem__v1;
    __VdlyVal__tb_top__DOT__dut__DOT__cfg_inst__DOT__item_mem__v1 = 0;
    SData/*9:0*/ __VdlyDim0__tb_top__DOT__dut__DOT__cfg_inst__DOT__item_mem__v1;
    __VdlyDim0__tb_top__DOT__dut__DOT__cfg_inst__DOT__item_mem__v1 = 0;
    IData/*31:0*/ __VdlyElem__tb_top__DOT__dut__DOT__cfg_inst__DOT__item_mem__v1;
    __VdlyElem__tb_top__DOT__dut__DOT__cfg_inst__DOT__item_mem__v1 = 0;
    CData/*7:0*/ __VdlyVal__tb_top__DOT__dut__DOT__cfg_inst__DOT__item_mem__v2;
    __VdlyVal__tb_top__DOT__dut__DOT__cfg_inst__DOT__item_mem__v2 = 0;
    SData/*9:0*/ __VdlyDim0__tb_top__DOT__dut__DOT__cfg_inst__DOT__item_mem__v2;
    __VdlyDim0__tb_top__DOT__dut__DOT__cfg_inst__DOT__item_mem__v2 = 0;
    IData/*31:0*/ __VdlyElem__tb_top__DOT__dut__DOT__cfg_inst__DOT__item_mem__v2;
    __VdlyElem__tb_top__DOT__dut__DOT__cfg_inst__DOT__item_mem__v2 = 0;
    SData/*9:0*/ __VdlyDim0__tb_top__DOT__dut__DOT__cfg_inst__DOT__item_mem__v3;
    __VdlyDim0__tb_top__DOT__dut__DOT__cfg_inst__DOT__item_mem__v3 = 0;
    // Body
    if (vlSelfRef.prstn) {
        if (((IData)(vlSelfRef.psel) & (IData)(vlSelfRef.pwrite))) {
            if ((0x40000000U != vlSelfRef.paddr)) {
                if ((0x40000004U <= vlSelfRef.paddr)) {
                    vlSelfRef.tb_top__DOT__dut__DOT__cfg_inst__DOT__unnamedblk2__DOT__index 
                        = VL_SHIFTR_III(32,32,32, (vlSelfRef.paddr 
                                                   - (IData)(0x40000004U)), 2U);
                    if (VL_GTS_III(32, 0x00000400U, vlSelfRef.tb_top__DOT__dut__DOT__cfg_inst__DOT__unnamedblk2__DOT__index)) {
                        __VdlyVal__tb_top__DOT__dut__DOT__cfg_inst__DOT__item_mem__v0 
                            = (0x00ffffffU & vlSelfRef.pwdata);
                        __VdlyDim0__tb_top__DOT__dut__DOT__cfg_inst__DOT__item_mem__v0 
                            = (0x000003ffU & vlSelfRef.tb_top__DOT__dut__DOT__cfg_inst__DOT__unnamedblk2__DOT__index);
                        vlSelfRef.__VdlyCommitQueuetb_top__DOT__dut__DOT__cfg_inst__DOT__item_mem.enqueue(__VdlyVal__tb_top__DOT__dut__DOT__cfg_inst__DOT__item_mem__v0, 0xffffffffU, (IData)(__VdlyDim0__tb_top__DOT__dut__DOT__cfg_inst__DOT__item_mem__v0));
                    }
                }
            }
        }
        if (vlSelfRef.tb_top__DOT__dut__DOT__fsm_disp_en) {
            __VdlyVal__tb_top__DOT__dut__DOT__cfg_inst__DOT__item_mem__v1 
                = (0x000000ffU & ((IData)(1U) + (vlSelfRef.tb_top__DOT__dut__DOT__cfg_inst__DOT__item_mem
                                                 [vlSelfRef.tb_top__DOT__dut__DOT__fsm_inst__DOT__latched_item] 
                                                 >> 0x18U)));
            __VdlyDim0__tb_top__DOT__dut__DOT__cfg_inst__DOT__item_mem__v1 
                = vlSelfRef.tb_top__DOT__dut__DOT__fsm_inst__DOT__latched_item;
            __VdlyElem__tb_top__DOT__dut__DOT__cfg_inst__DOT__item_mem__v1 = 0U;
            __VdlyElem__tb_top__DOT__dut__DOT__cfg_inst__DOT__item_mem__v1 
                = ((0x00ffffffU & __VdlyElem__tb_top__DOT__dut__DOT__cfg_inst__DOT__item_mem__v1) 
                   | ((IData)(__VdlyVal__tb_top__DOT__dut__DOT__cfg_inst__DOT__item_mem__v1) 
                      << 0x00000018U));
            vlSelfRef.__VdlyCommitQueuetb_top__DOT__dut__DOT__cfg_inst__DOT__item_mem.enqueue(__VdlyElem__tb_top__DOT__dut__DOT__cfg_inst__DOT__item_mem__v1, 0xff000000U, (IData)(__VdlyDim0__tb_top__DOT__dut__DOT__cfg_inst__DOT__item_mem__v1));
            __VdlyVal__tb_top__DOT__dut__DOT__cfg_inst__DOT__item_mem__v2 
                = (0x000000ffU & ((vlSelfRef.tb_top__DOT__dut__DOT__cfg_inst__DOT__item_mem
                                   [vlSelfRef.tb_top__DOT__dut__DOT__fsm_inst__DOT__latched_item] 
                                   >> 0x10U) - (IData)(1U)));
            __VdlyDim0__tb_top__DOT__dut__DOT__cfg_inst__DOT__item_mem__v2 
                = vlSelfRef.tb_top__DOT__dut__DOT__fsm_inst__DOT__latched_item;
            __VdlyElem__tb_top__DOT__dut__DOT__cfg_inst__DOT__item_mem__v2 = 0U;
            __VdlyElem__tb_top__DOT__dut__DOT__cfg_inst__DOT__item_mem__v2 
                = ((0xff00ffffU & __VdlyElem__tb_top__DOT__dut__DOT__cfg_inst__DOT__item_mem__v2) 
                   | ((IData)(__VdlyVal__tb_top__DOT__dut__DOT__cfg_inst__DOT__item_mem__v2) 
                      << 0x00000010U));
            vlSelfRef.__VdlyCommitQueuetb_top__DOT__dut__DOT__cfg_inst__DOT__item_mem.enqueue(__VdlyElem__tb_top__DOT__dut__DOT__cfg_inst__DOT__item_mem__v2, 0x00ff0000U, (IData)(__VdlyDim0__tb_top__DOT__dut__DOT__cfg_inst__DOT__item_mem__v2));
        }
    } else {
        vlSelfRef.tb_top__DOT__dut__DOT__cfg_inst__DOT__unnamedblk1__DOT__i = 0U;
        while (VL_GTS_III(32, 0x00000400U, vlSelfRef.tb_top__DOT__dut__DOT__cfg_inst__DOT__unnamedblk1__DOT__i)) {
            __VdlyDim0__tb_top__DOT__dut__DOT__cfg_inst__DOT__item_mem__v3 
                = (0x000003ffU & vlSelfRef.tb_top__DOT__dut__DOT__cfg_inst__DOT__unnamedblk1__DOT__i);
            vlSelfRef.__VdlyCommitQueuetb_top__DOT__dut__DOT__cfg_inst__DOT__item_mem.enqueue(0U, 0xffffffffU, (IData)(__VdlyDim0__tb_top__DOT__dut__DOT__cfg_inst__DOT__item_mem__v3));
            vlSelfRef.tb_top__DOT__dut__DOT__cfg_inst__DOT__unnamedblk1__DOT__i 
                = ((IData)(1U) + vlSelfRef.tb_top__DOT__dut__DOT__cfg_inst__DOT__unnamedblk1__DOT__i);
        }
    }
    if (vlSelfRef.prstn) {
        if (((IData)(vlSelfRef.psel) & (IData)(vlSelfRef.pwrite))) {
            if ((0x40000000U == vlSelfRef.paddr)) {
                vlSelfRef.tb_top__DOT__dut__DOT__cfg_inst__DOT__reg_vending_cfg 
                    = vlSelfRef.pwdata;
            }
        }
    } else {
        vlSelfRef.tb_top__DOT__dut__DOT__cfg_inst__DOT__reg_vending_cfg = 0U;
    }
    vlSelfRef.__VdlyCommitQueuetb_top__DOT__dut__DOT__cfg_inst__DOT__item_mem.commit(vlSelfRef.tb_top__DOT__dut__DOT__cfg_inst__DOT__item_mem);
    vlSelfRef.prdata = ((0x40000000U == vlSelfRef.paddr)
                         ? vlSelfRef.tb_top__DOT__dut__DOT__cfg_inst__DOT__reg_vending_cfg
                         : ((0x40000004U <= vlSelfRef.paddr)
                             ? vlSelfRef.tb_top__DOT__dut__DOT__cfg_inst__DOT__item_mem
                            [(0x000003ffU & ((vlSelfRef.paddr 
                                              - (IData)(0x40000004U)) 
                                             >> 2U))]
                             : 0U));
}

void Vtb_top___024root___nba_sequent__TOP__3(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___nba_sequent__TOP__3\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.rstn) {
        if (vlSelfRef.tb_top__DOT__dut__DOT__input_inst__DOT__sync_curr_valid) {
            vlSelfRef.tb_top__DOT__dut__DOT__sync_curr_val 
                = vlSelfRef.currency_value;
        }
        if (vlSelfRef.tb_top__DOT__dut__DOT__input_inst__DOT__sync_item_valid) {
            vlSelfRef.tb_top__DOT__dut__DOT__sync_qty 
                = vlSelfRef.no_of_items;
        }
    } else {
        vlSelfRef.tb_top__DOT__dut__DOT__sync_curr_val = 0U;
        vlSelfRef.tb_top__DOT__dut__DOT__sync_qty = 0U;
    }
    vlSelfRef.tb_top__DOT__dut__DOT__input_inst__DOT__sync_curr_valid 
        = (IData)((2U == (6U & (IData)(vlSelfRef.tb_top__DOT__dut__DOT__input_inst__DOT__curr_vld_sync))));
}

void Vtb_top___024root___nba_sequent__TOP__4(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___nba_sequent__TOP__4\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (((0U == (IData)(vlSelfRef.tb_top__DOT__dut__DOT__fsm_inst__DOT__current_state)) 
         & (IData)(vlSelfRef.tb_top__DOT__dut__DOT__input_inst__DOT__sync_item_valid))) {
        vlSelfRef.tb_top__DOT__dut__DOT__fsm_inst__DOT__latched_item 
            = vlSelfRef.tb_top__DOT__dut__DOT__sync_item_sel;
    }
}

void Vtb_top___024root___nba_sequent__TOP__5(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___nba_sequent__TOP__5\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.rstn) {
        if (vlSelfRef.tb_top__DOT__dut__DOT__input_inst__DOT__sync_item_valid) {
            vlSelfRef.tb_top__DOT__dut__DOT__sync_item_sel 
                = vlSelfRef.item_select;
        }
        vlSelfRef.tb_top__DOT__dut__DOT__fsm_inst__DOT__current_state 
            = ((IData)(vlSelfRef.cfg_mode) ? 0U : (IData)(vlSelfRef.tb_top__DOT__dut__DOT__fsm_inst__DOT__next_state));
    } else {
        vlSelfRef.tb_top__DOT__dut__DOT__sync_item_sel = 0U;
        vlSelfRef.tb_top__DOT__dut__DOT__fsm_inst__DOT__current_state = 0U;
    }
    vlSelfRef.tb_top__DOT__dut__DOT__input_inst__DOT__sync_item_valid 
        = (IData)((2U == (6U & (IData)(vlSelfRef.tb_top__DOT__dut__DOT__input_inst__DOT__item_vld_sync))));
    vlSelfRef.tb_top__DOT__dut__DOT__fsm_disp_en = 0U;
    if ((1U & (~ ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__fsm_inst__DOT__current_state) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSelfRef.tb_top__DOT__dut__DOT__fsm_inst__DOT__current_state))) {
            if ((1U & (IData)(vlSelfRef.tb_top__DOT__dut__DOT__fsm_inst__DOT__current_state))) {
                vlSelfRef.tb_top__DOT__dut__DOT__fsm_disp_en = 1U;
            }
        }
    }
    vlSelfRef.tb_top__DOT__dut__DOT__v_item_valid = 0U;
    if ((4U & (IData)(vlSelfRef.tb_top__DOT__dut__DOT__fsm_inst__DOT__current_state))) {
        if ((1U & (~ ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__fsm_inst__DOT__current_state) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelfRef.tb_top__DOT__dut__DOT__fsm_inst__DOT__current_state)))) {
                vlSelfRef.tb_top__DOT__dut__DOT__v_item_valid = 1U;
            }
        }
    } else if ((2U & (IData)(vlSelfRef.tb_top__DOT__dut__DOT__fsm_inst__DOT__current_state))) {
        if ((1U & (IData)(vlSelfRef.tb_top__DOT__dut__DOT__fsm_inst__DOT__current_state))) {
            vlSelfRef.tb_top__DOT__dut__DOT__v_item_valid = 1U;
        }
    }
    vlSelfRef.item_dispense_valid = vlSelfRef.tb_top__DOT__dut__DOT__v_item_valid;
}

void Vtb_top___024root___nba_comb__TOP__0(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___nba_comb__TOP__0\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((4U == (IData)(vlSelfRef.tb_top__DOT__dut__DOT__fsm_inst__DOT__current_state))) {
        vlSelfRef.item_dispense = 0x03ffU;
        vlSelfRef.no_of_items_out = 0U;
        vlSelfRef.currency_change = (0x0000ffffU & 
                                     (0x0000ffffU & vlSelfRef.tb_top__DOT__dut__DOT__fsm_inst__DOT__accumulated_curr));
    } else {
        vlSelfRef.item_dispense = vlSelfRef.tb_top__DOT__dut__DOT__fsm_inst__DOT__latched_item;
        vlSelfRef.no_of_items_out = vlSelfRef.tb_top__DOT__dut__DOT__fsm_inst__DOT__latched_qty;
        vlSelfRef.currency_change = (0x0000ffffU & 
                                     ((3U == (IData)(vlSelfRef.tb_top__DOT__dut__DOT__fsm_inst__DOT__current_state))
                                       ? (vlSelfRef.tb_top__DOT__dut__DOT__fsm_inst__DOT__accumulated_curr 
                                          - vlSelfRef.tb_top__DOT__dut__DOT__fsm_inst__DOT__total_cost)
                                       : 0U));
    }
}

void Vtb_top___024root___nba_comb__TOP__1(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___nba_comb__TOP__1\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__dut__DOT__fsm_inst__DOT__next_state 
        = vlSelfRef.tb_top__DOT__dut__DOT__fsm_inst__DOT__current_state;
    if ((4U & (IData)(vlSelfRef.tb_top__DOT__dut__DOT__fsm_inst__DOT__current_state))) {
        vlSelfRef.tb_top__DOT__dut__DOT__fsm_inst__DOT__next_state = 0U;
    } else if ((2U & (IData)(vlSelfRef.tb_top__DOT__dut__DOT__fsm_inst__DOT__current_state))) {
        if ((1U & (IData)(vlSelfRef.tb_top__DOT__dut__DOT__fsm_inst__DOT__current_state))) {
            vlSelfRef.tb_top__DOT__dut__DOT__fsm_inst__DOT__next_state = 0U;
        } else if ((vlSelfRef.tb_top__DOT__dut__DOT__fsm_inst__DOT__accumulated_curr 
                    >= vlSelfRef.tb_top__DOT__dut__DOT__fsm_inst__DOT__total_cost)) {
            vlSelfRef.tb_top__DOT__dut__DOT__fsm_inst__DOT__next_state = 3U;
        }
    } else if ((1U & (IData)(vlSelfRef.tb_top__DOT__dut__DOT__fsm_inst__DOT__current_state))) {
        vlSelfRef.tb_top__DOT__dut__DOT__fsm_inst__DOT__next_state 
            = (((0x000000ffU & (vlSelfRef.tb_top__DOT__dut__DOT__cfg_inst__DOT__item_mem
                                [vlSelfRef.tb_top__DOT__dut__DOT__fsm_inst__DOT__latched_item] 
                                >> 0x00000010U)) < (IData)(vlSelfRef.tb_top__DOT__dut__DOT__fsm_inst__DOT__latched_qty))
                ? 4U : 2U);
    } else if (vlSelfRef.tb_top__DOT__dut__DOT__input_inst__DOT__sync_item_valid) {
        vlSelfRef.tb_top__DOT__dut__DOT__fsm_inst__DOT__next_state = 1U;
    }
}

void Vtb_top___024root___eval_nba(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval_nba\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_top___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_top___024root___nba_sequent__TOP__1(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    if ((0x000000000000000cULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtb_top___024root___nba_sequent__TOP__2(vlSelf);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_top___024root___nba_sequent__TOP__3(vlSelf);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_top___024root___nba_sequent__TOP__4(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_top___024root___nba_sequent__TOP__5(vlSelf);
        vlSelfRef.__Vm_traceActivity[4U] = 1U;
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_top___024root___nba_comb__TOP__0(vlSelf);
    }
    if ((0x000000000000000fULL & vlSelfRef.__VnbaTriggered
         [0U])) {
        Vtb_top___024root___nba_comb__TOP__1(vlSelf);
    }
}

void Vtb_top___024root___trigger_orInto__act(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___trigger_orInto__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vtb_top___024root___eval_phase__act(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval_phase__act\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_top___024root___eval_triggers__act(vlSelf);
    Vtb_top___024root___trigger_orInto__act(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    return (0U);
}

void Vtb_top___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vtb_top___024root___eval_phase__nba(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval_phase__nba\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vtb_top___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vtb_top___024root___eval_nba(vlSelf);
        Vtb_top___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vtb_top___024root___eval(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            Vtb_top___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
#endif
            VL_FATAL_MT("dv/tb_top.sv", 4, "", "Input combinational region did not converge after 100 tries");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
    } while (Vtb_top___024root___eval_phase__ico(vlSelf));
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtb_top___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("dv/tb_top.sv", 4, "", "NBA region did not converge after 100 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtb_top___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("dv/tb_top.sv", 4, "", "Active region did not converge after 100 tries");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
        } while (Vtb_top___024root___eval_phase__act(vlSelf));
    } while (Vtb_top___024root___eval_phase__nba(vlSelf));
}

#ifdef VL_DEBUG
void Vtb_top___024root___eval_debug_assertions(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval_debug_assertions\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk & 0xfeU)))) {
        Verilated::overWidthError("clk");
    }
    if (VL_UNLIKELY(((vlSelfRef.pclk & 0xfeU)))) {
        Verilated::overWidthError("pclk");
    }
    if (VL_UNLIKELY(((vlSelfRef.rstn & 0xfeU)))) {
        Verilated::overWidthError("rstn");
    }
    if (VL_UNLIKELY(((vlSelfRef.prstn & 0xfeU)))) {
        Verilated::overWidthError("prstn");
    }
    if (VL_UNLIKELY(((vlSelfRef.cfg_mode & 0xfeU)))) {
        Verilated::overWidthError("cfg_mode");
    }
    if (VL_UNLIKELY(((vlSelfRef.currency_valid & 0xfeU)))) {
        Verilated::overWidthError("currency_valid");
    }
    if (VL_UNLIKELY(((vlSelfRef.currency_value & 0x80U)))) {
        Verilated::overWidthError("currency_value");
    }
    if (VL_UNLIKELY(((vlSelfRef.item_select_valid & 0xfeU)))) {
        Verilated::overWidthError("item_select_valid");
    }
    if (VL_UNLIKELY(((vlSelfRef.item_select & 0xfc00U)))) {
        Verilated::overWidthError("item_select");
    }
    if (VL_UNLIKELY(((vlSelfRef.psel & 0xfeU)))) {
        Verilated::overWidthError("psel");
    }
    if (VL_UNLIKELY(((vlSelfRef.pwrite & 0xfeU)))) {
        Verilated::overWidthError("pwrite");
    }
}
#endif  // VL_DEBUG
