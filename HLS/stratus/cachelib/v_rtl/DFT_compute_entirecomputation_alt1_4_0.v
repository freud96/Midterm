`timescale 1ps / 1ps
/*****************************************************************************
    Verilog RTL Description
    
    Configured at: 15:13:32 CST (+0800), Sunday 24 April 2022
    Configured on: ws45
    Configured by: m110061422 (m110061422)
    
    Created by: CellMath Designer 2019.1.01 
*******************************************************************************/

module DFT_compute_entirecomputation_alt1_4_0 (
	in1,
	out1
	); /* architecture "behavioural" */ 
input [31:0] in1;
output [35:0] out1;
wire [35:0] asc013;

assign asc013 = {in1,4'B0000};

assign out1 = asc013;
endmodule

/* CADENCE  urn0SQA= : u9/ySgnWtBlWxVPRXgAZ4Og= ** DO NOT EDIT THIS LINE ******/


