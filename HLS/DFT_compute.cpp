#include <cmath>
#ifndef NATIVE_SYSTEMC
#include "stratus_hls.h"
#endif

#include "DFT_compute.h"

DFT_compute::DFT_compute(sc_module_name n) : sc_module(n)
{
    //#ifndef NATIVE_SYSTEMC
        //HLS_FLATTEN_ARRAY(val);
    //#endif
    SC_THREAD(computation);
    //set_stack_size(0x64000);
    sensitive << i_clk.pos();
    dont_initialize();
    reset_signal_is(i_rst, false);

#ifndef NATIVE_SYSTEMC

    // for(int i=0; i<MASK_N; i++)
    //{
    i_real.clk_rst(i_clk, i_rst);
    //o_result.clk_rst(i_clk, i_rst);
    o_dft_real.clk_rst(i_clk, i_rst);
    o_dft_imag.clk_rst(i_clk, i_rst);
    //o_dft_imag[i].reset();
    //}

#endif
}

DFT_compute::~DFT_compute() {}


void DFT_compute::computation()
{
    {
#ifndef NATIVE_SYSTEMC
        HLS_DEFINE_PROTOCOL("main_reset");

        //for(unsigned int i =0; i<MASK_N; i++)
        //{
        i_real.reset();
        //HLS_CONSTRAIN_LATENCY(0, 1, "lat00");
        o_dft_real.reset();
        o_dft_imag.reset();
        // }
#endif
        wait();
    }

    sc_uint<8> j;

    while (true)
    {
        Float temp_imag[MASK_N] = { 0 };
        Float temp_real[MASK_N] = { 0 };


        for (j = 0; j < MASK_N; j++)
        {

#ifndef NATIVE_SYSTEMC
            {
                HLS_DEFINE_PROTOCOL("input");
#ifdef UNROLL
                HLS_UNROLL_LOOP(ON, "loop0");
#endif

#ifdef PIPELINE
                HLS_PIPELINE_LOOP(SOFT_STALL, 1, "in");
#endif

#ifdef PIPE_UNROLL
                //HLS_UNROLL_LOOP(ON, "loop0");
                HLS_PIPELINE_LOOP(SOFT_STALL, 1, "in");
#endif

#if defined(DPOPT_ALL)
                HLS_UNROLL_LOOP(ON, "loop0");
#endif
                temp_real[j] = i_real.get();//.put(vec_in[i][j];

                //data_in = i_real.get();
                wait();
            }
#else
            for (j = 0; j < MASK_N; j++)
            {

                temp_real[j] = i_real[j].read();//.put(vec_in[i][j];
            }
            //data_in = i_real.read();
#endif
        }


        bit_reverse(temp_real, temp_imag);

        fft(temp_real, temp_imag);

        wait();


        for (j = 0; j < MASK_N; j++)
        {

#ifndef NATIVE_SYSTEMC
            HLS_DEFINE_PROTOCOL("output");


#ifdef UNROLL
            HLS_UNROLL_LOOP(ON, "loop1");
#endif

#ifdef PIPE_UNROLL
            HLS_UNROLL_LOOP(ON, "loop1");
#endif

#if defined(DPOPT_ALL)
            HLS_UNROLL_LOOP(ON, "loop1");
#endif
            wait();
            o_dft_real.put(temp_real[j]);
            o_dft_imag.put(temp_imag[j]);
            temp_imag[j] = 0;
            temp_real[j] = 0;


            //wait();


#else
            o_dft_real[j].write(temp_real[j]);
            o_dft_imag[j].write(temp_real[j]);

#endif

        }


    }


}




sc_uint<8> DFT_compute::reverse_bits(sc_uint<8> input)
{
    sc_uint<8> i, rev = 0;
    for (i = 0; i < 3; i++)
    {
#ifdef PIPELINE
        HLS_UNROLL_LOOP(COMPLETE, 3, "loop2");
#endif
#ifdef UNROLL
        HLS_UNROLL_LOOP(ON, "loop2");
#endif

#ifdef PIPE_UNROLL
        HLS_UNROLL_LOOP(COMPLETE, 3, "loop2");
#endif

#if defined(DPOPT_ALL)
        HLS_UNROLL_LOOP(COMPLETE, 3, "loop2");
#endif

        rev = (rev << 1) | (input & 1);
        input = input >> 1;
    }
    return rev;
}


void DFT_compute::bit_reverse(Float temp_real[], Float temp_imag[])
{
    sc_uint<8> reversed;
    sc_uint<8> i;
    Float temp, temp1, temp2, temp3;


    for (i = 0; i < MASK_N; i++)
    {
#ifdef PIPELINE
        HLS_PIPELINE_LOOP(SOFT_STALL, 4, "Loop3");
#endif
#ifdef UNROLL
        HLS_UNROLL_LOOP(COMPLETE, 3, "my_loop3");
#endif
#ifdef PIPE_UNROLL
        HLS_UNROLL_LOOP(ON, "loop3");
        HLS_PIPELINE_LOOP(SOFT_STALL, 4, "in");
#endif

#if defined(DPOPT_ALL)
        HLS_UNROLL_LOOP(COMPLETE, 3, "loop3");
#endif
        reversed = reverse_bits(i); // Find the bit reversed index
        if (i < reversed)
        {
            // Swap the real values
            temp = temp_real[i];
            temp_real[i] = temp_real[reversed];
            temp_real[reversed] = temp;

            // Swap the imaginary values
            temp1 = temp_imag[i];
            temp_imag[i] = temp_imag[reversed];
            temp_imag[reversed] = temp1;
        }
    }
}


void DFT_compute::fft(Float temp_real[], Float temp_imag[])
{
    Float temp_R = 0; // temporary storage complex variable
    Float temp_I = 0; // temporary storage complex variable
    sc_uint<8> i, j; // loop indexes
    sc_uint<8> i_lower; // Index of lower point in butterfly
    unsigned char stage, DFTpts;
    sc_uint<8> numBF; // Butterfly Width
   





    Float a, e, c, s;
    float f = -6.283185307178;
    Float l = (float)f;
    //stage loop:
    for (stage = 1; stage <= 3; stage++)
    {
#ifdef UNROLL
        HLS_UNROLL_LOOP(COMPLETE, 3, "loop4");
#endif
#ifdef PIPE_UNROLL
        HLS_UNROLL_LOOP(COMPLETE, 3, "loop4");
#endif
#if defined(DPOPT_ALL)
        HLS_DPOPT_REGION("entirecomputation");
        HLS_UNROLL_LOOP(ON, "loop4");
#endif

        // Do M stages of butterflies
        DFTpts = 1 << stage; // DFT = 2ˆstage = points in sub DFT
        numBF = DFTpts / 2; // Butterfly WIDTHS in sub−DFT
        e = l / DFTpts;
        a = 0.0;
        // Perform butterflies for j−th stage
        for (j = 0; j < numBF; j++)
        {
#ifdef UNROLL
            HLS_UNROLL_LOOP(ON, "loop5");
#endif
#ifdef PIPE_UNROLL
            HLS_UNROLL_LOOP(COMPLETE, 3, "loop5");
#endif
            c = cos(a);
            s = sin(a);
            a = a + e;
            // Compute butterflies that use same W∗∗k
            for (i = j; i < MASK_N; i += DFTpts)
            {
                i_lower = i + numBF; // index of lower point in butterfly
                temp_R = temp_real[i_lower] * c - temp_imag[i_lower] * s;
                temp_I = temp_imag[i_lower] * c + temp_real[i_lower] * s;
                
                temp_real[i_lower] = temp_real[i] - temp_R;
                temp_imag[i_lower] = temp_imag[i] - temp_I;
                temp_real[i] = temp_real[i] + temp_R;
                temp_imag[i] = temp_imag[i] + temp_I;
            }

        }
     }

}

