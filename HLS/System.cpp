#include "System.h"
System::System( sc_module_name n, string output_txt ): sc_module( n ), 
	tb("tb"), dft_compute("dft_compute"), clk("clk", CLOCK_PERIOD, SC_NS), rst("rst"), _output_txt(output_txt)
{
	tb.i_clk(clk);
	tb.o_rst(rst);
	dft_compute.i_clk(clk);
	dft_compute.i_rst(rst);
#ifndef NATIVE_SYSTEMC
tb.i_real(dft_vector_real);
   tb.i_imag(dft_vector_imag);
   dft_compute.o_dft_real(dft_vector_real);
   dft_compute.o_dft_imag(dft_vector_imag);
   tb.o_real(vector_in);
   dft_compute.i_real(vector_in);
#else	
 for(int i=0;i<MASK_N;i++)
 {
   tb.i_real[i](dft_vector_real[i]);
   tb.i_imag[i](dft_vector_imag[i]);
   dft_compute.o_dft_real[i](dft_vector_real[i]);
   dft_compute.o_dft_imag[i](dft_vector_imag[i]);
   tb.o_real[i](vector_in[i]);
   dft_compute.i_real[i](vector_in[i]);
 }
#endif
	

  tb.generate_vector();
}

System::~System() {
  tb.output(_output_txt);
}
