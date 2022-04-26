`timescale 1ps / 1ps
/*****************************************************************************
    Verilog RTL Description
    
    Configured at: 15:29:05 CST (+0800), Sunday 24 April 2022
    Configured on: ws45
    Configured by: m110061422 (m110061422)
    
    Created by: CellMath Designer 2019.1.01 
*******************************************************************************/

module DFT_compute_DECODE_128U_14_4 (
	in1,
	out1
	); /* architecture "behavioural" */ 
input [6:0] in1;
output [127:0] out1;
wire [127:0] asc001;

assign asc001 = 128'B00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001
    << in1;

assign out1 = asc001;
endmodule

/* CADENCE  uLP1Sgo= : u9/ySgnWtBlWxVPRXgAZ4Og= ** DO NOT EDIT THIS LINE ******/


