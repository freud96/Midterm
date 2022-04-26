#include <cstdio>
#include <cstdlib>
using namespace std;
#include <fstream>
using std::ofstream;
#include "Testbench.h"
using std::cerr;
using std::endl;

Testbench::Testbench(sc_module_name n)
    : sc_module(n), initiator("initiator"){
        SC_THREAD(dft);
    }

Testbench::~Testbench(){}


void Testbench::generate_vector()
{
    srand (time(NULL));/* initialize random seed: */

    //randomly generated vector(value from 0 to 15), only real value will be issued
    for(int j = 0; j<MAX_nbr_vector; j++)
    {
        int k =1;
        for(int i=0;i<MASK_N;i+=2)
        {
            vec_in[j][i] = k;//rand()%16;
            vec[j][i].real(vec_in[j][i]);
             k++;
        }
            k=1;
        for(int i=1;i<MASK_N;i+=2)
        {
            vec_in[j][i] = k;//rand()%16;
            vec[j][i].real(vec_in[j][i]);
             k++;
        }
       
    }

}

void Testbench::output(string outfile_name)
{
    ofstream outdata;
    outdata.open(outfile_name); // opens the file
    if( !outdata )   // file couldn't be opened
    {
        cerr << "Error: file could not be opened" << endl;
        exit(1);
    }

    cout<<"\nVector input "<<endl;
    for(int i=0; i<MASK_N;i++)
    {
        cout<<vec[0][i]<<" ";
    }

    cout<<"\nOutput after computation "<<endl;
    for(int i=0; i<MASK_N;i++)
    {
        cout<<vec_out[0][i]<<" ";
    }

    cout<<endl;

    outdata<<"vector input\t\t\t\t\t\t\t\t\t"<<"DFT vector"<<endl;
    for(int j =0;j<MAX_nbr_vector;j++)
    {
        //cout<<res[i]<<endl;
        outdata<<"("<<vec[j][0]<<", "<<vec[j][1]<<", "<<vec[j][2]<<", "<<vec[j][3]<<", "<<vec[j][4]<<", "<<vec[j][5]<<", "<<vec[j][6]<<", "<<vec[j][7]<<")\t\t\t";
        outdata<<"("<<vec_out[j][0]<<", "<<vec_out[j][1]<<", "<<vec_out[j][2]<<", "<<vec_out[j][3]<<", "<<vec_out[j][4]<<", "<<vec_out[j][5]<<", "<<vec_out[j][6]<<", "<<vec_out[j][7]<<")"<<endl;
        outdata<<endl;
    }
}

struct vect buffer;

void Testbench::dft(){

    unsigned char mask[8];
    for(int j=0;j<MAX_nbr_vector;j++)
    {
        
       
       for(int i = 0; i<MASK_N;i++)
       {
            buffer.data_in[i] = vec_in[j][i];
            mask[i] = 0xff;
       }
        

        initiator.write_to_socket(DFT_MM_BASE + DFT_MATRIX_R_ADDR,mask,buffer.data_in,8);
        wait(1 * CLOCK_PERIOD, SC_NS);

    
        bool done = false;
        while(!done)
        {
            initiator.read_from_socket(DFT_MM_BASE + DFT_CHECK_ADDR, mask, buffer.data_in, 8);
            if(buffer.completed) done = true;
        }
        wait(1*CLOCK_PERIOD, SC_NS);

    
        initiator.read_from_socket(DFT_MM_BASE + DFT_RESULT_ADDR, mask,
                                   buffer.data_in, 8);
    
        
        for(int i=0;i<MASK_N;i++)
        {
            vec_out[j][i] = buffer.data_out[i];
        }
    }
    sc_stop();
}