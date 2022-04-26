#include <cmath>
#ifndef NATIVE_SYSTEMC
#include "stratus_hls.h"
#endif

#include "DFT_compute.h"

DFT_compute::DFT_compute( sc_module_name n ): sc_module( n )
{
//#ifndef NATIVE_SYSTEMC
    //HLS_FLATTEN_ARRAY(val);
//#endif
    SC_THREAD( computation );
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
    Float temp_imag[MASK_N]={0};
    Float temp_real[MASK_N]={0};
       
       
            for(j = 0; j<MASK_N; j++)
                {
              
#ifndef NATIVE_SYSTEMC
            {
                HLS_DEFINE_PROTOCOL("input");

                
                temp_real[j] = i_real.get();//.put(vec_in[i][j];
                
                //data_in = i_real.get();
                wait();
            }
#else
            for(j = 0; j<MASK_N; j++)
            {
            
                temp_real[j] = i_real[j].read();//.put(vec_in[i][j];
            }
            //data_in = i_real.read();
#endif
}


         //bit_reverse(temp_real, temp_imag);
         // fft(temp_real,temp_imag);
         //fft(temp_real,temp_imag);
         //fft(temp_real,temp_imag);
        //  bit_reverse(temp_real, temp_imag)
        
        
        Float stage1_r[]={0}, stage1_i[MASK_N]={0};
Float stage2_r[]={0}, stage2_i[MASK_N]={0};
Float stage3_r[]={0}, stage3_i[MASK_N]={0};
Float out_r[]={0}, out_i[MASK_N]={0};
HLS_DPOPT_REGION("entirecomputation");
         bit_reverse_stage(stage1_r,stage1_i, temp_real, temp_imag);
          fft_stage1(stage2_r,stage2_i, stage1_r, stage1_i);
         fft_stage2(stage3_r,stage3_i, stage2_r, stage2_i);
         fft_stage3(out_r,out_i, stage3_r, stage3_i);
        
       
        
    wait(10);      
          for(j=0; j<MASK_N; j++)
            {

#ifndef NATIVE_SYSTEMC
            HLS_DEFINE_PROTOCOL("output");
            
wait(10); 
                o_dft_real.put(out_r[j]);
                o_dft_imag.put(out_i[j]);
                

//wait();
            
            
#else
                o_dft_real[j].write(out_r[j]);
                o_dft_imag[j].write(out_i[j]);
            
#endif

        }


    }


}




sc_uint<8> DFT_compute::reverse_bits(sc_uint<8> input)
{
    sc_uint<8> i, rev = 0;
    for (i = 0; i < 3; i++)
    {
        HLS_UNROLL_LOOP( COMPLETE, 3, "loop1" );
        //HLS_CONSTRAIN_LATENCY(
        rev = (rev << 1) | (input & 1);
        input = input >> 1;
    }
    return rev;
}


void DFT_compute::bit_reverse(Float temp_real[],Float temp_imag[])
{
    sc_uint<8> reversed;
    sc_uint<8> i;
    Float temp;

    for (i = 0; i < MASK_N; i++)
    {
        HLS_UNROLL_LOOP(ON,"loop2" );
        reversed = reverse_bits(i); // Find the bit reversed index
        if (i < reversed)
        {
            // Swap the real values
            temp = temp_real[i];
            temp_real[i] = temp_real[reversed];
            temp_real[reversed] = temp;

            // Swap the imaginary values
            temp = temp_imag[i];
            temp_imag[i] = temp_imag[reversed];
            temp_imag[reversed] = temp;
        }
    }
}


void DFT_compute::fft(Float temp_real[],Float temp_imag[])
{
    Float temp_R; // temporary storage complex variable
    Float temp_I; // temporary storage complex variable
    sc_uint<8> i, j; // loop indexes
    sc_uint<8> i_lower; // Index of lower point in butterfly
    unsigned char stage, DFTpts;
    sc_uint<8> numBF; // Butterfly Width
    sc_uint<8> N2 = 4; // N2=N>>1

    
bit_reverse(temp_real,temp_imag);


    Float a, e, c, s;
    float f=-6.283185307178;
    Float l = (float)f;
    //stage loop:

    for (stage = 1; stage <= 3; stage++)
    {
   
     HLS_UNROLL_LOOP(ON, "loop3" );
        // Do M stages of butterflies
        DFTpts = 1 << stage; // DFT = 2ˆstage = points in sub DFT 
        numBF = DFTpts / ; // Butterfly WIDTHS in sub−DFT
        e =  l/ DFTpts;
        a = 0.0;
        // Perform butterflies for j−th stage
        //butterfly loop:
        for (j = 0; j < numBF; j++)
        {
            c = cos(a);
            s = sin(a);
            a = a + e;
            HLS_UNROLL_LOOP(ON, "loop4" );
            // Compute butterflies that use same W∗∗k
            //dft loop:
            for (i = j; i < MASK_N; i += DFTpts)
            {
                i_lower = i + numBF; // index of lower point in butterfly
                temp_R = temp_real[i_lower] * c - temp_imag[i_lower] * s;
                temp_I = temp_imag[i_lower] * c + temp_real[i_lower] * s;
                //wait();
                temp_real[i_lower] = temp_real[i] - temp_R;
                temp_imag[i_lower] = temp_imag[i] - temp_I;
                temp_real[i] = temp_real[i] + temp_R;
                temp_imag[i] = temp_imag[i] + temp_I;
            }

        }
        

    }

}


 void DFT_compute::bit_reverse_stage(Float out_real[],Float out_imag[], Float in_real[], Float in_imag[])
 {
 sc_uint<8> reversed;
    sc_uint<8> i;
    Float temp;

    for (i = 0; i < MASK_N; i++)
    {
        HLS_UNROLL_LOOP(ON,"loopx" );
        reversed = reverse_bits(i); // Find the bit reversed index
        if (i < reversed)
        {
            // Swap the real values
            temp = in_real[i];
            out_real[i] = in_real[reversed];
            out_real[reversed] = temp;

            // Swap the imaginary values
            temp = in_imag[i];
            out_imag[i] = in_imag[reversed];
            out_imag[reversed] = temp;
        }
    }
 }
 
 
  void DFT_compute::fft_stage1(Float out_real[],Float out_imag[], Float in_real[], Float in_imag[])
  {
  Float temp_R; // temporary storage complex variable
    Float temp_I; // temporary storage complex variable
    sc_uint<8> i, j; // loop indexes
    sc_uint<8> i_lower; // Index of lower point in butterfly
    unsigned char stage, DFTpts;
    sc_uint<8> numBF; // Butterfly Width
    sc_uint<8> N2 = 4; // N2=N>>1

    



    Float a, e, c, s;
    float f=-6.283185307178;
    Float l = (float)f;
    //stage loop:

   
   
     HLS_UNROLL_LOOP(ON, "loop3" );
        // Do M stages of butterflies
        DFTpts = 2; // DFT = 2ˆstage = points in sub DFT 
        numBF = DFTpts / 2; // Butterfly WIDTHS in sub−DFT
        e =  l/ DFTpts;
        a = 0.0;
        // Perform butterflies for j−th stage
        //butterfly loop:
        for (j = 0; j < numBF; j++)
        {
            c = cos(a);
            s = sin(a);
            a = a + e;
          //  HLS_UNROLL_LOOP(ON, "loop4" );
            // Compute butterflies that use same W∗∗k
            //dft loop:
            for (i = j; i < MASK_N; i += DFTpts)
            {
                i_lower = i + numBF; // index of lower point in butterfly
                temp_R = in_real[i_lower] * c - in_imag[i_lower] * s;
                temp_I = in_imag[i_lower] * c + in_real[i_lower] * s;
                //wait();
                out_real[i_lower] = in_real[i] - temp_R;
                out_imag[i_lower] = in_imag[i] - temp_I;
                out_real[i] = in_real[i] + temp_R;
                out_imag[i] = in_imag[i] + temp_I;
            }

        }
        
    
  }
  void DFT_compute::fft_stage2(Float out_real[],Float out_imag[], Float in_real[], Float in_imag[])
  {
    Float temp_R; // temporary storage complex variable
    Float temp_I; // temporary storage complex variable
    sc_uint<8> i, j; // loop indexes
    sc_uint<8> i_lower; // Index of lower point in butterfly
    unsigned char stage, DFTpts;
    sc_uint<8> numBF; // Butterfly Width
    sc_uint<8> N2 = 4; // N2=N>>1

    



    Float a, e, c, s;
    float f=-6.283185307178;
    Float l = (float)f;
    //stage loop:

   
   
     HLS_UNROLL_LOOP(ON, "loop3" );
        // Do M stages of butterflies
        DFTpts = 4; // DFT = 2ˆstage = points in sub DFT 
        numBF = DFTpts / 2; // Butterfly WIDTHS in sub−DFT
        e =  l/ DFTpts;
        a = 0.0;
        // Perform butterflies for j−th stage
        //butterfly loop:
        for (j = 0; j < numBF; j++)
        {
            c = cos(a);
            s = sin(a);
            a = a + e;
          //  HLS_UNROLL_LOOP(ON, "loop4" );
            // Compute butterflies that use same W∗∗k
            //dft loop:
            for (i = j; i < MASK_N; i += DFTpts)
            {
                i_lower = i + numBF; // index of lower point in butterfly
                temp_R = in_real[i_lower] * c - in_imag[i_lower] * s;
                temp_I = in_imag[i_lower] * c + in_real[i_lower] * s;
                //wait();
                out_real[i_lower] = in_real[i] - temp_R;
                out_imag[i_lower] = in_imag[i] - temp_I;
                out_real[i] = in_real[i] + temp_R;
                out_imag[i] = in_imag[i] + temp_I;
            }

        }
        
  }
  
  void DFT_compute::fft_stage3(Float out_real[],Float out_imag[], Float in_real[], Float in_imag[])
  {
    Float temp_R; // temporary storage complex variable
    Float temp_I; // temporary storage complex variable
    sc_uint<8> i, j; // loop indexes
    sc_uint<8> i_lower; // Index of lower point in butterfly
    unsigned char stage, DFTpts;
    sc_uint<8> numBF; // Butterfly Width
    sc_uint<8> N2 = 4; // N2=N>>1

    



    Float a, e, c, s;
    float f=-6.283185307178;
    Float l = (float)f;
    //stage loop:

   
   
     HLS_UNROLL_LOOP(ON, "loop3" );
        // Do M stages of butterflies
        DFTpts = 8; // DFT = 2ˆstage = points in sub DFT 
        numBF = DFTpts / 2; // Butterfly WIDTHS in sub−DFT
        e =  l/ DFTpts;
        a = 0.0;
        // Perform butterflies for j−th stage
        //butterfly loop:
        for (j = 0; j < numBF; j++)
        {
            c = cos(a);
            s = sin(a);
            a = a + e;
          //  HLS_UNROLL_LOOP(ON, "loop4" );
            // Compute butterflies that use same W∗∗k
            //dft loop:
            for (i = j; i < MASK_N; i += DFTpts)
            {
                i_lower = i + numBF; // index of lower point in butterfly
                temp_R = in_real[i_lower] * c - in_imag[i_lower] * s;
                temp_I = in_imag[i_lower] * c + in_real[i_lower] * s;
                //wait();
                out_real[i_lower] = in_real[i] - temp_R;
                out_imag[i_lower] = in_imag[i] - temp_I;
                out_real[i] = in_real[i] + temp_R;
                out_imag[i] = in_imag[i] + temp_I;
            }

        }
        
  }