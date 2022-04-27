Written by Freud L. Lewis Piercius, student ID: 110061422

Midterm Project report

**Introduction**
    Fast Fourier transform is an algorithm that computes the Discrete Fourier Transform(DTF) or its inverse(IDFT) of a sequence. As widely used in a range of fields especially Signal Processing, we were motivated to design FFT. FFT, compares to direct DFT computes the transformation rapidly by factorizing the Discrete Fourier Transform matrix into a product of sparse factor. The objective of this project is to use TLM platform to implement a hardware module with fixed kernel that will compute the DFT of a non negative integer coming from a software(testbench), as well as using HLS to synthesize the hardware module.
    
    
    
 **FFT Algorithm**
    The FFT algorithm structure is shown in https://github.com/freud96/Midterm/blob/main/FFT%20archit.JPG, it decomposes a N-point FFT into half-size's. Our job is to design an 8-points FFT, the size is Fixed, the design cannot handle to transform larger or smaller number of input vector. Our design is divided into 4 stages; The first stage takes the input vector and seperate it so that entries that will have same matrix multiplication are grouped in one half. The formula to find kth and kth+ N/2 of the output vector can be found in https://github.com/freud96/Midterm/blob/main/formula%20fft.JPG and https://github.com/freud96/Midterm/blob/main/fft%20form2.JPG respectively. the second stages is where the FFt computation really start; each stage has 2^stage DFT points and 2^stage/2 number of butterflies, see https://github.com/freud96/Midterm/blob/main/fft%20stages.JPG for reference. 
 
 
**TLM Platform and HLS' systemC code**
    For the TLM platform the architecture can be found at https://github.com/freud96/Midterm/blob/main/model%20architecture.png, the tesbench served  as software will generate vector input, there can be M number of vector. The testbench is connected to the simple bus' target socket by its initial socket, the simple bus is then  connected to the DFT_compute module's target socket by its single port initial socket.
    The hardware module, for the HLS platform, is connected to the hardware through stratus' point-to-point (cynw_p2p). One output vector from the hardware, one input vector to the hardware, the system is run at time clk, see figure at https://github.com/freud96/Midterm/blob/main/HLS_architecture.JPG. 
    We used single precision floating point data despite it make the hardware super large and it takes more time to compute. Adjustment to used Fixed-point instead will be made to be then compared to its counterpart. We try to use sc_uint<T> as much as possible as to reduce the total area.  
    


**Synthesis result**
    For one vector input, we conducted different type of hardware optimizations, Loop unrolling, Loop pipelining, and Dpopt; for loop unrolling we applied it to almost every where there is a loop while Pipelining could be only apply to the first stage of the design. Following table at (https://github.com/freud96/Midterm/blob/main/Result.JPG shows the total simulated time and area gotten for each optimization type and basic. 
    As it can be seen, the smaller area is DPA, while BASIC's becomes second to it. Pipelining although lowered the total running time, it could not be lower than unrolling which in our case shows a better performance. We should also note that everything in the design has more or less an important impact on the latency and area. The main reason why unrolling shows better perfomance than all it's because we're having floating point as data type, therefore it requires additional stalling if we want to optimize it by constraining the latency. The fact that latency constraint was not applied plays a big role in the slowness of Dpopt, as well as Pipeline  together with unrolling, which would have been different if the data we were dealing with was Fixed point. 
    The problem we had with Fixed point was the accuracy of the output complex vector was low. Hence, we leave this for future work. 


 
