/*****************************************************************************
    Verilog Hierarchical Gate Level Netlist
    
    Configured at: 11:19:40 CST (+0800), Sunday 24 April 2022
    Configured on: ws45
    Configured by: m110061422 (m110061422)
    
    Created by: CellMath Designer 2019.1.01 
*******************************************************************************/
/*****************************************************************************
    Technology library details
    
    name: slow_vdd1v2
    file name(s):
            /usr/cadtool/cadence/STRATUS/cur/tools.lnx86/cellmath/libs/generic.lbf
            /usr/cadtool/cadence/STRATUS/cur/tools.lnx86/cellmath/libs/gencount.lbf
            /usr/cadtool/cadence/STRATUS/STRATUS_19.12.100/share/stratus/techlibs/GPDK045/gsclib045_svt_v4.4/gsclib045/timing/slow_vdd1v2_basicCells.lib
    No wireload model
    op condition: PVT_1P08V_125C
*****************************************************************************/

module DFT_compute_cynw_cm_float_add2_E8_M23_0 (
	a_sign,
	a_exp,
	a_man,
	b_sign,
	b_exp,
	b_man,
	x
	); /* architecture "gate_level" */ 
input  a_sign;
input [7:0] a_exp;
input [22:0] a_man;
input  b_sign;
input [7:0] b_exp;
input [22:0] b_man;
output [31:0] x;
wire  inst_cellmath__20,
	inst_cellmath__21,
	inst_cellmath__23,
	inst_cellmath__24,
	inst_cellmath__27,
	inst_cellmath__28,
	inst_cellmath__29,
	inst_cellmath__30,
	inst_cellmath__31,
	inst_cellmath__32;
wire [24:0] inst_cellmath__39;
wire [7:0] inst_cellmath__40;
wire [8:0] inst_cellmath__43,
	inst_cellmath__44;
wire [7:0] inst_cellmath__47;
wire [24:0] inst_cellmath__48,
	inst_cellmath__49;
wire  inst_cellmath__50;
wire [25:0] inst_cellmath__51;
wire  inst_cellmath__52;
wire [5:0] inst_delta;
wire [24:0] inst_cellmath__55;
wire [25:0] inst_cellmath__56;
wire  inst_cellmath__62;
wire [24:0] inst_cellmath__63;
wire [7:0] inst_cellmath__66;
wire  inst_cellmath__69,
	inst_cellmath__72,
	inst_cellmath__73,
	inst_cellmath__77;
wire N417,N418,N419,N420,N421,N422,N423 
	,N424,N425,N426,N427,N428,N429,N430,N431 
	,N432,N433,N434,N435,N436,N437,N438,N439 
	,N440,N441,N442,N443,N444,N445,N446,N447 
	,N448,N449,N450,N451,N452,N453,N454,N455 
	,N456,N457,N458,N459,N460,N461,N462,N463 
	,N464,N465,N466,N467,N468,N469,N470,N471 
	,N472,N473,N474,N475,N476,N477,N478,N479 
	,N480,N481,N482,N483,N484,N485,N486,N487 
	,N488,N489,N490,N491,N492,N493,N494,N495 
	,N496,N497,N498,N499,N500,N501,N502,N503 
	,N504,N505,N506,N507,N509,N510,N511,N512 
	,N513,N514,N515,N516,N517,N522,N523,N524 
	,N525,N526,N527,N528,N529,N530,N531,N532 
	,N533,N534,N535,N536,N537,N538,N539,N540 
	,N541,N542,N543,N544,N545,N546,N575,N576 
	,N577,N578,N579,N580,N581,N582,N583,N584 
	,N585,N586,N587,N588,N589,N590,N591,N592 
	,N593,N594,N595,N596,N597,N2396,N2397,N3781 
	,N3782;
INVX1 cynw_cm_float_add2_I0 (.Y(N500), .A(a_exp[0]));
INVX2 cynw_cm_float_add2_I1 (.Y(N501), .A(a_exp[1]));
INVX2 cynw_cm_float_add2_I2 (.Y(N502), .A(a_exp[2]));
CLKINVX8 cynw_cm_float_add2_I3 (.Y(N503), .A(a_exp[3]));
INVX2 cynw_cm_float_add2_I4 (.Y(N504), .A(a_exp[4]));
INVX3 cynw_cm_float_add2_I5 (.Y(N505), .A(a_exp[5]));
INVX2 cynw_cm_float_add2_I6 (.Y(N506), .A(a_exp[6]));
INVX3 cynw_cm_float_add2_I7 (.Y(N507), .A(a_exp[7]));
cynw_cm_float_add2_inst_cellmath__43_1_bdw2915265522_bdw cynw_cm_float_add2_I9 (.inst_cellmath__43_1_out0({inst_cellmath__44[8], inst_cellmath__44[7], inst_cellmath__44[6], inst_cellmath__44[5], inst_cellmath__44[4], inst_cellmath__44[3], inst_cellmath__44[2], inst_cellmath__44[1], inst_cellmath__44[0]}), .inst_cellmath__43_1_out1({N517, N516, N515, N514, N513, N512, N511, N510, N509}), .inst_cellmath__43_1_in0({1'B1, N507, N506, N505, N504, N503, N502, N501, N500}), .inst_cellmath__43_1_in1({b_exp[7], b_exp[6], b_exp[5], b_exp[4], b_exp[3], b_exp[2], b_exp[1], b_exp[0]}));
INVX1 cynw_cm_float_add2_I10 (.Y(inst_cellmath__43[8]), .A(N517));
cynw_cm_float_add2_inst_cellmath__48__10__bdw2915265522_bdw cynw_cm_float_add2_I11 (.inst_cellmath__48__10__out0({inst_cellmath__48[23], inst_cellmath__48[22], inst_cellmath__48[21], inst_cellmath__48[20], inst_cellmath__48[19], inst_cellmath__48[18], inst_cellmath__48[17], inst_cellmath__48[16], inst_cellmath__48[15], inst_cellmath__48[14], inst_cellmath__48[13], inst_cellmath__48[12], inst_cellmath__48[11], inst_cellmath__48[10], inst_cellmath__48[9], inst_cellmath__48[8], inst_cellmath__48[7], inst_cellmath__48[6], inst_cellmath__48[5], inst_cellmath__48[4], inst_cellmath__48[3], inst_cellmath__48[2], inst_cellmath__48[1]}), .inst_cellmath__48__10__in0({inst_cellmath__43[8]}), .inst_cellmath__48__10__in1({b_man[22], b_man[21], b_man[20], b_man[19], b_man[18], b_man[17], b_man[16], b_man[15], b_man[14], b_man[13], b_man[12], b_man[11], b_man[10], b_man[9], b_man[8], b_man[7], b_man[6], b_man[5], b_man[4], b_man[3], b_man[2], b_man[1], b_man[0]}), .inst_cellmath__48__10__in2({a_man[22], a_man[21], a_man[20], a_man[19], a_man[18], a_man[17], a_man[16], a_man[15], a_man[14], a_man[13], a_man[12], a_man[11], a_man[10], a_man[9], a_man[8], a_man[7], a_man[6], a_man[5], a_man[4], a_man[3], a_man[2], a_man[1], a_man[0]}));
cynw_cm_float_add2_inst_cellmath__28__5__bdw2915265522_bdw cynw_cm_float_add2_I12 (.inst_cellmath__28__5__out0(inst_cellmath__28), .inst_cellmath__28__5__in0({a_exp[7], a_exp[6], a_exp[5], a_exp[4], a_exp[3], a_exp[2], a_exp[1], N3782}));
cynw_cm_float_add2_inst_cellmath__31__7__bdw2915265522_bdw cynw_cm_float_add2_I13 (.inst_cellmath__31__7__out0(inst_cellmath__31), .inst_cellmath__31__7__in0({b_exp[7], b_exp[6], b_exp[5], b_exp[4], b_exp[3], b_exp[2], b_exp[1], b_exp[0]}));
cynw_cm_float_add2_inst_cellmath__38__13__bdw2915265522_bdw cynw_cm_float_add2_I14 (.inst_cellmath__38__13__out0({N597, N596, N595, N594, N593, N592, N591, N590, N589, N588, N587, N586, N585, N584, N583, N582, N581, N580, N579, N578, N577, N576, N575}), .inst_cellmath__38__13__in0({inst_cellmath__43[8]}), .inst_cellmath__38__13__in1({b_man[22], b_man[21], b_man[20], b_man[19], b_man[18], b_man[17], b_man[16], b_man[15], b_man[14], b_man[13], b_man[12], b_man[11], b_man[10], b_man[9], b_man[8], b_man[7], b_man[6], b_man[5], b_man[4], b_man[3], b_man[2], b_man[1], b_man[0]}), .inst_cellmath__38__13__in2({a_man[22], a_man[21], a_man[20], a_man[19], a_man[18], a_man[17], a_man[16], a_man[15], a_man[14], a_man[13], a_man[12], a_man[11], a_man[10], a_man[9], a_man[8], a_man[7], a_man[6], a_man[5], a_man[4], a_man[3], a_man[2], a_man[1], a_man[0]}));
cynw_cm_float_add2_inst_cellmath__30_0_bdw2915265522_bdw cynw_cm_float_add2_I15 (.inst_cellmath__30_0_out0(inst_cellmath__30), .inst_cellmath__30_0_in0({b_exp[7], b_exp[6], b_exp[5], b_exp[4], b_exp[3], b_exp[2], b_exp[1], b_exp[0]}));
cynw_cm_float_add2_inst_cellmath__32__8__bdw2915265522_bdw cynw_cm_float_add2_I16 (.inst_cellmath__32__8__out0(inst_cellmath__32), .inst_cellmath__32__8__in0({b_man[22], b_man[21], b_man[20], b_man[19], b_man[18], b_man[17], b_man[16], b_man[15], b_man[14], b_man[13], b_man[12], b_man[11], b_man[10], b_man[9], b_man[8], b_man[7], b_man[6], b_man[5], b_man[4], b_man[3], b_man[2], b_man[1], b_man[0]}));
cynw_cm_float_add2_inst_cellmath__24_0_bdw2915265522_bdw cynw_cm_float_add2_I17 (.inst_cellmath__24_0_out0(inst_cellmath__24), .inst_cellmath__24_0_in0(inst_cellmath__32), .inst_cellmath__24_0_in1(inst_cellmath__30));
cynw_cm_float_add2_inst_cellmath__50_0_bdw2915265522_bdw cynw_cm_float_add2_I18 (.inst_cellmath__50_0_out0(inst_cellmath__50), .inst_cellmath__50_0_in0(b_sign), .inst_cellmath__50_0_in1(a_sign));
cynw_cm_float_add2_inst_cellmath__27_0_bdw2915265522_bdw cynw_cm_float_add2_I19 (.inst_cellmath__27_0_out0(inst_cellmath__27), .inst_cellmath__27_0_in0({a_exp[7], a_exp[6], a_exp[5], a_exp[4], a_exp[3], a_exp[2], a_exp[1], N3782}));
cynw_cm_float_add2_inst_cellmath__29__6__bdw2915265522_bdw cynw_cm_float_add2_I20 (.inst_cellmath__29__6__out0(inst_cellmath__29), .inst_cellmath__29__6__in0({a_man[22], a_man[21], a_man[20], a_man[19], a_man[18], a_man[17], a_man[16], a_man[15], a_man[14], a_man[13], a_man[12], a_man[11], a_man[10], a_man[9], a_man[8], a_man[7], a_man[6], a_man[5], a_man[4], a_man[3], a_man[2], a_man[1], a_man[0]}));
cynw_cm_float_add2_inst_cellmath__21_0_bdw2915265522_bdw cynw_cm_float_add2_I21 (.inst_cellmath__21_0_out0(inst_cellmath__21), .inst_cellmath__21_0_in0(inst_cellmath__29), .inst_cellmath__21_0_in1(inst_cellmath__27));
cynw_cm_float_add2_inst_cellmath__62__28__bdw2915265522_bdw cynw_cm_float_add2_I22 (.inst_cellmath__62__28__out0({N495}), .inst_cellmath__62__28__in0(inst_cellmath__50), .inst_cellmath__62__28__in1(inst_cellmath__24), .inst_cellmath__62__28__in2(inst_cellmath__21));
cynw_cm_float_add2_inst_cellmath__20_0_bdw2915265522_bdw cynw_cm_float_add2_I23 (.inst_cellmath__20_0_out0(inst_cellmath__20), .inst_cellmath__20_0_in0(inst_cellmath__29), .inst_cellmath__20_0_in1(inst_cellmath__27));
cynw_cm_float_add2_inst_cellmath__23_0_bdw2915265522_bdw cynw_cm_float_add2_I24 (.inst_cellmath__23_0_out0(inst_cellmath__23), .inst_cellmath__23_0_in0(inst_cellmath__32), .inst_cellmath__23_0_in1(inst_cellmath__30));
cynw_cm_float_add2_inst_cellmath__62_0_bdw2915265522_bdw cynw_cm_float_add2_I25 (.inst_cellmath__62_0_out0(inst_cellmath__62), .inst_cellmath__62_0_in0({N495}), .inst_cellmath__62_0_in1(inst_cellmath__23), .inst_cellmath__62_0_in2(inst_cellmath__20));
cynw_cm_float_add2_inst_cellmath__47_0_bdw2915265522_bdw cynw_cm_float_add2_I26 (.inst_cellmath__47_0_out0({inst_cellmath__47[7], inst_cellmath__47[6], inst_cellmath__47[5], inst_cellmath__47[4], inst_cellmath__47[3], inst_cellmath__47[2], inst_cellmath__47[1], inst_cellmath__47[0]}), .inst_cellmath__47_0_in0({inst_cellmath__44[8], inst_cellmath__44[7], inst_cellmath__44[6], inst_cellmath__44[5], inst_cellmath__44[4], inst_cellmath__44[3], inst_cellmath__44[2], inst_cellmath__44[1], inst_cellmath__44[0]}), .inst_cellmath__47_0_in1({N516, N515, N514, N513, N512, N511, N510, N509}));
cynw_cm_float_add2_inst_cellmath__49_0_bdw2915265522_bdw cynw_cm_float_add2_I27 (.inst_cellmath__49_0_out0({inst_cellmath__49[24], inst_cellmath__49[23], inst_cellmath__49[22], inst_cellmath__49[21], inst_cellmath__49[20], inst_cellmath__49[19], inst_cellmath__49[18], inst_cellmath__49[17], inst_cellmath__49[16], inst_cellmath__49[15], inst_cellmath__49[14], inst_cellmath__49[13], inst_cellmath__49[12], inst_cellmath__49[11], inst_cellmath__49[10], inst_cellmath__49[9], inst_cellmath__49[8], inst_cellmath__49[7], inst_cellmath__49[6], inst_cellmath__49[5], inst_cellmath__49[4], inst_cellmath__49[3], inst_cellmath__49[2], inst_cellmath__49[1], inst_cellmath__49[0]}), .inst_cellmath__49_0_in0({inst_cellmath__48[23], inst_cellmath__48[22], inst_cellmath__48[21], inst_cellmath__48[20], inst_cellmath__48[19], inst_cellmath__48[18], inst_cellmath__48[17], inst_cellmath__48[16], inst_cellmath__48[15], inst_cellmath__48[14], inst_cellmath__48[13], inst_cellmath__48[12], inst_cellmath__48[11], inst_cellmath__48[10], inst_cellmath__48[9], inst_cellmath__48[8], inst_cellmath__48[7], inst_cellmath__48[6], inst_cellmath__48[5], inst_cellmath__48[4], inst_cellmath__48[3], inst_cellmath__48[2], inst_cellmath__48[1]}), .inst_cellmath__49_0_in1({inst_cellmath__47[4], inst_cellmath__47[3], inst_cellmath__47[2], inst_cellmath__47[1], inst_cellmath__47[0]}));
cynw_cm_float_add2_inst_cellmath__39_0_0_0_bdw2915265522_bdw cynw_cm_float_add2_I28 (.inst_cellmath__39_0_0_0_out0({N546, N545, N544, N543, N542, N541, N540, N539, N538, N537, N536, N535, N534, N533, N532, N531, N530, N529, N528, N527, N526, N525, N524, N523, N522}), .inst_cellmath__39_0_0_0_in0({inst_cellmath__49[24], inst_cellmath__49[23], inst_cellmath__49[22], inst_cellmath__49[21], inst_cellmath__49[20], inst_cellmath__49[19], inst_cellmath__49[18], inst_cellmath__49[17], inst_cellmath__49[16], inst_cellmath__49[15], inst_cellmath__49[14], inst_cellmath__49[13], inst_cellmath__49[12], inst_cellmath__49[11], inst_cellmath__49[10], inst_cellmath__49[9], inst_cellmath__49[8], inst_cellmath__49[7], inst_cellmath__49[6], inst_cellmath__49[5], inst_cellmath__49[4], inst_cellmath__49[3], inst_cellmath__49[2], inst_cellmath__49[1], inst_cellmath__49[0]}), .inst_cellmath__39_0_0_0_in1({inst_cellmath__47[7], inst_cellmath__47[6], inst_cellmath__47[5]}));
cynw_cm_float_add2_inst_cellmath__39_2mx_bdw2915265522_bdw cynw_cm_float_add2_I29 (.inst_cellmath__39_2mx_out0({inst_cellmath__39[24], inst_cellmath__39[23], inst_cellmath__39[22], inst_cellmath__39[21], inst_cellmath__39[20], inst_cellmath__39[19], inst_cellmath__39[18], inst_cellmath__39[17], inst_cellmath__39[16], inst_cellmath__39[15], inst_cellmath__39[14], inst_cellmath__39[13], inst_cellmath__39[12], inst_cellmath__39[11], inst_cellmath__39[10], inst_cellmath__39[9], inst_cellmath__39[8], inst_cellmath__39[7], inst_cellmath__39[6], inst_cellmath__39[5], inst_cellmath__39[4], inst_cellmath__39[3], inst_cellmath__39[2], inst_cellmath__39[1], inst_cellmath__39[0]}), .inst_cellmath__39_2mx_in0({N546, N545, N544, N543, N542, N541, N540, N539, N538, N537, N536, N535, N534, N533, N532, N531, N530, N529, N528, N527, N526, N525, N524, N523, N522}), .inst_cellmath__39_2mx_in1(inst_cellmath__31), .inst_cellmath__39_2mx_in2(inst_cellmath__28));
cynw_cm_float_add2_inst_cellmath__55_2mx_bdw2915265522_bdw cynw_cm_float_add2_I30 (.inst_cellmath__55_2mx_out0({inst_cellmath__55[24], inst_cellmath__55[23], inst_cellmath__55[22], inst_cellmath__55[21], inst_cellmath__55[20], inst_cellmath__55[19], inst_cellmath__55[18], inst_cellmath__55[17], inst_cellmath__55[16], inst_cellmath__55[15], inst_cellmath__55[14], inst_cellmath__55[13], inst_cellmath__55[12], inst_cellmath__55[11], inst_cellmath__55[10], inst_cellmath__55[9], inst_cellmath__55[8], inst_cellmath__55[7], inst_cellmath__55[6], inst_cellmath__55[5], inst_cellmath__55[4], inst_cellmath__55[3], inst_cellmath__55[2], inst_cellmath__55[1], inst_cellmath__55[0]}), .inst_cellmath__55_2mx_in0(inst_cellmath__50), .inst_cellmath__55_2mx_in1({N597, N596, N595, N594, N593, N592, N591, N590, N589, N588, N587, N586, N585, N584, N583, N582, N581, N580, N579, N578, N577, N576, N575}));
cynw_cm_float_add2_inst_cellmath__57__22__bdw2915265522_bdw cynw_cm_float_add2_I31 (.inst_cellmath__57__22__out0({N469, N468, N467, N466, N465, N464, N463, N462, N461, N460, N459, N458, N457, N456, N455, N454, N453, N452, N451, N450, N449, N448, N447, N446, N445}), .inst_cellmath__57__22__out1({N444, N443, N442, N441, N440, N439, N438, N437, N436, N435, N434, N433, N432, N431, N430, N429, N428, N427, N426, N425, N424, N423, N422, N421, N420, N419}), .inst_cellmath__57__22__in0({inst_cellmath__55[24], inst_cellmath__55[23], inst_cellmath__55[22], inst_cellmath__55[21], inst_cellmath__55[20], inst_cellmath__55[19], inst_cellmath__55[18], inst_cellmath__55[17], inst_cellmath__55[16], inst_cellmath__55[15], inst_cellmath__55[14], inst_cellmath__55[13], inst_cellmath__55[12], inst_cellmath__55[11], inst_cellmath__55[10], inst_cellmath__55[9], inst_cellmath__55[8], inst_cellmath__55[7], inst_cellmath__55[6], inst_cellmath__55[5], inst_cellmath__55[4], inst_cellmath__55[3], inst_cellmath__55[2], inst_cellmath__55[1], inst_cellmath__55[0]}), .inst_cellmath__57__22__in1(inst_cellmath__50), .inst_cellmath__57__22__in2({inst_cellmath__39[24], inst_cellmath__39[23], inst_cellmath__39[22], inst_cellmath__39[21], inst_cellmath__39[20], inst_cellmath__39[19], inst_cellmath__39[18], inst_cellmath__39[17], inst_cellmath__39[16], inst_cellmath__39[15], inst_cellmath__39[14], inst_cellmath__39[13], inst_cellmath__39[12], inst_cellmath__39[11], inst_cellmath__39[10], inst_cellmath__39[9], inst_cellmath__39[8], inst_cellmath__39[7], inst_cellmath__39[6], inst_cellmath__39[5], inst_cellmath__39[4], inst_cellmath__39[3], inst_cellmath__39[2], inst_cellmath__39[1], inst_cellmath__39[0]}));
INVX2 cynw_cm_float_add2_I32 (.Y(inst_cellmath__56[25]), .A(N444));
cynw_cm_float_add2_inst_cellmath__41__18__bdw2915265522_bdw cynw_cm_float_add2_I33 (.inst_cellmath__41__18__out0({N418}), .inst_cellmath__41__18__in0(inst_cellmath__28), .inst_cellmath__41__18__in1(a_sign));
cynw_cm_float_add2_inst_cellmath__41__17__bdw2915265522_bdw cynw_cm_float_add2_I34 (.inst_cellmath__41__17__out0({N417}), .inst_cellmath__41__17__in0(inst_cellmath__31), .inst_cellmath__41__17__in1(b_sign));
cynw_cm_float_add2_inst_cellmath__52_0_bdw2915265522_bdw cynw_cm_float_add2_I35 (.inst_cellmath__52_0_out0(inst_cellmath__52), .inst_cellmath__52_0_in0({inst_cellmath__56[25]}), .inst_cellmath__52_0_in1({inst_cellmath__43[8]}), .inst_cellmath__52_0_in2({N418}), .inst_cellmath__52_0_in3({N417}), .inst_cellmath__52_0_in4(b_sign), .inst_cellmath__52_0_in5(a_sign));
cynw_cm_float_add2_inst_cellmath__51__26__bdw2915265522_bdw cynw_cm_float_add2_I36 (.inst_cellmath__51__26__out0({inst_cellmath__51[25]}), .inst_cellmath__51__26__in0({inst_cellmath__56[25]}), .inst_cellmath__51__26__in1(inst_cellmath__50));
cynw_cm_float_add2_inst_cellmath__51__24__bdw2915265522_bdw cynw_cm_float_add2_I37 (.inst_cellmath__51__24__out0({N494, N493, N492, N491, N490, N489, N488, N487, N486, N485, N484, N483, N482, N481, N480, N479, N478, N477, N476, N475, N474, N473, N472, N471, N470}), .inst_cellmath__51__24__in0({N469, N468, N467, N466, N465, N464, N463, N462, N461, N460, N459, N458, N457, N456, N455, N454, N453, N452, N451, N450, N449, N448, N447, N446, N445}), .inst_cellmath__51__24__in1({N443, N442, N441, N440, N439, N438, N437, N436, N435, N434, N433, N432, N431, N430, N429, N428, N427, N426, N425, N424, N423, N422, N421, N420, N419}), .inst_cellmath__51__24__in2({inst_cellmath__56[25]}), .inst_cellmath__51__24__in3(inst_cellmath__50));
INVXL cynw_cm_float_add2_I38 (.Y(inst_cellmath__51[0]), .A(N470));
INVXL cynw_cm_float_add2_I39 (.Y(inst_cellmath__51[1]), .A(N471));
INVXL cynw_cm_float_add2_I40 (.Y(inst_cellmath__51[2]), .A(N472));
INVXL cynw_cm_float_add2_I41 (.Y(inst_cellmath__51[3]), .A(N473));
INVXL cynw_cm_float_add2_I42 (.Y(inst_cellmath__51[4]), .A(N474));
INVX1 cynw_cm_float_add2_I43 (.Y(inst_cellmath__51[5]), .A(N475));
INVXL cynw_cm_float_add2_I44 (.Y(inst_cellmath__51[6]), .A(N476));
INVX1 cynw_cm_float_add2_I45 (.Y(inst_cellmath__51[7]), .A(N477));
INVX1 cynw_cm_float_add2_I46 (.Y(inst_cellmath__51[8]), .A(N478));
INVX1 cynw_cm_float_add2_I47 (.Y(inst_cellmath__51[9]), .A(N479));
INVXL cynw_cm_float_add2_I48 (.Y(inst_cellmath__51[10]), .A(N480));
INVX1 cynw_cm_float_add2_I49 (.Y(inst_cellmath__51[11]), .A(N481));
INVXL cynw_cm_float_add2_I50 (.Y(inst_cellmath__51[12]), .A(N482));
INVX1 cynw_cm_float_add2_I51 (.Y(inst_cellmath__51[13]), .A(N483));
INVXL cynw_cm_float_add2_I52 (.Y(inst_cellmath__51[14]), .A(N484));
INVX1 cynw_cm_float_add2_I53 (.Y(inst_cellmath__51[15]), .A(N485));
INVX1 cynw_cm_float_add2_I54 (.Y(inst_cellmath__51[16]), .A(N486));
INVX2 cynw_cm_float_add2_I55 (.Y(inst_cellmath__51[17]), .A(N487));
INVX2 cynw_cm_float_add2_I56 (.Y(inst_cellmath__51[18]), .A(N488));
INVX2 cynw_cm_float_add2_I57 (.Y(inst_cellmath__51[19]), .A(N489));
INVX2 cynw_cm_float_add2_I58 (.Y(inst_cellmath__51[20]), .A(N490));
INVX2 cynw_cm_float_add2_I59 (.Y(inst_cellmath__51[21]), .A(N491));
INVX2 cynw_cm_float_add2_I60 (.Y(inst_cellmath__51[22]), .A(N492));
INVX2 cynw_cm_float_add2_I61 (.Y(inst_cellmath__51[23]), .A(N493));
INVX2 cynw_cm_float_add2_I62 (.Y(inst_cellmath__51[24]), .A(N494));
cynw_cm_float_add2_inst_delta_0_bdw2915265522_bdw cynw_cm_float_add2_I63 (.inst_delta_0_out0({inst_delta[5], inst_delta[4], inst_delta[3], inst_delta[2], inst_delta[1], inst_delta[0]}), .inst_delta_0_in0({inst_cellmath__51[25], inst_cellmath__51[24], inst_cellmath__51[23], inst_cellmath__51[22], inst_cellmath__51[21], inst_cellmath__51[20], inst_cellmath__51[19], inst_cellmath__51[18], inst_cellmath__51[17], inst_cellmath__51[16], inst_cellmath__51[15], inst_cellmath__51[14], inst_cellmath__51[13], inst_cellmath__51[12], inst_cellmath__51[11], inst_cellmath__51[10], inst_cellmath__51[9], inst_cellmath__51[8], inst_cellmath__51[7], inst_cellmath__51[6], inst_cellmath__51[5], inst_cellmath__51[4], inst_cellmath__51[3], inst_cellmath__51[2], inst_cellmath__51[1], inst_cellmath__51[0]}));
INVXL cynw_cm_float_add2_I335 (.Y(N2396), .A(inst_delta[2]));
INVXL cynw_cm_float_add2_I336 (.Y(N2397), .A(N2396));
cynw_cm_float_add2_inst_cellmath__69__29__bdw2915265522_bdw cynw_cm_float_add2_I64 (.inst_cellmath__69__29__out0({N496}), .inst_cellmath__69__29__in0({inst_delta[5]}), .inst_cellmath__69__29__in1(inst_cellmath__52));
cynw_cm_float_add2_inst_cellmath__69__30__bdw2915265522_bdw cynw_cm_float_add2_I65 (.inst_cellmath__69__30__out0({N497}), .inst_cellmath__69__30__in0(b_sign), .inst_cellmath__69__30__in1(a_sign));
cynw_cm_float_add2_inst_cellmath__69_0_bdw2915265522_bdw cynw_cm_float_add2_I66 (.inst_cellmath__69_0_out0(inst_cellmath__69), .inst_cellmath__69_0_in0({N497}), .inst_cellmath__69_0_in1({N496}));
cynw_cm_float_add2_inst_cellmath__59_0_bdw2915265522_bdw cynw_cm_float_add2_I67 (.inst_cellmath__59_0_out0(x[31]), .inst_cellmath__59_0_in0(inst_cellmath__69), .inst_cellmath__59_0_in1(inst_cellmath__62));
cynw_cm_float_add2_inst_cellmath__40_0_bdw2915265522_bdw cynw_cm_float_add2_I68 (.inst_cellmath__40_0_out0({inst_cellmath__40[7], inst_cellmath__40[6], inst_cellmath__40[5], inst_cellmath__40[4], inst_cellmath__40[3], inst_cellmath__40[2], inst_cellmath__40[1], inst_cellmath__40[0]}), .inst_cellmath__40_0_in0({inst_cellmath__43[8]}), .inst_cellmath__40_0_in1({b_exp[7], b_exp[6], b_exp[5], b_exp[4], b_exp[3], b_exp[2], b_exp[1], b_exp[0]}), .inst_cellmath__40_0_in2({a_exp[7], a_exp[6], a_exp[5], a_exp[4], a_exp[3], a_exp[2], a_exp[1], N3782}));
cynw_cm_float_add2_inst_cellmath__73_0_bdw2915265522_bdw cynw_cm_float_add2_I69 (.inst_cellmath__73_0_out0(inst_cellmath__73), .inst_cellmath__73_0_in0({inst_delta[4], inst_delta[3], N2397, inst_delta[1], inst_delta[0]}), .inst_cellmath__73_0_in1({inst_cellmath__40[7], inst_cellmath__40[6], inst_cellmath__40[5], inst_cellmath__40[4], inst_cellmath__40[3], inst_cellmath__40[2], inst_cellmath__40[1], inst_cellmath__40[0]}));
cynw_cm_float_add2_inst_cellmath__75__32__bdw2915265522_bdw cynw_cm_float_add2_I70 (.inst_cellmath__75__32__out0({N499}), .inst_cellmath__75__32__in0({inst_cellmath__51[25]}), .inst_cellmath__75__32__in1({inst_cellmath__40[7], inst_cellmath__40[6], inst_cellmath__40[5], inst_cellmath__40[4], inst_cellmath__40[3], inst_cellmath__40[2], inst_cellmath__40[1]}));
cynw_cm_float_add2_inst_cellmath__77_0_bdw2915265522_bdw cynw_cm_float_add2_I71 (.inst_cellmath__77_0_out0(inst_cellmath__77), .inst_cellmath__77_0_in0({N499}), .inst_cellmath__77_0_in1(inst_cellmath__62), .inst_cellmath__77_0_in2(inst_cellmath__24), .inst_cellmath__77_0_in3(inst_cellmath__21));
cynw_cm_float_add2_inst_cellmath__74__31__bdw2915265522_bdw cynw_cm_float_add2_I72 (.inst_cellmath__74__31__out0({N498}), .inst_cellmath__74__31__in0(inst_cellmath__31), .inst_cellmath__74__31__in1(inst_cellmath__28));
cynw_cm_float_add2_inst_cellmath__72_0_bdw2915265522_bdw cynw_cm_float_add2_I73 (.inst_cellmath__72_0_out0(inst_cellmath__72), .inst_cellmath__72_0_in0({inst_delta[5]}), .inst_cellmath__72_0_in1(inst_cellmath__77), .inst_cellmath__72_0_in2({N498}), .inst_cellmath__72_0_in3(inst_cellmath__73));
cynw_cm_float_add2_inst_cellmath__66_0_bdw2915265522_bdw cynw_cm_float_add2_I74 (.inst_cellmath__66_0_out0({inst_cellmath__66[7], inst_cellmath__66[6], inst_cellmath__66[5], inst_cellmath__66[4], inst_cellmath__66[3], inst_cellmath__66[2], inst_cellmath__66[1], inst_cellmath__66[0]}), .inst_cellmath__66_0_in0({inst_delta[4], inst_delta[3], inst_delta[2], inst_delta[1], inst_delta[0]}), .inst_cellmath__66_0_in1({inst_cellmath__40[7], inst_cellmath__40[6], inst_cellmath__40[5], inst_cellmath__40[4], inst_cellmath__40[3], inst_cellmath__40[2], inst_cellmath__40[1], inst_cellmath__40[0]}));
cynw_cm_float_add2_inst_cellmath__60_0_bdw2915265522_bdw cynw_cm_float_add2_I75 (.inst_cellmath__60_0_out0({x[30], x[29], x[28], x[27], x[26], x[25], x[24], x[23]}), .inst_cellmath__60_0_in0(inst_cellmath__77), .inst_cellmath__60_0_in1(inst_cellmath__72), .inst_cellmath__60_0_in2({inst_cellmath__66[7], inst_cellmath__66[6], inst_cellmath__66[5], inst_cellmath__66[4], inst_cellmath__66[3], inst_cellmath__66[2], inst_cellmath__66[1], inst_cellmath__66[0]}));
cynw_cm_float_add2_inst_cellmath__63_0_bdw2915265522_bdw cynw_cm_float_add2_I76 (.inst_cellmath__63_0_out0({inst_cellmath__63[24], inst_cellmath__63[23], inst_cellmath__63[22], inst_cellmath__63[21], inst_cellmath__63[20], inst_cellmath__63[19], inst_cellmath__63[18], inst_cellmath__63[17], inst_cellmath__63[16], inst_cellmath__63[15], inst_cellmath__63[14], inst_cellmath__63[13], inst_cellmath__63[12], inst_cellmath__63[11], inst_cellmath__63[10], inst_cellmath__63[9], inst_cellmath__63[8], inst_cellmath__63[7], inst_cellmath__63[6], inst_cellmath__63[5], inst_cellmath__63[4], inst_cellmath__63[3], inst_cellmath__63[2], inst_cellmath__63[1], inst_cellmath__63[0]}), .inst_cellmath__63_0_in0({inst_delta[4], inst_delta[3], N2397, inst_delta[1], inst_delta[0]}), .inst_cellmath__63_0_in1({inst_cellmath__51[25], inst_cellmath__51[24], inst_cellmath__51[23], inst_cellmath__51[22], inst_cellmath__51[21], inst_cellmath__51[20], inst_cellmath__51[19], inst_cellmath__51[18], inst_cellmath__51[17], inst_cellmath__51[16], inst_cellmath__51[15], inst_cellmath__51[14], inst_cellmath__51[13], inst_cellmath__51[12], inst_cellmath__51[11], inst_cellmath__51[10], inst_cellmath__51[9], inst_cellmath__51[8], inst_cellmath__51[7], inst_cellmath__51[6], inst_cellmath__51[5], inst_cellmath__51[4], inst_cellmath__51[3], inst_cellmath__51[2], inst_cellmath__51[1], inst_cellmath__51[0]}));
cynw_cm_float_add2_inst_cellmath__61_0_bdw2915265522_bdw cynw_cm_float_add2_I77 (.inst_cellmath__61_0_out0({x[22], x[21], x[20], x[19], x[18], x[17], x[16], x[15], x[14], x[13], x[12], x[11], x[10], x[9], x[8], x[7], x[6], x[5], x[4], x[3], x[2], x[1], x[0]}), .inst_cellmath__61_0_in0(inst_cellmath__72), .inst_cellmath__61_0_in1({inst_cellmath__63[24], inst_cellmath__63[23], inst_cellmath__63[22], inst_cellmath__63[21], inst_cellmath__63[20], inst_cellmath__63[19], inst_cellmath__63[18], inst_cellmath__63[17], inst_cellmath__63[16], inst_cellmath__63[15], inst_cellmath__63[14], inst_cellmath__63[13], inst_cellmath__63[12], inst_cellmath__63[11], inst_cellmath__63[10], inst_cellmath__63[9], inst_cellmath__63[8], inst_cellmath__63[7], inst_cellmath__63[6], inst_cellmath__63[5], inst_cellmath__63[4], inst_cellmath__63[3], inst_cellmath__63[2]}), .inst_cellmath__61_0_in2(inst_cellmath__62));
CLKINVX1 cynw_cm_float_add2_I584 (.Y(N3781), .A(a_exp[0]));
INVX3 cynw_cm_float_add2_I585 (.Y(N3782), .A(N3781));
assign inst_cellmath__43[0] = 1'B0;
assign inst_cellmath__43[1] = 1'B0;
assign inst_cellmath__43[2] = 1'B0;
assign inst_cellmath__43[3] = 1'B0;
assign inst_cellmath__43[4] = 1'B0;
assign inst_cellmath__43[5] = 1'B0;
assign inst_cellmath__43[6] = 1'B0;
assign inst_cellmath__43[7] = 1'B0;
assign inst_cellmath__48[0] = 1'B0;
assign inst_cellmath__48[24] = 1'B1;
assign inst_cellmath__56[0] = 1'B0;
assign inst_cellmath__56[1] = 1'B0;
assign inst_cellmath__56[2] = 1'B0;
assign inst_cellmath__56[3] = 1'B0;
assign inst_cellmath__56[4] = 1'B0;
assign inst_cellmath__56[5] = 1'B0;
assign inst_cellmath__56[6] = 1'B0;
assign inst_cellmath__56[7] = 1'B0;
assign inst_cellmath__56[8] = 1'B0;
assign inst_cellmath__56[9] = 1'B0;
assign inst_cellmath__56[10] = 1'B0;
assign inst_cellmath__56[11] = 1'B0;
assign inst_cellmath__56[12] = 1'B0;
assign inst_cellmath__56[13] = 1'B0;
assign inst_cellmath__56[14] = 1'B0;
assign inst_cellmath__56[15] = 1'B0;
assign inst_cellmath__56[16] = 1'B0;
assign inst_cellmath__56[17] = 1'B0;
assign inst_cellmath__56[18] = 1'B0;
assign inst_cellmath__56[19] = 1'B0;
assign inst_cellmath__56[20] = 1'B0;
assign inst_cellmath__56[21] = 1'B0;
assign inst_cellmath__56[22] = 1'B0;
assign inst_cellmath__56[23] = 1'B0;
assign inst_cellmath__56[24] = 1'B0;
endmodule

module cynw_cm_float_add2_inst_cellmath__43_1_bdw2915265522_bdw (
	inst_cellmath__43_1_out0,
	inst_cellmath__43_1_out1,
	inst_cellmath__43_1_in0,
	inst_cellmath__43_1_in1
	); /* architecture "gate_level" */ 
output [8:0] inst_cellmath__43_1_out0,
	inst_cellmath__43_1_out1;
input [8:0] inst_cellmath__43_1_in0;
input [7:0] inst_cellmath__43_1_in1;
wire N37,N38,N39,N40,N41,N42,N43 
	,N44,N45,N46,N47,N48,N49,N50,N51 
	,N55,N59,N60,N63,N64,N67,N68,N73 
	,N75,N76,N77,N78,N83,N85,N100,N103 
	,N106,N109,N112,N115,N118,N130,N131,N133 
	,N134,N136,N137,N166,N171,N172,N175,N176 
	,N179,N180,N189,N191,N192,N193,N194,N199 
	,N201,N251,N252,N254,N255,N257,N258,N260 
	,N261,N331,N583,N584,N585,N600,N601,N603 
	;
NAND2X2 inst_cellmath__43_1_I0 (.Y(N37), .A(inst_cellmath__43_1_in1[0]), .B(inst_cellmath__43_1_in0[0]));
NOR2X2 inst_cellmath__43_1_I1 (.Y(N38), .A(inst_cellmath__43_1_in1[1]), .B(inst_cellmath__43_1_in0[1]));
NAND2X2 inst_cellmath__43_1_I2 (.Y(N39), .A(inst_cellmath__43_1_in1[1]), .B(inst_cellmath__43_1_in0[1]));
NOR2X2 inst_cellmath__43_1_I3 (.Y(N40), .A(inst_cellmath__43_1_in1[2]), .B(inst_cellmath__43_1_in0[2]));
NAND2X6 inst_cellmath__43_1_I4 (.Y(N41), .A(inst_cellmath__43_1_in1[2]), .B(inst_cellmath__43_1_in0[2]));
NOR2X2 inst_cellmath__43_1_I5 (.Y(N42), .A(inst_cellmath__43_1_in1[3]), .B(inst_cellmath__43_1_in0[3]));
NAND2X4 inst_cellmath__43_1_I6 (.Y(N43), .A(inst_cellmath__43_1_in1[3]), .B(inst_cellmath__43_1_in0[3]));
NOR2X2 inst_cellmath__43_1_I7 (.Y(N44), .A(inst_cellmath__43_1_in1[4]), .B(inst_cellmath__43_1_in0[4]));
NAND2X2 inst_cellmath__43_1_I8 (.Y(N45), .A(inst_cellmath__43_1_in1[4]), .B(inst_cellmath__43_1_in0[4]));
NOR2X2 inst_cellmath__43_1_I9 (.Y(N46), .A(inst_cellmath__43_1_in1[5]), .B(inst_cellmath__43_1_in0[5]));
NAND2X4 inst_cellmath__43_1_I10 (.Y(N47), .A(inst_cellmath__43_1_in1[5]), .B(inst_cellmath__43_1_in0[5]));
NOR2X2 inst_cellmath__43_1_I11 (.Y(N48), .A(inst_cellmath__43_1_in1[6]), .B(inst_cellmath__43_1_in0[6]));
NAND2X4 inst_cellmath__43_1_I12 (.Y(N49), .A(inst_cellmath__43_1_in1[6]), .B(inst_cellmath__43_1_in0[6]));
NOR2X1 inst_cellmath__43_1_I13 (.Y(N50), .A(inst_cellmath__43_1_in1[7]), .B(inst_cellmath__43_1_in0[7]));
NAND2X4 inst_cellmath__43_1_I14 (.Y(N51), .A(inst_cellmath__43_1_in1[7]), .B(inst_cellmath__43_1_in0[7]));
AOI21X2 inst_cellmath__43_1_I18 (.Y(N55), .A0(N39), .A1(N37), .B0(N38));
AOI21X2 inst_cellmath__43_1_I22 (.Y(N59), .A0(N43), .A1(N40), .B0(N42));
NAND2X1 inst_cellmath__43_1_I23 (.Y(N60), .A(N43), .B(N41));
AOI21X1 inst_cellmath__43_1_I26 (.Y(N63), .A0(N47), .A1(N44), .B0(N46));
NAND2X1 inst_cellmath__43_1_I27 (.Y(N64), .A(N47), .B(N45));
AOI21X1 inst_cellmath__43_1_I30 (.Y(N67), .A0(N51), .A1(N48), .B0(N50));
NAND2X1 inst_cellmath__43_1_I31 (.Y(N68), .A(N51), .B(N49));
INVXL inst_cellmath__43_1_I601 (.Y(N583), .A(N55));
OAI21X1 inst_cellmath__43_1_I36 (.Y(N73), .A0(N60), .A1(N55), .B0(N59));
OAI21XL inst_cellmath__43_1_I38 (.Y(N75), .A0(N64), .A1(N59), .B0(N63));
NOR2XL inst_cellmath__43_1_I39 (.Y(N76), .A(N64), .B(N60));
OAI21X1 inst_cellmath__43_1_I40 (.Y(N77), .A0(N68), .A1(N63), .B0(N67));
NOR2XL inst_cellmath__43_1_I41 (.Y(N78), .A(N68), .B(N64));
INVXL inst_cellmath__43_1_I602 (.Y(N584), .A(N583));
INVXL inst_cellmath__43_1_I603 (.Y(N585), .A(N73));
AOI21XL inst_cellmath__43_1_I46 (.Y(N83), .A0(N76), .A1(N583), .B0(N75));
AOI21X1 inst_cellmath__43_1_I48 (.Y(N85), .A0(N78), .A1(N73), .B0(N77));
NAND2BXL inst_cellmath__43_1_I63 (.Y(N100), .AN(N38), .B(N39));
NAND2BXL inst_cellmath__43_1_I66 (.Y(N103), .AN(N40), .B(N41));
NAND2BXL inst_cellmath__43_1_I69 (.Y(N106), .AN(N42), .B(N43));
NAND2BXL inst_cellmath__43_1_I72 (.Y(N109), .AN(N44), .B(N45));
NAND2BXL inst_cellmath__43_1_I75 (.Y(N112), .AN(N46), .B(N47));
NAND2BXL inst_cellmath__43_1_I78 (.Y(N115), .AN(N48), .B(N49));
NAND2BXL inst_cellmath__43_1_I81 (.Y(N118), .AN(N50), .B(N51));
XOR2XL inst_cellmath__43_1_I85 (.Y(inst_cellmath__43_1_out1[0]), .A(inst_cellmath__43_1_in1[0]), .B(inst_cellmath__43_1_in0[0]));
XOR2XL inst_cellmath__43_1_I633 (.Y(inst_cellmath__43_1_out1[1]), .A(N37), .B(N100));
XNOR2X1 inst_cellmath__43_1_I87 (.Y(inst_cellmath__43_1_out1[2]), .A(N584), .B(N103));
XNOR2X1 inst_cellmath__43_1_I88 (.Y(inst_cellmath__43_1_out1[4]), .A(N585), .B(N109));
XNOR2X1 inst_cellmath__43_1_I89 (.Y(inst_cellmath__43_1_out1[6]), .A(N83), .B(N115));
INVXL xnor2_A_I234 (.Y(N331), .A(N85));
MXI2XL xnor2_A_I575 (.Y(inst_cellmath__43_1_out1[8]), .A(N331), .B(N85), .S0(inst_cellmath__43_1_in0[8]));
XOR2XL node_cs_reduced_ii_local_A_I635 (.Y(N131), .A(N106), .B(N41));
XOR2XL node_cs_reduced_ii_local_A_I636 (.Y(N130), .A(N106), .B(N40));
MX2XL inst_cellmath__43_1_I92 (.Y(inst_cellmath__43_1_out1[3]), .A(N131), .B(N130), .S0(N584));
XOR2XL node_cs_reduced_ii_local_A_I637 (.Y(N134), .A(N45), .B(N112));
XOR2XL node_cs_reduced_ii_local_A_I638 (.Y(N133), .A(N112), .B(N44));
MX2XL inst_cellmath__43_1_I94 (.Y(inst_cellmath__43_1_out1[5]), .A(N134), .B(N133), .S0(N585));
XOR2XL node_cs_reduced_ii_local_A_I639 (.Y(N137), .A(N49), .B(N118));
XOR2XL node_cs_reduced_ii_local_A_I640 (.Y(N136), .A(N118), .B(N48));
MX2XL inst_cellmath__43_1_I96 (.Y(inst_cellmath__43_1_out1[7]), .A(N137), .B(N136), .S0(N83));
OR2X6 inst_cellmath__43_1_I118 (.Y(N166), .A(inst_cellmath__43_1_in0[0]), .B(inst_cellmath__43_1_in1[0]));
AOI21X4 inst_cellmath__43_1_I122 (.Y(N171), .A0(N41), .A1(N38), .B0(N40));
NAND2X2 inst_cellmath__43_1_I123 (.Y(N172), .A(N41), .B(N39));
AOI21X2 inst_cellmath__43_1_I126 (.Y(N175), .A0(N45), .A1(N42), .B0(N44));
NAND2X1 inst_cellmath__43_1_I127 (.Y(N176), .A(N45), .B(N43));
AOI21X2 inst_cellmath__43_1_I130 (.Y(N179), .A0(N49), .A1(N46), .B0(N48));
NAND2X2 inst_cellmath__43_1_I131 (.Y(N180), .A(N49), .B(N47));
INVXL inst_cellmath__43_1_I618 (.Y(N600), .A(N166));
OAI21X4 inst_cellmath__43_1_I138 (.Y(N189), .A0(N172), .A1(N166), .B0(N171));
INVXL inst_cellmath__43_1_I619 (.Y(N601), .A(N189));
OAI21XL inst_cellmath__43_1_I140 (.Y(N191), .A0(N176), .A1(N171), .B0(N175));
NOR2XL inst_cellmath__43_1_I141 (.Y(N192), .A(N176), .B(N172));
OAI21X1 inst_cellmath__43_1_I142 (.Y(N193), .A0(N180), .A1(N175), .B0(N179));
NOR2X1 inst_cellmath__43_1_I143 (.Y(N194), .A(N180), .B(N176));
INVXL inst_cellmath__43_1_I621 (.Y(N603), .A(N600));
AOI21XL inst_cellmath__43_1_I148 (.Y(N199), .A0(N192), .A1(N600), .B0(N191));
AOI21X2 inst_cellmath__43_1_I150 (.Y(N201), .A0(N194), .A1(N189), .B0(N193));
XNOR2X1 inst_cellmath__43_1_I192 (.Y(inst_cellmath__43_1_out0[0]), .A(inst_cellmath__43_1_in1[0]), .B(inst_cellmath__43_1_in0[0]));
XNOR2X1 inst_cellmath__43_1_I193 (.Y(inst_cellmath__43_1_out0[1]), .A(N603), .B(N100));
XNOR2X1 inst_cellmath__43_1_I194 (.Y(inst_cellmath__43_1_out0[3]), .A(N601), .B(N106));
XNOR2X1 inst_cellmath__43_1_I195 (.Y(inst_cellmath__43_1_out0[5]), .A(N199), .B(N112));
XNOR2X1 inst_cellmath__43_1_I196 (.Y(inst_cellmath__43_1_out0[7]), .A(N201), .B(N118));
XOR2XL node_cs_reduced_ii_local_A_I641 (.Y(N252), .A(N39), .B(N103));
XOR2XL node_cs_reduced_ii_local_A_I642 (.Y(N251), .A(N103), .B(N38));
MX2XL inst_cellmath__43_1_I198 (.Y(inst_cellmath__43_1_out0[2]), .A(N252), .B(N251), .S0(N603));
XOR2XL node_cs_reduced_ii_local_A_I643 (.Y(N255), .A(N109), .B(N43));
XOR2XL node_cs_reduced_ii_local_A_I644 (.Y(N254), .A(N109), .B(N42));
MX2XL inst_cellmath__43_1_I200 (.Y(inst_cellmath__43_1_out0[4]), .A(N255), .B(N254), .S0(N601));
XOR2XL node_cs_reduced_ii_local_A_I645 (.Y(N258), .A(N115), .B(N47));
XOR2XL node_cs_reduced_ii_local_A_I646 (.Y(N257), .A(N115), .B(N46));
MX2XL inst_cellmath__43_1_I202 (.Y(inst_cellmath__43_1_out0[6]), .A(N258), .B(N257), .S0(N199));
XOR2XL node_cs_reduced_ii_local_A_I647 (.Y(N261), .A(N51), .B(inst_cellmath__43_1_in0[8]));
XOR2XL node_cs_reduced_ii_local_A_I648 (.Y(N260), .A(inst_cellmath__43_1_in0[8]), .B(N50));
MXI2XL inst_cellmath__43_1_I204 (.Y(inst_cellmath__43_1_out0[8]), .A(N261), .B(N260), .S0(N201));
endmodule

module cynw_cm_float_add2_inst_cellmath__48__10__bdw2915265522_bdw (
	inst_cellmath__48__10__out0,
	inst_cellmath__48__10__in0,
	inst_cellmath__48__10__in1,
	inst_cellmath__48__10__in2
	); /* architecture "gate_level" */ 
output [22:0] inst_cellmath__48__10__out0;
input [8:8] inst_cellmath__48__10__in0;
input [22:0] inst_cellmath__48__10__in1,
	inst_cellmath__48__10__in2;
wire N258,N259,N260,N261,N262,N263,N264 
	;
INVX3 inst_cellmath__48__10__I70 (.Y(N258), .A(inst_cellmath__48__10__in0[8]));
INVXL inst_cellmath__48__10__I76 (.Y(N264), .A(N258));
MX2XL inst_cellmath__48__10__I46 (.Y(inst_cellmath__48__10__out0[0]), .A(inst_cellmath__48__10__in1[0]), .B(inst_cellmath__48__10__in2[0]), .S0(N264));
MX2XL inst_cellmath__48__10__I47 (.Y(inst_cellmath__48__10__out0[1]), .A(inst_cellmath__48__10__in1[1]), .B(inst_cellmath__48__10__in2[1]), .S0(N264));
MX2XL inst_cellmath__48__10__I48 (.Y(inst_cellmath__48__10__out0[2]), .A(inst_cellmath__48__10__in1[2]), .B(inst_cellmath__48__10__in2[2]), .S0(N264));
INVXL inst_cellmath__48__10__I75 (.Y(N263), .A(N258));
MX2XL inst_cellmath__48__10__I49 (.Y(inst_cellmath__48__10__out0[3]), .A(inst_cellmath__48__10__in1[3]), .B(inst_cellmath__48__10__in2[3]), .S0(N263));
MX2XL inst_cellmath__48__10__I50 (.Y(inst_cellmath__48__10__out0[4]), .A(inst_cellmath__48__10__in1[4]), .B(inst_cellmath__48__10__in2[4]), .S0(N263));
MX2XL inst_cellmath__48__10__I51 (.Y(inst_cellmath__48__10__out0[5]), .A(inst_cellmath__48__10__in1[5]), .B(inst_cellmath__48__10__in2[5]), .S0(N263));
MX2XL inst_cellmath__48__10__I52 (.Y(inst_cellmath__48__10__out0[6]), .A(inst_cellmath__48__10__in1[6]), .B(inst_cellmath__48__10__in2[6]), .S0(N263));
INVX1 inst_cellmath__48__10__I74 (.Y(N262), .A(N258));
MX2XL inst_cellmath__48__10__I53 (.Y(inst_cellmath__48__10__out0[7]), .A(inst_cellmath__48__10__in1[7]), .B(inst_cellmath__48__10__in2[7]), .S0(N262));
MX2XL inst_cellmath__48__10__I54 (.Y(inst_cellmath__48__10__out0[8]), .A(inst_cellmath__48__10__in1[8]), .B(inst_cellmath__48__10__in2[8]), .S0(N262));
MX2XL inst_cellmath__48__10__I55 (.Y(inst_cellmath__48__10__out0[9]), .A(inst_cellmath__48__10__in1[9]), .B(inst_cellmath__48__10__in2[9]), .S0(N262));
MX2XL inst_cellmath__48__10__I56 (.Y(inst_cellmath__48__10__out0[10]), .A(inst_cellmath__48__10__in1[10]), .B(inst_cellmath__48__10__in2[10]), .S0(N262));
INVX1 inst_cellmath__48__10__I73 (.Y(N261), .A(N258));
MX2XL inst_cellmath__48__10__I57 (.Y(inst_cellmath__48__10__out0[11]), .A(inst_cellmath__48__10__in1[11]), .B(inst_cellmath__48__10__in2[11]), .S0(N261));
MX2XL inst_cellmath__48__10__I58 (.Y(inst_cellmath__48__10__out0[12]), .A(inst_cellmath__48__10__in1[12]), .B(inst_cellmath__48__10__in2[12]), .S0(N261));
MX2XL inst_cellmath__48__10__I59 (.Y(inst_cellmath__48__10__out0[13]), .A(inst_cellmath__48__10__in1[13]), .B(inst_cellmath__48__10__in2[13]), .S0(N261));
MX2XL inst_cellmath__48__10__I60 (.Y(inst_cellmath__48__10__out0[14]), .A(inst_cellmath__48__10__in1[14]), .B(inst_cellmath__48__10__in2[14]), .S0(N261));
INVX1 inst_cellmath__48__10__I72 (.Y(N260), .A(N258));
MX2XL inst_cellmath__48__10__I61 (.Y(inst_cellmath__48__10__out0[15]), .A(inst_cellmath__48__10__in1[15]), .B(inst_cellmath__48__10__in2[15]), .S0(N260));
MX2XL inst_cellmath__48__10__I62 (.Y(inst_cellmath__48__10__out0[16]), .A(inst_cellmath__48__10__in1[16]), .B(inst_cellmath__48__10__in2[16]), .S0(N260));
MX2XL inst_cellmath__48__10__I63 (.Y(inst_cellmath__48__10__out0[17]), .A(inst_cellmath__48__10__in1[17]), .B(inst_cellmath__48__10__in2[17]), .S0(N260));
MX2XL inst_cellmath__48__10__I64 (.Y(inst_cellmath__48__10__out0[18]), .A(inst_cellmath__48__10__in1[18]), .B(inst_cellmath__48__10__in2[18]), .S0(N260));
INVX1 inst_cellmath__48__10__I71 (.Y(N259), .A(N258));
MX2XL inst_cellmath__48__10__I65 (.Y(inst_cellmath__48__10__out0[19]), .A(inst_cellmath__48__10__in1[19]), .B(inst_cellmath__48__10__in2[19]), .S0(N259));
MX2XL inst_cellmath__48__10__I66 (.Y(inst_cellmath__48__10__out0[20]), .A(inst_cellmath__48__10__in1[20]), .B(inst_cellmath__48__10__in2[20]), .S0(N259));
MX2XL inst_cellmath__48__10__I67 (.Y(inst_cellmath__48__10__out0[21]), .A(inst_cellmath__48__10__in1[21]), .B(inst_cellmath__48__10__in2[21]), .S0(N259));
MX2XL inst_cellmath__48__10__I68 (.Y(inst_cellmath__48__10__out0[22]), .A(inst_cellmath__48__10__in1[22]), .B(inst_cellmath__48__10__in2[22]), .S0(N259));
endmodule

module cynw_cm_float_add2_inst_cellmath__28__5__bdw2915265522_bdw (
	inst_cellmath__28__5__out0,
	inst_cellmath__28__5__in0
	); /* architecture "gate_level" */ 
output  inst_cellmath__28__5__out0;
input [7:0] inst_cellmath__28__5__in0;
wire N11,N12,N13,N14,N15,N16;
NOR2X1 inst_cellmath__28__5__I0 (.Y(N11), .A(inst_cellmath__28__5__in0[0]), .B(inst_cellmath__28__5__in0[1]));
NOR2X1 inst_cellmath__28__5__I1 (.Y(N12), .A(inst_cellmath__28__5__in0[7]), .B(inst_cellmath__28__5__in0[6]));
NOR2XL inst_cellmath__28__5__I2 (.Y(N13), .A(inst_cellmath__28__5__in0[5]), .B(inst_cellmath__28__5__in0[4]));
NOR2XL inst_cellmath__28__5__I3 (.Y(N14), .A(inst_cellmath__28__5__in0[3]), .B(inst_cellmath__28__5__in0[2]));
NAND2X1 inst_cellmath__28__5__I4 (.Y(N15), .A(N11), .B(N12));
NAND2XL inst_cellmath__28__5__I5 (.Y(N16), .A(N13), .B(N14));
NOR2X1 inst_cellmath__28__5__I6 (.Y(inst_cellmath__28__5__out0), .A(N15), .B(N16));
endmodule

module cynw_cm_float_add2_inst_cellmath__31__7__bdw2915265522_bdw (
	inst_cellmath__31__7__out0,
	inst_cellmath__31__7__in0
	); /* architecture "gate_level" */ 
output  inst_cellmath__31__7__out0;
input [7:0] inst_cellmath__31__7__in0;
wire N11,N12,N13,N14,N15,N16;
NOR2X1 inst_cellmath__31__7__I0 (.Y(N11), .A(inst_cellmath__31__7__in0[0]), .B(inst_cellmath__31__7__in0[1]));
NOR2X1 inst_cellmath__31__7__I1 (.Y(N12), .A(inst_cellmath__31__7__in0[7]), .B(inst_cellmath__31__7__in0[6]));
NOR2XL inst_cellmath__31__7__I2 (.Y(N13), .A(inst_cellmath__31__7__in0[5]), .B(inst_cellmath__31__7__in0[4]));
NOR2XL inst_cellmath__31__7__I3 (.Y(N14), .A(inst_cellmath__31__7__in0[3]), .B(inst_cellmath__31__7__in0[2]));
NAND2X1 inst_cellmath__31__7__I4 (.Y(N15), .A(N11), .B(N12));
NAND2XL inst_cellmath__31__7__I5 (.Y(N16), .A(N13), .B(N14));
NOR2X1 inst_cellmath__31__7__I6 (.Y(inst_cellmath__31__7__out0), .A(N15), .B(N16));
endmodule

module cynw_cm_float_add2_inst_cellmath__38__13__bdw2915265522_bdw (
	inst_cellmath__38__13__out0,
	inst_cellmath__38__13__in0,
	inst_cellmath__38__13__in1,
	inst_cellmath__38__13__in2
	); /* architecture "gate_level" */ 
output [22:0] inst_cellmath__38__13__out0;
input [8:8] inst_cellmath__38__13__in0;
input [22:0] inst_cellmath__38__13__in1,
	inst_cellmath__38__13__in2;
wire N268,N269,N270,N271,N272,N273;
INVX3 inst_cellmath__38__13__I72 (.Y(N268), .A(inst_cellmath__38__13__in0[8]));
INVX1 inst_cellmath__38__13__I77 (.Y(N273), .A(N268));
INVX1 inst_cellmath__38__13__I76 (.Y(N272), .A(N268));
INVX1 inst_cellmath__38__13__I75 (.Y(N271), .A(N268));
INVX1 inst_cellmath__38__13__I74 (.Y(N270), .A(N268));
INVX2 inst_cellmath__38__13__I73 (.Y(N269), .A(N268));
MX2XL inst_cellmath__38__13__I46 (.Y(inst_cellmath__38__13__out0[0]), .A(inst_cellmath__38__13__in2[0]), .B(inst_cellmath__38__13__in1[0]), .S0(N273));
MX2XL inst_cellmath__38__13__I47 (.Y(inst_cellmath__38__13__out0[1]), .A(inst_cellmath__38__13__in2[1]), .B(inst_cellmath__38__13__in1[1]), .S0(N273));
MX2XL inst_cellmath__38__13__I48 (.Y(inst_cellmath__38__13__out0[2]), .A(inst_cellmath__38__13__in2[2]), .B(inst_cellmath__38__13__in1[2]), .S0(N273));
MX2XL inst_cellmath__38__13__I49 (.Y(inst_cellmath__38__13__out0[3]), .A(inst_cellmath__38__13__in2[3]), .B(inst_cellmath__38__13__in1[3]), .S0(N272));
MX2XL inst_cellmath__38__13__I141 (.Y(inst_cellmath__38__13__out0[4]), .A(inst_cellmath__38__13__in2[4]), .B(inst_cellmath__38__13__in1[4]), .S0(N269));
MX2XL inst_cellmath__38__13__I51 (.Y(inst_cellmath__38__13__out0[5]), .A(inst_cellmath__38__13__in2[5]), .B(inst_cellmath__38__13__in1[5]), .S0(N272));
MX2XL inst_cellmath__38__13__I52 (.Y(inst_cellmath__38__13__out0[6]), .A(inst_cellmath__38__13__in2[6]), .B(inst_cellmath__38__13__in1[6]), .S0(N272));
MX2XL inst_cellmath__38__13__I53 (.Y(inst_cellmath__38__13__out0[7]), .A(inst_cellmath__38__13__in2[7]), .B(inst_cellmath__38__13__in1[7]), .S0(N272));
MX2XL inst_cellmath__38__13__I54 (.Y(inst_cellmath__38__13__out0[8]), .A(inst_cellmath__38__13__in2[8]), .B(inst_cellmath__38__13__in1[8]), .S0(N272));
MX2XL inst_cellmath__38__13__I55 (.Y(inst_cellmath__38__13__out0[9]), .A(inst_cellmath__38__13__in2[9]), .B(inst_cellmath__38__13__in1[9]), .S0(N271));
MX2XL inst_cellmath__38__13__I56 (.Y(inst_cellmath__38__13__out0[10]), .A(inst_cellmath__38__13__in2[10]), .B(inst_cellmath__38__13__in1[10]), .S0(N271));
MX2XL inst_cellmath__38__13__I57 (.Y(inst_cellmath__38__13__out0[11]), .A(inst_cellmath__38__13__in2[11]), .B(inst_cellmath__38__13__in1[11]), .S0(N271));
MX2XL inst_cellmath__38__13__I58 (.Y(inst_cellmath__38__13__out0[12]), .A(inst_cellmath__38__13__in2[12]), .B(inst_cellmath__38__13__in1[12]), .S0(N271));
MX2XL inst_cellmath__38__13__I59 (.Y(inst_cellmath__38__13__out0[13]), .A(inst_cellmath__38__13__in2[13]), .B(inst_cellmath__38__13__in1[13]), .S0(N271));
MX2XL inst_cellmath__38__13__I60 (.Y(inst_cellmath__38__13__out0[14]), .A(inst_cellmath__38__13__in2[14]), .B(inst_cellmath__38__13__in1[14]), .S0(N270));
MX2XL inst_cellmath__38__13__I61 (.Y(inst_cellmath__38__13__out0[15]), .A(inst_cellmath__38__13__in2[15]), .B(inst_cellmath__38__13__in1[15]), .S0(N270));
MX2XL inst_cellmath__38__13__I62 (.Y(inst_cellmath__38__13__out0[16]), .A(inst_cellmath__38__13__in2[16]), .B(inst_cellmath__38__13__in1[16]), .S0(N270));
MX2XL inst_cellmath__38__13__I63 (.Y(inst_cellmath__38__13__out0[17]), .A(inst_cellmath__38__13__in2[17]), .B(inst_cellmath__38__13__in1[17]), .S0(N270));
MX2XL inst_cellmath__38__13__I64 (.Y(inst_cellmath__38__13__out0[18]), .A(inst_cellmath__38__13__in2[18]), .B(inst_cellmath__38__13__in1[18]), .S0(N270));
MX2XL inst_cellmath__38__13__I65 (.Y(inst_cellmath__38__13__out0[19]), .A(inst_cellmath__38__13__in2[19]), .B(inst_cellmath__38__13__in1[19]), .S0(N269));
MX2XL inst_cellmath__38__13__I66 (.Y(inst_cellmath__38__13__out0[20]), .A(inst_cellmath__38__13__in2[20]), .B(inst_cellmath__38__13__in1[20]), .S0(N269));
MX2XL inst_cellmath__38__13__I67 (.Y(inst_cellmath__38__13__out0[21]), .A(inst_cellmath__38__13__in2[21]), .B(inst_cellmath__38__13__in1[21]), .S0(N269));
MX2XL inst_cellmath__38__13__I68 (.Y(inst_cellmath__38__13__out0[22]), .A(inst_cellmath__38__13__in2[22]), .B(inst_cellmath__38__13__in1[22]), .S0(N269));
endmodule

module cynw_cm_float_add2_inst_cellmath__30_0_bdw2915265522_bdw (
	inst_cellmath__30_0_out0,
	inst_cellmath__30_0_in0
	); /* architecture "gate_level" */ 
output  inst_cellmath__30_0_out0;
input [7:0] inst_cellmath__30_0_in0;
wire N11,N12,N13,N14,N15,N16;
NAND2X1 inst_cellmath__30_0_I0 (.Y(N11), .A(inst_cellmath__30_0_in0[0]), .B(inst_cellmath__30_0_in0[1]));
NAND2XL inst_cellmath__30_0_I1 (.Y(N12), .A(inst_cellmath__30_0_in0[7]), .B(inst_cellmath__30_0_in0[6]));
NAND2XL inst_cellmath__30_0_I2 (.Y(N13), .A(inst_cellmath__30_0_in0[5]), .B(inst_cellmath__30_0_in0[4]));
NAND2XL inst_cellmath__30_0_I3 (.Y(N14), .A(inst_cellmath__30_0_in0[3]), .B(inst_cellmath__30_0_in0[2]));
NOR2XL inst_cellmath__30_0_I4 (.Y(N15), .A(N11), .B(N12));
NOR2XL inst_cellmath__30_0_I5 (.Y(N16), .A(N13), .B(N14));
AND2XL inst_cellmath__30_0_I6 (.Y(inst_cellmath__30_0_out0), .A(N15), .B(N16));
endmodule

module cynw_cm_float_add2_inst_cellmath__32__8__bdw2915265522_bdw (
	inst_cellmath__32__8__out0,
	inst_cellmath__32__8__in0
	); /* architecture "gate_level" */ 
output  inst_cellmath__32__8__out0;
input [22:0] inst_cellmath__32__8__in0;
wire N26,N27,N28,N29,N30,N31,N32 
	,N33,N34,N35,N36,N37,N38,N39,N40 
	,N41,N42,N43,N44,N45,N47,N48;
NOR2XL inst_cellmath__32__8__I0 (.Y(N26), .A(inst_cellmath__32__8__in0[0]), .B(inst_cellmath__32__8__in0[1]));
NOR2XL inst_cellmath__32__8__I1 (.Y(N27), .A(inst_cellmath__32__8__in0[22]), .B(inst_cellmath__32__8__in0[21]));
NOR2XL inst_cellmath__32__8__I2 (.Y(N28), .A(inst_cellmath__32__8__in0[20]), .B(inst_cellmath__32__8__in0[19]));
NOR2XL inst_cellmath__32__8__I3 (.Y(N29), .A(inst_cellmath__32__8__in0[18]), .B(inst_cellmath__32__8__in0[17]));
NOR2XL inst_cellmath__32__8__I4 (.Y(N30), .A(inst_cellmath__32__8__in0[16]), .B(inst_cellmath__32__8__in0[15]));
NOR2XL inst_cellmath__32__8__I5 (.Y(N31), .A(inst_cellmath__32__8__in0[14]), .B(inst_cellmath__32__8__in0[13]));
NOR2XL inst_cellmath__32__8__I6 (.Y(N32), .A(inst_cellmath__32__8__in0[12]), .B(inst_cellmath__32__8__in0[11]));
NOR2XL inst_cellmath__32__8__I7 (.Y(N33), .A(inst_cellmath__32__8__in0[10]), .B(inst_cellmath__32__8__in0[9]));
NOR2XL inst_cellmath__32__8__I8 (.Y(N34), .A(inst_cellmath__32__8__in0[8]), .B(inst_cellmath__32__8__in0[7]));
NOR2XL inst_cellmath__32__8__I9 (.Y(N35), .A(inst_cellmath__32__8__in0[6]), .B(inst_cellmath__32__8__in0[5]));
NOR2XL inst_cellmath__32__8__I10 (.Y(N36), .A(inst_cellmath__32__8__in0[4]), .B(inst_cellmath__32__8__in0[3]));
INVXL inst_cellmath__32__8__I11 (.Y(N37), .A(inst_cellmath__32__8__in0[2]));
NAND2XL inst_cellmath__32__8__I12 (.Y(N38), .A(N37), .B(N26));
NAND2XL inst_cellmath__32__8__I13 (.Y(N39), .A(N27), .B(N28));
NAND2XL inst_cellmath__32__8__I14 (.Y(N40), .A(N29), .B(N30));
NAND2XL inst_cellmath__32__8__I15 (.Y(N41), .A(N31), .B(N32));
NAND2XL inst_cellmath__32__8__I16 (.Y(N42), .A(N33), .B(N34));
NAND2XL inst_cellmath__32__8__I17 (.Y(N43), .A(N35), .B(N36));
NOR2XL inst_cellmath__32__8__I18 (.Y(N44), .A(N38), .B(N39));
NOR2XL inst_cellmath__32__8__I19 (.Y(N45), .A(N40), .B(N41));
NAND2XL inst_cellmath__32__8__I21 (.Y(N47), .A(N44), .B(N45));
OR2XL inst_cellmath__32__8__I169 (.Y(N48), .A(N42), .B(N43));
NOR2XL inst_cellmath__32__8__I23 (.Y(inst_cellmath__32__8__out0), .A(N48), .B(N47));
endmodule

module cynw_cm_float_add2_inst_cellmath__24_0_bdw2915265522_bdw (
	inst_cellmath__24_0_out0,
	inst_cellmath__24_0_in0,
	inst_cellmath__24_0_in1
	); /* architecture "gate_level" */ 
output  inst_cellmath__24_0_out0;
input  inst_cellmath__24_0_in0,
	inst_cellmath__24_0_in1;
CLKAND2X3 inst_cellmath__24_0_I0 (.Y(inst_cellmath__24_0_out0), .A(inst_cellmath__24_0_in1), .B(inst_cellmath__24_0_in0));
endmodule

module cynw_cm_float_add2_inst_cellmath__50_0_bdw2915265522_bdw (
	inst_cellmath__50_0_out0,
	inst_cellmath__50_0_in0,
	inst_cellmath__50_0_in1
	); /* architecture "gate_level" */ 
output  inst_cellmath__50_0_out0;
input  inst_cellmath__50_0_in0,
	inst_cellmath__50_0_in1;
CLKXOR2X1 inst_cellmath__50_0_I0 (.Y(inst_cellmath__50_0_out0), .A(inst_cellmath__50_0_in1), .B(inst_cellmath__50_0_in0));
endmodule

module cynw_cm_float_add2_inst_cellmath__27_0_bdw2915265522_bdw (
	inst_cellmath__27_0_out0,
	inst_cellmath__27_0_in0
	); /* architecture "gate_level" */ 
output  inst_cellmath__27_0_out0;
input [7:0] inst_cellmath__27_0_in0;
wire N11,N12,N13,N14,N15,N16;
NAND2X1 inst_cellmath__27_0_I0 (.Y(N11), .A(inst_cellmath__27_0_in0[0]), .B(inst_cellmath__27_0_in0[1]));
NAND2XL inst_cellmath__27_0_I1 (.Y(N12), .A(inst_cellmath__27_0_in0[7]), .B(inst_cellmath__27_0_in0[6]));
NAND2XL inst_cellmath__27_0_I2 (.Y(N13), .A(inst_cellmath__27_0_in0[5]), .B(inst_cellmath__27_0_in0[4]));
NAND2XL inst_cellmath__27_0_I3 (.Y(N14), .A(inst_cellmath__27_0_in0[3]), .B(inst_cellmath__27_0_in0[2]));
NOR2XL inst_cellmath__27_0_I4 (.Y(N15), .A(N11), .B(N12));
NOR2XL inst_cellmath__27_0_I5 (.Y(N16), .A(N13), .B(N14));
AND2XL inst_cellmath__27_0_I6 (.Y(inst_cellmath__27_0_out0), .A(N15), .B(N16));
endmodule

module cynw_cm_float_add2_inst_cellmath__29__6__bdw2915265522_bdw (
	inst_cellmath__29__6__out0,
	inst_cellmath__29__6__in0
	); /* architecture "gate_level" */ 
output  inst_cellmath__29__6__out0;
input [22:0] inst_cellmath__29__6__in0;
wire N26,N27,N28,N29,N30,N31,N32 
	,N33,N34,N35,N36,N37,N38,N39,N40 
	,N41,N42,N43,N44,N45,N47,N48;
NOR2XL inst_cellmath__29__6__I0 (.Y(N26), .A(inst_cellmath__29__6__in0[0]), .B(inst_cellmath__29__6__in0[1]));
NOR2XL inst_cellmath__29__6__I1 (.Y(N27), .A(inst_cellmath__29__6__in0[22]), .B(inst_cellmath__29__6__in0[21]));
NOR2XL inst_cellmath__29__6__I2 (.Y(N28), .A(inst_cellmath__29__6__in0[20]), .B(inst_cellmath__29__6__in0[19]));
NOR2XL inst_cellmath__29__6__I3 (.Y(N29), .A(inst_cellmath__29__6__in0[18]), .B(inst_cellmath__29__6__in0[17]));
NOR2XL inst_cellmath__29__6__I4 (.Y(N30), .A(inst_cellmath__29__6__in0[16]), .B(inst_cellmath__29__6__in0[15]));
NOR2XL inst_cellmath__29__6__I5 (.Y(N31), .A(inst_cellmath__29__6__in0[14]), .B(inst_cellmath__29__6__in0[13]));
NOR2XL inst_cellmath__29__6__I6 (.Y(N32), .A(inst_cellmath__29__6__in0[12]), .B(inst_cellmath__29__6__in0[11]));
NOR2XL inst_cellmath__29__6__I7 (.Y(N33), .A(inst_cellmath__29__6__in0[10]), .B(inst_cellmath__29__6__in0[9]));
NOR2XL inst_cellmath__29__6__I8 (.Y(N34), .A(inst_cellmath__29__6__in0[8]), .B(inst_cellmath__29__6__in0[7]));
NOR2XL inst_cellmath__29__6__I9 (.Y(N35), .A(inst_cellmath__29__6__in0[6]), .B(inst_cellmath__29__6__in0[5]));
NOR2XL inst_cellmath__29__6__I10 (.Y(N36), .A(inst_cellmath__29__6__in0[4]), .B(inst_cellmath__29__6__in0[3]));
INVXL inst_cellmath__29__6__I11 (.Y(N37), .A(inst_cellmath__29__6__in0[2]));
NAND2XL inst_cellmath__29__6__I12 (.Y(N38), .A(N37), .B(N26));
NAND2XL inst_cellmath__29__6__I13 (.Y(N39), .A(N27), .B(N28));
NAND2XL inst_cellmath__29__6__I14 (.Y(N40), .A(N29), .B(N30));
NAND2XL inst_cellmath__29__6__I15 (.Y(N41), .A(N31), .B(N32));
NAND2XL inst_cellmath__29__6__I16 (.Y(N42), .A(N33), .B(N34));
NAND2XL inst_cellmath__29__6__I17 (.Y(N43), .A(N35), .B(N36));
NOR2XL inst_cellmath__29__6__I18 (.Y(N44), .A(N38), .B(N39));
NOR2XL inst_cellmath__29__6__I19 (.Y(N45), .A(N40), .B(N41));
NAND2XL inst_cellmath__29__6__I21 (.Y(N47), .A(N44), .B(N45));
OR2XL inst_cellmath__29__6__I169 (.Y(N48), .A(N42), .B(N43));
NOR2XL inst_cellmath__29__6__I23 (.Y(inst_cellmath__29__6__out0), .A(N48), .B(N47));
endmodule

module cynw_cm_float_add2_inst_cellmath__21_0_bdw2915265522_bdw (
	inst_cellmath__21_0_out0,
	inst_cellmath__21_0_in0,
	inst_cellmath__21_0_in1
	); /* architecture "gate_level" */ 
output  inst_cellmath__21_0_out0;
input  inst_cellmath__21_0_in0,
	inst_cellmath__21_0_in1;
CLKAND2X3 inst_cellmath__21_0_I0 (.Y(inst_cellmath__21_0_out0), .A(inst_cellmath__21_0_in1), .B(inst_cellmath__21_0_in0));
endmodule

module cynw_cm_float_add2_inst_cellmath__62__28__bdw2915265522_bdw (
	inst_cellmath__62__28__out0,
	inst_cellmath__62__28__in0,
	inst_cellmath__62__28__in1,
	inst_cellmath__62__28__in2
	); /* architecture "gate_level" */ 
output [0:0] inst_cellmath__62__28__out0;
input  inst_cellmath__62__28__in0,
	inst_cellmath__62__28__in1,
	inst_cellmath__62__28__in2;
wire N7;
AND2XL inst_cellmath__62__28__I0 (.Y(N7), .A(inst_cellmath__62__28__in1), .B(inst_cellmath__62__28__in2));
AND2XL inst_cellmath__62__28__I2 (.Y(inst_cellmath__62__28__out0[0]), .A(N7), .B(inst_cellmath__62__28__in0));
endmodule

module cynw_cm_float_add2_inst_cellmath__20_0_bdw2915265522_bdw (
	inst_cellmath__20_0_out0,
	inst_cellmath__20_0_in0,
	inst_cellmath__20_0_in1
	); /* architecture "gate_level" */ 
output  inst_cellmath__20_0_out0;
input  inst_cellmath__20_0_in0,
	inst_cellmath__20_0_in1;
wire N5;
INVXL inst_cellmath__20_0_I0 (.Y(N5), .A(inst_cellmath__20_0_in1));
NOR2X2 inst_cellmath__20_0_I1 (.Y(inst_cellmath__20_0_out0), .A(N5), .B(inst_cellmath__20_0_in0));
endmodule

module cynw_cm_float_add2_inst_cellmath__23_0_bdw2915265522_bdw (
	inst_cellmath__23_0_out0,
	inst_cellmath__23_0_in0,
	inst_cellmath__23_0_in1
	); /* architecture "gate_level" */ 
output  inst_cellmath__23_0_out0;
input  inst_cellmath__23_0_in0,
	inst_cellmath__23_0_in1;
wire N5;
INVXL inst_cellmath__23_0_I0 (.Y(N5), .A(inst_cellmath__23_0_in1));
NOR2X2 inst_cellmath__23_0_I1 (.Y(inst_cellmath__23_0_out0), .A(N5), .B(inst_cellmath__23_0_in0));
endmodule

module cynw_cm_float_add2_inst_cellmath__62_0_bdw2915265522_bdw (
	inst_cellmath__62_0_out0,
	inst_cellmath__62_0_in0,
	inst_cellmath__62_0_in1,
	inst_cellmath__62_0_in2
	); /* architecture "gate_level" */ 
output  inst_cellmath__62_0_out0;
input [0:0] inst_cellmath__62_0_in0;
input  inst_cellmath__62_0_in1,
	inst_cellmath__62_0_in2;
wire N7,N25;
OR2XL inst_cellmath__62_0_I0 (.Y(N7), .A(inst_cellmath__62_0_in1), .B(inst_cellmath__62_0_in2));
NOR2X2 or2_A_I10 (.Y(N25), .A(N7), .B(inst_cellmath__62_0_in0[0]));
INVX1 or2_A_I11 (.Y(inst_cellmath__62_0_out0), .A(N25));
endmodule

module cynw_cm_float_add2_inst_cellmath__47_0_bdw2915265522_bdw (
	inst_cellmath__47_0_out0,
	inst_cellmath__47_0_in0,
	inst_cellmath__47_0_in1
	); /* architecture "gate_level" */ 
output [7:0] inst_cellmath__47_0_out0;
input [8:0] inst_cellmath__47_0_in0;
input [7:0] inst_cellmath__47_0_in1;
wire N43,N44,N45,N46,N47,N48,N49 
	,N50,N61,N62;
INVXL inst_cellmath__47_0_I16 (.Y(N43), .A(inst_cellmath__47_0_in0[0]));
INVXL inst_cellmath__47_0_I17 (.Y(N44), .A(inst_cellmath__47_0_in0[1]));
INVXL inst_cellmath__47_0_I18 (.Y(N45), .A(inst_cellmath__47_0_in0[2]));
INVXL inst_cellmath__47_0_I19 (.Y(N46), .A(inst_cellmath__47_0_in0[3]));
INVXL inst_cellmath__47_0_I20 (.Y(N47), .A(inst_cellmath__47_0_in0[4]));
INVXL inst_cellmath__47_0_I21 (.Y(N48), .A(inst_cellmath__47_0_in0[5]));
INVXL inst_cellmath__47_0_I22 (.Y(N49), .A(inst_cellmath__47_0_in0[6]));
INVXL inst_cellmath__47_0_I23 (.Y(N50), .A(inst_cellmath__47_0_in0[7]));
INVXL inst_cellmath__47_0_I33 (.Y(N61), .A(inst_cellmath__47_0_in0[8]));
INVX1 inst_cellmath__47_0_I34 (.Y(N62), .A(N61));
MXI2XL inst_cellmath__47_0_I24 (.Y(inst_cellmath__47_0_out0[0]), .A(N43), .B(inst_cellmath__47_0_in1[0]), .S0(N62));
MXI2X2 inst_cellmath__47_0_I25 (.Y(inst_cellmath__47_0_out0[1]), .A(N44), .B(inst_cellmath__47_0_in1[1]), .S0(N62));
MXI2X2 inst_cellmath__47_0_I26 (.Y(inst_cellmath__47_0_out0[2]), .A(N45), .B(inst_cellmath__47_0_in1[2]), .S0(N62));
MXI2XL inst_cellmath__47_0_I27 (.Y(inst_cellmath__47_0_out0[3]), .A(N46), .B(inst_cellmath__47_0_in1[3]), .S0(N62));
MXI2XL inst_cellmath__47_0_I28 (.Y(inst_cellmath__47_0_out0[4]), .A(N47), .B(inst_cellmath__47_0_in1[4]), .S0(N62));
MXI2XL inst_cellmath__47_0_I29 (.Y(inst_cellmath__47_0_out0[5]), .A(N48), .B(inst_cellmath__47_0_in1[5]), .S0(N62));
MXI2XL inst_cellmath__47_0_I30 (.Y(inst_cellmath__47_0_out0[6]), .A(N49), .B(inst_cellmath__47_0_in1[6]), .S0(N62));
MXI2XL inst_cellmath__47_0_I31 (.Y(inst_cellmath__47_0_out0[7]), .A(N50), .B(inst_cellmath__47_0_in1[7]), .S0(N62));
endmodule

module cynw_cm_float_add2_inst_cellmath__49_0_bdw2915265522_bdw (
	inst_cellmath__49_0_out0,
	inst_cellmath__49_0_in0,
	inst_cellmath__49_0_in1
	); /* architecture "gate_level" */ 
output [24:0] inst_cellmath__49_0_out0;
input [22:0] inst_cellmath__49_0_in0;
input [4:0] inst_cellmath__49_0_in1;
wire N82,N84,N85,N86,N87,N88,N89 
	,N90,N91,N92,N93,N94,N95,N96,N97 
	,N98,N99,N100,N101,N102,N103,N104,N105 
	,N107,N141,N142,N143,N144,N145,N146,N147 
	,N148,N149,N150,N151,N152,N153,N154,N155 
	,N156,N157,N158,N159,N160,N161,N162,N164 
	,N166,N168,N199,N200,N201,N202,N203,N204 
	,N205,N206,N207,N208,N209,N210,N211,N212 
	,N213,N214,N215,N216,N219,N222,N225,N228 
	,N231,N234,N237,N294,N295,N296,N297,N298 
	,N299,N300,N301,N302,N303,N305,N307,N309 
	,N311,N313,N315,N317,N319,N321,N323,N325 
	,N327,N329,N331,N333,N485,N488,N489,N490 
	,N492,N493,N495,N496;
CLKINVX8 inst_cellmath__49_0_I291 (.Y(N485), .A(inst_cellmath__49_0_in1[1]));
NOR2BX1 inst_cellmath__49_0_I2 (.Y(N82), .AN(inst_cellmath__49_0_in0[1]), .B(N485));
MX2XL inst_cellmath__49_0_I3 (.Y(N84), .A(inst_cellmath__49_0_in0[2]), .B(inst_cellmath__49_0_in0[0]), .S0(N485));
MX2XL inst_cellmath__49_0_I4 (.Y(N85), .A(inst_cellmath__49_0_in0[3]), .B(inst_cellmath__49_0_in0[1]), .S0(N485));
MX2XL inst_cellmath__49_0_I5 (.Y(N86), .A(inst_cellmath__49_0_in0[4]), .B(inst_cellmath__49_0_in0[2]), .S0(N485));
MX2XL inst_cellmath__49_0_I6 (.Y(N87), .A(inst_cellmath__49_0_in0[5]), .B(inst_cellmath__49_0_in0[3]), .S0(N485));
MX2XL inst_cellmath__49_0_I7 (.Y(N88), .A(inst_cellmath__49_0_in0[6]), .B(inst_cellmath__49_0_in0[4]), .S0(N485));
MX2XL inst_cellmath__49_0_I8 (.Y(N89), .A(inst_cellmath__49_0_in0[7]), .B(inst_cellmath__49_0_in0[5]), .S0(N485));
MX2XL inst_cellmath__49_0_I9 (.Y(N90), .A(inst_cellmath__49_0_in0[8]), .B(inst_cellmath__49_0_in0[6]), .S0(N485));
MX2XL inst_cellmath__49_0_I10 (.Y(N91), .A(inst_cellmath__49_0_in0[9]), .B(inst_cellmath__49_0_in0[7]), .S0(N485));
MX2XL inst_cellmath__49_0_I11 (.Y(N92), .A(inst_cellmath__49_0_in0[10]), .B(inst_cellmath__49_0_in0[8]), .S0(N485));
MX2XL inst_cellmath__49_0_I12 (.Y(N93), .A(inst_cellmath__49_0_in0[11]), .B(inst_cellmath__49_0_in0[9]), .S0(N485));
MX2XL inst_cellmath__49_0_I13 (.Y(N94), .A(inst_cellmath__49_0_in0[12]), .B(inst_cellmath__49_0_in0[10]), .S0(N485));
MX2XL inst_cellmath__49_0_I14 (.Y(N95), .A(inst_cellmath__49_0_in0[13]), .B(inst_cellmath__49_0_in0[11]), .S0(N485));
MX2XL inst_cellmath__49_0_I15 (.Y(N96), .A(inst_cellmath__49_0_in0[14]), .B(inst_cellmath__49_0_in0[12]), .S0(N485));
MX2XL inst_cellmath__49_0_I16 (.Y(N97), .A(inst_cellmath__49_0_in0[15]), .B(inst_cellmath__49_0_in0[13]), .S0(N485));
MX2XL inst_cellmath__49_0_I17 (.Y(N98), .A(inst_cellmath__49_0_in0[16]), .B(inst_cellmath__49_0_in0[14]), .S0(N485));
MX2XL inst_cellmath__49_0_I18 (.Y(N99), .A(inst_cellmath__49_0_in0[17]), .B(inst_cellmath__49_0_in0[15]), .S0(N485));
MX2XL inst_cellmath__49_0_I19 (.Y(N100), .A(inst_cellmath__49_0_in0[18]), .B(inst_cellmath__49_0_in0[16]), .S0(N485));
MX2XL inst_cellmath__49_0_I20 (.Y(N101), .A(inst_cellmath__49_0_in0[19]), .B(inst_cellmath__49_0_in0[17]), .S0(N485));
MX2XL inst_cellmath__49_0_I21 (.Y(N102), .A(inst_cellmath__49_0_in0[20]), .B(inst_cellmath__49_0_in0[18]), .S0(N485));
MX2XL inst_cellmath__49_0_I22 (.Y(N103), .A(inst_cellmath__49_0_in0[21]), .B(inst_cellmath__49_0_in0[19]), .S0(N485));
MX2XL inst_cellmath__49_0_I23 (.Y(N104), .A(inst_cellmath__49_0_in0[22]), .B(inst_cellmath__49_0_in0[20]), .S0(N485));
NAND2BXL inst_cellmath__49_0_I24 (.Y(N105), .AN(inst_cellmath__49_0_in0[21]), .B(N485));
AND2XL inst_cellmath__49_0_I25 (.Y(N107), .A(N485), .B(inst_cellmath__49_0_in0[22]));
INVX2 inst_cellmath__49_0_I294 (.Y(N488), .A(inst_cellmath__49_0_in1[2]));
AOI22XL inst_cellmath__49_0_I56 (.Y(N141), .A0(inst_cellmath__49_0_in1[2]), .A1(N87), .B0(N82), .B1(N488));
AOI22XL inst_cellmath__49_0_I57 (.Y(N142), .A0(inst_cellmath__49_0_in1[2]), .A1(N88), .B0(N84), .B1(N488));
AOI22XL inst_cellmath__49_0_I58 (.Y(N143), .A0(inst_cellmath__49_0_in1[2]), .A1(N89), .B0(N85), .B1(N488));
AOI22XL inst_cellmath__49_0_I59 (.Y(N144), .A0(inst_cellmath__49_0_in1[2]), .A1(N90), .B0(N86), .B1(N488));
AOI22XL inst_cellmath__49_0_I60 (.Y(N145), .A0(inst_cellmath__49_0_in1[2]), .A1(N91), .B0(N87), .B1(N488));
AOI22XL inst_cellmath__49_0_I61 (.Y(N146), .A0(inst_cellmath__49_0_in1[2]), .A1(N92), .B0(N88), .B1(N488));
AOI22XL inst_cellmath__49_0_I62 (.Y(N147), .A0(inst_cellmath__49_0_in1[2]), .A1(N93), .B0(N89), .B1(N488));
AOI22XL inst_cellmath__49_0_I63 (.Y(N148), .A0(inst_cellmath__49_0_in1[2]), .A1(N94), .B0(N90), .B1(N488));
AOI22XL inst_cellmath__49_0_I64 (.Y(N149), .A0(inst_cellmath__49_0_in1[2]), .A1(N95), .B0(N91), .B1(N488));
AOI22X1 inst_cellmath__49_0_I65 (.Y(N150), .A0(inst_cellmath__49_0_in1[2]), .A1(N96), .B0(N92), .B1(N488));
AOI22XL inst_cellmath__49_0_I66 (.Y(N151), .A0(inst_cellmath__49_0_in1[2]), .A1(N97), .B0(N93), .B1(N488));
AOI22XL inst_cellmath__49_0_I67 (.Y(N152), .A0(inst_cellmath__49_0_in1[2]), .A1(N98), .B0(N94), .B1(N488));
AOI22X1 inst_cellmath__49_0_I68 (.Y(N153), .A0(inst_cellmath__49_0_in1[2]), .A1(N99), .B0(N95), .B1(N488));
AOI22X1 inst_cellmath__49_0_I69 (.Y(N154), .A0(inst_cellmath__49_0_in1[2]), .A1(N100), .B0(N96), .B1(N488));
AOI22X1 inst_cellmath__49_0_I70 (.Y(N155), .A0(inst_cellmath__49_0_in1[2]), .A1(N101), .B0(N97), .B1(N488));
AOI22XL inst_cellmath__49_0_I71 (.Y(N156), .A0(inst_cellmath__49_0_in1[2]), .A1(N102), .B0(N98), .B1(N488));
AOI22X1 inst_cellmath__49_0_I72 (.Y(N157), .A0(inst_cellmath__49_0_in1[2]), .A1(N103), .B0(N99), .B1(N488));
AOI22X1 inst_cellmath__49_0_I73 (.Y(N158), .A0(inst_cellmath__49_0_in1[2]), .A1(N104), .B0(N100), .B1(N488));
AOI22XL inst_cellmath__49_0_I74 (.Y(N159), .A0(inst_cellmath__49_0_in1[2]), .A1(N105), .B0(N101), .B1(N488));
AOI22XL inst_cellmath__49_0_I75 (.Y(N160), .A0(inst_cellmath__49_0_in1[2]), .A1(N107), .B0(N102), .B1(N488));
AOI22XL inst_cellmath__49_0_I76 (.Y(N161), .A0(inst_cellmath__49_0_in1[2]), .A1(N485), .B0(N103), .B1(N488));
NAND2XL inst_cellmath__49_0_I77 (.Y(N162), .A(N104), .B(N488));
NAND2XL inst_cellmath__49_0_I78 (.Y(N164), .A(N105), .B(N488));
NAND2XL inst_cellmath__49_0_I79 (.Y(N166), .A(N107), .B(N488));
NAND2XL inst_cellmath__49_0_I80 (.Y(N168), .A(N485), .B(N488));
INVX1 inst_cellmath__49_0_I295 (.Y(N489), .A(inst_cellmath__49_0_in1[3]));
INVX2 inst_cellmath__49_0_I296 (.Y(N490), .A(N489));
AOI22XL inst_cellmath__49_0_I110 (.Y(N199), .A0(N489), .A1(N141), .B0(N149), .B1(N490));
AOI22XL inst_cellmath__49_0_I111 (.Y(N200), .A0(N489), .A1(N142), .B0(N150), .B1(N490));
AOI22XL inst_cellmath__49_0_I112 (.Y(N201), .A0(N489), .A1(N143), .B0(N151), .B1(N490));
AOI22XL inst_cellmath__49_0_I113 (.Y(N202), .A0(N489), .A1(N144), .B0(N152), .B1(N490));
AOI22XL inst_cellmath__49_0_I114 (.Y(N203), .A0(N489), .A1(N145), .B0(N153), .B1(N490));
AOI22XL inst_cellmath__49_0_I115 (.Y(N204), .A0(N489), .A1(N146), .B0(N154), .B1(N490));
AOI22XL inst_cellmath__49_0_I116 (.Y(N205), .A0(N489), .A1(N147), .B0(N155), .B1(N490));
AOI22XL inst_cellmath__49_0_I117 (.Y(N206), .A0(N489), .A1(N148), .B0(N156), .B1(N490));
AOI22XL inst_cellmath__49_0_I118 (.Y(N207), .A0(N489), .A1(N149), .B0(N157), .B1(N490));
AOI22XL inst_cellmath__49_0_I119 (.Y(N208), .A0(N489), .A1(N150), .B0(N158), .B1(N490));
AOI22XL inst_cellmath__49_0_I120 (.Y(N209), .A0(N489), .A1(N151), .B0(N159), .B1(N490));
AOI22XL inst_cellmath__49_0_I121 (.Y(N210), .A0(N489), .A1(N152), .B0(N160), .B1(N490));
AOI22X1 inst_cellmath__49_0_I122 (.Y(N211), .A0(N489), .A1(N153), .B0(N161), .B1(N490));
AOI22X1 inst_cellmath__49_0_I123 (.Y(N212), .A0(N489), .A1(N154), .B0(N162), .B1(N490));
AOI22XL inst_cellmath__49_0_I124 (.Y(N213), .A0(N489), .A1(N155), .B0(N164), .B1(N490));
AOI22XL inst_cellmath__49_0_I125 (.Y(N214), .A0(N489), .A1(N156), .B0(N166), .B1(N490));
AOI22X1 inst_cellmath__49_0_I126 (.Y(N215), .A0(N489), .A1(N157), .B0(N168), .B1(N490));
NOR2XL inst_cellmath__49_0_I127 (.Y(N216), .A(N490), .B(N158));
NOR2XL inst_cellmath__49_0_I128 (.Y(N219), .A(N490), .B(N159));
NOR2XL inst_cellmath__49_0_I129 (.Y(N222), .A(N490), .B(N160));
NOR2X1 inst_cellmath__49_0_I130 (.Y(N225), .A(N490), .B(N161));
NOR2XL inst_cellmath__49_0_I131 (.Y(N228), .A(N490), .B(N162));
NOR2XL inst_cellmath__49_0_I132 (.Y(N231), .A(N490), .B(N164));
NOR2XL inst_cellmath__49_0_I133 (.Y(N234), .A(N490), .B(N166));
NOR2XL inst_cellmath__49_0_I134 (.Y(N237), .A(N490), .B(N168));
INVX2 inst_cellmath__49_0_I298 (.Y(N492), .A(inst_cellmath__49_0_in1[4]));
INVXL inst_cellmath__49_0_I299 (.Y(N493), .A(N492));
AOI22XL inst_cellmath__49_0_I164 (.Y(N294), .A0(N493), .A1(N215), .B0(N199), .B1(N492));
AOI22XL inst_cellmath__49_0_I165 (.Y(N295), .A0(N493), .A1(N216), .B0(N200), .B1(N492));
AOI22XL inst_cellmath__49_0_I166 (.Y(N296), .A0(N493), .A1(N219), .B0(N201), .B1(N492));
AOI22XL inst_cellmath__49_0_I167 (.Y(N297), .A0(N493), .A1(N222), .B0(N202), .B1(N492));
AOI22X1 inst_cellmath__49_0_I168 (.Y(N298), .A0(N493), .A1(N225), .B0(N203), .B1(N492));
AOI22XL inst_cellmath__49_0_I169 (.Y(N299), .A0(N493), .A1(N228), .B0(N204), .B1(N492));
AOI22XL inst_cellmath__49_0_I170 (.Y(N300), .A0(N493), .A1(N231), .B0(N205), .B1(N492));
AOI22XL inst_cellmath__49_0_I171 (.Y(N301), .A0(N493), .A1(N234), .B0(N206), .B1(N492));
AOI22X1 inst_cellmath__49_0_I172 (.Y(N302), .A0(N493), .A1(N237), .B0(N207), .B1(N492));
NAND2X2 inst_cellmath__49_0_I173 (.Y(N303), .A(N208), .B(N492));
NAND2X2 inst_cellmath__49_0_I174 (.Y(N305), .A(N209), .B(N492));
NAND2X1 inst_cellmath__49_0_I175 (.Y(N307), .A(N210), .B(N492));
NAND2X2 inst_cellmath__49_0_I176 (.Y(N309), .A(N211), .B(N492));
NAND2X2 inst_cellmath__49_0_I177 (.Y(N311), .A(N212), .B(N492));
NAND2X2 inst_cellmath__49_0_I178 (.Y(N313), .A(N213), .B(N492));
NAND2X2 inst_cellmath__49_0_I179 (.Y(N315), .A(N214), .B(N492));
NAND2X2 inst_cellmath__49_0_I180 (.Y(N317), .A(N215), .B(N492));
NAND2X1 inst_cellmath__49_0_I181 (.Y(N319), .A(N216), .B(N492));
NAND2XL inst_cellmath__49_0_I182 (.Y(N321), .A(N219), .B(N492));
NAND2XL inst_cellmath__49_0_I183 (.Y(N323), .A(N222), .B(N492));
NAND2X2 inst_cellmath__49_0_I184 (.Y(N325), .A(N225), .B(N492));
NAND2X1 inst_cellmath__49_0_I185 (.Y(N327), .A(N228), .B(N492));
NAND2XL inst_cellmath__49_0_I186 (.Y(N329), .A(N231), .B(N492));
NAND2XL inst_cellmath__49_0_I187 (.Y(N331), .A(N234), .B(N492));
NAND2XL inst_cellmath__49_0_I188 (.Y(N333), .A(N237), .B(N492));
INVX2 inst_cellmath__49_0_I301 (.Y(N495), .A(inst_cellmath__49_0_in1[0]));
INVX2 inst_cellmath__49_0_I302 (.Y(N496), .A(N495));
AOI22XL inst_cellmath__49_0_I218 (.Y(inst_cellmath__49_0_out0[0]), .A0(N495), .A1(N294), .B0(N295), .B1(N496));
AOI22XL inst_cellmath__49_0_I219 (.Y(inst_cellmath__49_0_out0[1]), .A0(N495), .A1(N295), .B0(N296), .B1(N496));
AOI22XL inst_cellmath__49_0_I220 (.Y(inst_cellmath__49_0_out0[2]), .A0(N495), .A1(N296), .B0(N297), .B1(N496));
AOI22XL inst_cellmath__49_0_I221 (.Y(inst_cellmath__49_0_out0[3]), .A0(N495), .A1(N297), .B0(N298), .B1(N496));
AOI22XL inst_cellmath__49_0_I222 (.Y(inst_cellmath__49_0_out0[4]), .A0(N495), .A1(N298), .B0(N299), .B1(N496));
AOI22XL inst_cellmath__49_0_I223 (.Y(inst_cellmath__49_0_out0[5]), .A0(N495), .A1(N299), .B0(N300), .B1(N496));
AOI22XL inst_cellmath__49_0_I224 (.Y(inst_cellmath__49_0_out0[6]), .A0(N495), .A1(N300), .B0(N301), .B1(N496));
AOI22XL inst_cellmath__49_0_I225 (.Y(inst_cellmath__49_0_out0[7]), .A0(N495), .A1(N301), .B0(N302), .B1(N496));
AOI22XL inst_cellmath__49_0_I226 (.Y(inst_cellmath__49_0_out0[8]), .A0(N495), .A1(N302), .B0(N303), .B1(N496));
AOI22XL inst_cellmath__49_0_I227 (.Y(inst_cellmath__49_0_out0[9]), .A0(N495), .A1(N303), .B0(N305), .B1(N496));
AOI22XL inst_cellmath__49_0_I228 (.Y(inst_cellmath__49_0_out0[10]), .A0(N495), .A1(N305), .B0(N307), .B1(N496));
AOI22XL inst_cellmath__49_0_I229 (.Y(inst_cellmath__49_0_out0[11]), .A0(N495), .A1(N307), .B0(N309), .B1(N496));
AOI22XL inst_cellmath__49_0_I230 (.Y(inst_cellmath__49_0_out0[12]), .A0(N495), .A1(N309), .B0(N311), .B1(N496));
AOI22XL inst_cellmath__49_0_I231 (.Y(inst_cellmath__49_0_out0[13]), .A0(N495), .A1(N311), .B0(N313), .B1(N496));
AOI22XL inst_cellmath__49_0_I232 (.Y(inst_cellmath__49_0_out0[14]), .A0(N495), .A1(N313), .B0(N315), .B1(N496));
AOI22XL inst_cellmath__49_0_I233 (.Y(inst_cellmath__49_0_out0[15]), .A0(N495), .A1(N315), .B0(N317), .B1(N496));
AOI22XL inst_cellmath__49_0_I234 (.Y(inst_cellmath__49_0_out0[16]), .A0(N495), .A1(N317), .B0(N319), .B1(N496));
AOI22XL inst_cellmath__49_0_I587 (.Y(inst_cellmath__49_0_out0[17]), .A0(N496), .A1(N321), .B0(N495), .B1(N319));
AOI22XL inst_cellmath__49_0_I236 (.Y(inst_cellmath__49_0_out0[18]), .A0(N495), .A1(N321), .B0(N323), .B1(N496));
AOI22XL inst_cellmath__49_0_I237 (.Y(inst_cellmath__49_0_out0[19]), .A0(N495), .A1(N323), .B0(N325), .B1(N496));
AOI22XL inst_cellmath__49_0_I238 (.Y(inst_cellmath__49_0_out0[20]), .A0(N495), .A1(N325), .B0(N327), .B1(N496));
AOI22XL inst_cellmath__49_0_I239 (.Y(inst_cellmath__49_0_out0[21]), .A0(N495), .A1(N327), .B0(N329), .B1(N496));
AOI22XL inst_cellmath__49_0_I240 (.Y(inst_cellmath__49_0_out0[22]), .A0(N495), .A1(N329), .B0(N331), .B1(N496));
AOI22XL inst_cellmath__49_0_I241 (.Y(inst_cellmath__49_0_out0[23]), .A0(N495), .A1(N331), .B0(N333), .B1(N496));
NOR2XL inst_cellmath__49_0_I242 (.Y(inst_cellmath__49_0_out0[24]), .A(N496), .B(N333));
endmodule

module cynw_cm_float_add2_inst_cellmath__39_0_0_0_bdw2915265522_bdw (
	inst_cellmath__39_0_0_0_out0,
	inst_cellmath__39_0_0_0_in0,
	inst_cellmath__39_0_0_0_in1
	); /* architecture "gate_level" */ 
output [24:0] inst_cellmath__39_0_0_0_out0;
input [24:0] inst_cellmath__39_0_0_0_in0;
input [7:5] inst_cellmath__39_0_0_0_in1;
wire N58;
NOR3X1 inst_cellmath__39_0_0_0_I153 (.Y(N58), .A(inst_cellmath__39_0_0_0_in1[6]), .B(inst_cellmath__39_0_0_0_in1[5]), .C(inst_cellmath__39_0_0_0_in1[7]));
AND2XL inst_cellmath__39_0_0_0_I4 (.Y(inst_cellmath__39_0_0_0_out0[0]), .A(N58), .B(inst_cellmath__39_0_0_0_in0[0]));
AND2XL inst_cellmath__39_0_0_0_I10 (.Y(inst_cellmath__39_0_0_0_out0[1]), .A(N58), .B(inst_cellmath__39_0_0_0_in0[1]));
AND2XL inst_cellmath__39_0_0_0_I16 (.Y(inst_cellmath__39_0_0_0_out0[2]), .A(N58), .B(inst_cellmath__39_0_0_0_in0[2]));
AND2XL inst_cellmath__39_0_0_0_I22 (.Y(inst_cellmath__39_0_0_0_out0[3]), .A(N58), .B(inst_cellmath__39_0_0_0_in0[3]));
AND2XL inst_cellmath__39_0_0_0_I28 (.Y(inst_cellmath__39_0_0_0_out0[4]), .A(N58), .B(inst_cellmath__39_0_0_0_in0[4]));
AND2XL inst_cellmath__39_0_0_0_I34 (.Y(inst_cellmath__39_0_0_0_out0[5]), .A(N58), .B(inst_cellmath__39_0_0_0_in0[5]));
AND2XL inst_cellmath__39_0_0_0_I40 (.Y(inst_cellmath__39_0_0_0_out0[6]), .A(N58), .B(inst_cellmath__39_0_0_0_in0[6]));
AND2XL inst_cellmath__39_0_0_0_I46 (.Y(inst_cellmath__39_0_0_0_out0[7]), .A(N58), .B(inst_cellmath__39_0_0_0_in0[7]));
AND2XL inst_cellmath__39_0_0_0_I52 (.Y(inst_cellmath__39_0_0_0_out0[8]), .A(N58), .B(inst_cellmath__39_0_0_0_in0[8]));
AND2XL inst_cellmath__39_0_0_0_I58 (.Y(inst_cellmath__39_0_0_0_out0[9]), .A(N58), .B(inst_cellmath__39_0_0_0_in0[9]));
AND2XL inst_cellmath__39_0_0_0_I64 (.Y(inst_cellmath__39_0_0_0_out0[10]), .A(N58), .B(inst_cellmath__39_0_0_0_in0[10]));
AND2XL inst_cellmath__39_0_0_0_I70 (.Y(inst_cellmath__39_0_0_0_out0[11]), .A(N58), .B(inst_cellmath__39_0_0_0_in0[11]));
AND2XL inst_cellmath__39_0_0_0_I76 (.Y(inst_cellmath__39_0_0_0_out0[12]), .A(N58), .B(inst_cellmath__39_0_0_0_in0[12]));
AND2XL inst_cellmath__39_0_0_0_I82 (.Y(inst_cellmath__39_0_0_0_out0[13]), .A(N58), .B(inst_cellmath__39_0_0_0_in0[13]));
AND2XL inst_cellmath__39_0_0_0_I88 (.Y(inst_cellmath__39_0_0_0_out0[14]), .A(N58), .B(inst_cellmath__39_0_0_0_in0[14]));
AND2XL inst_cellmath__39_0_0_0_I94 (.Y(inst_cellmath__39_0_0_0_out0[15]), .A(N58), .B(inst_cellmath__39_0_0_0_in0[15]));
AND2XL inst_cellmath__39_0_0_0_I100 (.Y(inst_cellmath__39_0_0_0_out0[16]), .A(N58), .B(inst_cellmath__39_0_0_0_in0[16]));
AND2XL inst_cellmath__39_0_0_0_I106 (.Y(inst_cellmath__39_0_0_0_out0[17]), .A(N58), .B(inst_cellmath__39_0_0_0_in0[17]));
AND2XL inst_cellmath__39_0_0_0_I112 (.Y(inst_cellmath__39_0_0_0_out0[18]), .A(N58), .B(inst_cellmath__39_0_0_0_in0[18]));
AND2XL inst_cellmath__39_0_0_0_I118 (.Y(inst_cellmath__39_0_0_0_out0[19]), .A(N58), .B(inst_cellmath__39_0_0_0_in0[19]));
AND2XL inst_cellmath__39_0_0_0_I124 (.Y(inst_cellmath__39_0_0_0_out0[20]), .A(N58), .B(inst_cellmath__39_0_0_0_in0[20]));
AND2XL inst_cellmath__39_0_0_0_I130 (.Y(inst_cellmath__39_0_0_0_out0[21]), .A(N58), .B(inst_cellmath__39_0_0_0_in0[21]));
AND2XL inst_cellmath__39_0_0_0_I136 (.Y(inst_cellmath__39_0_0_0_out0[22]), .A(N58), .B(inst_cellmath__39_0_0_0_in0[22]));
AND2XL inst_cellmath__39_0_0_0_I142 (.Y(inst_cellmath__39_0_0_0_out0[23]), .A(N58), .B(inst_cellmath__39_0_0_0_in0[23]));
AND2XL inst_cellmath__39_0_0_0_I148 (.Y(inst_cellmath__39_0_0_0_out0[24]), .A(N58), .B(inst_cellmath__39_0_0_0_in0[24]));
endmodule

module cynw_cm_float_add2_inst_cellmath__39_2mx_bdw2915265522_bdw (
	inst_cellmath__39_2mx_out0,
	inst_cellmath__39_2mx_in0,
	inst_cellmath__39_2mx_in1,
	inst_cellmath__39_2mx_in2
	); /* architecture "gate_level" */ 
output [24:0] inst_cellmath__39_2mx_out0;
input [24:0] inst_cellmath__39_2mx_in0;
input  inst_cellmath__39_2mx_in1,
	inst_cellmath__39_2mx_in2;
wire N217;
NOR2X1 inst_cellmath__39_2mx_I62 (.Y(N217), .A(inst_cellmath__39_2mx_in1), .B(inst_cellmath__39_2mx_in2));
AND2XL inst_cellmath__39_2mx_I4 (.Y(inst_cellmath__39_2mx_out0[0]), .A(N217), .B(inst_cellmath__39_2mx_in0[0]));
AND2XL inst_cellmath__39_2mx_I5 (.Y(inst_cellmath__39_2mx_out0[1]), .A(N217), .B(inst_cellmath__39_2mx_in0[1]));
AND2XL inst_cellmath__39_2mx_I6 (.Y(inst_cellmath__39_2mx_out0[2]), .A(N217), .B(inst_cellmath__39_2mx_in0[2]));
AND2XL inst_cellmath__39_2mx_I7 (.Y(inst_cellmath__39_2mx_out0[3]), .A(N217), .B(inst_cellmath__39_2mx_in0[3]));
AND2XL inst_cellmath__39_2mx_I8 (.Y(inst_cellmath__39_2mx_out0[4]), .A(N217), .B(inst_cellmath__39_2mx_in0[4]));
AND2XL inst_cellmath__39_2mx_I9 (.Y(inst_cellmath__39_2mx_out0[5]), .A(N217), .B(inst_cellmath__39_2mx_in0[5]));
AND2XL inst_cellmath__39_2mx_I10 (.Y(inst_cellmath__39_2mx_out0[6]), .A(N217), .B(inst_cellmath__39_2mx_in0[6]));
AND2XL inst_cellmath__39_2mx_I11 (.Y(inst_cellmath__39_2mx_out0[7]), .A(N217), .B(inst_cellmath__39_2mx_in0[7]));
CLKAND2X2 inst_cellmath__39_2mx_I12 (.Y(inst_cellmath__39_2mx_out0[8]), .A(N217), .B(inst_cellmath__39_2mx_in0[8]));
AND2XL inst_cellmath__39_2mx_I13 (.Y(inst_cellmath__39_2mx_out0[9]), .A(N217), .B(inst_cellmath__39_2mx_in0[9]));
AND2XL inst_cellmath__39_2mx_I14 (.Y(inst_cellmath__39_2mx_out0[10]), .A(N217), .B(inst_cellmath__39_2mx_in0[10]));
AND2XL inst_cellmath__39_2mx_I15 (.Y(inst_cellmath__39_2mx_out0[11]), .A(N217), .B(inst_cellmath__39_2mx_in0[11]));
AND2XL inst_cellmath__39_2mx_I16 (.Y(inst_cellmath__39_2mx_out0[12]), .A(N217), .B(inst_cellmath__39_2mx_in0[12]));
AND2XL inst_cellmath__39_2mx_I17 (.Y(inst_cellmath__39_2mx_out0[13]), .A(N217), .B(inst_cellmath__39_2mx_in0[13]));
AND2XL inst_cellmath__39_2mx_I18 (.Y(inst_cellmath__39_2mx_out0[14]), .A(N217), .B(inst_cellmath__39_2mx_in0[14]));
AND2XL inst_cellmath__39_2mx_I19 (.Y(inst_cellmath__39_2mx_out0[15]), .A(N217), .B(inst_cellmath__39_2mx_in0[15]));
AND2XL inst_cellmath__39_2mx_I20 (.Y(inst_cellmath__39_2mx_out0[16]), .A(N217), .B(inst_cellmath__39_2mx_in0[16]));
AND2XL inst_cellmath__39_2mx_I21 (.Y(inst_cellmath__39_2mx_out0[17]), .A(N217), .B(inst_cellmath__39_2mx_in0[17]));
AND2XL inst_cellmath__39_2mx_I22 (.Y(inst_cellmath__39_2mx_out0[18]), .A(N217), .B(inst_cellmath__39_2mx_in0[18]));
AND2XL inst_cellmath__39_2mx_I23 (.Y(inst_cellmath__39_2mx_out0[19]), .A(N217), .B(inst_cellmath__39_2mx_in0[19]));
AND2XL inst_cellmath__39_2mx_I24 (.Y(inst_cellmath__39_2mx_out0[20]), .A(N217), .B(inst_cellmath__39_2mx_in0[20]));
AND2XL inst_cellmath__39_2mx_I25 (.Y(inst_cellmath__39_2mx_out0[21]), .A(N217), .B(inst_cellmath__39_2mx_in0[21]));
AND2XL inst_cellmath__39_2mx_I26 (.Y(inst_cellmath__39_2mx_out0[22]), .A(N217), .B(inst_cellmath__39_2mx_in0[22]));
AND2XL inst_cellmath__39_2mx_I27 (.Y(inst_cellmath__39_2mx_out0[23]), .A(N217), .B(inst_cellmath__39_2mx_in0[23]));
AND2XL inst_cellmath__39_2mx_I28 (.Y(inst_cellmath__39_2mx_out0[24]), .A(N217), .B(inst_cellmath__39_2mx_in0[24]));
endmodule

module cynw_cm_float_add2_inst_cellmath__55_2mx_bdw2915265522_bdw (
	inst_cellmath__55_2mx_out0,
	inst_cellmath__55_2mx_in0,
	inst_cellmath__55_2mx_in1
	); /* architecture "gate_level" */ 
output [24:0] inst_cellmath__55_2mx_out0;
input  inst_cellmath__55_2mx_in0;
input [22:0] inst_cellmath__55_2mx_in1;
XOR2XL inst_cellmath__55_2mx_I54 (.Y(inst_cellmath__55_2mx_out0[1]), .A(inst_cellmath__55_2mx_in1[0]), .B(inst_cellmath__55_2mx_in0));
XOR2XL inst_cellmath__55_2mx_I55 (.Y(inst_cellmath__55_2mx_out0[2]), .A(inst_cellmath__55_2mx_in1[1]), .B(inst_cellmath__55_2mx_in0));
XOR2XL inst_cellmath__55_2mx_I56 (.Y(inst_cellmath__55_2mx_out0[3]), .A(inst_cellmath__55_2mx_in1[2]), .B(inst_cellmath__55_2mx_in0));
XOR2XL inst_cellmath__55_2mx_I145 (.Y(inst_cellmath__55_2mx_out0[4]), .A(inst_cellmath__55_2mx_in1[3]), .B(inst_cellmath__55_2mx_in0));
XOR2XL inst_cellmath__55_2mx_I58 (.Y(inst_cellmath__55_2mx_out0[5]), .A(inst_cellmath__55_2mx_in1[4]), .B(inst_cellmath__55_2mx_in0));
XOR2XL inst_cellmath__55_2mx_I59 (.Y(inst_cellmath__55_2mx_out0[6]), .A(inst_cellmath__55_2mx_in1[5]), .B(inst_cellmath__55_2mx_in0));
XOR2XL inst_cellmath__55_2mx_I60 (.Y(inst_cellmath__55_2mx_out0[7]), .A(inst_cellmath__55_2mx_in1[6]), .B(inst_cellmath__55_2mx_in0));
XOR2XL inst_cellmath__55_2mx_I61 (.Y(inst_cellmath__55_2mx_out0[8]), .A(inst_cellmath__55_2mx_in1[7]), .B(inst_cellmath__55_2mx_in0));
XOR2XL inst_cellmath__55_2mx_I146 (.Y(inst_cellmath__55_2mx_out0[9]), .A(inst_cellmath__55_2mx_in1[8]), .B(inst_cellmath__55_2mx_in0));
XOR2XL inst_cellmath__55_2mx_I63 (.Y(inst_cellmath__55_2mx_out0[10]), .A(inst_cellmath__55_2mx_in1[9]), .B(inst_cellmath__55_2mx_in0));
CLKXOR2X1 inst_cellmath__55_2mx_I64 (.Y(inst_cellmath__55_2mx_out0[11]), .A(inst_cellmath__55_2mx_in1[10]), .B(inst_cellmath__55_2mx_in0));
XOR2XL inst_cellmath__55_2mx_I65 (.Y(inst_cellmath__55_2mx_out0[12]), .A(inst_cellmath__55_2mx_in1[11]), .B(inst_cellmath__55_2mx_in0));
XOR2XL inst_cellmath__55_2mx_I66 (.Y(inst_cellmath__55_2mx_out0[13]), .A(inst_cellmath__55_2mx_in1[12]), .B(inst_cellmath__55_2mx_in0));
XOR2XL inst_cellmath__55_2mx_I67 (.Y(inst_cellmath__55_2mx_out0[14]), .A(inst_cellmath__55_2mx_in1[13]), .B(inst_cellmath__55_2mx_in0));
XOR2XL inst_cellmath__55_2mx_I68 (.Y(inst_cellmath__55_2mx_out0[15]), .A(inst_cellmath__55_2mx_in1[14]), .B(inst_cellmath__55_2mx_in0));
XOR2XL inst_cellmath__55_2mx_I69 (.Y(inst_cellmath__55_2mx_out0[16]), .A(inst_cellmath__55_2mx_in1[15]), .B(inst_cellmath__55_2mx_in0));
XOR2XL inst_cellmath__55_2mx_I70 (.Y(inst_cellmath__55_2mx_out0[17]), .A(inst_cellmath__55_2mx_in1[16]), .B(inst_cellmath__55_2mx_in0));
XOR2XL inst_cellmath__55_2mx_I71 (.Y(inst_cellmath__55_2mx_out0[18]), .A(inst_cellmath__55_2mx_in1[17]), .B(inst_cellmath__55_2mx_in0));
XOR2XL inst_cellmath__55_2mx_I72 (.Y(inst_cellmath__55_2mx_out0[19]), .A(inst_cellmath__55_2mx_in1[18]), .B(inst_cellmath__55_2mx_in0));
XOR2XL inst_cellmath__55_2mx_I73 (.Y(inst_cellmath__55_2mx_out0[20]), .A(inst_cellmath__55_2mx_in1[19]), .B(inst_cellmath__55_2mx_in0));
XOR2XL inst_cellmath__55_2mx_I147 (.Y(inst_cellmath__55_2mx_out0[21]), .A(inst_cellmath__55_2mx_in1[20]), .B(inst_cellmath__55_2mx_in0));
XOR2XL inst_cellmath__55_2mx_I75 (.Y(inst_cellmath__55_2mx_out0[22]), .A(inst_cellmath__55_2mx_in1[21]), .B(inst_cellmath__55_2mx_in0));
XOR2XL inst_cellmath__55_2mx_I76 (.Y(inst_cellmath__55_2mx_out0[23]), .A(inst_cellmath__55_2mx_in1[22]), .B(inst_cellmath__55_2mx_in0));
INVXL inst_cellmath__55_2mx_I49 (.Y(inst_cellmath__55_2mx_out0[24]), .A(inst_cellmath__55_2mx_in0));
assign inst_cellmath__55_2mx_out0[0] = inst_cellmath__55_2mx_in0;
endmodule

module cynw_cm_float_add2_inst_cellmath__57__22__bdw2915265522_bdw (
	inst_cellmath__57__22__out0,
	inst_cellmath__57__22__out1,
	inst_cellmath__57__22__in0,
	inst_cellmath__57__22__in1,
	inst_cellmath__57__22__in2
	); /* architecture "gate_level" */ 
output [24:0] inst_cellmath__57__22__out0;
output [25:0] inst_cellmath__57__22__out1;
input [24:0] inst_cellmath__57__22__in0;
input  inst_cellmath__57__22__in1;
input [24:0] inst_cellmath__57__22__in2;
wire N104,N105,N106,N107,N108,N109,N110 
	,N111,N112,N113,N114,N115,N116,N117,N118 
	,N119,N120,N121,N122,N123,N124,N125,N126 
	,N127,N128,N129,N130,N131,N132,N133,N134 
	,N135,N136,N137,N138,N139,N140,N141,N142 
	,N143,N144,N145,N146,N147,N148,N149,N150 
	,N151,N152,N155,N159,N160,N167,N171,N172 
	,N175,N176,N183,N184,N187,N188,N191,N192 
	,N199,N200,N203,N204,N207,N208,N215,N216 
	,N219,N220,N223,N224,N231,N232,N235,N236 
	,N239,N240,N247,N248,N251,N253,N254,N255 
	,N256,N257,N258,N259,N260,N269,N270,N271 
	,N272,N281,N283,N353,N356,N359,N362,N374 
	,N386,N398,N410,N422,N433,N434,N436,N437 
	,N439,N440,N442,N443,N445,N446,N448,N449 
	,N451,N452,N454,N455,N457,N458,N460,N461 
	,N463,N464,N466,N467,N469,N470,N472,N473 
	,N475,N476,N483,N485,N486,N537,N541,N542 
	,N549,N553,N554,N557,N558,N565,N566,N569 
	,N570,N573,N574,N581,N582,N585,N586,N589 
	,N590,N597,N598,N601,N602,N605,N606,N613 
	,N614,N617,N618,N621,N622,N629,N630,N633 
	,N634,N641,N643,N644,N645,N646,N647,N648 
	,N649,N650,N659,N660,N661,N662,N671,N673 
	,N746,N829,N830,N832,N833,N835,N836,N838 
	,N839,N841,N842,N844,N845,N847,N848,N850 
	,N851,N853,N854,N856,N857,N859,N860,N862 
	,N863,N865,N866,N868,N869,N871,N872,N874 
	,N875,N940,N942,N951,N953,N969,N971,N980 
	,N982,N998,N1000,N1009,N1011,N1027,N1029,N1038 
	,N1040,N1056,N1058,N1067,N1069,N1097,N1099,N1108 
	,N1126,N1128,N1137,N1155,N1157,N1166,N1184,N1186 
	,N1195,N1213,N1215,N1224,N1376,N1384,N1392,N1400 
	,N1408,N1413,N1414,N1415,N1416,N1417,N1418,N1419 
	,N1422,N1427,N1433,N1439,N1445,N1451,N1459,N1465 
	,N1473,N1483,N1491,N1499,N1510,N1511,N1512,N1513 
	,N1514,N1515,N1516,N1519,N1524,N1530,N1536,N1542 
	,N1548,N1555,N1562,N1569,N1581,N1588,N1595,N1615 
	,N1622,N1629,N1636,N1643,N1650;
NAND2XL inst_cellmath__57__22__I0 (.Y(N104), .A(inst_cellmath__57__22__in0[0]), .B(inst_cellmath__57__22__in2[0]));
NOR2XL inst_cellmath__57__22__I1 (.Y(N105), .A(inst_cellmath__57__22__in0[1]), .B(inst_cellmath__57__22__in2[1]));
NAND2XL inst_cellmath__57__22__I2 (.Y(N106), .A(inst_cellmath__57__22__in0[1]), .B(inst_cellmath__57__22__in2[1]));
NOR2XL inst_cellmath__57__22__I3 (.Y(N107), .A(inst_cellmath__57__22__in0[2]), .B(inst_cellmath__57__22__in2[2]));
NAND2XL inst_cellmath__57__22__I4 (.Y(N108), .A(inst_cellmath__57__22__in0[2]), .B(inst_cellmath__57__22__in2[2]));
NOR2XL inst_cellmath__57__22__I5 (.Y(N109), .A(inst_cellmath__57__22__in0[3]), .B(inst_cellmath__57__22__in2[3]));
NAND2XL inst_cellmath__57__22__I6 (.Y(N110), .A(inst_cellmath__57__22__in0[3]), .B(inst_cellmath__57__22__in2[3]));
NOR2X1 inst_cellmath__57__22__I7 (.Y(N111), .A(inst_cellmath__57__22__in0[4]), .B(inst_cellmath__57__22__in2[4]));
NAND2X1 inst_cellmath__57__22__I8 (.Y(N112), .A(inst_cellmath__57__22__in0[4]), .B(inst_cellmath__57__22__in2[4]));
NOR2XL inst_cellmath__57__22__I9 (.Y(N113), .A(inst_cellmath__57__22__in0[5]), .B(inst_cellmath__57__22__in2[5]));
NAND2X1 inst_cellmath__57__22__I10 (.Y(N114), .A(inst_cellmath__57__22__in0[5]), .B(inst_cellmath__57__22__in2[5]));
NOR2X1 inst_cellmath__57__22__I11 (.Y(N115), .A(inst_cellmath__57__22__in0[6]), .B(inst_cellmath__57__22__in2[6]));
NAND2X1 inst_cellmath__57__22__I12 (.Y(N116), .A(inst_cellmath__57__22__in0[6]), .B(inst_cellmath__57__22__in2[6]));
NOR2X2 inst_cellmath__57__22__I13 (.Y(N117), .A(inst_cellmath__57__22__in0[7]), .B(inst_cellmath__57__22__in2[7]));
NAND2X1 inst_cellmath__57__22__I14 (.Y(N118), .A(inst_cellmath__57__22__in0[7]), .B(inst_cellmath__57__22__in2[7]));
NOR2X1 inst_cellmath__57__22__I15 (.Y(N119), .A(inst_cellmath__57__22__in0[8]), .B(inst_cellmath__57__22__in2[8]));
NAND2X1 inst_cellmath__57__22__I16 (.Y(N120), .A(inst_cellmath__57__22__in0[8]), .B(inst_cellmath__57__22__in2[8]));
NOR2XL inst_cellmath__57__22__I17 (.Y(N121), .A(inst_cellmath__57__22__in0[9]), .B(inst_cellmath__57__22__in2[9]));
NAND2X1 inst_cellmath__57__22__I18 (.Y(N122), .A(inst_cellmath__57__22__in0[9]), .B(inst_cellmath__57__22__in2[9]));
NOR2X1 inst_cellmath__57__22__I19 (.Y(N123), .A(inst_cellmath__57__22__in0[10]), .B(inst_cellmath__57__22__in2[10]));
NAND2X1 inst_cellmath__57__22__I20 (.Y(N124), .A(inst_cellmath__57__22__in0[10]), .B(inst_cellmath__57__22__in2[10]));
NOR2X1 inst_cellmath__57__22__I21 (.Y(N125), .A(inst_cellmath__57__22__in0[11]), .B(inst_cellmath__57__22__in2[11]));
NAND2X2 inst_cellmath__57__22__I22 (.Y(N126), .A(inst_cellmath__57__22__in0[11]), .B(inst_cellmath__57__22__in2[11]));
NOR2XL inst_cellmath__57__22__I23 (.Y(N127), .A(inst_cellmath__57__22__in0[12]), .B(inst_cellmath__57__22__in2[12]));
NAND2X1 inst_cellmath__57__22__I24 (.Y(N128), .A(inst_cellmath__57__22__in0[12]), .B(inst_cellmath__57__22__in2[12]));
NOR2XL inst_cellmath__57__22__I25 (.Y(N129), .A(inst_cellmath__57__22__in0[13]), .B(inst_cellmath__57__22__in2[13]));
NAND2X1 inst_cellmath__57__22__I26 (.Y(N130), .A(inst_cellmath__57__22__in0[13]), .B(inst_cellmath__57__22__in2[13]));
NOR2XL inst_cellmath__57__22__I27 (.Y(N131), .A(inst_cellmath__57__22__in0[14]), .B(inst_cellmath__57__22__in2[14]));
NAND2XL inst_cellmath__57__22__I28 (.Y(N132), .A(inst_cellmath__57__22__in0[14]), .B(inst_cellmath__57__22__in2[14]));
NOR2XL inst_cellmath__57__22__I29 (.Y(N133), .A(inst_cellmath__57__22__in0[15]), .B(inst_cellmath__57__22__in2[15]));
NAND2XL inst_cellmath__57__22__I30 (.Y(N134), .A(inst_cellmath__57__22__in0[15]), .B(inst_cellmath__57__22__in2[15]));
NOR2XL inst_cellmath__57__22__I31 (.Y(N135), .A(inst_cellmath__57__22__in0[16]), .B(inst_cellmath__57__22__in2[16]));
NAND2X1 inst_cellmath__57__22__I32 (.Y(N136), .A(inst_cellmath__57__22__in0[16]), .B(inst_cellmath__57__22__in2[16]));
NOR2XL inst_cellmath__57__22__I33 (.Y(N137), .A(inst_cellmath__57__22__in0[17]), .B(inst_cellmath__57__22__in2[17]));
NAND2X1 inst_cellmath__57__22__I34 (.Y(N138), .A(inst_cellmath__57__22__in0[17]), .B(inst_cellmath__57__22__in2[17]));
NOR2XL inst_cellmath__57__22__I35 (.Y(N139), .A(inst_cellmath__57__22__in0[18]), .B(inst_cellmath__57__22__in2[18]));
NAND2XL inst_cellmath__57__22__I36 (.Y(N140), .A(inst_cellmath__57__22__in0[18]), .B(inst_cellmath__57__22__in2[18]));
NOR2XL inst_cellmath__57__22__I37 (.Y(N141), .A(inst_cellmath__57__22__in0[19]), .B(inst_cellmath__57__22__in2[19]));
NAND2XL inst_cellmath__57__22__I38 (.Y(N142), .A(inst_cellmath__57__22__in0[19]), .B(inst_cellmath__57__22__in2[19]));
NOR2XL inst_cellmath__57__22__I39 (.Y(N143), .A(inst_cellmath__57__22__in0[20]), .B(inst_cellmath__57__22__in2[20]));
NAND2XL inst_cellmath__57__22__I40 (.Y(N144), .A(inst_cellmath__57__22__in0[20]), .B(inst_cellmath__57__22__in2[20]));
NOR2XL inst_cellmath__57__22__I41 (.Y(N145), .A(inst_cellmath__57__22__in0[21]), .B(inst_cellmath__57__22__in2[21]));
NAND2XL inst_cellmath__57__22__I42 (.Y(N146), .A(inst_cellmath__57__22__in0[21]), .B(inst_cellmath__57__22__in2[21]));
NOR2XL inst_cellmath__57__22__I43 (.Y(N147), .A(inst_cellmath__57__22__in0[22]), .B(inst_cellmath__57__22__in2[22]));
NAND2XL inst_cellmath__57__22__I44 (.Y(N148), .A(inst_cellmath__57__22__in0[22]), .B(inst_cellmath__57__22__in2[22]));
NOR2XL inst_cellmath__57__22__I45 (.Y(N149), .A(inst_cellmath__57__22__in0[23]), .B(inst_cellmath__57__22__in2[23]));
NAND2XL inst_cellmath__57__22__I46 (.Y(N150), .A(inst_cellmath__57__22__in0[23]), .B(inst_cellmath__57__22__in2[23]));
NOR2XL inst_cellmath__57__22__I47 (.Y(N151), .A(inst_cellmath__57__22__in0[24]), .B(inst_cellmath__57__22__in2[24]));
NAND2XL inst_cellmath__57__22__I48 (.Y(N152), .A(inst_cellmath__57__22__in0[24]), .B(inst_cellmath__57__22__in2[24]));
AOI21XL inst_cellmath__57__22__I51 (.Y(N155), .A0(N106), .A1(N104), .B0(N105));
AOI21XL inst_cellmath__57__22__I55 (.Y(N159), .A0(N110), .A1(N107), .B0(N109));
NAND2XL inst_cellmath__57__22__I56 (.Y(N160), .A(N110), .B(N108));
OAI21XL inst_cellmath__57__22__I63 (.Y(N167), .A0(N160), .A1(N155), .B0(N159));
AOI21X1 inst_cellmath__57__22__I67 (.Y(N171), .A0(N114), .A1(N111), .B0(N113));
NAND2XL inst_cellmath__57__22__I68 (.Y(N172), .A(N114), .B(N112));
INVXL inst_cellmath__57__22__I926 (.Y(N1376), .A(N116));
AOI21XL inst_cellmath__57__22__I71 (.Y(N175), .A0(N118), .A1(N115), .B0(N117));
NAND2XL inst_cellmath__57__22__I72 (.Y(N176), .A(N118), .B(N116));
OAI21XL inst_cellmath__57__22__I79 (.Y(N183), .A0(N176), .A1(N171), .B0(N175));
NOR2XL inst_cellmath__57__22__I80 (.Y(N184), .A(N176), .B(N172));
AOI21X1 inst_cellmath__57__22__I83 (.Y(N187), .A0(N122), .A1(N119), .B0(N121));
NAND2XL inst_cellmath__57__22__I84 (.Y(N188), .A(N122), .B(N120));
INVXL inst_cellmath__57__22__I934 (.Y(N1384), .A(N124));
AOI21XL inst_cellmath__57__22__I87 (.Y(N191), .A0(N126), .A1(N123), .B0(N125));
NAND2XL inst_cellmath__57__22__I88 (.Y(N192), .A(N126), .B(N124));
OAI21XL inst_cellmath__57__22__I95 (.Y(N199), .A0(N192), .A1(N187), .B0(N191));
NOR2XL inst_cellmath__57__22__I96 (.Y(N200), .A(N192), .B(N188));
AOI21XL inst_cellmath__57__22__I99 (.Y(N203), .A0(N130), .A1(N127), .B0(N129));
NAND2XL inst_cellmath__57__22__I100 (.Y(N204), .A(N130), .B(N128));
INVXL inst_cellmath__57__22__I942 (.Y(N1392), .A(N132));
AOI21XL inst_cellmath__57__22__I103 (.Y(N207), .A0(N134), .A1(N131), .B0(N133));
NAND2XL inst_cellmath__57__22__I104 (.Y(N208), .A(N134), .B(N132));
OAI21XL inst_cellmath__57__22__I111 (.Y(N215), .A0(N208), .A1(N203), .B0(N207));
NOR2XL inst_cellmath__57__22__I112 (.Y(N216), .A(N208), .B(N204));
AOI21XL inst_cellmath__57__22__I115 (.Y(N219), .A0(N138), .A1(N135), .B0(N137));
NAND2XL inst_cellmath__57__22__I116 (.Y(N220), .A(N138), .B(N136));
INVXL inst_cellmath__57__22__I950 (.Y(N1400), .A(N140));
AOI21XL inst_cellmath__57__22__I119 (.Y(N223), .A0(N142), .A1(N139), .B0(N141));
NAND2XL inst_cellmath__57__22__I120 (.Y(N224), .A(N142), .B(N140));
OAI21XL inst_cellmath__57__22__I127 (.Y(N231), .A0(N224), .A1(N219), .B0(N223));
NOR2XL inst_cellmath__57__22__I128 (.Y(N232), .A(N224), .B(N220));
AOI21XL inst_cellmath__57__22__I131 (.Y(N235), .A0(N146), .A1(N143), .B0(N145));
NAND2XL inst_cellmath__57__22__I132 (.Y(N236), .A(N146), .B(N144));
INVXL inst_cellmath__57__22__I958 (.Y(N1408), .A(N148));
AOI21XL inst_cellmath__57__22__I135 (.Y(N239), .A0(N150), .A1(N147), .B0(N149));
NAND2XL inst_cellmath__57__22__I136 (.Y(N240), .A(N150), .B(N148));
OAI21XL inst_cellmath__57__22__I143 (.Y(N247), .A0(N240), .A1(N235), .B0(N239));
NOR2XL inst_cellmath__57__22__I144 (.Y(N248), .A(N240), .B(N236));
INVXL inst_cellmath__57__22__I963 (.Y(N1413), .A(N167));
AOI21XL inst_cellmath__57__22__I147 (.Y(N251), .A0(N184), .A1(N167), .B0(N183));
AOI21XL inst_cellmath__57__22__I149 (.Y(N253), .A0(N200), .A1(N183), .B0(N199));
NAND2XL inst_cellmath__57__22__I150 (.Y(N254), .A(N200), .B(N184));
AOI21XL inst_cellmath__57__22__I151 (.Y(N255), .A0(N216), .A1(N199), .B0(N215));
NAND2XL inst_cellmath__57__22__I152 (.Y(N256), .A(N216), .B(N200));
AOI21XL inst_cellmath__57__22__I153 (.Y(N257), .A0(N232), .A1(N215), .B0(N231));
NAND2XL inst_cellmath__57__22__I154 (.Y(N258), .A(N232), .B(N216));
AOI21XL inst_cellmath__57__22__I155 (.Y(N259), .A0(N248), .A1(N231), .B0(N247));
NAND2XL inst_cellmath__57__22__I156 (.Y(N260), .A(N248), .B(N232));
INVXL inst_cellmath__57__22__I964 (.Y(N1414), .A(N1413));
INVXL inst_cellmath__57__22__I965 (.Y(N1415), .A(N251));
OAI21XL inst_cellmath__57__22__I165 (.Y(N269), .A0(N258), .A1(N253), .B0(N257));
NOR2XL inst_cellmath__57__22__I166 (.Y(N270), .A(N258), .B(N254));
OAI21XL inst_cellmath__57__22__I167 (.Y(N271), .A0(N260), .A1(N255), .B0(N259));
NOR2XL inst_cellmath__57__22__I168 (.Y(N272), .A(N260), .B(N256));
INVXL inst_cellmath__57__22__I966 (.Y(N1416), .A(N1414));
INVXL inst_cellmath__57__22__I967 (.Y(N1417), .A(N1415));
OA21X1 inst_cellmath__57__22__I1110 (.Y(N1418), .A0(N254), .A1(N1413), .B0(N253));
OA21X1 inst_cellmath__57__22__I1111 (.Y(N1419), .A0(N256), .A1(N251), .B0(N255));
AOI21XL inst_cellmath__57__22__I177 (.Y(N281), .A0(N270), .A1(N1414), .B0(N269));
AOI21XL inst_cellmath__57__22__I179 (.Y(N283), .A0(N272), .A1(N1415), .B0(N271));
NOR2BX1 andori2bb1_A_I1973 (.Y(N1555), .AN(N108), .B(N155));
NOR2XL andori2bb1_A_I1200 (.Y(N1422), .A(N1555), .B(N107));
NOR2XL andori2bb1_A_I1201 (.Y(N1562), .A(N1376), .B(N171));
NOR2XL andori2bb1_A_I1202 (.Y(N1427), .A(N1562), .B(N115));
NOR2XL andori2bb1_A_I1203 (.Y(N1569), .A(N1384), .B(N187));
NOR2XL andori2bb1_A_I1204 (.Y(N1433), .A(N1569), .B(N123));
NOR2XL andori2bb1_A_I1207 (.Y(N1581), .A(N1392), .B(N203));
NOR2XL andori2bb1_A_I1208 (.Y(N1439), .A(N1581), .B(N131));
NOR2XL andori2bb1_A_I1209 (.Y(N1588), .A(N1400), .B(N219));
NOR2XL andori2bb1_A_I1210 (.Y(N1445), .A(N1588), .B(N139));
NOR2XL andori2bb1_A_I1211 (.Y(N1595), .A(N1408), .B(N235));
NOR2XL andori2bb1_A_I1212 (.Y(N1451), .A(N1595), .B(N147));
NAND2BXL inst_cellmath__57__22__I249 (.Y(N353), .AN(N105), .B(N106));
NAND2BXL inst_cellmath__57__22__I252 (.Y(N356), .AN(N107), .B(N108));
NAND2BXL inst_cellmath__57__22__I255 (.Y(N359), .AN(N109), .B(N110));
NAND2BXL inst_cellmath__57__22__I258 (.Y(N362), .AN(N111), .B(N112));
NAND2BXL inst_cellmath__57__22__I261 (.Y(N1099), .AN(N113), .B(N114));
NAND2BXL inst_cellmath__57__22__I267 (.Y(N953), .AN(N117), .B(N118));
NAND2BXL inst_cellmath__57__22__I270 (.Y(N374), .AN(N119), .B(N120));
NAND2BXL inst_cellmath__57__22__I273 (.Y(N1128), .AN(N121), .B(N122));
NAND2BXL inst_cellmath__57__22__I279 (.Y(N982), .AN(N125), .B(N126));
NAND2BXL inst_cellmath__57__22__I282 (.Y(N386), .AN(N127), .B(N128));
NAND2BXL inst_cellmath__57__22__I285 (.Y(N1157), .AN(N129), .B(N130));
NAND2BXL inst_cellmath__57__22__I291 (.Y(N1011), .AN(N133), .B(N134));
NAND2BXL inst_cellmath__57__22__I294 (.Y(N398), .AN(N135), .B(N136));
NAND2BXL inst_cellmath__57__22__I297 (.Y(N1186), .AN(N137), .B(N138));
NAND2BXL inst_cellmath__57__22__I303 (.Y(N1040), .AN(N141), .B(N142));
NAND2BXL inst_cellmath__57__22__I306 (.Y(N410), .AN(N143), .B(N144));
NAND2BXL inst_cellmath__57__22__I309 (.Y(N1215), .AN(N145), .B(N146));
NAND2BXL inst_cellmath__57__22__I315 (.Y(N1069), .AN(N149), .B(N150));
NAND2BXL inst_cellmath__57__22__I318 (.Y(N422), .AN(N151), .B(N152));
XOR2XL inst_cellmath__57__22__I319 (.Y(inst_cellmath__57__22__out0[0]), .A(inst_cellmath__57__22__in0[0]), .B(inst_cellmath__57__22__in2[0]));
XOR2XL inst_cellmath__57__22__I1125 (.Y(inst_cellmath__57__22__out0[1]), .A(N104), .B(N353));
XNOR2X1 inst_cellmath__57__22__I321 (.Y(inst_cellmath__57__22__out0[2]), .A(N155), .B(N356));
XNOR2X1 inst_cellmath__57__22__I322 (.Y(inst_cellmath__57__22__out0[3]), .A(N1422), .B(N359));
XNOR2X1 inst_cellmath__57__22__I323 (.Y(inst_cellmath__57__22__out0[4]), .A(N1416), .B(N362));
XNOR2X1 inst_cellmath__57__22__I324 (.Y(inst_cellmath__57__22__out0[8]), .A(N1417), .B(N374));
XNOR2X1 inst_cellmath__57__22__I1974 (.Y(inst_cellmath__57__22__out0[12]), .A(N1418), .B(N386));
XNOR2X1 inst_cellmath__57__22__I1127 (.Y(inst_cellmath__57__22__out0[16]), .A(N1419), .B(N398));
XNOR2X1 inst_cellmath__57__22__I1975 (.Y(inst_cellmath__57__22__out0[20]), .A(N281), .B(N410));
XNOR2X1 inst_cellmath__57__22__I1976 (.Y(inst_cellmath__57__22__out0[24]), .A(N283), .B(N422));
XOR2XL node_cs_reduced_ii_local_A_I1129 (.Y(N434), .A(N1099), .B(N112));
XOR2XL node_cs_reduced_ii_local_A_I1130 (.Y(N433), .A(N1099), .B(N111));
MX2XL inst_cellmath__57__22__I330 (.Y(inst_cellmath__57__22__out0[5]), .A(N434), .B(N433), .S0(N1416));
NOR2BX1 node_cs_ii_local_alt_A_I888 (.Y(N942), .AN(N116), .B(N115));
XNOR2X1 node_cs_ii_local_alt_A_I766 (.Y(N436), .A(N942), .B(N171));
NAND2XL node_cs_ii_local_alt_A_I767 (.Y(N940), .A(N172), .B(N171));
XOR2XL node_cs_ii_local_alt_A_I768 (.Y(N437), .A(N942), .B(N940));
MXI2XL inst_cellmath__57__22__I332 (.Y(inst_cellmath__57__22__out0[6]), .A(N437), .B(N436), .S0(N1416));
XOR2XL node_cs_ii_local_alt_A_I770 (.Y(N439), .A(N953), .B(N1427));
OAI21XL node_cs_ii_local_alt_A_I1131 (.Y(N951), .A0(N1376), .A1(N172), .B0(N1427));
XNOR2X1 node_cs_ii_local_alt_A_I1977 (.Y(N440), .A(N953), .B(N951));
MXI2XL inst_cellmath__57__22__I334 (.Y(inst_cellmath__57__22__out0[7]), .A(N440), .B(N439), .S0(N1416));
XOR2XL node_cs_reduced_ii_local_A_I1132 (.Y(N443), .A(N1128), .B(N120));
XOR2XL node_cs_reduced_ii_local_A_I1133 (.Y(N442), .A(N1128), .B(N119));
MX2XL inst_cellmath__57__22__I336 (.Y(inst_cellmath__57__22__out0[9]), .A(N443), .B(N442), .S0(N1417));
NOR2BX1 node_cs_ii_local_alt_A_I889 (.Y(N971), .AN(N124), .B(N123));
XNOR2X1 node_cs_ii_local_alt_A_I776 (.Y(N445), .A(N971), .B(N187));
NAND2XL node_cs_ii_local_alt_A_I777 (.Y(N969), .A(N188), .B(N187));
XOR2XL node_cs_ii_local_alt_A_I778 (.Y(N446), .A(N971), .B(N969));
MXI2XL inst_cellmath__57__22__I338 (.Y(inst_cellmath__57__22__out0[10]), .A(N446), .B(N445), .S0(N1417));
XOR2XL node_cs_ii_local_alt_A_I780 (.Y(N448), .A(N982), .B(N1433));
OAI21XL node_cs_ii_local_alt_A_I1134 (.Y(N980), .A0(N1384), .A1(N188), .B0(N1433));
XNOR2X1 node_cs_ii_local_alt_A_I1978 (.Y(N449), .A(N982), .B(N980));
MXI2XL inst_cellmath__57__22__I340 (.Y(inst_cellmath__57__22__out0[11]), .A(N449), .B(N448), .S0(N1417));
XOR2XL node_cs_reduced_ii_local_A_I1135 (.Y(N452), .A(N1157), .B(N128));
XOR2XL node_cs_reduced_ii_local_A_I1136 (.Y(N451), .A(N1157), .B(N127));
MX2XL inst_cellmath__57__22__I342 (.Y(inst_cellmath__57__22__out0[13]), .A(N452), .B(N451), .S0(N1418));
NOR2BX1 node_cs_ii_local_alt_A_I890 (.Y(N1000), .AN(N132), .B(N131));
XNOR2X1 node_cs_ii_local_alt_A_I786 (.Y(N454), .A(N1000), .B(N203));
NAND2XL node_cs_ii_local_alt_A_I787 (.Y(N998), .A(N204), .B(N203));
XOR2XL node_cs_ii_local_alt_A_I788 (.Y(N455), .A(N1000), .B(N998));
MXI2XL inst_cellmath__57__22__I344 (.Y(inst_cellmath__57__22__out0[14]), .A(N455), .B(N454), .S0(N1418));
XOR2XL node_cs_ii_local_alt_A_I790 (.Y(N457), .A(N1011), .B(N1439));
OAI21XL node_cs_ii_local_alt_A_I1137 (.Y(N1009), .A0(N1392), .A1(N204), .B0(N1439));
XNOR2X1 node_cs_ii_local_alt_A_I792 (.Y(N458), .A(N1011), .B(N1009));
MXI2XL inst_cellmath__57__22__I346 (.Y(inst_cellmath__57__22__out0[15]), .A(N458), .B(N457), .S0(N1418));
XOR2XL node_cs_reduced_ii_local_A_I1138 (.Y(N461), .A(N1186), .B(N136));
XOR2XL node_cs_reduced_ii_local_A_I1139 (.Y(N460), .A(N1186), .B(N135));
MX2XL inst_cellmath__57__22__I348 (.Y(inst_cellmath__57__22__out0[17]), .A(N461), .B(N460), .S0(N1419));
NOR2BX1 node_cs_ii_local_alt_A_I891 (.Y(N1029), .AN(N140), .B(N139));
XNOR2X1 node_cs_ii_local_alt_A_I796 (.Y(N463), .A(N1029), .B(N219));
NAND2XL node_cs_ii_local_alt_A_I797 (.Y(N1027), .A(N220), .B(N219));
XOR2XL node_cs_ii_local_alt_A_I798 (.Y(N464), .A(N1029), .B(N1027));
MXI2XL inst_cellmath__57__22__I350 (.Y(inst_cellmath__57__22__out0[18]), .A(N464), .B(N463), .S0(N1419));
XOR2XL node_cs_ii_local_alt_A_I800 (.Y(N466), .A(N1040), .B(N1445));
OAI21XL node_cs_ii_local_alt_A_I1140 (.Y(N1038), .A0(N1400), .A1(N220), .B0(N1445));
XNOR2X1 node_cs_ii_local_alt_A_I802 (.Y(N467), .A(N1040), .B(N1038));
MXI2XL inst_cellmath__57__22__I352 (.Y(inst_cellmath__57__22__out0[19]), .A(N467), .B(N466), .S0(N1419));
XOR2XL node_cs_reduced_ii_local_A_I1141 (.Y(N470), .A(N1215), .B(N144));
XOR2XL node_cs_reduced_ii_local_A_I1142 (.Y(N469), .A(N1215), .B(N143));
MX2XL inst_cellmath__57__22__I1979 (.Y(inst_cellmath__57__22__out0[21]), .A(N470), .B(N469), .S0(N281));
NOR2BX1 node_cs_ii_local_alt_A_I892 (.Y(N1058), .AN(N148), .B(N147));
XNOR2X1 node_cs_ii_local_alt_A_I806 (.Y(N472), .A(N1058), .B(N235));
NAND2XL node_cs_ii_local_alt_A_I807 (.Y(N1056), .A(N236), .B(N235));
XOR2XL node_cs_ii_local_alt_A_I808 (.Y(N473), .A(N1058), .B(N1056));
MXI2XL inst_cellmath__57__22__I356 (.Y(inst_cellmath__57__22__out0[22]), .A(N473), .B(N472), .S0(N281));
XOR2XL node_cs_ii_local_alt_A_I810 (.Y(N475), .A(N1069), .B(N1451));
OAI21XL node_cs_ii_local_alt_A_I1143 (.Y(N1067), .A0(N1408), .A1(N236), .B0(N1451));
XNOR2X1 node_cs_ii_local_alt_A_I812 (.Y(N476), .A(N1069), .B(N1067));
MXI2XL inst_cellmath__57__22__I358 (.Y(inst_cellmath__57__22__out0[23]), .A(N476), .B(N475), .S0(N281));
INVXL inst_cellmath__57__22__I361 (.Y(N483), .A(inst_cellmath__57__22__in0[0]));
NOR2XL inst_cellmath__57__22__I362 (.Y(N485), .A(inst_cellmath__57__22__in1), .B(inst_cellmath__57__22__in2[0]));
NAND2XL inst_cellmath__57__22__I363 (.Y(N486), .A(inst_cellmath__57__22__in1), .B(inst_cellmath__57__22__in2[0]));
AOI21XL inst_cellmath__57__22__I414 (.Y(N537), .A0(N486), .A1(N483), .B0(N485));
INVXL inst_cellmath__57__22__I1009 (.Y(N1459), .A(N106));
AOI21XL inst_cellmath__57__22__I418 (.Y(N541), .A0(N108), .A1(N105), .B0(N107));
NAND2XL inst_cellmath__57__22__I419 (.Y(N542), .A(N108), .B(N106));
OAI21XL inst_cellmath__57__22__I426 (.Y(N549), .A0(N542), .A1(N537), .B0(N541));
AOI21XL inst_cellmath__57__22__I430 (.Y(N553), .A0(N112), .A1(N109), .B0(N111));
NAND2XL inst_cellmath__57__22__I431 (.Y(N554), .A(N112), .B(N110));
INVXL inst_cellmath__57__22__I1015 (.Y(N1465), .A(N114));
AOI21XL inst_cellmath__57__22__I434 (.Y(N557), .A0(N116), .A1(N113), .B0(N115));
NAND2XL inst_cellmath__57__22__I435 (.Y(N558), .A(N116), .B(N114));
OAI21XL inst_cellmath__57__22__I442 (.Y(N565), .A0(N558), .A1(N553), .B0(N557));
NOR2XL inst_cellmath__57__22__I443 (.Y(N566), .A(N558), .B(N554));
AOI21X1 inst_cellmath__57__22__I446 (.Y(N569), .A0(N120), .A1(N117), .B0(N119));
NAND2XL inst_cellmath__57__22__I447 (.Y(N570), .A(N120), .B(N118));
INVXL inst_cellmath__57__22__I1023 (.Y(N1473), .A(N122));
AOI21XL inst_cellmath__57__22__I450 (.Y(N573), .A0(N124), .A1(N121), .B0(N123));
NAND2XL inst_cellmath__57__22__I451 (.Y(N574), .A(N124), .B(N122));
OAI21XL inst_cellmath__57__22__I458 (.Y(N581), .A0(N574), .A1(N569), .B0(N573));
NOR2XL inst_cellmath__57__22__I459 (.Y(N582), .A(N574), .B(N570));
AOI21XL inst_cellmath__57__22__I462 (.Y(N585), .A0(N128), .A1(N125), .B0(N127));
NAND2XL inst_cellmath__57__22__I463 (.Y(N586), .A(N128), .B(N126));
INVXL inst_cellmath__57__22__I1033 (.Y(N1483), .A(N130));
AOI21XL inst_cellmath__57__22__I466 (.Y(N589), .A0(N132), .A1(N129), .B0(N131));
NAND2XL inst_cellmath__57__22__I467 (.Y(N590), .A(N132), .B(N130));
OAI21XL inst_cellmath__57__22__I474 (.Y(N597), .A0(N590), .A1(N585), .B0(N589));
NOR2XL inst_cellmath__57__22__I475 (.Y(N598), .A(N590), .B(N586));
AOI21XL inst_cellmath__57__22__I478 (.Y(N601), .A0(N136), .A1(N133), .B0(N135));
NAND2XL inst_cellmath__57__22__I479 (.Y(N602), .A(N136), .B(N134));
INVXL inst_cellmath__57__22__I1041 (.Y(N1491), .A(N138));
AOI21XL inst_cellmath__57__22__I482 (.Y(N605), .A0(N140), .A1(N137), .B0(N139));
NAND2XL inst_cellmath__57__22__I483 (.Y(N606), .A(N140), .B(N138));
OAI21XL inst_cellmath__57__22__I490 (.Y(N613), .A0(N606), .A1(N601), .B0(N605));
NOR2XL inst_cellmath__57__22__I491 (.Y(N614), .A(N606), .B(N602));
AOI21XL inst_cellmath__57__22__I494 (.Y(N617), .A0(N144), .A1(N141), .B0(N143));
NAND2XL inst_cellmath__57__22__I495 (.Y(N618), .A(N144), .B(N142));
INVXL inst_cellmath__57__22__I1049 (.Y(N1499), .A(N146));
AOI21XL inst_cellmath__57__22__I498 (.Y(N621), .A0(N148), .A1(N145), .B0(N147));
NAND2XL inst_cellmath__57__22__I499 (.Y(N622), .A(N148), .B(N146));
OAI21XL inst_cellmath__57__22__I506 (.Y(N629), .A0(N622), .A1(N617), .B0(N621));
NOR2XL inst_cellmath__57__22__I507 (.Y(N630), .A(N622), .B(N618));
AOI21XL inst_cellmath__57__22__I510 (.Y(N633), .A0(N152), .A1(N149), .B0(N151));
NAND2XL inst_cellmath__57__22__I511 (.Y(N634), .A(N152), .B(N150));
INVXL inst_cellmath__57__22__I1060 (.Y(N1510), .A(N549));
AOI21XL inst_cellmath__57__22__I518 (.Y(N641), .A0(N566), .A1(N549), .B0(N565));
AOI21XL inst_cellmath__57__22__I520 (.Y(N643), .A0(N582), .A1(N565), .B0(N581));
NAND2XL inst_cellmath__57__22__I521 (.Y(N644), .A(N582), .B(N566));
AOI21XL inst_cellmath__57__22__I522 (.Y(N645), .A0(N598), .A1(N581), .B0(N597));
NAND2XL inst_cellmath__57__22__I523 (.Y(N646), .A(N598), .B(N582));
AOI21XL inst_cellmath__57__22__I524 (.Y(N647), .A0(N614), .A1(N597), .B0(N613));
NAND2XL inst_cellmath__57__22__I525 (.Y(N648), .A(N614), .B(N598));
AOI21XL inst_cellmath__57__22__I526 (.Y(N649), .A0(N630), .A1(N613), .B0(N629));
NAND2XL inst_cellmath__57__22__I527 (.Y(N650), .A(N630), .B(N614));
INVXL inst_cellmath__57__22__I1061 (.Y(N1511), .A(N1510));
INVXL inst_cellmath__57__22__I1062 (.Y(N1512), .A(N641));
OAI21XL inst_cellmath__57__22__I536 (.Y(N659), .A0(N648), .A1(N643), .B0(N647));
NOR2XL inst_cellmath__57__22__I537 (.Y(N660), .A(N648), .B(N644));
OAI21XL inst_cellmath__57__22__I538 (.Y(N661), .A0(N650), .A1(N645), .B0(N649));
NOR2XL inst_cellmath__57__22__I539 (.Y(N662), .A(N650), .B(N646));
INVXL inst_cellmath__57__22__I1063 (.Y(N1513), .A(N1511));
INVXL inst_cellmath__57__22__I1064 (.Y(N1514), .A(N1512));
OA21X1 inst_cellmath__57__22__I1145 (.Y(N1515), .A0(N1510), .A1(N644), .B0(N643));
OA21X1 inst_cellmath__57__22__I1146 (.Y(N1516), .A0(N646), .A1(N641), .B0(N645));
AOI21XL inst_cellmath__57__22__I548 (.Y(N671), .A0(N660), .A1(N1511), .B0(N659));
AOI21X1 inst_cellmath__57__22__I550 (.Y(N673), .A0(N662), .A1(N1512), .B0(N661));
NOR2XL andori2bb1_A_I1217 (.Y(N1615), .A(N1459), .B(N537));
NOR2XL andori2bb1_A_I1218 (.Y(N1519), .A(N1615), .B(N105));
NOR2XL andori2bb1_A_I1219 (.Y(N1622), .A(N1465), .B(N553));
NOR2XL andori2bb1_A_I1220 (.Y(N1524), .A(N1622), .B(N113));
NOR2XL andori2bb1_A_I1221 (.Y(N1629), .A(N1473), .B(N569));
NOR2XL andori2bb1_A_I1222 (.Y(N1530), .A(N1629), .B(N121));
NOR2XL andori2bb1_A_I1223 (.Y(N1636), .A(N1483), .B(N585));
NOR2XL andori2bb1_A_I1224 (.Y(N1536), .A(N1636), .B(N129));
NOR2XL andori2bb1_A_I1225 (.Y(N1643), .A(N1491), .B(N601));
NOR2XL andori2bb1_A_I1226 (.Y(N1542), .A(N1643), .B(N137));
NOR2XL andori2bb1_A_I1227 (.Y(N1650), .A(N1499), .B(N617));
NOR2XL andori2bb1_A_I1228 (.Y(N1548), .A(N1650), .B(N145));
NAND2BXL inst_cellmath__57__22__I623 (.Y(N746), .AN(N485), .B(N486));
XOR2XL inst_cellmath__57__22__I1158 (.Y(inst_cellmath__57__22__out1[0]), .A(N483), .B(N746));
XNOR2X1 inst_cellmath__57__22__I698 (.Y(inst_cellmath__57__22__out1[1]), .A(N537), .B(N353));
XNOR2X1 inst_cellmath__57__22__I699 (.Y(inst_cellmath__57__22__out1[2]), .A(N1519), .B(N356));
XNOR2X1 inst_cellmath__57__22__I700 (.Y(inst_cellmath__57__22__out1[3]), .A(N1513), .B(N359));
XNOR2X1 inst_cellmath__57__22__I701 (.Y(inst_cellmath__57__22__out1[7]), .A(N1514), .B(N953));
XNOR2X1 inst_cellmath__57__22__I1159 (.Y(inst_cellmath__57__22__out1[11]), .A(N1515), .B(N982));
XNOR2X1 inst_cellmath__57__22__I1160 (.Y(inst_cellmath__57__22__out1[15]), .A(N1516), .B(N1011));
XNOR2X1 inst_cellmath__57__22__I704 (.Y(inst_cellmath__57__22__out1[19]), .A(N671), .B(N1040));
XNOR2X1 inst_cellmath__57__22__I705 (.Y(inst_cellmath__57__22__out1[23]), .A(N673), .B(N1069));
XOR2XL node_cs_reduced_ii_local_A_I1161 (.Y(N830), .A(N362), .B(N110));
XOR2XL node_cs_reduced_ii_local_A_I1162 (.Y(N829), .A(N362), .B(N109));
MX2XL inst_cellmath__57__22__I707 (.Y(inst_cellmath__57__22__out1[4]), .A(N830), .B(N829), .S0(N1513));
XOR2XL node_cs_ii_local_alt_A_I820 (.Y(N832), .A(N1099), .B(N553));
NAND2XL node_cs_ii_local_alt_A_I821 (.Y(N1097), .A(N554), .B(N553));
XNOR2X1 node_cs_ii_local_alt_A_I822 (.Y(N833), .A(N1099), .B(N1097));
MXI2XL inst_cellmath__57__22__I709 (.Y(inst_cellmath__57__22__out1[5]), .A(N833), .B(N832), .S0(N1513));
XNOR2X1 node_cs_ii_local_alt_A_I824 (.Y(N835), .A(N942), .B(N1524));
OAI21XL node_cs_ii_local_alt_A_I1163 (.Y(N1108), .A0(N1465), .A1(N554), .B0(N1524));
XOR2XL node_cs_ii_local_alt_A_I826 (.Y(N836), .A(N942), .B(N1108));
MXI2XL inst_cellmath__57__22__I711 (.Y(inst_cellmath__57__22__out1[6]), .A(N836), .B(N835), .S0(N1513));
XOR2XL node_cs_reduced_ii_local_A_I1164 (.Y(N839), .A(N374), .B(N118));
XOR2XL node_cs_reduced_ii_local_A_I1165 (.Y(N838), .A(N374), .B(N117));
MX2XL inst_cellmath__57__22__I713 (.Y(inst_cellmath__57__22__out1[8]), .A(N839), .B(N838), .S0(N1514));
XOR2XL node_cs_ii_local_alt_A_I830 (.Y(N841), .A(N1128), .B(N569));
NAND2XL node_cs_ii_local_alt_A_I831 (.Y(N1126), .A(N570), .B(N569));
XNOR2X1 node_cs_ii_local_alt_A_I832 (.Y(N842), .A(N1128), .B(N1126));
MXI2XL inst_cellmath__57__22__I715 (.Y(inst_cellmath__57__22__out1[9]), .A(N842), .B(N841), .S0(N1514));
XNOR2X1 node_cs_ii_local_alt_A_I834 (.Y(N844), .A(N971), .B(N1530));
OAI21XL node_cs_ii_local_alt_A_I1166 (.Y(N1137), .A0(N1473), .A1(N570), .B0(N1530));
XOR2XL node_cs_ii_local_alt_A_I836 (.Y(N845), .A(N971), .B(N1137));
MXI2XL inst_cellmath__57__22__I717 (.Y(inst_cellmath__57__22__out1[10]), .A(N845), .B(N844), .S0(N1514));
XOR2XL node_cs_reduced_ii_local_A_I1167 (.Y(N848), .A(N386), .B(N126));
XOR2XL node_cs_reduced_ii_local_A_I1168 (.Y(N847), .A(N386), .B(N125));
MX2XL inst_cellmath__57__22__I719 (.Y(inst_cellmath__57__22__out1[12]), .A(N848), .B(N847), .S0(N1515));
XOR2XL node_cs_ii_local_alt_A_I840 (.Y(N850), .A(N1157), .B(N585));
NAND2XL node_cs_ii_local_alt_A_I841 (.Y(N1155), .A(N586), .B(N585));
XNOR2X1 node_cs_ii_local_alt_A_I842 (.Y(N851), .A(N1157), .B(N1155));
MXI2XL inst_cellmath__57__22__I721 (.Y(inst_cellmath__57__22__out1[13]), .A(N851), .B(N850), .S0(N1515));
XNOR2X1 node_cs_ii_local_alt_A_I844 (.Y(N853), .A(N1000), .B(N1536));
OAI21XL node_cs_ii_local_alt_A_I1169 (.Y(N1166), .A0(N1483), .A1(N586), .B0(N1536));
XOR2XL node_cs_ii_local_alt_A_I846 (.Y(N854), .A(N1000), .B(N1166));
MXI2XL inst_cellmath__57__22__I723 (.Y(inst_cellmath__57__22__out1[14]), .A(N854), .B(N853), .S0(N1515));
XOR2XL node_cs_reduced_ii_local_A_I1170 (.Y(N857), .A(N398), .B(N134));
XOR2XL node_cs_reduced_ii_local_A_I1171 (.Y(N856), .A(N398), .B(N133));
MX2XL inst_cellmath__57__22__I725 (.Y(inst_cellmath__57__22__out1[16]), .A(N857), .B(N856), .S0(N1516));
XOR2XL node_cs_ii_local_alt_A_I850 (.Y(N859), .A(N1186), .B(N601));
NAND2XL node_cs_ii_local_alt_A_I851 (.Y(N1184), .A(N602), .B(N601));
XNOR2X1 node_cs_ii_local_alt_A_I852 (.Y(N860), .A(N1186), .B(N1184));
MXI2XL inst_cellmath__57__22__I727 (.Y(inst_cellmath__57__22__out1[17]), .A(N860), .B(N859), .S0(N1516));
XNOR2X1 node_cs_ii_local_alt_A_I854 (.Y(N862), .A(N1029), .B(N1542));
OAI21XL node_cs_ii_local_alt_A_I1172 (.Y(N1195), .A0(N1491), .A1(N602), .B0(N1542));
XOR2XL node_cs_ii_local_alt_A_I856 (.Y(N863), .A(N1029), .B(N1195));
MXI2XL inst_cellmath__57__22__I729 (.Y(inst_cellmath__57__22__out1[18]), .A(N863), .B(N862), .S0(N1516));
XOR2XL node_cs_reduced_ii_local_A_I1173 (.Y(N866), .A(N410), .B(N142));
XOR2XL node_cs_reduced_ii_local_A_I1174 (.Y(N865), .A(N410), .B(N141));
MX2XL inst_cellmath__57__22__I731 (.Y(inst_cellmath__57__22__out1[20]), .A(N866), .B(N865), .S0(N671));
XOR2XL node_cs_ii_local_alt_A_I860 (.Y(N868), .A(N1215), .B(N617));
NAND2XL node_cs_ii_local_alt_A_I861 (.Y(N1213), .A(N618), .B(N617));
XNOR2X1 node_cs_ii_local_alt_A_I862 (.Y(N869), .A(N1215), .B(N1213));
MXI2XL inst_cellmath__57__22__I733 (.Y(inst_cellmath__57__22__out1[21]), .A(N869), .B(N868), .S0(N671));
XNOR2X1 node_cs_ii_local_alt_A_I864 (.Y(N871), .A(N1058), .B(N1548));
OAI21XL node_cs_ii_local_alt_A_I1175 (.Y(N1224), .A0(N1499), .A1(N618), .B0(N1548));
XOR2XL node_cs_ii_local_alt_A_I866 (.Y(N872), .A(N1058), .B(N1224));
MXI2XL inst_cellmath__57__22__I735 (.Y(inst_cellmath__57__22__out1[22]), .A(N872), .B(N871), .S0(N671));
XOR2XL node_cs_reduced_ii_local_A_I1176 (.Y(N875), .A(N422), .B(N150));
XOR2XL node_cs_reduced_ii_local_A_I1177 (.Y(N874), .A(N422), .B(N149));
MX2XL inst_cellmath__57__22__I737 (.Y(inst_cellmath__57__22__out1[24]), .A(N875), .B(N874), .S0(N673));
OA21X1 inst_cellmath__57__22__I883 (.Y(inst_cellmath__57__22__out1[25]), .A0(N634), .A1(N673), .B0(N633));
endmodule

module cynw_cm_float_add2_inst_cellmath__41__18__bdw2915265522_bdw (
	inst_cellmath__41__18__out0,
	inst_cellmath__41__18__in0,
	inst_cellmath__41__18__in1
	); /* architecture "gate_level" */ 
output [0:0] inst_cellmath__41__18__out0;
input  inst_cellmath__41__18__in0,
	inst_cellmath__41__18__in1;
wire N5;
INVXL inst_cellmath__41__18__I0 (.Y(N5), .A(inst_cellmath__41__18__in1));
NOR2X2 inst_cellmath__41__18__I1 (.Y(inst_cellmath__41__18__out0[0]), .A(N5), .B(inst_cellmath__41__18__in0));
endmodule

module cynw_cm_float_add2_inst_cellmath__41__17__bdw2915265522_bdw (
	inst_cellmath__41__17__out0,
	inst_cellmath__41__17__in0,
	inst_cellmath__41__17__in1
	); /* architecture "gate_level" */ 
output [0:0] inst_cellmath__41__17__out0;
input  inst_cellmath__41__17__in0,
	inst_cellmath__41__17__in1;
wire N5;
INVXL inst_cellmath__41__17__I0 (.Y(N5), .A(inst_cellmath__41__17__in1));
NOR2X2 inst_cellmath__41__17__I1 (.Y(inst_cellmath__41__17__out0[0]), .A(N5), .B(inst_cellmath__41__17__in0));
endmodule

module cynw_cm_float_add2_inst_cellmath__52_0_bdw2915265522_bdw (
	inst_cellmath__52_0_out0,
	inst_cellmath__52_0_in0,
	inst_cellmath__52_0_in1,
	inst_cellmath__52_0_in2,
	inst_cellmath__52_0_in3,
	inst_cellmath__52_0_in4,
	inst_cellmath__52_0_in5
	); /* architecture "gate_level" */ 
output  inst_cellmath__52_0_out0;
input [25:25] inst_cellmath__52_0_in0;
input [8:8] inst_cellmath__52_0_in1;
input [0:0] inst_cellmath__52_0_in2,
	inst_cellmath__52_0_in3;
input  inst_cellmath__52_0_in4,
	inst_cellmath__52_0_in5;
wire N11,N12;
MXI2XL inst_cellmath__52_0_I0 (.Y(N11), .A(inst_cellmath__52_0_in2[0]), .B(inst_cellmath__52_0_in3[0]), .S0(inst_cellmath__52_0_in1[8]));
MXI2XL inst_cellmath__52_0_I1 (.Y(N12), .A(inst_cellmath__52_0_in4), .B(inst_cellmath__52_0_in5), .S0(inst_cellmath__52_0_in1[8]));
MXI2XL inst_cellmath__52_0_I2 (.Y(inst_cellmath__52_0_out0), .A(N12), .B(N11), .S0(inst_cellmath__52_0_in0[25]));
endmodule

module cynw_cm_float_add2_inst_cellmath__51__26__bdw2915265522_bdw (
	inst_cellmath__51__26__out0,
	inst_cellmath__51__26__in0,
	inst_cellmath__51__26__in1
	); /* architecture "gate_level" */ 
output [25:25] inst_cellmath__51__26__out0;
input [25:25] inst_cellmath__51__26__in0;
input  inst_cellmath__51__26__in1;
NOR2X1 inst_cellmath__51__26__I0 (.Y(inst_cellmath__51__26__out0[25]), .A(inst_cellmath__51__26__in1), .B(inst_cellmath__51__26__in0[25]));
endmodule

module cynw_cm_float_add2_inst_cellmath__51__24__bdw2915265522_bdw (
	inst_cellmath__51__24__out0,
	inst_cellmath__51__24__in0,
	inst_cellmath__51__24__in1,
	inst_cellmath__51__24__in2,
	inst_cellmath__51__24__in3
	); /* architecture "gate_level" */ 
output [24:0] inst_cellmath__51__24__out0;
input [24:0] inst_cellmath__51__24__in0,
	inst_cellmath__51__24__in1;
input [25:25] inst_cellmath__51__24__in2;
input  inst_cellmath__51__24__in3;
wire N132,N133,N134,N135,N136,N137,N138 
	,N139,N140,N141,N142,N143,N144,N145,N146 
	,N147,N148,N149,N150,N151,N152,N153,N154 
	,N155,N156,N220,N221,N222,N223,N224,N226 
	,N228;
INVXL inst_cellmath__51__24__I137 (.Y(N220), .A(inst_cellmath__51__24__in3));
MXI2XL inst_cellmath__51__24__I162 (.Y(N132), .A(N220), .B(inst_cellmath__51__24__in3), .S0(inst_cellmath__51__24__in0[0]));
MXI2XL inst_cellmath__51__24__I163 (.Y(N133), .A(N220), .B(inst_cellmath__51__24__in3), .S0(inst_cellmath__51__24__in0[1]));
MXI2XL inst_cellmath__51__24__I164 (.Y(N134), .A(N220), .B(inst_cellmath__51__24__in3), .S0(inst_cellmath__51__24__in0[2]));
MXI2XL inst_cellmath__51__24__I165 (.Y(N135), .A(N220), .B(inst_cellmath__51__24__in3), .S0(inst_cellmath__51__24__in0[3]));
MXI2XL inst_cellmath__51__24__I166 (.Y(N136), .A(N220), .B(inst_cellmath__51__24__in3), .S0(inst_cellmath__51__24__in0[4]));
MXI2XL inst_cellmath__51__24__I167 (.Y(N137), .A(N220), .B(inst_cellmath__51__24__in3), .S0(inst_cellmath__51__24__in0[5]));
MXI2XL inst_cellmath__51__24__I168 (.Y(N138), .A(N220), .B(inst_cellmath__51__24__in3), .S0(inst_cellmath__51__24__in0[6]));
MXI2XL inst_cellmath__51__24__I169 (.Y(N139), .A(N220), .B(inst_cellmath__51__24__in3), .S0(inst_cellmath__51__24__in0[7]));
MXI2XL inst_cellmath__51__24__I170 (.Y(N140), .A(N220), .B(inst_cellmath__51__24__in3), .S0(inst_cellmath__51__24__in0[8]));
MXI2XL inst_cellmath__51__24__I171 (.Y(N141), .A(N220), .B(inst_cellmath__51__24__in3), .S0(inst_cellmath__51__24__in0[9]));
MXI2XL inst_cellmath__51__24__I172 (.Y(N142), .A(N220), .B(inst_cellmath__51__24__in3), .S0(inst_cellmath__51__24__in0[10]));
MXI2XL inst_cellmath__51__24__I173 (.Y(N143), .A(N220), .B(inst_cellmath__51__24__in3), .S0(inst_cellmath__51__24__in0[11]));
MXI2XL inst_cellmath__51__24__I174 (.Y(N144), .A(N220), .B(inst_cellmath__51__24__in3), .S0(inst_cellmath__51__24__in0[12]));
MXI2XL inst_cellmath__51__24__I175 (.Y(N145), .A(N220), .B(inst_cellmath__51__24__in3), .S0(inst_cellmath__51__24__in0[13]));
MXI2XL inst_cellmath__51__24__I176 (.Y(N146), .A(N220), .B(inst_cellmath__51__24__in3), .S0(inst_cellmath__51__24__in0[14]));
MXI2XL inst_cellmath__51__24__I177 (.Y(N147), .A(N220), .B(inst_cellmath__51__24__in3), .S0(inst_cellmath__51__24__in0[15]));
MXI2XL inst_cellmath__51__24__I178 (.Y(N148), .A(N220), .B(inst_cellmath__51__24__in3), .S0(inst_cellmath__51__24__in0[16]));
MXI2XL inst_cellmath__51__24__I161 (.Y(N149), .A(N220), .B(inst_cellmath__51__24__in3), .S0(inst_cellmath__51__24__in0[17]));
MXI2XL inst_cellmath__51__24__I160 (.Y(N150), .A(N220), .B(inst_cellmath__51__24__in3), .S0(inst_cellmath__51__24__in0[18]));
MXI2XL inst_cellmath__51__24__I157 (.Y(N151), .A(N220), .B(inst_cellmath__51__24__in3), .S0(inst_cellmath__51__24__in0[19]));
MXI2XL inst_cellmath__51__24__I158 (.Y(N152), .A(N220), .B(inst_cellmath__51__24__in3), .S0(inst_cellmath__51__24__in0[20]));
MXI2XL inst_cellmath__51__24__I154 (.Y(N153), .A(N220), .B(inst_cellmath__51__24__in3), .S0(inst_cellmath__51__24__in0[21]));
MXI2XL inst_cellmath__51__24__I159 (.Y(N154), .A(N220), .B(inst_cellmath__51__24__in3), .S0(inst_cellmath__51__24__in0[22]));
MXI2XL inst_cellmath__51__24__I156 (.Y(N155), .A(N220), .B(inst_cellmath__51__24__in3), .S0(inst_cellmath__51__24__in0[23]));
MXI2XL inst_cellmath__51__24__I155 (.Y(N156), .A(N220), .B(inst_cellmath__51__24__in3), .S0(inst_cellmath__51__24__in0[24]));
INVX3 inst_cellmath__51__24__I139 (.Y(N222), .A(inst_cellmath__51__24__in2[25]));
INVX2 inst_cellmath__51__24__I140 (.Y(N223), .A(N222));
CLKINVX4 inst_cellmath__51__24__I138 (.Y(N221), .A(N223));
INVXL inst_cellmath__51__24__I145 (.Y(N228), .A(N222));
AOI22XL inst_cellmath__51__24__I102 (.Y(inst_cellmath__51__24__out0[0]), .A0(N221), .A1(inst_cellmath__51__24__in1[0]), .B0(N132), .B1(N228));
AOI22XL inst_cellmath__51__24__I103 (.Y(inst_cellmath__51__24__out0[1]), .A0(N221), .A1(inst_cellmath__51__24__in1[1]), .B0(N133), .B1(N228));
AOI22XL inst_cellmath__51__24__I104 (.Y(inst_cellmath__51__24__out0[2]), .A0(N221), .A1(inst_cellmath__51__24__in1[2]), .B0(N134), .B1(N228));
AOI22XL inst_cellmath__51__24__I105 (.Y(inst_cellmath__51__24__out0[3]), .A0(N221), .A1(inst_cellmath__51__24__in1[3]), .B0(N135), .B1(N228));
AOI22XL inst_cellmath__51__24__I106 (.Y(inst_cellmath__51__24__out0[4]), .A0(N221), .A1(inst_cellmath__51__24__in1[4]), .B0(N136), .B1(N228));
AOI22XL inst_cellmath__51__24__I107 (.Y(inst_cellmath__51__24__out0[5]), .A0(N221), .A1(inst_cellmath__51__24__in1[5]), .B0(N137), .B1(N228));
INVX1 inst_cellmath__51__24__I143 (.Y(N226), .A(N222));
AOI22XL inst_cellmath__51__24__I108 (.Y(inst_cellmath__51__24__out0[6]), .A0(N221), .A1(inst_cellmath__51__24__in1[6]), .B0(N138), .B1(N226));
AOI22XL inst_cellmath__51__24__I109 (.Y(inst_cellmath__51__24__out0[7]), .A0(N221), .A1(inst_cellmath__51__24__in1[7]), .B0(N139), .B1(N226));
AOI22XL inst_cellmath__51__24__I110 (.Y(inst_cellmath__51__24__out0[8]), .A0(N221), .A1(inst_cellmath__51__24__in1[8]), .B0(N140), .B1(N226));
AOI22XL inst_cellmath__51__24__I111 (.Y(inst_cellmath__51__24__out0[9]), .A0(N221), .A1(inst_cellmath__51__24__in1[9]), .B0(N141), .B1(N226));
AOI22XL inst_cellmath__51__24__I112 (.Y(inst_cellmath__51__24__out0[10]), .A0(N221), .A1(inst_cellmath__51__24__in1[10]), .B0(N142), .B1(N226));
AOI22XL inst_cellmath__51__24__I113 (.Y(inst_cellmath__51__24__out0[11]), .A0(N221), .A1(inst_cellmath__51__24__in1[11]), .B0(N143), .B1(N226));
AOI22XL inst_cellmath__51__24__I114 (.Y(inst_cellmath__51__24__out0[12]), .A0(N221), .A1(inst_cellmath__51__24__in1[12]), .B0(N144), .B1(N226));
AOI22XL inst_cellmath__51__24__I115 (.Y(inst_cellmath__51__24__out0[13]), .A0(N221), .A1(inst_cellmath__51__24__in1[13]), .B0(N145), .B1(N226));
AOI22XL inst_cellmath__51__24__I116 (.Y(inst_cellmath__51__24__out0[14]), .A0(N221), .A1(inst_cellmath__51__24__in1[14]), .B0(N146), .B1(N226));
AOI22XL inst_cellmath__51__24__I117 (.Y(inst_cellmath__51__24__out0[15]), .A0(N221), .A1(inst_cellmath__51__24__in1[15]), .B0(N147), .B1(N226));
INVXL inst_cellmath__51__24__I141 (.Y(N224), .A(N222));
AOI22XL inst_cellmath__51__24__I118 (.Y(inst_cellmath__51__24__out0[16]), .A0(N221), .A1(inst_cellmath__51__24__in1[16]), .B0(N148), .B1(N224));
AOI22XL inst_cellmath__51__24__I119 (.Y(inst_cellmath__51__24__out0[17]), .A0(N221), .A1(inst_cellmath__51__24__in1[17]), .B0(N149), .B1(N224));
AOI22XL inst_cellmath__51__24__I120 (.Y(inst_cellmath__51__24__out0[18]), .A0(inst_cellmath__51__24__in1[18]), .A1(N221), .B0(N150), .B1(N224));
AOI22XL inst_cellmath__51__24__I121 (.Y(inst_cellmath__51__24__out0[19]), .A0(inst_cellmath__51__24__in1[19]), .A1(N221), .B0(N151), .B1(N224));
AOI22X1 inst_cellmath__51__24__I122 (.Y(inst_cellmath__51__24__out0[20]), .A0(N221), .A1(inst_cellmath__51__24__in1[20]), .B0(N152), .B1(N224));
AOI22X1 inst_cellmath__51__24__I123 (.Y(inst_cellmath__51__24__out0[21]), .A0(inst_cellmath__51__24__in1[21]), .A1(N221), .B0(N153), .B1(N223));
AOI22XL inst_cellmath__51__24__I124 (.Y(inst_cellmath__51__24__out0[22]), .A0(inst_cellmath__51__24__in1[22]), .A1(N221), .B0(N154), .B1(N223));
AOI22XL inst_cellmath__51__24__I125 (.Y(inst_cellmath__51__24__out0[23]), .A0(inst_cellmath__51__24__in1[23]), .A1(N221), .B0(N155), .B1(N223));
AOI22XL inst_cellmath__51__24__I126 (.Y(inst_cellmath__51__24__out0[24]), .A0(inst_cellmath__51__24__in1[24]), .A1(N221), .B0(N156), .B1(N223));
endmodule

module cynw_cm_float_add2_inst_delta_0_bdw2915265522_bdw (
	inst_delta_0_out0,
	inst_delta_0_in0
	); /* architecture "gate_level" */ 
output [5:0] inst_delta_0_out0;
input [25:0] inst_delta_0_in0;
wire N72,N74,N75,N76,N77,N78,N80 
	,N81,N82,N83,N84,N86,N87,N88,N89 
	,N90,N92,N93,N94,N95,N96,N98,N99 
	,N100,N101,N102,N104,N105,N106,N107,N108 
	,N117,N120,N121,N123,N124,N125,N126,N127 
	,N129,N130,N131,N132,N133,N137,N141,N143 
	,N144,N145,N146,N149,N150,N152,N167,N170 
	,N183,N187,N189,N191,N193,N195,N199,N201 
	;
NOR2BX1 inst_delta_0_I148 (.Y(N183), .AN(inst_delta_0_in0[0]), .B(inst_delta_0_in0[1]));
NOR2XL inst_delta_0_I11 (.Y(N72), .A(inst_delta_0_in0[1]), .B(inst_delta_0_in0[0]));
NOR2BX1 inst_delta_0_I149 (.Y(N74), .AN(inst_delta_0_in0[2]), .B(inst_delta_0_in0[3]));
INVXL inst_delta_0_I14 (.Y(N75), .A(inst_delta_0_in0[5]));
OAI21XL inst_delta_0_I15 (.Y(N76), .A0(inst_delta_0_in0[4]), .A1(N74), .B0(N75));
NOR2X1 inst_delta_0_I16 (.Y(N77), .A(inst_delta_0_in0[3]), .B(inst_delta_0_in0[2]));
NOR2X1 inst_delta_0_I17 (.Y(N78), .A(inst_delta_0_in0[5]), .B(inst_delta_0_in0[4]));
NOR2BX1 inst_delta_0_I150 (.Y(N80), .AN(inst_delta_0_in0[6]), .B(inst_delta_0_in0[7]));
INVXL inst_delta_0_I20 (.Y(N81), .A(inst_delta_0_in0[9]));
OAI21XL inst_delta_0_I21 (.Y(N82), .A0(inst_delta_0_in0[8]), .A1(N80), .B0(N81));
NOR2X2 inst_delta_0_I22 (.Y(N83), .A(inst_delta_0_in0[7]), .B(inst_delta_0_in0[6]));
NOR2X4 inst_delta_0_I23 (.Y(N84), .A(inst_delta_0_in0[9]), .B(inst_delta_0_in0[8]));
NOR2BX1 inst_delta_0_I151 (.Y(N86), .AN(inst_delta_0_in0[10]), .B(inst_delta_0_in0[11]));
INVXL inst_delta_0_I26 (.Y(N87), .A(inst_delta_0_in0[13]));
OAI21XL inst_delta_0_I27 (.Y(N88), .A0(inst_delta_0_in0[12]), .A1(N86), .B0(N87));
NOR2X1 inst_delta_0_I28 (.Y(N89), .A(inst_delta_0_in0[11]), .B(inst_delta_0_in0[10]));
NOR2X2 inst_delta_0_I29 (.Y(N90), .A(inst_delta_0_in0[13]), .B(inst_delta_0_in0[12]));
NOR2BX1 inst_delta_0_I152 (.Y(N92), .AN(inst_delta_0_in0[14]), .B(inst_delta_0_in0[15]));
INVXL inst_delta_0_I32 (.Y(N93), .A(inst_delta_0_in0[17]));
OAI21XL inst_delta_0_I33 (.Y(N94), .A0(inst_delta_0_in0[16]), .A1(N92), .B0(N93));
NOR2X2 inst_delta_0_I34 (.Y(N95), .A(inst_delta_0_in0[15]), .B(inst_delta_0_in0[14]));
NOR2X4 inst_delta_0_I35 (.Y(N96), .A(inst_delta_0_in0[17]), .B(inst_delta_0_in0[16]));
NOR2BX1 inst_delta_0_I153 (.Y(N98), .AN(inst_delta_0_in0[18]), .B(inst_delta_0_in0[19]));
INVXL inst_delta_0_I38 (.Y(N99), .A(inst_delta_0_in0[21]));
OAI21XL inst_delta_0_I39 (.Y(N100), .A0(inst_delta_0_in0[20]), .A1(N98), .B0(N99));
NOR2X2 inst_delta_0_I40 (.Y(N101), .A(inst_delta_0_in0[19]), .B(inst_delta_0_in0[18]));
NOR2X2 inst_delta_0_I41 (.Y(N102), .A(inst_delta_0_in0[21]), .B(inst_delta_0_in0[20]));
NOR2BX1 inst_delta_0_I154 (.Y(N104), .AN(inst_delta_0_in0[22]), .B(inst_delta_0_in0[23]));
INVXL inst_delta_0_I44 (.Y(N105), .A(inst_delta_0_in0[25]));
OAI21XL inst_delta_0_I45 (.Y(N106), .A0(inst_delta_0_in0[24]), .A1(N104), .B0(N105));
NOR2X2 inst_delta_0_I46 (.Y(N107), .A(inst_delta_0_in0[23]), .B(inst_delta_0_in0[22]));
NOR2X2 inst_delta_0_I47 (.Y(N108), .A(inst_delta_0_in0[25]), .B(inst_delta_0_in0[24]));
NAND2BXL inst_delta_0_I155 (.Y(N117), .AN(N77), .B(N78));
NAND2X2 inst_delta_0_I58 (.Y(N120), .A(N78), .B(N77));
NAND2X4 inst_delta_0_I59 (.Y(N121), .A(N84), .B(N83));
NAND2BXL inst_delta_0_I156 (.Y(N123), .AN(N89), .B(N90));
INVXL inst_delta_0_I62 (.Y(N124), .A(N96));
AOI21XL inst_delta_0_I63 (.Y(N125), .A0(N95), .A1(N123), .B0(N124));
NAND2X2 inst_delta_0_I64 (.Y(N126), .A(N90), .B(N89));
NAND2X2 inst_delta_0_I65 (.Y(N127), .A(N96), .B(N95));
NAND2BXL inst_delta_0_I157 (.Y(N129), .AN(N101), .B(N102));
INVXL inst_delta_0_I68 (.Y(N130), .A(N108));
AOI21XL inst_delta_0_I69 (.Y(N131), .A0(N107), .A1(N129), .B0(N130));
NAND2X2 inst_delta_0_I70 (.Y(N132), .A(N102), .B(N101));
NAND2X2 inst_delta_0_I71 (.Y(N133), .A(N108), .B(N107));
NAND2BXL inst_delta_0_I158 (.Y(N137), .AN(N121), .B(N120));
NOR2X2 inst_delta_0_I77 (.Y(N141), .A(N121), .B(N120));
NOR2BX1 inst_delta_0_I307 (.Y(N143), .AN(N126), .B(N127));
INVXL inst_delta_0_I80 (.Y(N144), .A(N133));
OAI21XL inst_delta_0_I81 (.Y(N145), .A0(N132), .A1(N143), .B0(N144));
NOR2X2 inst_delta_0_I82 (.Y(N146), .A(N127), .B(N126));
NOR2X2 inst_delta_0_I83 (.Y(N199), .A(N133), .B(N132));
NAND2BX2 inst_delta_0_I160 (.Y(N149), .AN(N72), .B(N141));
INVXL inst_delta_0_I86 (.Y(N150), .A(N199));
AOI21X2 inst_delta_0_I87 (.Y(inst_delta_0_out0[3]), .A0(N146), .A1(N149), .B0(N150));
NAND2XL inst_delta_0_I88 (.Y(N152), .A(N141), .B(N72));
NAND2X2 inst_delta_0_I89 (.Y(N201), .A(N199), .B(N146));
NOR2BX1 inst_delta_0_I161 (.Y(inst_delta_0_out0[4]), .AN(N152), .B(N201));
NOR2XL inst_delta_0_I92 (.Y(inst_delta_0_out0[5]), .A(N201), .B(N152));
OAI21XL inst_delta_0_I96 (.Y(inst_delta_0_out0[2]), .A0(N201), .A1(N137), .B0(N145));
OAI2BB1X1 inst_delta_0_I164 (.Y(N167), .A0N(N83), .A1N(N117), .B0(N84));
AOI21XL inst_delta_0_I104 (.Y(N170), .A0(N199), .A1(N125), .B0(N131));
OAI21XL inst_delta_0_I106 (.Y(inst_delta_0_out0[1]), .A0(N201), .A1(N167), .B0(N170));
OAI21XL inst_delta_0_I118 (.Y(N187), .A0(N121), .A1(N76), .B0(N82));
OAI21XL inst_delta_0_I120 (.Y(N189), .A0(N127), .A1(N88), .B0(N94));
OAI21XL inst_delta_0_I122 (.Y(N191), .A0(N133), .A1(N100), .B0(N106));
AOI21XL inst_delta_0_I124 (.Y(N193), .A0(N141), .A1(N183), .B0(N187));
AOI21XL inst_delta_0_I126 (.Y(N195), .A0(N199), .A1(N189), .B0(N191));
OAI21XL inst_delta_0_I128 (.Y(inst_delta_0_out0[0]), .A0(N201), .A1(N193), .B0(N195));
endmodule

module cynw_cm_float_add2_inst_cellmath__69__29__bdw2915265522_bdw (
	inst_cellmath__69__29__out0,
	inst_cellmath__69__29__in0,
	inst_cellmath__69__29__in1
	); /* architecture "gate_level" */ 
output [0:0] inst_cellmath__69__29__out0;
input [5:5] inst_cellmath__69__29__in0;
input  inst_cellmath__69__29__in1;
wire N5;
INVXL inst_cellmath__69__29__I0 (.Y(N5), .A(inst_cellmath__69__29__in1));
NOR2X2 inst_cellmath__69__29__I1 (.Y(inst_cellmath__69__29__out0[0]), .A(N5), .B(inst_cellmath__69__29__in0[5]));
endmodule

module cynw_cm_float_add2_inst_cellmath__69__30__bdw2915265522_bdw (
	inst_cellmath__69__30__out0,
	inst_cellmath__69__30__in0,
	inst_cellmath__69__30__in1
	); /* architecture "gate_level" */ 
output [0:0] inst_cellmath__69__30__out0;
input  inst_cellmath__69__30__in0,
	inst_cellmath__69__30__in1;
CLKAND2X2 inst_cellmath__69__30__I0 (.Y(inst_cellmath__69__30__out0[0]), .A(inst_cellmath__69__30__in1), .B(inst_cellmath__69__30__in0));
endmodule

module cynw_cm_float_add2_inst_cellmath__69_0_bdw2915265522_bdw (
	inst_cellmath__69_0_out0,
	inst_cellmath__69_0_in0,
	inst_cellmath__69_0_in1
	); /* architecture "gate_level" */ 
output  inst_cellmath__69_0_out0;
input [0:0] inst_cellmath__69_0_in0,
	inst_cellmath__69_0_in1;
wire N5;
NOR2XL inst_cellmath__69_0_I0 (.Y(N5), .A(inst_cellmath__69_0_in0[0]), .B(inst_cellmath__69_0_in1[0]));
INVXL inst_cellmath__69_0_I1 (.Y(inst_cellmath__69_0_out0), .A(N5));
endmodule

module cynw_cm_float_add2_inst_cellmath__59_0_bdw2915265522_bdw (
	inst_cellmath__59_0_out0,
	inst_cellmath__59_0_in0,
	inst_cellmath__59_0_in1
	); /* architecture "gate_level" */ 
output  inst_cellmath__59_0_out0;
input  inst_cellmath__59_0_in0,
	inst_cellmath__59_0_in1;
wire N2;
NAND2BX2 inst_cellmath__59_0_I4 (.Y(N2), .AN(inst_cellmath__59_0_in1), .B(inst_cellmath__59_0_in0));
INVXL inst_cellmath__59_0_I5 (.Y(inst_cellmath__59_0_out0), .A(N2));
endmodule

module cynw_cm_float_add2_inst_cellmath__40_0_bdw2915265522_bdw (
	inst_cellmath__40_0_out0,
	inst_cellmath__40_0_in0,
	inst_cellmath__40_0_in1,
	inst_cellmath__40_0_in2
	); /* architecture "gate_level" */ 
output [7:0] inst_cellmath__40_0_out0;
input [8:8] inst_cellmath__40_0_in0;
input [7:0] inst_cellmath__40_0_in1,
	inst_cellmath__40_0_in2;
wire N27,N28,N29,N30,N31,N32,N33 
	,N34,N35,N36,N37,N38,N39,N40,N41 
	,N42,N60,N67,N68,N69;
INVXL inst_cellmath__40_0_I0 (.Y(N27), .A(inst_cellmath__40_0_in1[0]));
INVXL inst_cellmath__40_0_I1 (.Y(N28), .A(inst_cellmath__40_0_in1[1]));
INVXL inst_cellmath__40_0_I2 (.Y(N29), .A(inst_cellmath__40_0_in1[2]));
INVXL inst_cellmath__40_0_I3 (.Y(N30), .A(inst_cellmath__40_0_in1[3]));
INVXL inst_cellmath__40_0_I4 (.Y(N31), .A(inst_cellmath__40_0_in1[4]));
INVXL inst_cellmath__40_0_I5 (.Y(N32), .A(inst_cellmath__40_0_in1[5]));
INVXL inst_cellmath__40_0_I6 (.Y(N33), .A(inst_cellmath__40_0_in1[6]));
INVXL inst_cellmath__40_0_I7 (.Y(N34), .A(inst_cellmath__40_0_in1[7]));
INVXL inst_cellmath__40_0_I8 (.Y(N35), .A(inst_cellmath__40_0_in2[0]));
INVXL inst_cellmath__40_0_I9 (.Y(N36), .A(inst_cellmath__40_0_in2[1]));
INVXL inst_cellmath__40_0_I10 (.Y(N37), .A(inst_cellmath__40_0_in2[2]));
INVXL inst_cellmath__40_0_I11 (.Y(N38), .A(inst_cellmath__40_0_in2[3]));
INVXL inst_cellmath__40_0_I12 (.Y(N39), .A(inst_cellmath__40_0_in2[4]));
INVXL inst_cellmath__40_0_I13 (.Y(N40), .A(inst_cellmath__40_0_in2[5]));
INVXL inst_cellmath__40_0_I14 (.Y(N41), .A(inst_cellmath__40_0_in2[6]));
INVXL inst_cellmath__40_0_I15 (.Y(N42), .A(inst_cellmath__40_0_in2[7]));
INVX3 inst_cellmath__40_0_I36 (.Y(N67), .A(inst_cellmath__40_0_in0[8]));
CLKINVX6 inst_cellmath__40_0_I37 (.Y(N68), .A(N67));
CLKINVX12 inst_cellmath__40_0_I29 (.Y(N60), .A(N68));
INVX1 inst_cellmath__40_0_I38 (.Y(N69), .A(N67));
AOI22XL inst_cellmath__40_0_I17 (.Y(inst_cellmath__40_0_out0[0]), .A0(N60), .A1(N35), .B0(N27), .B1(N69));
AOI22X2 inst_cellmath__40_0_I18 (.Y(inst_cellmath__40_0_out0[1]), .A0(N36), .A1(N60), .B0(N28), .B1(N69));
AOI22X1 inst_cellmath__40_0_I19 (.Y(inst_cellmath__40_0_out0[2]), .A0(N37), .A1(N60), .B0(N29), .B1(N69));
AOI22X1 inst_cellmath__40_0_I20 (.Y(inst_cellmath__40_0_out0[3]), .A0(N38), .A1(N60), .B0(N30), .B1(N69));
AOI22X1 inst_cellmath__40_0_I21 (.Y(inst_cellmath__40_0_out0[4]), .A0(N60), .A1(N39), .B0(N31), .B1(N68));
AOI22XL inst_cellmath__40_0_I22 (.Y(inst_cellmath__40_0_out0[5]), .A0(N40), .A1(N60), .B0(N32), .B1(N68));
AOI22XL inst_cellmath__40_0_I23 (.Y(inst_cellmath__40_0_out0[6]), .A0(N41), .A1(N60), .B0(N33), .B1(N68));
AOI22X1 inst_cellmath__40_0_I24 (.Y(inst_cellmath__40_0_out0[7]), .A0(N60), .A1(N42), .B0(N34), .B1(N68));
endmodule

module cynw_cm_float_add2_inst_cellmath__73_0_bdw2915265522_bdw (
	inst_cellmath__73_0_out0,
	inst_cellmath__73_0_in0,
	inst_cellmath__73_0_in1
	); /* architecture "gate_level" */ 
output  inst_cellmath__73_0_out0;
input [4:0] inst_cellmath__73_0_in0;
input [7:0] inst_cellmath__73_0_in1;
wire N47,N49,N51,N53,N74,N76,N77 
	,N79,N80,N82,N83,N85,N86,N113,N114 
	,N116,N117,N118,N119,N121,N123,N124;
INVXL inst_cellmath__73_0_I16 (.Y(N47), .A(inst_cellmath__73_0_in1[1]));
INVXL inst_cellmath__73_0_I17 (.Y(N49), .A(inst_cellmath__73_0_in1[2]));
INVXL inst_cellmath__73_0_I18 (.Y(N51), .A(inst_cellmath__73_0_in1[3]));
INVXL inst_cellmath__73_0_I19 (.Y(N53), .A(inst_cellmath__73_0_in1[4]));
NAND2BXL inst_cellmath__73_0_I69 (.Y(N74), .AN(inst_cellmath__73_0_in1[0]), .B(inst_cellmath__73_0_in0[0]));
NAND2XL cla0c_A_I58 (.Y(N77), .A(N47), .B(inst_cellmath__73_0_in0[1]));
NOR2X1 cla0c_A_I59 (.Y(N76), .A(N47), .B(inst_cellmath__73_0_in0[1]));
NAND2XL cla0c_A_I60 (.Y(N80), .A(N49), .B(inst_cellmath__73_0_in0[2]));
NOR2XL cla0c_A_I61 (.Y(N79), .A(N49), .B(inst_cellmath__73_0_in0[2]));
NAND2XL cla0c_A_I62 (.Y(N83), .A(N51), .B(inst_cellmath__73_0_in0[3]));
NOR2XL cla0c_A_I63 (.Y(N82), .A(N51), .B(inst_cellmath__73_0_in0[3]));
NAND2XL cla0c_A_I64 (.Y(N86), .A(N53), .B(inst_cellmath__73_0_in0[4]));
NOR2XL cla0c_A_I65 (.Y(N85), .A(N53), .B(inst_cellmath__73_0_in0[4]));
NOR2XL ECLA_Stage_Fwd_I42 (.Y(N113), .A(inst_cellmath__73_0_in1[7]), .B(inst_cellmath__73_0_in1[6]));
NOR2XL ECLA_Stage_Fwd_I43 (.Y(N114), .A(inst_cellmath__73_0_in1[5]), .B(N86));
NOR2XL ECLA_Stage_Fwd_I44 (.Y(N116), .A(inst_cellmath__73_0_in1[5]), .B(N85));
OAI21XL ECLA_Stage_Fwd_I45 (.Y(N117), .A0(N82), .A1(N80), .B0(N83));
NOR2XL ECLA_Stage_Fwd_I46 (.Y(N118), .A(N82), .B(N79));
OAI21X1 ECLA_Stage_Fwd_I47 (.Y(N119), .A0(N76), .A1(N74), .B0(N77));
NAND2XL ECLA_Stage_Fwd_I49 (.Y(N121), .A(N113), .B(N114));
NAND2XL ECLA_Stage_Fwd_I50 (.Y(N123), .A(N113), .B(N116));
AOI21X2 ECLA_Stage_Fwd_I51 (.Y(N124), .A0(N118), .A1(N119), .B0(N117));
OAI21X2 ECLA_Stage_Fwd_I53 (.Y(inst_cellmath__73_0_out0), .A0(N123), .A1(N124), .B0(N121));
endmodule

module cynw_cm_float_add2_inst_cellmath__75__32__bdw2915265522_bdw (
	inst_cellmath__75__32__out0,
	inst_cellmath__75__32__in0,
	inst_cellmath__75__32__in1
	); /* architecture "gate_level" */ 
output [0:0] inst_cellmath__75__32__out0;
input [25:25] inst_cellmath__75__32__in0;
input [7:1] inst_cellmath__75__32__in1;
wire N13,N14,N15,N16;
AND4XL inst_cellmath__75__32__I18 (.Y(N13), .A(inst_cellmath__75__32__in1[7]), .B(inst_cellmath__75__32__in1[2]), .C(inst_cellmath__75__32__in1[4]), .D(inst_cellmath__75__32__in1[3]));
NAND2XL inst_cellmath__75__32__I3 (.Y(N14), .A(N13), .B(inst_cellmath__75__32__in1[6]));
NAND2XL inst_cellmath__75__32__I4 (.Y(N15), .A(inst_cellmath__75__32__in1[5]), .B(inst_cellmath__75__32__in1[1]));
NOR2XL inst_cellmath__75__32__I5 (.Y(N16), .A(N14), .B(N15));
CLKAND2X2 inst_cellmath__75__32__I6 (.Y(inst_cellmath__75__32__out0[0]), .A(N16), .B(inst_cellmath__75__32__in0[25]));
endmodule

module cynw_cm_float_add2_inst_cellmath__77_0_bdw2915265522_bdw (
	inst_cellmath__77_0_out0,
	inst_cellmath__77_0_in0,
	inst_cellmath__77_0_in1,
	inst_cellmath__77_0_in2,
	inst_cellmath__77_0_in3
	); /* architecture "gate_level" */ 
output  inst_cellmath__77_0_out0;
input [0:0] inst_cellmath__77_0_in0;
input  inst_cellmath__77_0_in1,
	inst_cellmath__77_0_in2,
	inst_cellmath__77_0_in3;
wire N10;
OR3XL inst_cellmath__77_0_I7 (.Y(N10), .A(inst_cellmath__77_0_in2), .B(inst_cellmath__77_0_in3), .C(inst_cellmath__77_0_in1));
OR2XL inst_cellmath__77_0_I4 (.Y(inst_cellmath__77_0_out0), .A(N10), .B(inst_cellmath__77_0_in0[0]));
endmodule

module cynw_cm_float_add2_inst_cellmath__74__31__bdw2915265522_bdw (
	inst_cellmath__74__31__out0,
	inst_cellmath__74__31__in0,
	inst_cellmath__74__31__in1
	); /* architecture "gate_level" */ 
output [0:0] inst_cellmath__74__31__out0;
input  inst_cellmath__74__31__in0,
	inst_cellmath__74__31__in1;
CLKAND2X3 inst_cellmath__74__31__I0 (.Y(inst_cellmath__74__31__out0[0]), .A(inst_cellmath__74__31__in0), .B(inst_cellmath__74__31__in1));
endmodule

module cynw_cm_float_add2_inst_cellmath__72_0_bdw2915265522_bdw (
	inst_cellmath__72_0_out0,
	inst_cellmath__72_0_in0,
	inst_cellmath__72_0_in1,
	inst_cellmath__72_0_in2,
	inst_cellmath__72_0_in3
	); /* architecture "gate_level" */ 
output  inst_cellmath__72_0_out0;
input [5:5] inst_cellmath__72_0_in0;
input  inst_cellmath__72_0_in1;
input [0:0] inst_cellmath__72_0_in2;
input  inst_cellmath__72_0_in3;
wire N7,N8,N9,N10,N11;
NOR2XL inst_cellmath__72_0_I0 (.Y(N7), .A(inst_cellmath__72_0_in2[0]), .B(inst_cellmath__72_0_in1));
INVXL inst_cellmath__72_0_I1 (.Y(N8), .A(N7));
NOR2XL inst_cellmath__72_0_I2 (.Y(N9), .A(N8), .B(inst_cellmath__72_0_in0[5]));
INVXL inst_cellmath__72_0_I3 (.Y(N10), .A(N9));
NOR2X1 inst_cellmath__72_0_I4 (.Y(N11), .A(N10), .B(inst_cellmath__72_0_in3));
INVX2 inst_cellmath__72_0_I5 (.Y(inst_cellmath__72_0_out0), .A(N11));
endmodule

module cynw_cm_float_add2_inst_cellmath__66_0_bdw2915265522_bdw (
	inst_cellmath__66_0_out0,
	inst_cellmath__66_0_in0,
	inst_cellmath__66_0_in1
	); /* architecture "gate_level" */ 
output [7:0] inst_cellmath__66_0_out0;
input [4:0] inst_cellmath__66_0_in0;
input [7:0] inst_cellmath__66_0_in1;
wire N30,N34,N36,N38,N85,N86,N87 
	,N88,N89,N90,N91,N103,N104,N105,N106 
	,N107,N108,N109,N110,N111,N112,N113,N114 
	,N115,N120,N122,N123,N124,N125,N126,N127 
	,N128,N129,N130,N131,N138,N142,N143,N144 
	,N145,N146,N147,N158,N160,N162,N179,N182 
	,N185,N188,N191,N194,N197,N261,N299,N300 
	,N301,N302,N306;
CLKINVX1 inst_cellmath__66_0_I5 (.Y(N30), .A(inst_cellmath__66_0_in0[0]));
INVX1 inst_cellmath__66_0_I7 (.Y(N34), .A(inst_cellmath__66_0_in0[2]));
INVXL inst_cellmath__66_0_I8 (.Y(N36), .A(inst_cellmath__66_0_in0[3]));
INVX1 inst_cellmath__66_0_I9 (.Y(N38), .A(inst_cellmath__66_0_in0[4]));
ADDHX1 inst_cellmath__66_0_I32 (.CO(N86), .S(N85), .A(inst_cellmath__66_0_in1[2]), .B(inst_cellmath__66_0_in1[1]));
ADDHX1 inst_cellmath__66_0_I33 (.CO(N88), .S(N87), .A(inst_cellmath__66_0_in1[3]), .B(N86));
ADDHX1 inst_cellmath__66_0_I34 (.CO(N90), .S(N89), .A(inst_cellmath__66_0_in1[4]), .B(N88));
INVXL inst_cellmath__66_0_I35 (.Y(N91), .A(inst_cellmath__66_0_in1[5]));
NAND2X2 inst_cellmath__66_0_I38 (.Y(N103), .A(inst_cellmath__66_0_in1[0]), .B(N30));
CLKAND2X3 inst_cellmath__66_0_I39 (.Y(N104), .A(inst_cellmath__66_0_in1[1]), .B(inst_cellmath__66_0_in0[1]));
OR2X6 inst_cellmath__66_0_I40 (.Y(N105), .A(inst_cellmath__66_0_in1[1]), .B(inst_cellmath__66_0_in0[1]));
NOR2X2 inst_cellmath__66_0_I41 (.Y(N106), .A(N85), .B(N34));
NAND2X4 inst_cellmath__66_0_I42 (.Y(N107), .A(N85), .B(N34));
NOR2X2 inst_cellmath__66_0_I43 (.Y(N108), .A(N87), .B(N36));
NAND2X2 inst_cellmath__66_0_I44 (.Y(N109), .A(N87), .B(N36));
NOR2X1 inst_cellmath__66_0_I45 (.Y(N110), .A(N89), .B(N38));
NAND2X2 inst_cellmath__66_0_I46 (.Y(N111), .A(N89), .B(N38));
NOR2XL inst_cellmath__66_0_I47 (.Y(N112), .A(N91), .B(N90));
NAND2XL inst_cellmath__66_0_I48 (.Y(N113), .A(N91), .B(N90));
INVXL inst_cellmath__66_0_I189 (.Y(N299), .A(inst_cellmath__66_0_in1[6]));
NOR2XL inst_cellmath__66_0_I49 (.Y(N114), .A(inst_cellmath__66_0_in1[5]), .B(N299));
NAND2XL inst_cellmath__66_0_I50 (.Y(N115), .A(inst_cellmath__66_0_in1[5]), .B(N299));
INVX1 inst_cellmath__66_0_I190 (.Y(N300), .A(N103));
AOI21X2 inst_cellmath__66_0_I55 (.Y(N120), .A0(N105), .A1(N103), .B0(N104));
AOI21X4 inst_cellmath__66_0_I57 (.Y(N122), .A0(N107), .A1(N104), .B0(N106));
NAND2X4 inst_cellmath__66_0_I58 (.Y(N123), .A(N107), .B(N105));
AOI21XL inst_cellmath__66_0_I59 (.Y(N124), .A0(N109), .A1(N106), .B0(N108));
NAND2XL inst_cellmath__66_0_I60 (.Y(N125), .A(N109), .B(N107));
AOI21X1 inst_cellmath__66_0_I61 (.Y(N126), .A0(N111), .A1(N108), .B0(N110));
NAND2X1 inst_cellmath__66_0_I62 (.Y(N127), .A(N111), .B(N109));
AOI21XL inst_cellmath__66_0_I63 (.Y(N128), .A0(N113), .A1(N110), .B0(N112));
NAND2XL inst_cellmath__66_0_I64 (.Y(N129), .A(N113), .B(N111));
AOI21XL inst_cellmath__66_0_I65 (.Y(N130), .A0(N115), .A1(N112), .B0(N114));
NAND2XL inst_cellmath__66_0_I66 (.Y(N131), .A(N115), .B(N113));
INVXL inst_cellmath__66_0_I191 (.Y(N301), .A(N300));
INVXL inst_cellmath__66_0_I192 (.Y(N302), .A(N120));
OAI21X4 inst_cellmath__66_0_I73 (.Y(N138), .A0(N123), .A1(N300), .B0(N122));
OAI21XL inst_cellmath__66_0_I77 (.Y(N142), .A0(N127), .A1(N122), .B0(N126));
NOR2XL inst_cellmath__66_0_I78 (.Y(N143), .A(N127), .B(N123));
OAI21XL inst_cellmath__66_0_I79 (.Y(N144), .A0(N129), .A1(N124), .B0(N128));
NOR2XL inst_cellmath__66_0_I80 (.Y(N145), .A(N129), .B(N125));
OAI21XL inst_cellmath__66_0_I81 (.Y(N146), .A0(N131), .A1(N126), .B0(N130));
NOR2XL inst_cellmath__66_0_I82 (.Y(N147), .A(N131), .B(N127));
OA21X1 inst_cellmath__66_0_I394 (.Y(N306), .A0(N125), .A1(N120), .B0(N124));
AOI21XL inst_cellmath__66_0_I93 (.Y(N158), .A0(N143), .A1(N301), .B0(N142));
AOI21XL inst_cellmath__66_0_I95 (.Y(N160), .A0(N145), .A1(N302), .B0(N144));
AOI21X2 inst_cellmath__66_0_I97 (.Y(N162), .A0(N147), .A1(N138), .B0(N146));
NAND2BXL inst_cellmath__66_0_I114 (.Y(N179), .AN(N104), .B(N105));
NAND2BXL inst_cellmath__66_0_I117 (.Y(N182), .AN(N106), .B(N107));
NAND2BXL inst_cellmath__66_0_I120 (.Y(N185), .AN(N108), .B(N109));
NAND2BXL inst_cellmath__66_0_I123 (.Y(N188), .AN(N110), .B(N111));
NAND2BXL inst_cellmath__66_0_I126 (.Y(N191), .AN(N112), .B(N113));
NAND2BXL inst_cellmath__66_0_I129 (.Y(N194), .AN(N114), .B(N115));
XNOR2X1 inst_cellmath__66_0_I215 (.Y(N197), .A(inst_cellmath__66_0_in1[7]), .B(N299));
XOR2XL inst_cellmath__66_0_I133 (.Y(inst_cellmath__66_0_out0[0]), .A(inst_cellmath__66_0_in1[0]), .B(N30));
XOR2XL inst_cellmath__66_0_I216 (.Y(inst_cellmath__66_0_out0[1]), .A(N301), .B(N179));
XOR2XL inst_cellmath__66_0_I401 (.Y(inst_cellmath__66_0_out0[2]), .A(N302), .B(N182));
XOR2XL inst_cellmath__66_0_I402 (.Y(inst_cellmath__66_0_out0[3]), .A(N138), .B(N185));
INVXL xnor2_A_I157 (.Y(N261), .A(N306));
MXI2XL xnor2_A_I397 (.Y(inst_cellmath__66_0_out0[4]), .A(N306), .B(N261), .S0(N188));
XNOR2X1 inst_cellmath__66_0_I398 (.Y(inst_cellmath__66_0_out0[5]), .A(N191), .B(N158));
XNOR2X1 inst_cellmath__66_0_I399 (.Y(inst_cellmath__66_0_out0[6]), .A(N194), .B(N160));
XNOR2X1 inst_cellmath__66_0_I400 (.Y(inst_cellmath__66_0_out0[7]), .A(N197), .B(N162));
endmodule

module cynw_cm_float_add2_inst_cellmath__60_0_bdw2915265522_bdw (
	inst_cellmath__60_0_out0,
	inst_cellmath__60_0_in0,
	inst_cellmath__60_0_in1,
	inst_cellmath__60_0_in2
	); /* architecture "gate_level" */ 
output [7:0] inst_cellmath__60_0_out0;
input  inst_cellmath__60_0_in0,
	inst_cellmath__60_0_in1;
input [7:0] inst_cellmath__60_0_in2;
wire N28,N29,N30,N31,N32,N33,N34 
	,N35,N47,N48;
INVXL inst_cellmath__60_0_I26 (.Y(N47), .A(inst_cellmath__60_0_in0));
INVXL inst_cellmath__60_0_I8 (.Y(N28), .A(inst_cellmath__60_0_in2[0]));
INVXL inst_cellmath__60_0_I9 (.Y(N29), .A(inst_cellmath__60_0_in2[1]));
INVXL inst_cellmath__60_0_I10 (.Y(N30), .A(inst_cellmath__60_0_in2[2]));
INVXL inst_cellmath__60_0_I11 (.Y(N31), .A(inst_cellmath__60_0_in2[3]));
INVXL inst_cellmath__60_0_I12 (.Y(N32), .A(inst_cellmath__60_0_in2[4]));
INVXL inst_cellmath__60_0_I13 (.Y(N33), .A(inst_cellmath__60_0_in2[5]));
INVXL inst_cellmath__60_0_I14 (.Y(N34), .A(inst_cellmath__60_0_in2[6]));
INVXL inst_cellmath__60_0_I15 (.Y(N35), .A(inst_cellmath__60_0_in2[7]));
INVX2 inst_cellmath__60_0_I27 (.Y(N48), .A(inst_cellmath__60_0_in1));
AOI22XL inst_cellmath__60_0_I17 (.Y(inst_cellmath__60_0_out0[0]), .A0(N48), .A1(N28), .B0(N47), .B1(inst_cellmath__60_0_in1));
AOI22XL inst_cellmath__60_0_I18 (.Y(inst_cellmath__60_0_out0[1]), .A0(N48), .A1(N29), .B0(N47), .B1(inst_cellmath__60_0_in1));
AOI22XL inst_cellmath__60_0_I19 (.Y(inst_cellmath__60_0_out0[2]), .A0(N48), .A1(N30), .B0(N47), .B1(inst_cellmath__60_0_in1));
AOI22XL inst_cellmath__60_0_I20 (.Y(inst_cellmath__60_0_out0[3]), .A0(N48), .A1(N31), .B0(N47), .B1(inst_cellmath__60_0_in1));
AOI22XL inst_cellmath__60_0_I21 (.Y(inst_cellmath__60_0_out0[4]), .A0(N48), .A1(N32), .B0(N47), .B1(inst_cellmath__60_0_in1));
AOI22XL inst_cellmath__60_0_I22 (.Y(inst_cellmath__60_0_out0[5]), .A0(N48), .A1(N33), .B0(N47), .B1(inst_cellmath__60_0_in1));
AOI22XL inst_cellmath__60_0_I23 (.Y(inst_cellmath__60_0_out0[6]), .A0(N48), .A1(N34), .B0(N47), .B1(inst_cellmath__60_0_in1));
AOI22X1 inst_cellmath__60_0_I24 (.Y(inst_cellmath__60_0_out0[7]), .A0(N48), .A1(N35), .B0(N47), .B1(inst_cellmath__60_0_in1));
endmodule

module cynw_cm_float_add2_inst_cellmath__63_0_bdw2915265522_bdw (
	inst_cellmath__63_0_out0,
	inst_cellmath__63_0_in0,
	inst_cellmath__63_0_in1
	); /* architecture "gate_level" */ 
output [24:0] inst_cellmath__63_0_out0;
input [4:0] inst_cellmath__63_0_in0;
input [25:0] inst_cellmath__63_0_in1;
wire N86,N88,N90,N92,N94,N96,N98 
	,N100,N102,N103,N104,N105,N106,N107,N108 
	,N109,N110,N111,N112,N113,N114,N115,N116 
	,N117,N118,N150,N152,N154,N156,N158,N160 
	,N162,N164,N166,N168,N170,N172,N174,N176 
	,N178,N180,N182,N183,N184,N185,N186,N187 
	,N188,N189,N190,N222,N224,N225,N226,N227 
	,N228,N229,N230,N231,N232,N233,N234,N235 
	,N236,N237,N238,N239,N240,N241,N242,N243 
	,N244,N245,N246,N247,N279,N281,N283,N284 
	,N285,N286,N287,N288,N289,N290,N291,N292 
	,N293,N294,N295,N296,N297,N298,N299,N300 
	,N301,N302,N303,N304,N305,N412,N413,N414 
	,N415,N416,N417,N419,N420,N421,N423,N424 
	,N432,N436,N441,N447;
BUFX3 inst_cellmath__63_0_I325 (.Y(N412), .A(inst_cellmath__63_0_in0[3]));
INVX1 inst_cellmath__63_0_I294 (.Y(N417), .A(N412));
INVX1 inst_cellmath__63_0_I293 (.Y(N416), .A(N412));
INVX1 inst_cellmath__63_0_I292 (.Y(N415), .A(N412));
INVX3 inst_cellmath__63_0_I291 (.Y(N414), .A(N412));
INVX2 inst_cellmath__63_0_I290 (.Y(N413), .A(N412));
AND2XL inst_cellmath__63_0_I2 (.Y(N86), .A(N417), .B(inst_cellmath__63_0_in1[0]));
CLKAND2X2 inst_cellmath__63_0_I3 (.Y(N88), .A(N417), .B(inst_cellmath__63_0_in1[1]));
AND2XL inst_cellmath__63_0_I4 (.Y(N90), .A(N417), .B(inst_cellmath__63_0_in1[2]));
AND2XL inst_cellmath__63_0_I5 (.Y(N92), .A(N417), .B(inst_cellmath__63_0_in1[3]));
AND2XL inst_cellmath__63_0_I6 (.Y(N94), .A(N417), .B(inst_cellmath__63_0_in1[4]));
AND2XL inst_cellmath__63_0_I7 (.Y(N96), .A(N416), .B(inst_cellmath__63_0_in1[5]));
AND2XL inst_cellmath__63_0_I8 (.Y(N98), .A(N416), .B(inst_cellmath__63_0_in1[6]));
AND2XL inst_cellmath__63_0_I9 (.Y(N100), .A(N416), .B(inst_cellmath__63_0_in1[7]));
MX2X1 inst_cellmath__63_0_I10 (.Y(N102), .A(inst_cellmath__63_0_in1[0]), .B(inst_cellmath__63_0_in1[8]), .S0(N416));
MX2XL inst_cellmath__63_0_I11 (.Y(N103), .A(inst_cellmath__63_0_in1[1]), .B(inst_cellmath__63_0_in1[9]), .S0(N416));
MX2XL inst_cellmath__63_0_I12 (.Y(N104), .A(inst_cellmath__63_0_in1[2]), .B(inst_cellmath__63_0_in1[10]), .S0(N415));
MX2XL inst_cellmath__63_0_I13 (.Y(N105), .A(inst_cellmath__63_0_in1[3]), .B(inst_cellmath__63_0_in1[11]), .S0(N415));
MX2XL inst_cellmath__63_0_I14 (.Y(N106), .A(inst_cellmath__63_0_in1[4]), .B(inst_cellmath__63_0_in1[12]), .S0(N415));
MX2XL inst_cellmath__63_0_I15 (.Y(N107), .A(inst_cellmath__63_0_in1[5]), .B(inst_cellmath__63_0_in1[13]), .S0(N415));
MX2XL inst_cellmath__63_0_I16 (.Y(N108), .A(inst_cellmath__63_0_in1[6]), .B(inst_cellmath__63_0_in1[14]), .S0(N415));
MX2XL inst_cellmath__63_0_I17 (.Y(N109), .A(inst_cellmath__63_0_in1[7]), .B(inst_cellmath__63_0_in1[15]), .S0(N414));
MX2XL inst_cellmath__63_0_I18 (.Y(N110), .A(inst_cellmath__63_0_in1[8]), .B(inst_cellmath__63_0_in1[16]), .S0(N414));
MX2XL inst_cellmath__63_0_I19 (.Y(N111), .A(inst_cellmath__63_0_in1[9]), .B(inst_cellmath__63_0_in1[17]), .S0(N414));
MX2XL inst_cellmath__63_0_I20 (.Y(N112), .A(inst_cellmath__63_0_in1[10]), .B(inst_cellmath__63_0_in1[18]), .S0(N414));
MX2XL inst_cellmath__63_0_I21 (.Y(N113), .A(inst_cellmath__63_0_in1[11]), .B(inst_cellmath__63_0_in1[19]), .S0(N414));
MX2XL inst_cellmath__63_0_I22 (.Y(N114), .A(inst_cellmath__63_0_in1[12]), .B(inst_cellmath__63_0_in1[20]), .S0(N413));
MX2XL inst_cellmath__63_0_I23 (.Y(N115), .A(inst_cellmath__63_0_in1[13]), .B(inst_cellmath__63_0_in1[21]), .S0(N413));
MX2XL inst_cellmath__63_0_I24 (.Y(N116), .A(inst_cellmath__63_0_in1[14]), .B(inst_cellmath__63_0_in1[22]), .S0(N413));
MX2XL inst_cellmath__63_0_I25 (.Y(N117), .A(inst_cellmath__63_0_in1[15]), .B(inst_cellmath__63_0_in1[23]), .S0(N413));
MX2XL inst_cellmath__63_0_I26 (.Y(N118), .A(inst_cellmath__63_0_in1[16]), .B(inst_cellmath__63_0_in1[24]), .S0(N413));
BUFX2 inst_cellmath__63_0_I337 (.Y(N419), .A(inst_cellmath__63_0_in0[4]));
INVX3 inst_cellmath__63_0_I301 (.Y(N424), .A(N419));
INVX2 inst_cellmath__63_0_I300 (.Y(N423), .A(N419));
INVX2 inst_cellmath__63_0_I298 (.Y(N421), .A(N419));
INVX2 inst_cellmath__63_0_I297 (.Y(N420), .A(N419));
NAND2X1 inst_cellmath__63_0_I58 (.Y(N150), .A(N86), .B(N424));
NAND2XL inst_cellmath__63_0_I59 (.Y(N152), .A(N88), .B(N424));
NAND2XL inst_cellmath__63_0_I60 (.Y(N154), .A(N90), .B(N424));
NAND2XL inst_cellmath__63_0_I61 (.Y(N156), .A(N92), .B(N424));
NAND2XL inst_cellmath__63_0_I62 (.Y(N158), .A(N94), .B(N424));
NAND2X1 inst_cellmath__63_0_I63 (.Y(N160), .A(N96), .B(N423));
NAND2X1 inst_cellmath__63_0_I64 (.Y(N162), .A(N98), .B(N423));
NAND2XL inst_cellmath__63_0_I65 (.Y(N164), .A(N100), .B(N423));
NAND2X1 inst_cellmath__63_0_I66 (.Y(N166), .A(N102), .B(N423));
NAND2X1 inst_cellmath__63_0_I67 (.Y(N168), .A(N103), .B(N423));
NAND2X1 inst_cellmath__63_0_I68 (.Y(N170), .A(N104), .B(N424));
NAND2X1 inst_cellmath__63_0_I69 (.Y(N172), .A(N105), .B(N424));
NAND2X1 inst_cellmath__63_0_I70 (.Y(N174), .A(N106), .B(N424));
NAND2X1 inst_cellmath__63_0_I71 (.Y(N176), .A(N107), .B(N424));
NAND2X1 inst_cellmath__63_0_I72 (.Y(N178), .A(N108), .B(N424));
NAND2X1 inst_cellmath__63_0_I73 (.Y(N180), .A(N109), .B(N421));
MXI2X1 inst_cellmath__63_0_I74 (.Y(N182), .A(N86), .B(N110), .S0(N421));
MXI2X1 inst_cellmath__63_0_I75 (.Y(N183), .A(N88), .B(N111), .S0(N421));
MXI2X1 inst_cellmath__63_0_I76 (.Y(N184), .A(N90), .B(N112), .S0(N421));
MXI2X1 inst_cellmath__63_0_I77 (.Y(N185), .A(N92), .B(N113), .S0(N421));
MXI2X1 inst_cellmath__63_0_I78 (.Y(N186), .A(N94), .B(N114), .S0(N420));
MXI2X1 inst_cellmath__63_0_I79 (.Y(N187), .A(N96), .B(N115), .S0(N420));
MXI2X1 inst_cellmath__63_0_I80 (.Y(N188), .A(N98), .B(N116), .S0(N420));
MXI2XL inst_cellmath__63_0_I81 (.Y(N189), .A(N100), .B(N117), .S0(N420));
MXI2XL inst_cellmath__63_0_I82 (.Y(N190), .A(N102), .B(N118), .S0(N420));
BUFX3 inst_cellmath__63_0_I328 (.Y(N432), .A(inst_cellmath__63_0_in0[0]));
NOR2X2 inst_cellmath__63_0_I329 (.Y(N222), .A(N150), .B(N432));
MXI2X1 inst_cellmath__63_0_I115 (.Y(N224), .A(N152), .B(N150), .S0(N432));
MXI2XL inst_cellmath__63_0_I116 (.Y(N225), .A(N154), .B(N152), .S0(N432));
MXI2XL inst_cellmath__63_0_I117 (.Y(N226), .A(N156), .B(N154), .S0(N432));
MXI2XL inst_cellmath__63_0_I118 (.Y(N227), .A(N158), .B(N156), .S0(N432));
MXI2XL inst_cellmath__63_0_I119 (.Y(N228), .A(N160), .B(N158), .S0(N432));
MXI2X1 inst_cellmath__63_0_I120 (.Y(N229), .A(N162), .B(N160), .S0(N432));
MXI2X1 inst_cellmath__63_0_I121 (.Y(N230), .A(N164), .B(N162), .S0(N432));
MXI2X1 inst_cellmath__63_0_I122 (.Y(N231), .A(N166), .B(N164), .S0(N432));
MXI2X1 inst_cellmath__63_0_I123 (.Y(N232), .A(N168), .B(N166), .S0(N432));
MXI2X1 inst_cellmath__63_0_I124 (.Y(N233), .A(N170), .B(N168), .S0(N432));
MXI2X1 inst_cellmath__63_0_I125 (.Y(N234), .A(N172), .B(N170), .S0(N432));
MXI2X1 inst_cellmath__63_0_I126 (.Y(N235), .A(N174), .B(N172), .S0(N432));
MXI2X1 inst_cellmath__63_0_I127 (.Y(N236), .A(N176), .B(N174), .S0(N432));
MXI2X1 inst_cellmath__63_0_I128 (.Y(N237), .A(N178), .B(N176), .S0(N432));
MXI2X1 inst_cellmath__63_0_I129 (.Y(N238), .A(N180), .B(N178), .S0(N432));
MXI2X1 inst_cellmath__63_0_I130 (.Y(N239), .A(N182), .B(N180), .S0(N432));
MXI2X1 inst_cellmath__63_0_I131 (.Y(N240), .A(N183), .B(N182), .S0(N432));
MXI2X1 inst_cellmath__63_0_I132 (.Y(N241), .A(N184), .B(N183), .S0(N432));
MXI2X1 inst_cellmath__63_0_I133 (.Y(N242), .A(N185), .B(N184), .S0(N432));
MXI2X1 inst_cellmath__63_0_I134 (.Y(N243), .A(N186), .B(N185), .S0(N432));
MXI2X1 inst_cellmath__63_0_I135 (.Y(N244), .A(N187), .B(N186), .S0(N432));
MXI2X1 inst_cellmath__63_0_I136 (.Y(N245), .A(N188), .B(N187), .S0(N432));
MXI2XL inst_cellmath__63_0_I137 (.Y(N246), .A(N189), .B(N188), .S0(N432));
MXI2XL inst_cellmath__63_0_I138 (.Y(N247), .A(N190), .B(N189), .S0(N432));
BUFX2 inst_cellmath__63_0_I331 (.Y(N436), .A(inst_cellmath__63_0_in0[1]));
INVX3 inst_cellmath__63_0_I318 (.Y(N441), .A(N436));
NAND2X2 inst_cellmath__63_0_I170 (.Y(N279), .A(N222), .B(N441));
NAND2X2 inst_cellmath__63_0_I333 (.Y(N281), .A(N224), .B(N441));
MXI2XL inst_cellmath__63_0_I172 (.Y(N283), .A(N222), .B(N225), .S0(N441));
MXI2X1 inst_cellmath__63_0_I173 (.Y(N284), .A(N224), .B(N226), .S0(N441));
MXI2XL inst_cellmath__63_0_I174 (.Y(N285), .A(N225), .B(N227), .S0(N441));
MXI2XL inst_cellmath__63_0_I175 (.Y(N286), .A(N226), .B(N228), .S0(N441));
MXI2XL inst_cellmath__63_0_I176 (.Y(N287), .A(N227), .B(N229), .S0(N441));
MXI2X1 inst_cellmath__63_0_I177 (.Y(N288), .A(N228), .B(N230), .S0(N441));
MXI2X1 inst_cellmath__63_0_I178 (.Y(N289), .A(N229), .B(N231), .S0(N441));
MXI2X1 inst_cellmath__63_0_I179 (.Y(N290), .A(N230), .B(N232), .S0(N441));
MXI2X1 inst_cellmath__63_0_I180 (.Y(N291), .A(N231), .B(N233), .S0(N441));
MXI2X1 inst_cellmath__63_0_I181 (.Y(N292), .A(N232), .B(N234), .S0(N441));
MXI2X1 inst_cellmath__63_0_I182 (.Y(N293), .A(N233), .B(N235), .S0(N441));
MXI2X1 inst_cellmath__63_0_I183 (.Y(N294), .A(N234), .B(N236), .S0(N441));
MXI2X1 inst_cellmath__63_0_I184 (.Y(N295), .A(N235), .B(N237), .S0(N441));
MXI2X1 inst_cellmath__63_0_I185 (.Y(N296), .A(N236), .B(N238), .S0(N441));
MXI2X1 inst_cellmath__63_0_I186 (.Y(N297), .A(N237), .B(N239), .S0(N441));
MXI2X1 inst_cellmath__63_0_I187 (.Y(N298), .A(N238), .B(N240), .S0(N441));
MXI2X1 inst_cellmath__63_0_I188 (.Y(N299), .A(N239), .B(N241), .S0(N441));
MXI2X1 inst_cellmath__63_0_I189 (.Y(N300), .A(N240), .B(N242), .S0(N441));
MXI2X1 inst_cellmath__63_0_I190 (.Y(N301), .A(N241), .B(N243), .S0(N441));
MXI2X1 inst_cellmath__63_0_I191 (.Y(N302), .A(N242), .B(N244), .S0(N441));
MXI2XL inst_cellmath__63_0_I192 (.Y(N303), .A(N243), .B(N245), .S0(N441));
MXI2X1 inst_cellmath__63_0_I193 (.Y(N304), .A(N244), .B(N246), .S0(N441));
MXI2X1 inst_cellmath__63_0_I194 (.Y(N305), .A(N245), .B(N247), .S0(N441));
BUFX2 inst_cellmath__63_0_I334 (.Y(N447), .A(inst_cellmath__63_0_in0[2]));
NOR2XL inst_cellmath__63_0_I226 (.Y(inst_cellmath__63_0_out0[0]), .A(N279), .B(N447));
NOR2XL inst_cellmath__63_0_I227 (.Y(inst_cellmath__63_0_out0[1]), .A(N281), .B(N447));
NOR2XL inst_cellmath__63_0_I228 (.Y(inst_cellmath__63_0_out0[2]), .A(N283), .B(N447));
NOR2XL inst_cellmath__63_0_I229 (.Y(inst_cellmath__63_0_out0[3]), .A(N284), .B(N447));
MXI2XL inst_cellmath__63_0_I230 (.Y(inst_cellmath__63_0_out0[4]), .A(N285), .B(N279), .S0(N447));
MXI2XL inst_cellmath__63_0_I231 (.Y(inst_cellmath__63_0_out0[5]), .A(N286), .B(N281), .S0(N447));
MXI2XL inst_cellmath__63_0_I232 (.Y(inst_cellmath__63_0_out0[6]), .A(N287), .B(N283), .S0(N447));
MXI2XL inst_cellmath__63_0_I233 (.Y(inst_cellmath__63_0_out0[7]), .A(N288), .B(N284), .S0(N447));
MXI2XL inst_cellmath__63_0_I234 (.Y(inst_cellmath__63_0_out0[8]), .A(N289), .B(N285), .S0(N447));
MXI2XL inst_cellmath__63_0_I235 (.Y(inst_cellmath__63_0_out0[9]), .A(N290), .B(N286), .S0(N447));
MXI2XL inst_cellmath__63_0_I236 (.Y(inst_cellmath__63_0_out0[10]), .A(N291), .B(N287), .S0(N447));
MXI2XL inst_cellmath__63_0_I237 (.Y(inst_cellmath__63_0_out0[11]), .A(N292), .B(N288), .S0(N447));
MXI2XL inst_cellmath__63_0_I238 (.Y(inst_cellmath__63_0_out0[12]), .A(N293), .B(N289), .S0(N447));
MXI2XL inst_cellmath__63_0_I239 (.Y(inst_cellmath__63_0_out0[13]), .A(N294), .B(N290), .S0(N447));
MXI2XL inst_cellmath__63_0_I240 (.Y(inst_cellmath__63_0_out0[14]), .A(N295), .B(N291), .S0(N447));
MXI2XL inst_cellmath__63_0_I241 (.Y(inst_cellmath__63_0_out0[15]), .A(N296), .B(N292), .S0(N447));
MXI2XL inst_cellmath__63_0_I242 (.Y(inst_cellmath__63_0_out0[16]), .A(N297), .B(N293), .S0(N447));
MXI2XL inst_cellmath__63_0_I243 (.Y(inst_cellmath__63_0_out0[17]), .A(N298), .B(N294), .S0(N447));
MXI2XL inst_cellmath__63_0_I244 (.Y(inst_cellmath__63_0_out0[18]), .A(N299), .B(N295), .S0(N447));
MXI2X1 inst_cellmath__63_0_I245 (.Y(inst_cellmath__63_0_out0[19]), .A(N300), .B(N296), .S0(N447));
MXI2X1 inst_cellmath__63_0_I246 (.Y(inst_cellmath__63_0_out0[20]), .A(N301), .B(N297), .S0(N447));
MXI2XL inst_cellmath__63_0_I247 (.Y(inst_cellmath__63_0_out0[21]), .A(N302), .B(N298), .S0(N447));
MXI2XL inst_cellmath__63_0_I248 (.Y(inst_cellmath__63_0_out0[22]), .A(N303), .B(N299), .S0(N447));
MXI2X1 inst_cellmath__63_0_I249 (.Y(inst_cellmath__63_0_out0[23]), .A(N304), .B(N300), .S0(N447));
MXI2X1 inst_cellmath__63_0_I250 (.Y(inst_cellmath__63_0_out0[24]), .A(N305), .B(N301), .S0(N447));
endmodule

module cynw_cm_float_add2_inst_cellmath__61_0_bdw2915265522_bdw (
	inst_cellmath__61_0_out0,
	inst_cellmath__61_0_in0,
	inst_cellmath__61_0_in1,
	inst_cellmath__61_0_in2
	); /* architecture "gate_level" */ 
output [22:0] inst_cellmath__61_0_out0;
input  inst_cellmath__61_0_in0;
input [24:2] inst_cellmath__61_0_in1;
input  inst_cellmath__61_0_in2;
wire N73,N74,N75,N76,N77,N78,N79 
	,N80,N81,N82,N83,N84,N85,N86,N87 
	,N88,N89,N90,N91,N92,N93,N94,N95 
	,N122,N130,N132;
INVXL inst_cellmath__61_0_I71 (.Y(N122), .A(inst_cellmath__61_0_in2));
INVXL inst_cellmath__61_0_I23 (.Y(N73), .A(inst_cellmath__61_0_in1[2]));
INVXL inst_cellmath__61_0_I24 (.Y(N74), .A(inst_cellmath__61_0_in1[3]));
INVXL inst_cellmath__61_0_I25 (.Y(N75), .A(inst_cellmath__61_0_in1[4]));
INVXL inst_cellmath__61_0_I26 (.Y(N76), .A(inst_cellmath__61_0_in1[5]));
INVXL inst_cellmath__61_0_I27 (.Y(N77), .A(inst_cellmath__61_0_in1[6]));
INVXL inst_cellmath__61_0_I28 (.Y(N78), .A(inst_cellmath__61_0_in1[7]));
INVX1 inst_cellmath__61_0_I29 (.Y(N79), .A(inst_cellmath__61_0_in1[8]));
INVX2 inst_cellmath__61_0_I30 (.Y(N80), .A(inst_cellmath__61_0_in1[9]));
INVX2 inst_cellmath__61_0_I31 (.Y(N81), .A(inst_cellmath__61_0_in1[10]));
INVX2 inst_cellmath__61_0_I32 (.Y(N82), .A(inst_cellmath__61_0_in1[11]));
INVX1 inst_cellmath__61_0_I33 (.Y(N83), .A(inst_cellmath__61_0_in1[12]));
INVX2 inst_cellmath__61_0_I34 (.Y(N84), .A(inst_cellmath__61_0_in1[13]));
INVX2 inst_cellmath__61_0_I35 (.Y(N85), .A(inst_cellmath__61_0_in1[14]));
INVX2 inst_cellmath__61_0_I36 (.Y(N86), .A(inst_cellmath__61_0_in1[15]));
INVX2 inst_cellmath__61_0_I37 (.Y(N87), .A(inst_cellmath__61_0_in1[16]));
INVX3 inst_cellmath__61_0_I38 (.Y(N88), .A(inst_cellmath__61_0_in1[17]));
INVX2 inst_cellmath__61_0_I39 (.Y(N89), .A(inst_cellmath__61_0_in1[18]));
INVX3 inst_cellmath__61_0_I40 (.Y(N90), .A(inst_cellmath__61_0_in1[19]));
INVX2 inst_cellmath__61_0_I41 (.Y(N91), .A(inst_cellmath__61_0_in1[20]));
INVX2 inst_cellmath__61_0_I42 (.Y(N92), .A(inst_cellmath__61_0_in1[21]));
INVX2 inst_cellmath__61_0_I43 (.Y(N93), .A(inst_cellmath__61_0_in1[22]));
INVX2 inst_cellmath__61_0_I44 (.Y(N94), .A(inst_cellmath__61_0_in1[23]));
INVX2 inst_cellmath__61_0_I45 (.Y(N95), .A(inst_cellmath__61_0_in1[24]));
BUFX6 inst_cellmath__61_0_I82 (.Y(N132), .A(inst_cellmath__61_0_in0));
CLKINVX8 inst_cellmath__61_0_I79 (.Y(N130), .A(N132));
AOI22XL inst_cellmath__61_0_I47 (.Y(inst_cellmath__61_0_out0[0]), .A0(N130), .A1(N73), .B0(N122), .B1(N132));
AOI22XL inst_cellmath__61_0_I48 (.Y(inst_cellmath__61_0_out0[1]), .A0(N130), .A1(N74), .B0(N122), .B1(N132));
AOI22XL inst_cellmath__61_0_I49 (.Y(inst_cellmath__61_0_out0[2]), .A0(N130), .A1(N75), .B0(N122), .B1(N132));
AOI22XL inst_cellmath__61_0_I50 (.Y(inst_cellmath__61_0_out0[3]), .A0(N130), .A1(N76), .B0(N122), .B1(N132));
AOI22XL inst_cellmath__61_0_I51 (.Y(inst_cellmath__61_0_out0[4]), .A0(N130), .A1(N77), .B0(N122), .B1(N132));
AOI22XL inst_cellmath__61_0_I52 (.Y(inst_cellmath__61_0_out0[5]), .A0(N130), .A1(N78), .B0(N122), .B1(N132));
AOI22XL inst_cellmath__61_0_I53 (.Y(inst_cellmath__61_0_out0[6]), .A0(N130), .A1(N79), .B0(N122), .B1(N132));
AOI22XL inst_cellmath__61_0_I54 (.Y(inst_cellmath__61_0_out0[7]), .A0(N130), .A1(N80), .B0(N122), .B1(N132));
AOI22XL inst_cellmath__61_0_I55 (.Y(inst_cellmath__61_0_out0[8]), .A0(N130), .A1(N81), .B0(N122), .B1(N132));
AOI22XL inst_cellmath__61_0_I56 (.Y(inst_cellmath__61_0_out0[9]), .A0(N130), .A1(N82), .B0(N122), .B1(N132));
AOI22XL inst_cellmath__61_0_I57 (.Y(inst_cellmath__61_0_out0[10]), .A0(N130), .A1(N83), .B0(N122), .B1(N132));
AOI22XL inst_cellmath__61_0_I58 (.Y(inst_cellmath__61_0_out0[11]), .A0(N130), .A1(N84), .B0(N122), .B1(N132));
AOI22XL inst_cellmath__61_0_I59 (.Y(inst_cellmath__61_0_out0[12]), .A0(N130), .A1(N85), .B0(N122), .B1(N132));
AOI22XL inst_cellmath__61_0_I60 (.Y(inst_cellmath__61_0_out0[13]), .A0(N130), .A1(N86), .B0(N122), .B1(N132));
AOI22XL inst_cellmath__61_0_I61 (.Y(inst_cellmath__61_0_out0[14]), .A0(N130), .A1(N87), .B0(N122), .B1(N132));
AOI22XL inst_cellmath__61_0_I62 (.Y(inst_cellmath__61_0_out0[15]), .A0(N130), .A1(N88), .B0(N122), .B1(N132));
AOI22XL inst_cellmath__61_0_I63 (.Y(inst_cellmath__61_0_out0[16]), .A0(N130), .A1(N89), .B0(N122), .B1(N132));
AOI22XL inst_cellmath__61_0_I64 (.Y(inst_cellmath__61_0_out0[17]), .A0(N130), .A1(N90), .B0(N122), .B1(N132));
AOI22XL inst_cellmath__61_0_I65 (.Y(inst_cellmath__61_0_out0[18]), .A0(N130), .A1(N91), .B0(N122), .B1(N132));
AOI22XL inst_cellmath__61_0_I66 (.Y(inst_cellmath__61_0_out0[19]), .A0(N130), .A1(N92), .B0(N122), .B1(N132));
AOI22XL inst_cellmath__61_0_I67 (.Y(inst_cellmath__61_0_out0[20]), .A0(N130), .A1(N93), .B0(N122), .B1(N132));
AOI22XL inst_cellmath__61_0_I68 (.Y(inst_cellmath__61_0_out0[21]), .A0(N130), .A1(N94), .B0(N122), .B1(N132));
AOI22XL inst_cellmath__61_0_I69 (.Y(inst_cellmath__61_0_out0[22]), .A0(N130), .A1(N95), .B0(N122), .B1(N132));
endmodule

/* CADENCE  urj5SQ3drxA= : u9/ySgnWtBlWxVPRXgAZ4Og= ** DO NOT EDIT THIS LINE **/




