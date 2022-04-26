#ifndef DFT_COMPUTE_H_
#define DFT_COMPUTE_H_
#include <systemc>
using namespace sc_core;

#ifndef NATIVE_SYSTEMC
#include <cynw_p2p.h>
#endif

#include "directives.h"

class DFT_compute: public sc_module
{
public:
	sc_in_clk i_clk;
	sc_in < bool >  i_rst;
#ifndef NATIVE_SYSTEMC
  cynw_p2p< Float >::in i_real;
  //cynw_p2p< sc_dt::sc_uint<64> >::base_out o_imag;
	cynw_p2p< Float >::out o_dft_real;
  cynw_p2p< Float >::out o_dft_imag;
#else
  sc_fifo_out< Float > i_real;
  //sc_fifo_out< sc_dt::sc_uint<64> > o_real;
	sc_fifo_in< Float > o_dft_real[MASK_N];
  sc_fifo_in< Float > o_dft_imag[MASK_N];

#endif

	SC_HAS_PROCESS( DFT_compute );
	DFT_compute( sc_module_name n );
	~DFT_compute();
private:
	void computation();//to do matrix vector multiplication
  sc_uint<8> reverse_bits(sc_uint<8> input);
  void bit_reverse(Float in_real[], Float in_imag[]);
  void fft(Float in_real[], Float in_imag[]); 
 void bit_reverse_stage(Float out_real[],Float out_imag[], Float in_real[], Float in_imag[]);
  void fft_stage1(Float out_real[],Float out_imag[], Float in_real[], Float in_imag[]);
  void fft_stage2(Float out_real[],Float out_imag[], Float in_real[], Float in_imag[]);
  void fft_stage3(Float out_real[],Float out_imag[], Float in_real[], Float in_imag[]);
  void fft1(Float out_real[],Float out_imag[], Float in_real[], Float in_imag[]);
 // Float sum_real[MASK_N];
 // Float sum_imag[MASK_N];
};
#endif
