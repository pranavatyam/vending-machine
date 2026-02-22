// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top.h for the primary calling header

#include "Vtb_top__pch.h"

VL_ATTR_COLD void Vtb_top___024root___eval_static(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval_static\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__rstn__0 = vlSelfRef.rstn;
    vlSelfRef.__Vtrigprevexpr___TOP__pclk__0 = vlSelfRef.pclk;
    vlSelfRef.__Vtrigprevexpr___TOP__prstn__0 = vlSelfRef.prstn;
}

VL_ATTR_COLD void Vtb_top___024root___eval_initial__TOP(Vtb_top___024root* vlSelf);

VL_ATTR_COLD void Vtb_top___024root___eval_initial(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval_initial\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_top___024root___eval_initial__TOP(vlSelf);
}

VL_ATTR_COLD void Vtb_top___024root___eval_initial__TOP(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval_initial__TOP\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->_vm_contextp__->dumpfile("waveform.vcd"s);
    vlSymsp->_traceDumpOpen();
    vlSelfRef.pready = 1U;
}

VL_ATTR_COLD void Vtb_top___024root___eval_final(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval_final\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_top___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_top___024root___eval_phase__stl(Vtb_top___024root* vlSelf);

VL_ATTR_COLD void Vtb_top___024root___eval_settle(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval_settle\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vtb_top___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("dv/tb_top.sv", 4, "", "Settle region did not converge after 100 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
    } while (Vtb_top___024root___eval_phase__stl(vlSelf));
}

VL_ATTR_COLD void Vtb_top___024root___eval_triggers__stl(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval_triggers__stl\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered
                                      [0U]) | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
    vlSelfRef.__VstlFirstIteration = 0U;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_top___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
}

VL_ATTR_COLD bool Vtb_top___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_top___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_top___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vtb_top___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___trigger_anySet__stl\n"); );
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

VL_ATTR_COLD void Vtb_top___024root___stl_sequent__TOP__0(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___stl_sequent__TOP__0\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_top__DOT__dut__DOT__fsm_disp_en = 0U;
    if ((1U & (~ ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__fsm_inst__DOT__current_state) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSelfRef.tb_top__DOT__dut__DOT__fsm_inst__DOT__current_state))) {
            if ((1U & (IData)(vlSelfRef.tb_top__DOT__dut__DOT__fsm_inst__DOT__current_state))) {
                vlSelfRef.tb_top__DOT__dut__DOT__fsm_disp_en = 1U;
            }
        }
    }
    vlSelfRef.tb_top__DOT__dut__DOT__input_inst__DOT__sync_curr_valid 
        = (IData)((2U == (6U & (IData)(vlSelfRef.tb_top__DOT__dut__DOT__input_inst__DOT__curr_vld_sync))));
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
    vlSelfRef.prdata = ((0x40000000U == vlSelfRef.paddr)
                         ? vlSelfRef.tb_top__DOT__dut__DOT__cfg_inst__DOT__reg_vending_cfg
                         : ((0x40000004U <= vlSelfRef.paddr)
                             ? vlSelfRef.tb_top__DOT__dut__DOT__cfg_inst__DOT__item_mem
                            [(0x000003ffU & ((vlSelfRef.paddr 
                                              - (IData)(0x40000004U)) 
                                             >> 2U))]
                             : 0U));
    vlSelfRef.tb_top__DOT__dut__DOT__v_item_valid = 0U;
    vlSelfRef.tb_top__DOT__dut__DOT__input_inst__DOT__sync_item_valid 
        = (IData)((2U == (6U & (IData)(vlSelfRef.tb_top__DOT__dut__DOT__input_inst__DOT__item_vld_sync))));
    if ((4U & (IData)(vlSelfRef.tb_top__DOT__dut__DOT__fsm_inst__DOT__current_state))) {
        if ((1U & (~ ((IData)(vlSelfRef.tb_top__DOT__dut__DOT__fsm_inst__DOT__current_state) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelfRef.tb_top__DOT__dut__DOT__fsm_inst__DOT__current_state)))) {
                vlSelfRef.tb_top__DOT__dut__DOT__v_item_valid = 1U;
            }
        }
        vlSelfRef.item_dispense_valid = vlSelfRef.tb_top__DOT__dut__DOT__v_item_valid;
        vlSelfRef.tb_top__DOT__dut__DOT__fsm_inst__DOT__next_state 
            = vlSelfRef.tb_top__DOT__dut__DOT__fsm_inst__DOT__current_state;
        vlSelfRef.tb_top__DOT__dut__DOT__fsm_inst__DOT__next_state = 0U;
    } else if ((2U & (IData)(vlSelfRef.tb_top__DOT__dut__DOT__fsm_inst__DOT__current_state))) {
        if ((1U & (IData)(vlSelfRef.tb_top__DOT__dut__DOT__fsm_inst__DOT__current_state))) {
            vlSelfRef.tb_top__DOT__dut__DOT__v_item_valid = 1U;
            vlSelfRef.item_dispense_valid = vlSelfRef.tb_top__DOT__dut__DOT__v_item_valid;
            vlSelfRef.tb_top__DOT__dut__DOT__fsm_inst__DOT__next_state 
                = vlSelfRef.tb_top__DOT__dut__DOT__fsm_inst__DOT__current_state;
            vlSelfRef.tb_top__DOT__dut__DOT__fsm_inst__DOT__next_state = 0U;
        } else {
            vlSelfRef.item_dispense_valid = vlSelfRef.tb_top__DOT__dut__DOT__v_item_valid;
            vlSelfRef.tb_top__DOT__dut__DOT__fsm_inst__DOT__next_state 
                = vlSelfRef.tb_top__DOT__dut__DOT__fsm_inst__DOT__current_state;
            if ((vlSelfRef.tb_top__DOT__dut__DOT__fsm_inst__DOT__accumulated_curr 
                 >= vlSelfRef.tb_top__DOT__dut__DOT__fsm_inst__DOT__total_cost)) {
                vlSelfRef.tb_top__DOT__dut__DOT__fsm_inst__DOT__next_state = 3U;
            }
        }
    } else {
        vlSelfRef.item_dispense_valid = vlSelfRef.tb_top__DOT__dut__DOT__v_item_valid;
        vlSelfRef.tb_top__DOT__dut__DOT__fsm_inst__DOT__next_state 
            = vlSelfRef.tb_top__DOT__dut__DOT__fsm_inst__DOT__current_state;
        if ((1U & (IData)(vlSelfRef.tb_top__DOT__dut__DOT__fsm_inst__DOT__current_state))) {
            vlSelfRef.tb_top__DOT__dut__DOT__fsm_inst__DOT__next_state 
                = (((0x000000ffU & (vlSelfRef.tb_top__DOT__dut__DOT__cfg_inst__DOT__item_mem
                                    [vlSelfRef.tb_top__DOT__dut__DOT__fsm_inst__DOT__latched_item] 
                                    >> 0x00000010U)) 
                    < (IData)(vlSelfRef.tb_top__DOT__dut__DOT__fsm_inst__DOT__latched_qty))
                    ? 4U : 2U);
        } else if (vlSelfRef.tb_top__DOT__dut__DOT__input_inst__DOT__sync_item_valid) {
            vlSelfRef.tb_top__DOT__dut__DOT__fsm_inst__DOT__next_state = 1U;
        }
    }
}

VL_ATTR_COLD void Vtb_top___024root____Vm_traceActivitySetAll(Vtb_top___024root* vlSelf);

VL_ATTR_COLD void Vtb_top___024root___eval_stl(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval_stl\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
        Vtb_top___024root___stl_sequent__TOP__0(vlSelf);
        Vtb_top___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

VL_ATTR_COLD bool Vtb_top___024root___eval_phase__stl(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___eval_phase__stl\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtb_top___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = Vtb_top___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        Vtb_top___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

bool Vtb_top___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_top___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_top___024root___trigger_anySet__ico(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

bool Vtb_top___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_top___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_top___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(negedge rstn)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @(posedge pclk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 3U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 3 is active: @(negedge prstn)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_top___024root____Vm_traceActivitySetAll(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root____Vm_traceActivitySetAll\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.__Vm_traceActivity[4U] = 1U;
}

VL_ATTR_COLD void Vtb_top___024root___ctor_var_reset(Vtb_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root___ctor_var_reset\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->pclk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2198342127515400097ull);
    vlSelf->rstn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5377340664288042355ull);
    vlSelf->prstn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9539012775737018975ull);
    vlSelf->cfg_mode = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10052620594097453007ull);
    vlSelf->currency_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7978666632784391704ull);
    vlSelf->currency_value = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 13255037980766857365ull);
    vlSelf->item_select_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4767402007737282139ull);
    vlSelf->item_select = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 11717040211821276589ull);
    vlSelf->no_of_items = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5824189835103677225ull);
    vlSelf->paddr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14875722346688934266ull);
    vlSelf->pwdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 876536812074066652ull);
    vlSelf->psel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5365422930610402651ull);
    vlSelf->pwrite = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3040259829508521558ull);
    vlSelf->prdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15696981534648657427ull);
    vlSelf->pready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5373772549111784264ull);
    vlSelf->item_dispense_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3868780997851075701ull);
    vlSelf->item_dispense = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 14922469880962777704ull);
    vlSelf->no_of_items_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14473022535242312536ull);
    vlSelf->currency_change = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 8505224239426510557ull);
    vlSelf->tb_top__DOT__dut__DOT__sync_curr_val = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 18212450493047927867ull);
    vlSelf->tb_top__DOT__dut__DOT__sync_item_sel = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 7389235265672622269ull);
    vlSelf->tb_top__DOT__dut__DOT__sync_qty = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5616421814332920096ull);
    vlSelf->tb_top__DOT__dut__DOT__fsm_disp_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1337831519284114335ull);
    vlSelf->tb_top__DOT__dut__DOT__v_item_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4958672990264140941ull);
    vlSelf->tb_top__DOT__dut__DOT__v_no_items = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14301338105717594493ull);
    vlSelf->tb_top__DOT__dut__DOT__input_inst__DOT__sync_curr_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18303471653153917222ull);
    vlSelf->tb_top__DOT__dut__DOT__input_inst__DOT__sync_item_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2953235955988988633ull);
    vlSelf->tb_top__DOT__dut__DOT__input_inst__DOT__curr_vld_sync = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 2555619259952257343ull);
    vlSelf->tb_top__DOT__dut__DOT__input_inst__DOT__item_vld_sync = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 11941682286614523013ull);
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->tb_top__DOT__dut__DOT__cfg_inst__DOT__item_mem[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14946936387722508034ull);
    }
    vlSelf->tb_top__DOT__dut__DOT__cfg_inst__DOT__reg_vending_cfg = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7314929611343872725ull);
    vlSelf->tb_top__DOT__dut__DOT__cfg_inst__DOT__unnamedblk2__DOT__index = 0;
    vlSelf->tb_top__DOT__dut__DOT__cfg_inst__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->tb_top__DOT__dut__DOT__fsm_inst__DOT__current_state = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 10802809043873468275ull);
    vlSelf->tb_top__DOT__dut__DOT__fsm_inst__DOT__next_state = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 14390598570658162265ull);
    vlSelf->tb_top__DOT__dut__DOT__fsm_inst__DOT__total_cost = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15408901294009960725ull);
    vlSelf->tb_top__DOT__dut__DOT__fsm_inst__DOT__accumulated_curr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12460866755601687342ull);
    vlSelf->tb_top__DOT__dut__DOT__fsm_inst__DOT__latched_item = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 8655700807925293716ull);
    vlSelf->tb_top__DOT__dut__DOT__fsm_inst__DOT__latched_qty = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13956873923557019680ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VicoTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__rstn__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__pclk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__prstn__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
