<div align="center">
  <h1>🛒 Vending Machine Controller IP</h1>
  <p>
    <img src="https://img.shields.io/badge/Language-SystemVerilog-orange.svg" />
    <img src="https://img.shields.io/badge/Simulator-Verilator-blue.svg" />
    <img src="https://img.shields.io/badge/Verification-C%2B%2B%20Assertions-green.svg" />
    <img src="https://img.shields.io/badge/Viewer-Surfer-purple.svg" />
  </p>
  <p><b>A high-performance, parameterizable RTL core featuring an APB configuration interface and dual-clock domain support.</b></p>
</div>

---

### 📋 Technical Overview
This Vending Machine Controller is a modular IP core designed for integration into modern SoC environments. It handles item inventory, real-time price calculation, and multi-denomination currency accumulation with strict hardware safety protocols.

### 🏗️ Architecture & Features
* **Dual-Clock Domain**:
    * **System Clock (100MHz)**: High-speed domain for FSM logic and currency tracking.
    * **APB Clock (50MHz)**: Reliable domain for register configuration.
* **Standard Interface**: Uses AMBA APB for runtime programming of up to **1024 unique items**.
* **Input Synchronization**: Asynchronous user inputs are passed through multi-stage synchronizers to prevent metastability.
* **Deterministic Timing**: A Moore-type FSM ensures a response latency of **<10 system clock cycles**.
* **Safety & Recovery**: Automated "Out of Stock" detection returns an `0xFFFF` code and a full refund.



---

### 📂 File Descriptions

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
      <td>Centralized definitions for parameters like <code>ITEM_ADDR_W</code> and the <code>EMPTY_CODE</code> constant.</td>
    </tr>
    <tr>
      <td><code>rtl/vending_cfg_regs.sv</code></td>
      <td><b>Configuration</b></td>
      <td>APB register bank; manages pricing and inventory levels for the machine.</td>
    </tr>
    <tr>
      <td><code>rtl/vending_input_ctrl.sv</code></td>
      <td><b>Input</b></td>
      <td>Synchronizes asynchronous user inputs to the 100MHz system clock domain.</td>
    </tr>
    <tr>
      <td><code>rtl/vending_fsm.sv</code></td>
      <td><b>Control Path</b></td>
      <td>The main FSM handling the purchase flow, accumulation, and refund logic.</td>
    </tr>
    <tr>
      <td><code>rtl/vending_output_ctrl.sv</code></td>
      <td><b>Output</b></td>
      <td>Generates the single-cycle dispense pulse and drives output buses.</td>
    </tr>
    <tr>
      <td><code>rtl/vending_top.sv</code></td>
      <td><b>Top Level</b></td>
      <td>The structural wrapper that instantiates and wires all sub-modules.</td>
    </tr>
    <tr>
      <td><code>dv/tb_top.sv</code></td>
      <td><b>Testbench Top</b></td>
      <td>Connects RTL signals to the Verilator C++ simulation environment.</td>
    </tr>
    <tr>
      <td><code>dv/sim_main.cpp</code></td>
      <td><b>Driver</b></td>
      <td>C++ test suite responsible for clock generation, stimulus, and assertions.</td>
    </tr>
  </tbody>
</table>

---

### 🗺️ APB Address Map
| Address Offset | Register Name | Description |
| :--- | :--- | :--- |
| `0x4000_0000` | `GLOBAL_CFG` | Bits [9:0]: Total number of items managed. |
| `0x4000_0004` | `ITEM_0_CFG` | Bits [15:0]: Price (Rs) \| Bits [23:16]: Quantity. |
| `0x4000_XXXX` | `ITEM_N_CFG` | Individual configuration for items up to index 1023. |

---

### 🚦 Verification Results
The design is verified using a C++ regression suite that monitors hardware signals and calculates latency in real-time.

#### **Test Scenario 1: Standard Purchase**
- **Action**: Item #0 (15 Rs) selected; 20 Rs inserted.
- **Result**: `item_dispense_valid` triggered; `currency_change` = 5 Rs.
- **Latency**: ~50ns (5 cycles) — **PASSED ✅**

#### **Test Scenario 2: Out of Stock**
- **Action**: Item #2 (Qty: 0) selected; 10 Rs inserted.
- **Result**: `item_dispense` = `0x3FF` (Empty Code); Full 10 Rs refund.
- **Status**: Safety logic triggered — **PASSED ✅**



---

### 🛠️ Execution
To build the IP and run the verification suite:
```bash
# Clean previous builds
make clean

# Compile and run simulation (Surfer opens automatically)
make