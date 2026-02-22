// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vtb_top__Syms.h"


void Vtb_top___024root__trace_chg_0_sub_0(Vtb_top___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtb_top___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root__trace_chg_0\n"); );
    // Body
    Vtb_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_top___024root*>(voidSelf);
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    Vtb_top___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb_top___024root__trace_chg_0_sub_0(Vtb_top___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root__trace_chg_0_sub_0\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgIData(oldp+0,(vlSelfRef.tb_top__DOT__dut__DOT__fsm_inst__DOT__total_cost),32);
        bufp->chgIData(oldp+1,(vlSelfRef.tb_top__DOT__dut__DOT__fsm_inst__DOT__accumulated_curr),32);
        bufp->chgCData(oldp+2,(vlSelfRef.tb_top__DOT__dut__DOT__fsm_inst__DOT__latched_qty),8);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[2U]))) {
        bufp->chgIData(oldp+3,(vlSelfRef.tb_top__DOT__dut__DOT__cfg_inst__DOT__reg_vending_cfg),32);
        bufp->chgIData(oldp+4,(vlSelfRef.tb_top__DOT__dut__DOT__cfg_inst__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+5,(vlSelfRef.tb_top__DOT__dut__DOT__cfg_inst__DOT__unnamedblk2__DOT__index),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[3U]))) {
        bufp->chgBit(oldp+6,(vlSelfRef.tb_top__DOT__dut__DOT__input_inst__DOT__sync_curr_valid));
        bufp->chgCData(oldp+7,(vlSelfRef.tb_top__DOT__dut__DOT__sync_curr_val),7);
        bufp->chgCData(oldp+8,(vlSelfRef.tb_top__DOT__dut__DOT__sync_qty),8);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[4U]))) {
        bufp->chgBit(oldp+9,(vlSelfRef.tb_top__DOT__dut__DOT__input_inst__DOT__sync_item_valid));
        bufp->chgSData(oldp+10,(vlSelfRef.tb_top__DOT__dut__DOT__sync_item_sel),10);
        bufp->chgBit(oldp+11,(vlSelfRef.tb_top__DOT__dut__DOT__fsm_disp_en));
        bufp->chgBit(oldp+12,(vlSelfRef.tb_top__DOT__dut__DOT__v_item_valid));
        bufp->chgCData(oldp+13,(vlSelfRef.tb_top__DOT__dut__DOT__fsm_inst__DOT__current_state),3);
    }
    bufp->chgBit(oldp+14,(vlSelfRef.clk));
    bufp->chgBit(oldp+15,(vlSelfRef.pclk));
    bufp->chgBit(oldp+16,(vlSelfRef.rstn));
    bufp->chgBit(oldp+17,(vlSelfRef.prstn));
    bufp->chgBit(oldp+18,(vlSelfRef.cfg_mode));
    bufp->chgBit(oldp+19,(vlSelfRef.currency_valid));
    bufp->chgCData(oldp+20,(vlSelfRef.currency_value),7);
    bufp->chgBit(oldp+21,(vlSelfRef.item_select_valid));
    bufp->chgSData(oldp+22,(vlSelfRef.item_select),10);
    bufp->chgCData(oldp+23,(vlSelfRef.no_of_items),8);
    bufp->chgIData(oldp+24,(vlSelfRef.paddr),32);
    bufp->chgIData(oldp+25,(vlSelfRef.pwdata),32);
    bufp->chgBit(oldp+26,(vlSelfRef.psel));
    bufp->chgBit(oldp+27,(vlSelfRef.pwrite));
    bufp->chgIData(oldp+28,(vlSelfRef.prdata),32);
    bufp->chgBit(oldp+29,(vlSelfRef.pready));
    bufp->chgBit(oldp+30,(vlSelfRef.item_dispense_valid));
    bufp->chgSData(oldp+31,(vlSelfRef.item_dispense),10);
    bufp->chgCData(oldp+32,(vlSelfRef.no_of_items_out),8);
    bufp->chgSData(oldp+33,(vlSelfRef.currency_change),16);
    bufp->chgSData(oldp+34,(vlSelfRef.tb_top__DOT__dut__DOT__fsm_inst__DOT__latched_item),10);
    bufp->chgCData(oldp+35,((0x000000ffU & (vlSelfRef.tb_top__DOT__dut__DOT__cfg_inst__DOT__item_mem
                                            [vlSelfRef.tb_top__DOT__dut__DOT__fsm_inst__DOT__latched_item] 
                                            >> 0x00000010U))),8);
    bufp->chgSData(oldp+36,((0x0000ffffU & vlSelfRef.tb_top__DOT__dut__DOT__cfg_inst__DOT__item_mem
                             [vlSelfRef.tb_top__DOT__dut__DOT__fsm_inst__DOT__latched_item])),16);
    bufp->chgCData(oldp+37,(vlSelfRef.tb_top__DOT__dut__DOT__fsm_inst__DOT__next_state),3);
    bufp->chgCData(oldp+38,(vlSelfRef.tb_top__DOT__dut__DOT__input_inst__DOT__curr_vld_sync),3);
    bufp->chgCData(oldp+39,(vlSelfRef.tb_top__DOT__dut__DOT__input_inst__DOT__item_vld_sync),3);
}

void Vtb_top___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root__trace_cleanup\n"); );
    // Body
    Vtb_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_top___024root*>(voidSelf);
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
}
