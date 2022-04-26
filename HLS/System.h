#ifndef SYSTEM_H_
#define SYSTEM_H_
#include <systemc>
using namespace sc_core;

#include "Testbench.h"
#ifndef NATIVE_SYSTEMC
#include "DFT_compute_wrap.h"
#else
#include "DFT_compute.h"
#endif

class System: public sc_module
{
public:
	SC_HAS_PROCESS( System );
	System( sc_module_name n, std::string output_txt );
	~System();
private:
  Testbench tb;
#ifndef NATIVE_SYSTEMC
	DFT_compute_wrapper dft_compute;
#else
	DFT_compute dft_compute;
#endif
	sc_clock clk;
	sc_signal<bool> rst;
#ifndef NATIVE_SYSTEMC
	cynw_p2p< Float > vector_in;
	cynw_p2p< Float >  dft_vector_real;
   cynw_p2p< Float > dft_vector_imag;
#else
	sc_fifo< Float > vector_in[MASK_N];
	sc_fifo< Float > dft_vector_real[MASK_N];
 sc_fifo< Float > dft_vector_imag[MASK_N];
#endif

	std::string _output_txt;
};
#endif
