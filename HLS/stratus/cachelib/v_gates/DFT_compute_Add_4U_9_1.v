`timescale 1ps / 1ps

// Generated by Cadence Genus(TM) Synthesis Solution 17.11-s014_1
// Generated on: Apr 24 2022 16:17:31 CST (Apr 24 2022 08:17:31 UTC)

module DFT_compute_Add_4U_9_1(in1, out1);
  input [2:0] in1;
  output [3:0] out1;
  wire [2:0] in1;
  wire [3:0] out1;
  wire inc_add_21_2_n_0, inc_add_21_2_n_1, inc_add_21_2_n_2;
  INVX1 g4(.A (in1[0]), .Y (out1[0]));
  MXI2X1 inc_add_21_2_g30(.A (in1[2]), .B (inc_add_21_2_n_1), .S0
       (inc_add_21_2_n_2), .Y (out1[2]));
  NOR2X1 inc_add_21_2_g31(.A (inc_add_21_2_n_1), .B (inc_add_21_2_n_2),
       .Y (out1[3]));
  MXI2XL inc_add_21_2_g32(.A (inc_add_21_2_n_0), .B (in1[1]), .S0
       (in1[0]), .Y (out1[1]));
  NAND2X8 inc_add_21_2_g33(.A (in1[1]), .B (in1[0]), .Y
       (inc_add_21_2_n_2));
  INVX1 inc_add_21_2_g34(.A (in1[2]), .Y (inc_add_21_2_n_1));
  INVX1 inc_add_21_2_g35(.A (in1[1]), .Y (inc_add_21_2_n_0));
endmodule


