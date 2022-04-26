#ifndef DFT_MATRIX_H_
#define DFT_MATRIX_H_

#include <complex>
using namespace std;

#include <cmath>
const int MASK_N = 8;

const int DFT_MATRIX_R_ADDR = 0x00000000;
const int DFT_RESULT_ADDR = 0x00000004;
const int DFT_CHECK_ADDR = 0x00000008;


struct vect {
  bool completed;
  complex<double> data_out[MASK_N];
  unsigned char data_in[MASK_N];

  vect()
  {
      completed =false;
      for(int i = 0;i<MASK_N;i++)
      {
          data_out[i] = {0,0};
          data_in[i] = 0;
      }
  }
};



const double real_dft_matrix[MASK_N][MASK_N] = {{1, 1,  1,  1,  1,  1,  1,  1},
                                                {1, sqrt(2)/2,  0,  -sqrt(2)/2, -1, -sqrt(2)/2,  0,  sqrt(2)/2},
                                                {1, 0,  -1,  0, 1,  0,  -1,  0},
                                                {1, -sqrt(2)/2,  0,  sqrt(2)/2, -1, sqrt(2)/2,  0,  -sqrt(2)/2},
                                                {1, -1,  1,  -1,  1,  -1,  1,  -1},
                                                {1, -sqrt(2)/2,  0,  sqrt(2)/2, -1, sqrt(2)/2,  0,  -sqrt(2)/2},
                                                {1, 0,  -1,  0, 1,  0,  -1,  0},
                                                {1, sqrt(2)/2,  0,  -sqrt(2)/2, -1, -sqrt(2)/2,  0,  sqrt(2)/2}};



const double imag_dft_matrix[MASK_N][MASK_N] = {{0, 0,  0,  0,  0,  0,  0,  0},
                                                {0, -sqrt(2)/2,  -1,  -sqrt(2)/2, 0, sqrt(2)/2,  1,  sqrt(2)/2},
                                                {0, -1,  0,  1,  0,  -1,  0,  1},
                                                {0, -sqrt(2)/2,  1.0,  -sqrt(2)/2, 0, sqrt(2)/2,  -1.0,  sqrt(2)/2},
                                                {0, 0,  0,  0,  0,  0,  0,  0},
                                                {0, sqrt(2)/2,  -1,  sqrt(2)/2, 0, -sqrt(2)/2,  1,  -sqrt(2)/2},
                                                {0, 1,  0,  -1,  0,  1,  0,  -1},
                                                {0, sqrt(2)/2,  1,  sqrt(2)/2, 0, -sqrt(2)/2,  -1,  -sqrt(2)/2}};


#endif