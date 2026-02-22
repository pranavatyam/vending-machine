// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vtb_top__Syms.h"


VL_ATTR_COLD void Vtb_top___024root__trace_init_sub__TOP__vending_pkg__0(Vtb_top___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vtb_top___024root__trace_init_sub__TOP__0(Vtb_top___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root__trace_init_sub__TOP__0\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    tracep->pushPrefix("$rootio", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+15,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+16,0,"pclk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17,0,"rstn",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+18,0,"prstn",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+19,0,"cfg_mode",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+20,0,"currency_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+21,0,"currency_value",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+22,0,"item_select_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+23,0,"item_select",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+24,0,"no_of_items",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+25,0,"paddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+26,0,"pwdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+27,0,"psel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+28,0,"pwrite",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+29,0,"prdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+30,0,"pready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+31,0,"item_dispense_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+32,0,"item_dispense",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+33,0,"no_of_items_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+34,0,"currency_change",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("vending_pkg", VerilatedTracePrefixType::SCOPE_MODULE);
    Vtb_top___024root__trace_init_sub__TOP__vending_pkg__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("tb_top", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+15,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+16,0,"pclk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17,0,"rstn",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+18,0,"prstn",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+19,0,"cfg_mode",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+20,0,"currency_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+21,0,"currency_value",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+22,0,"item_select_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+23,0,"item_select",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+24,0,"no_of_items",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+25,0,"paddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+26,0,"pwdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+27,0,"psel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+28,0,"pwrite",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+29,0,"prdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+30,0,"pready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+31,0,"item_dispense_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+32,0,"item_dispense",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+33,0,"no_of_items_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+34,0,"currency_change",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->pushPrefix("dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+15,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17,0,"rstn",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+19,0,"cfg_mode",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+20,0,"currency_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+21,0,"currency_value",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+22,0,"item_select_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+23,0,"item_select",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+24,0,"no_of_items",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+16,0,"pclk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+18,0,"prstn",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+25,0,"paddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+27,0,"psel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+28,0,"pwrite",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+26,0,"pwdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+29,0,"prdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+30,0,"pready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+31,0,"item_dispense_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+32,0,"item_dispense",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+33,0,"no_of_items_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+34,0,"currency_change",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+7,0,"sync_curr_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10,0,"sync_item_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+8,0,"sync_curr_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+11,0,"sync_item_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+35,0,"fsm_item_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+9,0,"sync_qty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+36,0,"fsm_avail",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+37,0,"fsm_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+12,0,"fsm_disp_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+13,0,"v_item_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+41,0,"v_no_items",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("cfg_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+16,0,"pclk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+18,0,"prstn",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+25,0,"paddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+27,0,"psel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+28,0,"pwrite",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+26,0,"pwdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+29,0,"prdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+30,0,"pready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+35,0,"fsm_item_index",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+37,0,"fsm_item_val",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+36,0,"fsm_avail_count",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+12,0,"fsm_dispense_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+4,0,"reg_vending_cfg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+5,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+6,0,"index",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("fsm_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+15,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17,0,"rstn",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+19,0,"cfg_mode",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10,0,"item_select_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+11,0,"item_select",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+9,0,"no_of_items",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+7,0,"currency_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+8,0,"currency_value",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+35,0,"fsm_item_index",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+37,0,"fsm_item_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+36,0,"fsm_avail_count",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+12,0,"fsm_dispense_en",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+13,0,"item_dispense_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+32,0,"item_dispense",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+33,0,"no_of_items_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+34,0,"currency_change",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+14,0,"current_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+38,0,"next_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1,0,"total_cost",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"accumulated_curr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+35,0,"latched_item",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+3,0,"latched_qty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("input_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+15,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17,0,"rstn",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+20,0,"async_currency_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+21,0,"async_currency_value",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+22,0,"async_item_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+23,0,"async_item_select",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+24,0,"async_no_of_items",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+7,0,"sync_curr_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+8,0,"sync_curr_value",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+10,0,"sync_item_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+11,0,"sync_item_select",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+9,0,"sync_no_of_items",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+39,0,"curr_vld_sync",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+40,0,"item_vld_sync",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtb_top___024root__trace_init_sub__TOP__vending_pkg__0(Vtb_top___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root__trace_init_sub__TOP__vending_pkg__0\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    tracep->declBus(c+42,0,"MAX_ITEMS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+43,0,"MAX_CURRENCY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+44,0,"EMPTY_CODE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+45,0,"SYS_CLK_FREQ",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+46,0,"APB_CLK_FREQ",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+47,0,"ITEM_ADDR_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+48,0,"CURR_VAL_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
}

VL_ATTR_COLD void Vtb_top___024root__trace_init_top(Vtb_top___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root__trace_init_top\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_top___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtb_top___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vtb_top___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_top___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_top___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtb_top___024root__trace_register(Vtb_top___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root__trace_register\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vtb_top___024root__trace_const_0, 0, vlSelf);
    tracep->addFullCb(&Vtb_top___024root__trace_full_0, 0, vlSelf);
    tracep->addChgCb(&Vtb_top___024root__trace_chg_0, 0, vlSelf);
    tracep->addCleanupCb(&Vtb_top___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtb_top___024root__trace_const_0_sub_0(Vtb_top___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_top___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root__trace_const_0\n"); );
    // Body
    Vtb_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_top___024root*>(voidSelf);
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vtb_top___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_top___024root__trace_const_0_sub_0(Vtb_top___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root__trace_const_0_sub_0\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullBit(oldp+41,(vlSelfRef.tb_top__DOT__dut__DOT__v_no_items));
    bufp->fullIData(oldp+42,(0x00000400U),32);
    bufp->fullIData(oldp+43,(0x00000064U),32);
    bufp->fullSData(oldp+44,(0xffffU),16);
    bufp->fullIData(oldp+45,(0x05f5e100U),32);
    bufp->fullIData(oldp+46,(0x02faf080U),32);
    bufp->fullIData(oldp+47,(0x0000000aU),32);
    bufp->fullIData(oldp+48,(7U),32);
}

VL_ATTR_COLD void Vtb_top___024root__trace_full_0_sub_0(Vtb_top___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_top___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root__trace_full_0\n"); );
    // Body
    Vtb_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_top___024root*>(voidSelf);
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vtb_top___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_top___024root__trace_full_0_sub_0(Vtb_top___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top___024root__trace_full_0_sub_0\n"); );
    Vtb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullIData(oldp+1,(vlSelfRef.tb_top__DOT__dut__DOT__fsm_inst__DOT__total_cost),32);
    bufp->fullIData(oldp+2,(vlSelfRef.tb_top__DOT__dut__DOT__fsm_inst__DOT__accumulated_curr),32);
    bufp->fullCData(oldp+3,(vlSelfRef.tb_top__DOT__dut__DOT__fsm_inst__DOT__latched_qty),8);
    bufp->fullIData(oldp+4,(vlSelfRef.tb_top__DOT__dut__DOT__cfg_inst__DOT__reg_vending_cfg),32);
    bufp->fullIData(oldp+5,(vlSelfRef.tb_top__DOT__dut__DOT__cfg_inst__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+6,(vlSelfRef.tb_top__DOT__dut__DOT__cfg_inst__DOT__unnamedblk2__DOT__index),32);
    bufp->fullBit(oldp+7,(vlSelfRef.tb_top__DOT__dut__DOT__input_inst__DOT__sync_curr_valid));
    bufp->fullCData(oldp+8,(vlSelfRef.tb_top__DOT__dut__DOT__sync_curr_val),7);
    bufp->fullCData(oldp+9,(vlSelfRef.tb_top__DOT__dut__DOT__sync_qty),8);
    bufp->fullBit(oldp+10,(vlSelfRef.tb_top__DOT__dut__DOT__input_inst__DOT__sync_item_valid));
    bufp->fullSData(oldp+11,(vlSelfRef.tb_top__DOT__dut__DOT__sync_item_sel),10);
    bufp->fullBit(oldp+12,(vlSelfRef.tb_top__DOT__dut__DOT__fsm_disp_en));
    bufp->fullBit(oldp+13,(vlSelfRef.tb_top__DOT__dut__DOT__v_item_valid));
    bufp->fullCData(oldp+14,(vlSelfRef.tb_top__DOT__dut__DOT__fsm_inst__DOT__current_state),3);
    bufp->fullBit(oldp+15,(vlSelfRef.clk));
    bufp->fullBit(oldp+16,(vlSelfRef.pclk));
    bufp->fullBit(oldp+17,(vlSelfRef.rstn));
    bufp->fullBit(oldp+18,(vlSelfRef.prstn));
    bufp->fullBit(oldp+19,(vlSelfRef.cfg_mode));
    bufp->fullBit(oldp+20,(vlSelfRef.currency_valid));
    bufp->fullCData(oldp+21,(vlSelfRef.currency_value),7);
    bufp->fullBit(oldp+22,(vlSelfRef.item_select_valid));
    bufp->fullSData(oldp+23,(vlSelfRef.item_select),10);
    bufp->fullCData(oldp+24,(vlSelfRef.no_of_items),8);
    bufp->fullIData(oldp+25,(vlSelfRef.paddr),32);
    bufp->fullIData(oldp+26,(vlSelfRef.pwdata),32);
    bufp->fullBit(oldp+27,(vlSelfRef.psel));
    bufp->fullBit(oldp+28,(vlSelfRef.pwrite));
    bufp->fullIData(oldp+29,(vlSelfRef.prdata),32);
    bufp->fullBit(oldp+30,(vlSelfRef.pready));
    bufp->fullBit(oldp+31,(vlSelfRef.item_dispense_valid));
    bufp->fullSData(oldp+32,(vlSelfRef.item_dispense),10);
    bufp->fullCData(oldp+33,(vlSelfRef.no_of_items_out),8);
    bufp->fullSData(oldp+34,(vlSelfRef.currency_change),16);
    bufp->fullSData(oldp+35,(vlSelfRef.tb_top__DOT__dut__DOT__fsm_inst__DOT__latched_item),10);
    bufp->fullCData(oldp+36,((0x000000ffU & (vlSelfRef.tb_top__DOT__dut__DOT__cfg_inst__DOT__item_mem
                                             [vlSelfRef.tb_top__DOT__dut__DOT__fsm_inst__DOT__latched_item] 
                                             >> 0x00000010U))),8);
    bufp->fullSData(oldp+37,((0x0000ffffU & vlSelfRef.tb_top__DOT__dut__DOT__cfg_inst__DOT__item_mem
                              [vlSelfRef.tb_top__DOT__dut__DOT__fsm_inst__DOT__latched_item])),16);
    bufp->fullCData(oldp+38,(vlSelfRef.tb_top__DOT__dut__DOT__fsm_inst__DOT__next_state),3);
    bufp->fullCData(oldp+39,(vlSelfRef.tb_top__DOT__dut__DOT__input_inst__DOT__curr_vld_sync),3);
    bufp->fullCData(oldp+40,(vlSelfRef.tb_top__DOT__dut__DOT__input_inst__DOT__item_vld_sync),3);
}
