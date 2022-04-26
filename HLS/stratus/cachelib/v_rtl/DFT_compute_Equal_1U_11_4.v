`timescale 1ps / 1ps
/*****************************************************************************
    Verilog RTL Description
    
    Configured at: 11:25:22 CST (+0800), Sunday 24 April 2022
    Configured on: ws45
    Configured by: m110061422 (m110061422)
    
    Created by: CellMath Designer 2019.1.01 
*******************************************************************************/

module DFT_compute_Equal_1U_11_4 (
	in1,
	out1
	); /* architecture "behavioural" */ 
input [4:0] in1;
output  out1;
wire  asc001;

assign asc001 = (10'B0000000000==in1);

assign out1 = asc001;
endmodule

/* CADENCE  urfxTwk= : u9/ySgnWtBlWxVPRXgAZ4Og= ** DO NOT EDIT THIS LINE ******/


