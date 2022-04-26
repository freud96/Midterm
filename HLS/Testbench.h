#ifndef TESTBENCH_H_
#define TESTBENCH_H_

#include <string>
using namespace std;

#include <systemc>
using namespace sc_core;

#include <ctime>

#ifndef NATIVE_SYSTEMC
#include <cynw_p2p.h>
#endif

#include "directives.h"
#include <complex>



class Testbench : public sc_module {
public:
	sc_in_clk i_clk;
	sc_out < bool >  o_rst;
#ifndef NATIVE_SYSTEMC
	cynw_p2p< Float >::base_out o_real;
  //cynw_p2p< sc_dt::sc_uint<32> >::base_out o_imag;
	cynw_p2p< Float >::base_in i_real;
  cynw_p2p< Float >::base_in i_imag;
#else
	sc_fifo_out< Float > o_real;
  //sc_fifo_out< sc_dt::sc_uint<32> > o_real;
	sc_fifo_in< Float > i_real[MASK_N];
  sc_fifo_in< Float > i_imag[MASK_N];
#endif

  SC_HAS_PROCESS(Testbench);

  Testbench(sc_module_name n);
  ~Testbench();

  int output(string outfile_name);
  void generate_vector();
  
private:
	unsigned int n_txn;
	sc_time max_txn_time;
	sc_time min_txn_time;
	sc_time total_txn_time;
	sc_time total_start_time;
	sc_time total_run_time;
  
  void data_to_dft();
  //void feed_rgb();
	void write_result();
 
 unsigned char vec_in[MAX_NBR_VECTOR][MASK_N];
 complex<float> vec[MAX_NBR_VECTOR][MASK_N];
 complex<float> vec_out[MAX_NBR_VECTOR][MASK_N];
 int clock_cycle( sc_time time );
};
#endif
