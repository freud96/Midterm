`timescale 1ps / 1ps
/*****************************************************************************
    Verilog RTL Description
    
    Configured at: 15:29:03 CST (+0800), Sunday 24 April 2022
    Configured on: ws45
    Configured by: m110061422 (m110061422)
    
    Created by: CellMath Designer 2019.1.01 
*******************************************************************************/

module DFT_compute_Equal_1U_11_4_0 (
	in1,
	out1
	); /* architecture "behavioural" */ 
input [5:0] in1;
output  out1;
wire  asc001;

assign asc001 = (11'B00000000000==in1);

assign out1 = asc001;
endmodule

/* CADENCE  urjwTAs= : u9/ySgnWtBlWxVPRXgAZ4Og= ** DO NOT EDIT THIS LINE ******/


