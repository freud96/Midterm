// Generated by stratus_hls 19.12-s100  (91710.131054)
// Mon Apr 25 10:42:57 2022
// from ../DFT_compute.cpp

`timescale 1ps / 1ps

      
module DFT_compute_RAM_8X1_1(DIN, CE, RW, in1, out1, clk);

      input DIN;
      input CE;
      input RW;
      input [2:0] in1;
      input clk;
      output out1;
      reg out1;
      reg[0:0] mem[7:0];

         always @(posedge clk)
          begin :DFT_compute_RAM_8X1_1_thread_1
            if (CE) begin
               if (RW) begin
                  mem[in1] = DIN;
               end
               else begin
                  out1 <= mem[in1];
               end
            end
            else begin
               out1 <= 1'b0;
            end
         end


endmodule

