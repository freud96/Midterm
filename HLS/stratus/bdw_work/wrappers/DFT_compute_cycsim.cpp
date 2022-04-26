/****************************************************************************
*
*  Copyright (c) 2015, Cadence Design Systems. All Rights Reserved.
*
*  This file contains confidential information that may not be
*  distributed under any circumstances without the written permision
*  of Cadence Design Systems.
*
****************************************************************************/

#ifdef NCSC
#include <string>
typedef std::string sc_string;
#define SYSTEMC_VERSION 20070314
#endif

#include "DFT_compute_cycsim.h"
#include "esc_catrace.h"
#include "verilated.h"
#include "VDFT_compute_rtl.h"


class VDFT_compute_rtl;

class DFT_compute_cycsimV : public DFT_compute_cycsim
{
    // Port declarations inherited from parent class

    // These signals are used to connect ports that need type conversion to the RTL ports
    sc_signal< uint32_t > i_real_data_man_I;
    sc_signal< uint32_t > i_real_data_exp_I;
    sc_signal< bool > i_real_data_sign_I;
    sc_signal< uint32_t > o_dft_real_data_man_O;
    sc_signal< uint32_t > o_dft_real_data_exp_O;
    sc_signal< bool > o_dft_real_data_sign_O;
    sc_signal< uint32_t > o_dft_imag_data_man_O;
    sc_signal< uint32_t > o_dft_imag_data_exp_O;
    sc_signal< bool > o_dft_imag_data_sign_O;


    // The following threads are used to do the type conversion.
    inline void thread_i_real_data_man_I() {
        i_real_data_man_I = (sc_uint<23>)i_real_data_man.read();
    };
    inline void thread_i_real_data_exp_I() {
        i_real_data_exp_I = (sc_uint<8>)i_real_data_exp.read();
    };
    inline void thread_i_real_data_sign_I() {
        i_real_data_sign_I = (sc_uint<1>)i_real_data_sign.read();
    };
    inline void thread_o_dft_real_data_man_O() {
        o_dft_real_data_man = o_dft_real_data_man_O.read();
    };
    inline void thread_o_dft_real_data_exp_O() {
        o_dft_real_data_exp = o_dft_real_data_exp_O.read();
    };
    inline void thread_o_dft_real_data_sign_O() {
        o_dft_real_data_sign = o_dft_real_data_sign_O.read();
    };
    inline void thread_o_dft_imag_data_man_O() {
        o_dft_imag_data_man = o_dft_imag_data_man_O.read();
    };
    inline void thread_o_dft_imag_data_exp_O() {
        o_dft_imag_data_exp = o_dft_imag_data_exp_O.read();
    };
    inline void thread_o_dft_imag_data_sign_O() {
        o_dft_imag_data_sign = o_dft_imag_data_sign_O.read();
    };


    SC_HAS_PROCESS(DFT_compute_cycsimV);

public:

    DFT_compute_cycsimV( sc_module_name in_name=sc_module_name(sc_gen_unique_name(" DFT_compute") ) )
        : DFT_compute_cycsim(in_name)
    {
        // instantiate the verilated module
        DFT_compute_cyc0 = new VDFT_compute_rtl( "VDFT_compute" );
        // generate port connections
        DFT_compute_cyc0->i_clk(i_clk);
        DFT_compute_cyc0->i_rst(i_rst);
        DFT_compute_cyc0->i_real_busy(i_real_busy);
        DFT_compute_cyc0->i_real_vld(i_real_vld);
        DFT_compute_cyc0->i_real_data_man(i_real_data_man_I);
        DFT_compute_cyc0->i_real_data_exp(i_real_data_exp_I);
        DFT_compute_cyc0->i_real_data_sign(i_real_data_sign_I);
        DFT_compute_cyc0->o_dft_real_busy(o_dft_real_busy);
        DFT_compute_cyc0->o_dft_real_vld(o_dft_real_vld);
        DFT_compute_cyc0->o_dft_real_data_man(o_dft_real_data_man_O);
        DFT_compute_cyc0->o_dft_real_data_exp(o_dft_real_data_exp_O);
        DFT_compute_cyc0->o_dft_real_data_sign(o_dft_real_data_sign_O);
        DFT_compute_cyc0->o_dft_imag_busy(o_dft_imag_busy);
        DFT_compute_cyc0->o_dft_imag_vld(o_dft_imag_vld);
        DFT_compute_cyc0->o_dft_imag_data_man(o_dft_imag_data_man_O);
        DFT_compute_cyc0->o_dft_imag_data_exp(o_dft_imag_data_exp_O);
        DFT_compute_cyc0->o_dft_imag_data_sign(o_dft_imag_data_sign_O);


        // setup the type conversion threads
        SC_METHOD( thread_i_real_data_man_I);
            sensitive << i_real_data_man;
        SC_METHOD( thread_i_real_data_exp_I);
            sensitive << i_real_data_exp;
        SC_METHOD( thread_i_real_data_sign_I);
            sensitive << i_real_data_sign;
        SC_METHOD( thread_o_dft_real_data_man_O);
            sensitive << o_dft_real_data_man_O;
        SC_METHOD( thread_o_dft_real_data_exp_O);
            sensitive << o_dft_real_data_exp_O;
        SC_METHOD( thread_o_dft_real_data_sign_O);
            sensitive << o_dft_real_data_sign_O;
        SC_METHOD( thread_o_dft_imag_data_man_O);
            sensitive << o_dft_imag_data_man_O;
        SC_METHOD( thread_o_dft_imag_data_exp_O);
            sensitive << o_dft_imag_data_exp_O;
        SC_METHOD( thread_o_dft_imag_data_sign_O);
            sensitive << o_dft_imag_data_sign_O;


        TraceFileType* tfp = esc_get_ca_trace_file();
        if ( tfp )
        {
            DFT_compute_cyc0->trace(tfp,99);
        }
    };

    ~DFT_compute_cycsimV()
    {
        delete DFT_compute_cyc0;
    }

    void end_of_elaboration()
    {
        esc_open_ca_trace_file();
    }

    void end_of_simulation()
    {
        esc_close_ca_trace_file();
    }

protected:
    VDFT_compute_rtl* DFT_compute_cyc0;
};

DFT_compute_cycsim* DFT_compute_cycsim_factory()
{
    return new DFT_compute_cycsimV("DFT_compute");
}

class DFT_compute_linkup
{
public:
    DFT_compute_linkup() {
        extern DFT_compute_cycsim* (*DFT_compute_cycsim_factory_p)();
        DFT_compute_cycsim_factory_p = &DFT_compute_cycsim_factory;
    }
};

// Create the one instance of the factory for this verilated model.
DFT_compute_linkup DFT_compute_cycsimV_link;


