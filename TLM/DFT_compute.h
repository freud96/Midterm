#ifndef DFT_COMPUTE_H_
#define DFT_COMPUTE_H_

#include <systemc>
using namespace sc_core;

#include <tlm>
#include <tlm_utils/simple_target_socket.h>

#include "DFT_matrix.h"

class DFT_compute : public sc_module{
    public:
        tlm_utils::simple_target_socket<DFT_compute> t_skt;
        
        sc_fifo<unsigned char> in_vec[MASK_N];
        sc_fifo<double> out_vec_real[MASK_N];
        sc_fifo<double> out_vec_imag[MASK_N];

        SC_HAS_PROCESS(DFT_compute);
        DFT_compute(sc_module_name n);
        ~DFT_compute();

    private:
        void computation();//to do matrix vector multiplication
        double sum_real[MASK_N];
        double sum_imag[MASK_N];
        unsigned char reverse_bits(unsigned char input);
        void bit_reverse(double temp_real[], double temp_imag[]);
        void fft(double temp_real[],double temp_imag[]);

        unsigned int base_offset;
        void blocking_transport(tlm::tlm_generic_payload &payload,
                          sc_core::sc_time &delay);

};

#endif