#*******************************************************************************
# Copyright 2015 Cadence Design Systems, Inc.
# All Rights Reserved.
#
#*******************************************************************************
#
# Stratus Project File
#
############################################################
# Project Parameters
############################################################
#
# Technology Libraries
#
set LIB_PATH "[get_install_path]/share/stratus/techlibs/GPDK045/gsclib045_svt_v4.4/gsclib045/timing"
set LIB_LEAF "slow_vdd1v2_basicCells.lib"
use_tech_lib    "$LIB_PATH/$LIB_LEAF"
use_hls_lib "cynw_cm_float"

#
# Global synthesis attributes.
#
set_attr clock_period           5.0
set_attr message_detail         3 
set_attr default_input_delay    0.1
#set_attr sched_aggressive_1 on
#set_attr unroll_loops off
#set_attr flatten_arrays none 
#set_attr timing_aggression 0
#set_attr default_protocol true
set_attr dpopt_auto			off			;# Set automatic DPOPT part creation: off, array, op, expr
set_attr dpopt_with_enable		off			;# Control if enable pins are on DPOPT parts (default=off)

#
# Simulation Options
#
### 1. You may add your own options for C++ compilation here.
set_attr cc_options             "-DCLOCK_PERIOD=5 -g"
#enable_waveform_logging -vcd
set_attr end_of_sim_command "make saySimPassed"

#
# Testbench or System Level Modules
#
### 2. Add your testbench source files here.
define_system_module ../main.cpp
define_system_module ../Testbench.cpp
define_system_module ../System.cpp

#
# SC_MODULEs to be synthesized
#
### 3. Add your design source files here (to be high-level synthesized).
define_hls_module DFT_compute ../DFT_compute.cpp

### 4. Define your HLS configuration (arbitrary names, BASIC and DPA in this example). 
define_hls_config DFT_compute BASIC
define_hls_config DFT_compute DPA       --dpopt_auto=op,expr
define_hls_config DFT_compute UNROLL
define_hls_config DFT_compute PIPELINE	
define_hls_config DFT_compute PIPE_UNROLL
define_hls_config	DFT_compute	DPO_INLINE	-DLAT=10 -DDPOPT_ALL
define_hls_config	DFT_compute	DPO_AUTO_OP	-DLAT=3 --dpopt_auto=op
define_hls_config	DFT_compute	DPO_AUTO_EXPR	-DLAT=3 --dpopt_auto=expr

#set IMAGE_DIR           ".."
#set IN_FILE_NAME        "${IMAGE_DIR}/lena_std_short.bmp"
set OUT_FILE_NAME				"out.txt"

### 5. Define simulation configuration for each HLS configuration
### 5.1 The behavioral simulation (C++ only).
define_sim_config B -argv "$OUT_FILE_NAME"
### 5.2 The Verilog simulation for HLS config "BASIC". 
define_sim_config V_BASIC "DFT_compute RTL_V BASIC" -argv "$OUT_FILE_NAME"
### 5.3 The Verilog simulation for HLS config "DPA". 
define_sim_config V_DPA "DFT_compute RTL_V DPA" -argv "$OUT_FILE_NAME"
### 5.4 The Verilog simulation for HLS config "UNROLL". 
define_sim_config V_UNROLL "DFT_compute RTL_V UNROLL" -argv "$OUT_FILE_NAME"
### 5.5 The Verilog simulation for HLS config "PIPELINE". 
define_sim_config V_PIPELINE "DFT_compute RTL_V PIPELINE" -argv "$OUT_FILE_NAME"
### 5.6 The Verilog simulation for HLS config "UNROLL+PIPELINE". 
define_sim_config V_PIPE_UNROLL "DFT_compute RTL_V PIPE_UNROLL" -argv "$OUT_FILE_NAME"
### 5.7 The Verilog simulation for HLS config "DPO all". 
define_sim_config V_DPO_INLINE "DFT_compute RTL_V DPO_INLINE" -argv "$OUT_FILE_NAME"
### 5.8 The Verilog simulation for HLS config "DPO AUTO OP". 
define_sim_config V_DPO_AUTO_OP "DFT_compute RTL_V DPO_AUTO_OP" -argv "$OUT_FILE_NAME"
### 5.7 The Verilog simulation for HLS config "DPO AUTO EXPR". 
define_sim_config V_DPO_AUTO_EXPR "DFT_compute RTL_V DPO_AUTO_EXPR" -argv "$OUT_FILE_NAME"
