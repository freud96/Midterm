// Generated by stratus_hls 19.12-s100  (91710.131054)
// Sun Apr 24 17:59:20 2022
// from ../DFT_compute.cpp
#ifndef CYNTH_PART_DFT_compute_DFT_compute_RAM_8X8_2_h
#define CYNTH_PART_DFT_compute_DFT_compute_RAM_8X8_2_h

#include "systemc.h"
/* Include declarations of instantiated parts. */


/* Declaration of the synthesized module. */
struct DFT_compute_RAM_8X8_2 : public sc_module {
  sc_in<sc_uint<8> > DIN;
  sc_in<sc_uint<1> > CE;
  sc_in<sc_uint<1> > RW;
  sc_in<sc_uint<3> > in1;
  sc_out<sc_uint<8> > out1;
  sc_in<bool > clk;
  DFT_compute_RAM_8X8_2( sc_module_name name );
  SC_HAS_PROCESS(DFT_compute_RAM_8X8_2);
  sc_uint<8> mem[8];
  void DFT_compute_RAM_8X8_2_thread_1();
};

#endif
