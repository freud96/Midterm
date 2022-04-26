// Generated by stratus_hls 19.12-s100  (91710.131054)
// Sun Apr 24 16:17:39 2022
// from ../DFT_compute.cpp
#include "DFT_compute_RAM_8X1_1.h"

struct DFT_compute_RAM_8X1_1;
DFT_compute_RAM_8X1_1::DFT_compute_RAM_8X1_1(sc_module_name name) : sc_module(name) 
    ,DIN("DIN")
    ,CE("CE")
    ,RW("RW")
    ,in1("in1")
    ,out1("out1")
    ,clk("clk")
    ,mem()
{
  SC_METHOD(DFT_compute_RAM_8X1_1_thread_1);
  sensitive << clk.pos();
  dont_initialize();

}
void DFT_compute_RAM_8X1_1::DFT_compute_RAM_8X1_1_thread_1(){
  if ( CE.read() ) {
    if ( RW.read() ) {
      (mem)[in1.read()] = DIN.read();
    } else {
      out1 = (mem)[in1.read()];
    }
  } else {
    out1 = 0ULL;
  }
}
