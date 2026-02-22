# Tool and Basic Flags
VERILATOR = verilator
# -j 0: Use all available CPU cores
# --trace: Enable waveform generation for Surfer
VFLAGS = --cc --trace --exe --build -j 0 \
         -Wno-WIDTHEXPAND -Wno-WIDTHTRUNC -Wno-UNUSEDSIGNAL \
         -Wno-UNUSEDPARAM -Wno-IMPORTSTAR -Wno-TIMESCALEMOD

# Include Directories
# Specifically points to the package directory [cite: 104]
INC = -Irtl/common

# Source Files
PKGS = rtl/common/vending_pkg.sv
RTL_FILES = rtl/vending_cfg_regs.sv \
            rtl/vending_input_ctrl.sv \
            rtl/vending_fsm.sv \
            rtl/vending_output_ctrl.sv \
            rtl/vending_top.sv
TB_FILES = dv/tb_top.sv dv/sim_main.cpp

# Target Module
TOP = tb_top

all: run

# Build target: Verilates and compiles C++
build:
	$(VERILATOR) $(VFLAGS) $(INC) $(PKGS) $(RTL_FILES) $(TB_FILES) --top-module $(TOP)

# Execution target: Runs sim and opens Surfer
run: build
	./obj_dir/V$(TOP)
	surfer waveform.vcd

# Cleanup
clean:
	rm -rf obj_dir *.vcd