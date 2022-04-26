`timescale 1ps / 1ps
/*****************************************************************************
    Verilog RTL Description
    
    Configured at: 11:25:24 CST (+0800), Sunday 24 April 2022
    Configured on: ws45
    Configured by: m110061422 (m110061422)
    
    Created by: CellMath Designer 2019.1.01 
*******************************************************************************/

module DFT_compute_DECODE_64U_8_4 (
	in1,
	out1
	); /* architecture "behavioural" */ 
input [5:0] in1;
output [63:0] out1;
wire [63:0] asc001;

assign asc001 = 64'B0000000000000000000000000000000000000000000000000000000000000001 << in1;

assign out1 = asc001;
endmodule

/* CADENCE  ubX4SAA= : u9/ySgnWtBlWxVPRXgAZ4Og= ** DO NOT EDIT THIS LINE ******/


