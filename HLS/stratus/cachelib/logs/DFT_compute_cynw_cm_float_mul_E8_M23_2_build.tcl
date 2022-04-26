load_library {/usr/cadtool/cadence/STRATUS/cur/share/stratus/techlibs/GPDK045/gsclib045_svt_v4.4/gsclib045/timing/slow_vdd1v2_basicCells.lib} -cg_compatible --dont_use ^$  -library_units
current_wireload_model --none
read_verilog /home/m110/m110061422/EE6470/mid_v3/stratus/bdw_work/modules/DFT_compute/BASIC/bdw_work/libs/BASIC/src/DFT_compute_cynw_cm_float_mul_E8_M23_2_pipe.v /home/m110/m110061422/EE6470/mid_v3/stratus/bdw_work/modules/DFT_compute/BASIC/v_gates/DFT_compute_cynw_cm_float_mul_E8_M23_1.v --define "BDW_BUILD_MODULE=DFT_compute_cynw_cm_float_mul_E8_M23_2 OutExpWidth=8 OutMantWidth=23 InExpWidth=8 InMantWidth=23 OutExWidth=0 IPVersion=2 NegZeroOut=1 ZeroTimesInf=1 StatImprove=1 IntroundPosition=0 IntroundPromote=1 IntroundBias=-1 IntroundCommute=0 interconnect_mode=wireload number_of_routing_layers=-1 scale_of_cap_per_unit_len=1.000000 scale_of_res_per_unit_len=1.000000 starc=S2.2.2.2,S2.2.3.1,S2.3.1.1 latency=1 {timing_gen=ultra_timing -num_intervals 2 -num_input_delays 1} arch=0 dpopt_ver=2019.1.01.8041scr217.11-s014_1scrE useDsp=0 verilog_dialect=systemverilog lef_library= cap_table_file= qrc_tech_file= flopEdges="
change_names
set_cycle_time [all_clocks] 4.9919799999999999
set_input_delay [all_inputs]  1.304875
set_max_delay [all_outputs] 4.9919799999999999
set_output_delay [all_outputs] 3.782375
synthesize -effort none
pipeline
optimize
report_timing
report_area

