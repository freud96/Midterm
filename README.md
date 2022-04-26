# Midterm

There are two directories, HLS which is to run the synthesizable version of the Hardware module. and TLM which has the version for TLM platform

TLM
  After login to gitbash terminal,
    1- create build directory: $mkdir build
    2- go to build directory: $cd build
    3- do: $cmake .. then $make run,
   the output file will be out.txt in the same directory "build"
   
 HLS
  After login to the workstation 
    1- go to stratus directory: $cd stratus
    2- open project.tcl to see the hls configuration
    3- do
      make sim_V_BASIC for basic configuration
      make sim_V_DPA for DPA
      make sim_V_UNROLL for loop unrolling
      make sim_V_PIPELINE for pre-stage loop pipelining
      make sim_V_PIPE_UNROLL for pipeline and unroll
      make sim_V_DPO_INLINE for datapath optimization
