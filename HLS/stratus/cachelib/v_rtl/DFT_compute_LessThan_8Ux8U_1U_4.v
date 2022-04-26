`timescale 1ps / 1ps
/*****************************************************************************
    Verilog RTL Description
    
    Configured at: 11:18:44 CST (+0800), Sunday 24 April 2022
    Configured on: ws45
    Configured by: m110061422 (m110061422)
    
    Created by: CellMath Designer 2019.1.01 
*******************************************************************************/

module DFT_compute_LessThan_8Ux8U_1U_4 (
	in2,
	in1,
	out1
	); /* architecture "behavioural" */ 
input [7:0] in2,
	in1;
output  out1;
wire  asc001;

assign asc001 = (in1>in2);

assign out1 = asc001;
endmodule

/* CADENCE  urfzQgk= : u9/ySgnWtBlWxVPRXgAZ4Og= ** DO NOT EDIT THIS LINE ******/


