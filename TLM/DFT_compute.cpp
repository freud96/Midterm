#include <iomanip>

#include "DFT_compute.h"


#define FFT_BITS 3 // Number of bits of FFT, i.e., log(1024)
#define SIZE 8 // SIZE OF FFT
#define SIZE2 MASK_N >> 1 // SIZE/2
//#define DTYPE int


DFT_compute::DFT_compute(sc_module_name n)
    : sc_module(n), t_skt("t_skt"), base_offset(0){
        SC_THREAD(computation);

        t_skt.register_b_transport(this, &DFT_compute::blocking_transport);
    }

    DFT_compute::~DFT_compute() = default;


extern struct vect buffer;

void DFT_compute::computation(){

    double temp_real[MASK_N]={0};
    double temp_imag[MASK_N]={0};
    while(true)
    {
        for(int i = 0; i<MASK_N; i++)
        {
            temp_real[i] = in_vec[i].read();
        }

        //for(int i = 0; i<MASK_N;i++)
        //{
           // sum_real[i] = 0;
            //sum_imag[i] = 0;
            //for(int j =0;j<MASK_N;j++)
            //{
              //  sum_real[i]+=real_dft_matrix[i][j]*temp_real[j];
                //sum_real[i]+=imag_dft_matrix[i][j]*temp_imag[j];
                //sum_imag[i]+=real_dft_matrix[i][j]*temp_imag[j];
               // sum_imag[i]+=imag_dft_matrix[i][j]*temp_real[j];
           // }
           // bit_reverse(temp_real, temp_imag);
            fft(temp_real,temp_imag);
          for(int i=0;i<MASK_N;i++)
          {
             out_vec_real[i].write(temp_real[i]);
            out_vec_imag[i].write(temp_imag[i]);
          }
           
        //}
       // cout<<endl;
        
        
    }
}

unsigned char DFT_compute::reverse_bits(unsigned char input)
{
  int i, rev = 0;
  for (i = 0; i < 3; i++) {
  rev = (rev << 1) | (input & 1);
  input = input >> 1;
  }
  return rev;
}


void DFT_compute::bit_reverse(double temp_real[],double temp_imag[])
{
  unsigned int reversed;
  unsigned int i;
  double temp;

  for (i = 0; i < MASK_N; i++) {
  reversed = reverse_bits(i); // Find the bit reversed index
  if (i < reversed) {
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


void DFT_compute::fft(double temp_real[],double temp_imag[])
{
  double temp_R; // temporary storage complex variable
  double temp_I; // temporary storage complex variable
  int i, j, k; // loop indexes
  int i_lower; // Index of lower point in butterfly
  int step, stage, DFTpts;
  int numBF; // Butterfly Width
  int N2 = 4; // N2=N>>1
  
  bit_reverse(temp_real, temp_imag);
  
  step = N2;
  
  double a, e, c, s;
  
  //stage loop:
  
  for (stage = 1; stage <= 3; stage++) {
    // Do M stages of butterflies
    DFTpts = 1 << stage; // DFT = 2ˆstage = points in sub DFT
    numBF = DFTpts / 2; // Butterfly WIDTHS in sub−DFT
    k = 0;
    e = -6.283185307178 / DFTpts;
    a = 0.0;
    // Perform butterflies for j−th stage
    //butterfly loop:
    for (j = 0; j < numBF; j++) {
      c = cos(a);
      s = sin(a);
      a = a + e;
      // Compute butterflies that use same W∗∗k
      //dft loop:
      for (i = j; i < MASK_N; i += DFTpts) {
        i_lower = i + numBF; // index of lower point in butterfly
        temp_R = temp_real[i_lower] * c - temp_imag[i_lower] * s;
        temp_I = temp_imag[i_lower] * c + temp_real[i_lower] * s;
        temp_real[i_lower] = temp_real[i] - temp_R;
        temp_imag[i_lower] = temp_imag[i] - temp_I;
        temp_real[i] = temp_real[i] + temp_R;
        temp_imag[i] = temp_imag[i] + temp_I;
      }

    k += step;
    }
  step = step / 2;
  }

}


void DFT_compute::blocking_transport(tlm::tlm_generic_payload &payload,
                                     sc_core::sc_time &delay) {
  sc_dt::uint64 addr = payload.get_address();
  addr -= base_offset;
  unsigned char *mask_ptr = payload.get_byte_enable_ptr();
  unsigned char * data_ptr = payload.get_data_ptr();
  
  switch (payload.get_command()) {
  case tlm::TLM_READ_COMMAND:
    switch (addr) {
    case DFT_RESULT_ADDR:
        for(int i=0;i<MASK_N;i++)
            {
                buffer.data_out[i].real(out_vec_real[i].read());
                buffer.data_out[i].imag(out_vec_imag[i].read());
            } 
      break;
    case DFT_CHECK_ADDR:        
        if(out_vec_real[0].num_available()&&out_vec_real[1].num_available()&&out_vec_real[2].num_available()&&out_vec_real[3].num_available())
            buffer.completed = true;  
  
    break;
    default:
      std::cerr << "Error! DFT_compute::blocking_transport: address 0x"
                << std::setfill('0') << std::setw(8) << std::hex << addr
                << std::dec << " is not valid" << std::endl;
    }
    data_ptr[0] = buffer.data_in[0];
    data_ptr[1] = buffer.data_in[1];
    data_ptr[2] = buffer.data_in[2];
    data_ptr[3] = buffer.data_in[3];
    data_ptr[4] = buffer.data_in[4];
    data_ptr[5] = buffer.data_in[5];
    data_ptr[6] = buffer.data_in[6];
    data_ptr[7] = buffer.data_in[7];
    break;

  case tlm::TLM_WRITE_COMMAND:
    switch (addr) {
    case DFT_MATRIX_R_ADDR:
        for(int i = 0; i<MASK_N;i++)
        {
            if(mask_ptr[i]==0xff)
            {
                in_vec[i].write(data_ptr[i]);
            }
        }
      break;
    default:
      std::cerr << "Error! DFT_compute::blocking_transport: address 0x"
                << std::setfill('0') << std::setw(8) << std::hex << addr
                << std::dec << " is not valid" << std::endl;
    }
    break;

  case tlm::TLM_IGNORE_COMMAND:
    payload.set_response_status(tlm::TLM_GENERIC_ERROR_RESPONSE);
    return;
  default:
    payload.set_response_status(tlm::TLM_GENERIC_ERROR_RESPONSE);
    return;
  }

  payload.set_response_status(tlm::TLM_OK_RESPONSE); // Always OK
}