`timescale 1ps / 1ps
/*****************************************************************************
    Verilog RTL Description
    
    Configured at: 14:16:31 CST (+0800), Sunday 24 April 2022
    Configured on: ws45
    Configured by: m110061422 (m110061422)
    
    Created by: CellMath Designer 2019.1.01 
*******************************************************************************/

module DFT_compute_gen_busy_r_1_0 (
	in1,
	in2,
	in3,
	in4,
	out1
	); /* architecture "behavioural" */ 
input  in1,
	in2,
	in3,
	in4;
output [2:0] out1;
wire  asc005,
	asc006,
	asc008,
	asc011,
	asc012,
	asc015;
wire [2:0] asc016;

assign asc006 = 
	(in1)
	|(in4);

assign asc005 = 
	(in2)
	&(asc006);

assign asc008 = 
	(asc005)
	|(in3);

assign asc012 = 
	(in4)
	&((~asc005));

assign asc011 = 
	(asc012)
	|(in3);

assign asc015 = 
	((~asc011));

assign asc016 = {asc008,asc011,asc015};

assign out1 = asc016;
endmodule

/* CADENCE  v7n0Tgo= : u9/ySgnWtBlWxVPRXgAZ4Og= ** DO NOT EDIT THIS LINE ******/


