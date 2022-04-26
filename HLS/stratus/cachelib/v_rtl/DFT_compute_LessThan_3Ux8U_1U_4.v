`timescale 1ps / 1ps
/*****************************************************************************
    Verilog RTL Description
    
    Configured at: 12:09:52 CST (+0800), Sunday 24 April 2022
    Configured on: ws45
    Configured by: m110061422 (m110061422)
    
    Created by: CellMath Designer 2019.1.01 
*******************************************************************************/

module DFT_compute_LessThan_3Ux8U_1U_4 (
	in2,
	in1,
	out1
	); /* architecture "behavioural" */ 
input [2:0] in2;
input [7:0] in1;
output  out1;
wire  asc001;

assign asc001 = (in1>in2);

assign out1 = asc001;
endmodule

/* CADENCE  ubDxSQ4= : u9/ySgnWtBlWxVPRXgAZ4Og= ** DO NOT EDIT THIS LINE ******/


