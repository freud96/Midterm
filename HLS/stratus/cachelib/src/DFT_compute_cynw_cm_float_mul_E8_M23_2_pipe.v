module DFT_compute_cynw_cm_float_mul_E8_M23_2( a_sign, a_exp, a_man, b_sign, b_exp, b_man, x, aclk, astall );
input aclk;
input astall;
input a_sign;
input [7:0] a_exp;
input [22:0] a_man;
input b_sign;
input [7:0] b_exp;
input [22:0] b_man;
output [31:0] x;
wire[31:0] x_wire;
DFT_compute_cynw_cm_float_mul_E8_M23_1 DFT_compute_cynw_cm_float_mul_E8_M23_1_inst( .a_sign(a_sign), .a_exp(a_exp), .a_man(a_man), .b_sign(b_sign), .b_exp(b_exp), .b_man(b_man), .x(x_wire));
wire bdw_enable;
assign bdw_enable = ~astall;
rreg #( 32, 5, 32, 1) x_reg( x_wire, {1'B1, 1'B1, 1'B1, bdw_enable,aclk}, x );
endmodule


