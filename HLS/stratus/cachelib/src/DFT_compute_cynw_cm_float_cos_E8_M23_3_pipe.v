module DFT_compute_cynw_cm_float_cos_E8_M23_3( a_sign, a_exp, a_man, x, aclk, astall );
input aclk;
input astall;
input a_sign;
input [7:0] a_exp;
input [22:0] a_man;
output [36:0] x;
wire[36:0] x_wire;
DFT_compute_cynw_cm_float_cos_E8_M23_2 DFT_compute_cynw_cm_float_cos_E8_M23_2_inst( .a_sign(a_sign), .a_exp(a_exp), .a_man(a_man), .x(x_wire));
wire bdw_enable;
assign bdw_enable = ~astall;
rreg #( 37, 5, 37, 1) x_reg( x_wire, {1'B1, 1'B1, 1'B1, bdw_enable,aclk}, x );
endmodule


