<div align="center">
  <h1>🛒 Vending Machine Controller IP</h1>
  <p>
    <img src="https://img.shields.io/badge/Language-SystemVerilog-orange.svg" />
    <img src="https://img.shields.io/badge/Verification-UVM%201.2-blue.svg" />
    <img src="https://img.shields.io/badge/Simulator-Siemens%20Questa-green.svg" />
    <img src="https://img.shields.io/badge/Platform-Windows%20VM-blueviolet.svg" />
  </p>
  <p><b>A high-performance RTL core featuring an APB configuration interface and a robust UVM verification environment.</b></p>
</div>

---

### 📋 Technical Overview
This project implements a parameterizable Vending Machine Controller designed for modern SoC integration. It manages item inventory, calculates pricing, and handles multi-denomination currency with deterministic hardware timing.

### 🏗️ Architecture & Features
* **Dual-Clock Domain Support**: 
    * **System Clock (100MHz)**: Drives core FSM and currency logic.
    * **APB Clock (50MHz)**: Drives the configuration register bank.
* **APB Configuration Interface**: Allows runtime programming of prices and quantities for up to **1024 unique items**.
* **Deterministic Latency**: Guaranteed response time of **<10 system clock cycles** (<100ns) from final currency input to dispense.
* **Safety & Fault Recovery**: Automatically handles "Out-of-Stock" scenarios by returning a full refund and an error code (`0x3FF`).



---

### 📂 File Structure

<table width="100%">
  <thead>
    <tr>
      <th align="left">File Path</th>
      <th align="left">Role</th>
      <th align="left">Description</th>
    </tr>
  </thead>
  <tbody>
    <tr>
      <td><code>rtl/common/vending_pkg.sv</code></td>
      <td><b>Package</b></td>
      <td>Centralized definitions for parameters like <code>ITEM_ADDR_W</code> and <code>EMPTY_CODE</code>.</td>
    </tr>
    <tr>
      <td><code>rtl/vending_top.sv</code></td>
      <td><b>Top Level</b></td>
      <td>Structural wrapper instantiating the FSM, Register Bank, and Input/Output controllers.</td>
    </tr>
    <tr>
      <td><code>dv/vending_if.sv</code></td>
      <td><b>Interface</b></td>
      <td>The SystemVerilog interface bundling dual-clock signals for UVM connection.</td>
    </tr>
    <tr>
      <td><code>dv/env/</code></td>
      <td><b>UVM Env</b></td>
      <td>Contains the UVM Driver, Monitor, and Scoreboard classes for professional verification.</td>
    </tr>
  </tbody>
</table>

---

### 🚦 Verification & Waveforms
The IP is verified using an industry-standard **UVM 1.2** environment in **Siemens Questa**. The test suite validates protocol compliance for the APB bus and the functional correctness of the vending FSM.

<h3 align="center">🔍 Functional Trace</h3>
<p align="center">
  <img src="signals.png" alt="Simulation Waveforms" width="900">
  <br>
  <i>Figure 1: Simulation trace showing a successful 15 Rs purchase (400ns) and an Out-of-Stock refund (900ns).</i>
</p>

#### **Verified Signals:**
* **APB Config**: Correct write to address `0x4000_0004` (Item 0) with `pwdata` `0x000A000F`.
* **Transaction Pulse**: `currency_valid` high triggers the FSM transition.
* **Correct Change**: Output `currency_chan` validates the 15 Rs item / 20 Rs payment math.



---

### 🛠️ Migration Journey
Originally developed using **C++/Verilator** on macOS, this project was migrated to a **Windows VM** environment to leverage **UVM (Universal Verification Methodology)**. This transition involved:
1.  Replacing the procedural C++ testbench with a class-based **UVM Driver**.
2.  Implementing **Constrained Randomization** for currency denominations.
3.  Utilizing **Virtual Interfaces** to bridge dynamic classes with static RTL.

---
<div align="center">
  <sub>Developed by Pranav Kumar Atyam | Purdue University</sub>
</div>