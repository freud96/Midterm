`timescale 1ps / 1ps
/*****************************************************************************
    Verilog RTL Description
    
    Configured at: 15:08:14 CST (+0800), Sunday 24 April 2022
    Configured on: ws45
    Configured by: m110061422 (m110061422)
    
    Created by: CellMath Designer 2019.1.01 
*******************************************************************************/

module DFT_compute_entirecomputation_alt5_4 (
	in1,
	in2,
	out1
	); /* architecture "behavioural" */ 
input  in1;
input [31:0] in2;
output [32:0] out1;
wire  asc009;
wire [32:0] asc010;

assign asc009 = 
	((~in1));

assign asc010 = {in2,asc009};

assign out1 = asc010;
endmodule

/* CADENCE  ubPyQw0= : u9/ySgnWtBlWxVPRXgAZ4Og= ** DO NOT EDIT THIS LINE ******/


