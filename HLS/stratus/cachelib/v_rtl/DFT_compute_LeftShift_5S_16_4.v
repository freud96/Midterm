`timescale 1ps / 1ps
/*****************************************************************************
    Verilog RTL Description
    
    Configured at: 16:17:28 CST (+0800), Sunday 24 April 2022
    Configured on: ws45
    Configured by: m110061422 (m110061422)
    
    Created by: CellMath Designer 2019.1.01 
*******************************************************************************/

module DFT_compute_LeftShift_5S_16_4 (
	in1,
	out1
	); /* architecture "behavioural" */ 
input [1:0] in1;
output [4:0] out1;
wire [4:0] asc001;

assign asc001 = 5'B00001 << in1;

assign out1 = asc001;
endmodule

/* CADENCE  urj0Qwk= : u9/ySgnWtBlWxVPRXgAZ4Og= ** DO NOT EDIT THIS LINE ******/


