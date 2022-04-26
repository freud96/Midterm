#include <cstdio>
#include <cstdlib>
using namespace std;

#include "Testbench.h"
#include <fstream>
#include <esc.h>                // for the latency logging functions
using std::ofstream;


// use a queue to hold the time that each sample was sent
// for latency calculations
#include <queue>
static std::queue<sc_time> time_queue;

Testbench::Testbench(sc_module_name n) : sc_module(n) {
  SC_THREAD(data_to_dft);
  //set_stack_size(0x64000);
  sensitive << i_clk.pos();
  dont_initialize();
  SC_THREAD(write_result);
  sensitive << i_clk.pos();
  dont_initialize();
}

Testbench::~Testbench() {
	//cout<< "Max txn time = " << max_txn_time << endl;
	//cout<< "Min txn time = " << min_txn_time << endl;
	//cout<< "Avg txn time = " << total_txn_time/n_txn << endl;
	cout << "Total run time = " << total_run_time << endl;
}

void Testbench::generate_vector()
{
    srand (time(NULL));/* initialize random seed: */

    //randomly generated vector(value from 0 to 15), only real value will be issued
    for(int j = 0; j<MAX_NBR_VECTOR; j++)
    {
   int k =1;
        for(int i=0;i<MASK_N;i+=2)
        {
            vec_in[j][i] = k;//rand()%16;
            vec_in[j][i+1] = k;
            vec[j][i].real(vec_in[j][i]);
            vec[j][i+1].real(vec_in[j][i]);
k++;
        }
    }

}

int Testbench::output(string outfile_name)
{
    ofstream outdata;
    outdata.open(outfile_name.c_str()); // opens the file
  
    if( !outdata )   // file couldn't be opened
    {
        cerr << "Error: file could not be opened" << endl;
        exit(1);
    }
    
    outdata<<"vector input\t\t\t\t\t\t\t\t\t"<<"DFT vector"<<endl;
    for(int j =0;j<MAX_NBR_VECTOR;j++)
    {
        //cout<<res[i]<<endl;
        //printf("\n\n\nVAlueeee    %d\n",vec[j][0]);
       // fprintf(fp_t, "%d, %d, %f, %f, %f, %f, %f, %f", vec[j][0].real(),vec[j][1].real(),vec[j][2].real(),vec[j][3].real(),vec[j][4].real(),vec[j][5].real(),vec[j][6].real(),vec[j][7].real() );
        outdata<<"("<<vec[j][0]<<", "<<vec[j][1]<<", "<<vec[j][2]<<", "<<vec[j][3]<<", "<<vec[j][4]<<", "<<vec[j][5]<<", "<<vec[j][6]<<", "<<vec[j][7]<<")\t\t\t";
        outdata<<"("<<vec_out[j][0]<<", "<<vec_out[j][1]<<", "<<vec_out[j][2]<<", "<<vec_out[j][3]<<", "<<vec_out[j][4]<<", "<<vec_out[j][5]<<", "<<vec_out[j][6]<<", "<<vec_out[j][7]<<")"<<endl;
        outdata<<endl;
    }
}



void Testbench::data_to_dft() {
	n_txn = 0;
	max_txn_time = SC_ZERO_TIME;
	min_txn_time = SC_ZERO_TIME;
	total_txn_time = SC_ZERO_TIME;

#ifndef NATIVE_SYSTEMC
  o_real.reset();
#endif
	o_rst.write(false);
	wait(5);
	o_rst.write(true);
	wait(1);
	total_start_time = sc_time_stamp();
 
 for(int i = 0; i<MAX_NBR_VECTOR; i++)
 {
   
   #ifndef NATIVE_SYSTEMC
   for(unsigned int j = 0; j<MASK_N;j++)
   {
     o_real.put(vec_in[i][j]);
   }
   #else
   for(unsigned int j = 0; j<MASK_N;j++)
   {
   
     o_real[j].write(vec_in[i][j]);
   }
   time_queue.push( sc_time_stamp() );
   #endif
   
 }
 
}

void Testbench::write_result() {
  unsigned int i; // for loop counter
#ifndef NATIVE_SYSTEMC
    i_real.reset();
    i_imag.reset();
#endif
	wait(20);
	wait(1);
  unsigned long total_latency = 0;
 for(i = 0;i<MAX_NBR_VECTOR;i++)
 {
#ifndef NATIVE_SYSTEMC
  for(int j=0;j<MASK_N;j++)
  {
    Float real = i_real.get();
    Float imag = i_imag.get();
    vec_out[i][j].real(real.to_float());
    vec_out[i][j].imag(imag.to_float());
    //cout<<vec_out[i][j]<<endl;
  }   
#else
for(int j=0;j<MASK_N;j++)
  {
    vec_out[i][j].real(i_real[j].read().to_float());
    vec_out[i][j].imag(i_imag[j].read().to_float());
  }
#endif

        sc_time sent_time( time_queue.front() );
        time_queue.pop();
        unsigned long latency = clock_cycle( sc_time_stamp() - sent_time );
        total_latency += latency;
        //cout << "Latency for sample " << i << " is " <<  latency << endl;

}

    unsigned long average_latency = (total_latency / MAX_NBR_VECTOR) + 1;
    esc_log_latency( "DFT_compute", average_latency, "average_latency" );
    //cout << "Testbench write thread read " << MAX_NBR_VECTOR << " values. Average latency " << average_latency << "." << endl;

  	total_run_time = sc_time_stamp() - total_start_time;
 
  sc_stop();
}



int Testbench::clock_cycle( sc_time time )
{
    sc_clock * clk_p = DCAST < sc_clock * >( i_clk.get_interface() );
    sc_time clock_period = clk_p->period(); // get period from the sc_clock object.
    return ( int )( time / clock_period );

}
