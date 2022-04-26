`timescale 1ps / 1ps

// Generated by Cadence Genus(TM) Synthesis Solution 17.11-s014_1
// Generated on: Apr 24 2022 11:25:17 CST (Apr 24 2022 03:25:17 UTC)

module DFT_compute_Add_3Ux1U_4U_1(in2, in1, out1);
  input [2:0] in2;
  input in1;
  output [3:0] out1;
  wire [2:0] in2;
  wire in1;
  wire [3:0] out1;
  wire inc_add_23_2_n_0, inc_add_23_2_n_1, inc_add_23_2_n_2,
       inc_add_23_2_n_3, inc_add_23_2_n_5;
  MXI2X1 inc_add_23_2_g30(.A (inc_add_23_2_n_1), .B (in2[2]), .S0
       (inc_add_23_2_n_5), .Y (out1[2]));
  NOR3BX1 inc_add_23_2_g31(.AN (in2[1]), .B (inc_add_23_2_n_1), .C
       (inc_add_23_2_n_3), .Y (out1[3]));
  MXI2XL inc_add_23_2_g32(.A (in2[1]), .B (inc_add_23_2_n_0), .S0
       (inc_add_23_2_n_3), .Y (out1[1]));
  NOR2X2 inc_add_23_2_g33(.A (inc_add_23_2_n_0), .B (inc_add_23_2_n_3),
       .Y (inc_add_23_2_n_5));
  MXI2XL inc_add_23_2_g34(.A (inc_add_23_2_n_2), .B (in2[0]), .S0
       (in1), .Y (out1[0]));
  NAND2X8 inc_add_23_2_g35(.A (in2[0]), .B (in1), .Y
       (inc_add_23_2_n_3));
  INVX1 inc_add_23_2_g36(.A (in2[0]), .Y (inc_add_23_2_n_2));
  INVX1 inc_add_23_2_g37(.A (in2[2]), .Y (inc_add_23_2_n_1));
  INVX1 inc_add_23_2_g38(.A (in2[1]), .Y (inc_add_23_2_n_0));
endmodule


