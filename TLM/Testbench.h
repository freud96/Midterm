#ifndef TESTBENCH_H_
#define TESTBENCH_H_

#include <string>
using namespace std;

#include <systemc>
using namespace sc_core;
#include <ctime>

#include "Initiator.h"
#include "DFT_matrix.h"
#include "MemoryMap.h"

const int MAX_nbr_vector = 1;
class Testbench : public sc_module{
    public:
        Initiator initiator;

        SC_HAS_PROCESS(Testbench);

        Testbench(sc_module_name n);
        ~Testbench();
        void output(string outfile_name);
        void generate_vector();
    private:
        void dft();
        unsigned char vec_in[MAX_nbr_vector][MASK_N];
        complex<double> vec[MAX_nbr_vector][MASK_N];
        complex<double> vec_out[MAX_nbr_vector][MASK_N];
};
#endif