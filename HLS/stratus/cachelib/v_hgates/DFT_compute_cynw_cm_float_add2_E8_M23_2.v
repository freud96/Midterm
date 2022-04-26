/*****************************************************************************
    Verilog Hierarchical Gate Level Netlist
    
    Configured at: 11:22:37 CST (+0800), Sunday 24 April 2022
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

module cynw_cm_float_add2_inst_cellmath__61_0_bdw1137511134_bdw (
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
	,N593,N594,N595,N596,N597;
INVXL cynw_cm_float_add2_I0 (.Y(N500), .A(a_exp[0]));
INVXL cynw_cm_float_add2_I1 (.Y(N501), .A(a_exp[1]));
INVXL cynw_cm_float_add2_I2 (.Y(N502), .A(a_exp[2]));
INVXL cynw_cm_float_add2_I3 (.Y(N503), .A(a_exp[3]));
INVXL cynw_cm_float_add2_I4 (.Y(N504), .A(a_exp[4]));
INVXL cynw_cm_float_add2_I5 (.Y(N505), .A(a_exp[5]));
INVXL cynw_cm_float_add2_I6 (.Y(N506), .A(a_exp[6]));
INVXL cynw_cm_float_add2_I7 (.Y(N507), .A(a_exp[7]));
cynw_cm_float_add2_inst_cellmath__43_1_bdw1137511134_bdw cynw_cm_float_add2_I9 (.inst_cellmath__43_1_out0({inst_cellmath__44[8], inst_cellmath__44[7], inst_cellmath__44[6], inst_cellmath__44[5], inst_cellmath__44[4], inst_cellmath__44[3], inst_cellmath__44[2], inst_cellmath__44[1], inst_cellmath__44[0]}), .inst_cellmath__43_1_out1({N517, N516, N515, N514, N513, N512, N511, N510, N509}), .inst_cellmath__43_1_in0({1'B1, N507, N506, N505, N504, N503, N502, N501, N500}), .inst_cellmath__43_1_in1({b_exp[7], b_exp[6], b_exp[5], b_exp[4], b_exp[3], b_exp[2], b_exp[1], b_exp[0]}));
INVXL cynw_cm_float_add2_I10 (.Y(inst_cellmath__43[8]), .A(N517));
cynw_cm_float_add2_inst_cellmath__48__10__bdw1137511134_bdw cynw_cm_float_add2_I11 (.inst_cellmath__48__10__out0({inst_cellmath__48[23], inst_cellmath__48[22], inst_cellmath__48[21], inst_cellmath__48[20], inst_cellmath__48[19], inst_cellmath__48[18], inst_cellmath__48[17], inst_cellmath__48[16], inst_cellmath__48[15], inst_cellmath__48[14], inst_cellmath__48[13], inst_cellmath__48[12], inst_cellmath__48[11], inst_cellmath__48[10], inst_cellmath__48[9], inst_cellmath__48[8], inst_cellmath__48[7], inst_cellmath__48[6], inst_cellmath__48[5], inst_cellmath__48[4], inst_cellmath__48[3], inst_cellmath__48[2], inst_cellmath__48[1]}), .inst_cellmath__48__10__in0({inst_cellmath__43[8]}), .inst_cellmath__48__10__in1({b_man[22], b_man[21], b_man[20], b_man[19], b_man[18], b_man[17], b_man[16], b_man[15], b_man[14], b_man[13], b_man[12], b_man[11], b_man[10], b_man[9], b_man[8], b_man[7], b_man[6], b_man[5], b_man[4], b_man[3], b_man[2], b_man[1], b_man[0]}), .inst_cellmath__48__10__in2({a_man[22], a_man[21], a_man[20], a_man[19], a_man[18], a_man[17], a_man[16], a_man[15], a_man[14], a_man[13], a_man[12], a_man[11], a_man[10], a_man[9], a_man[8], a_man[7], a_man[6], a_man[5], a_man[4], a_man[3], a_man[2], a_man[1], a_man[0]}));
cynw_cm_float_add2_inst_cellmath__28__5__bdw1137511134_bdw cynw_cm_float_add2_I12 (.inst_cellmath__28__5__out0(inst_cellmath__28), .inst_cellmath__28__5__in0({a_exp[7], a_exp[6], a_exp[5], a_exp[4], a_exp[3], a_exp[2], a_exp[1], a_exp[0]}));
cynw_cm_float_add2_inst_cellmath__31__7__bdw1137511134_bdw cynw_cm_float_add2_I13 (.inst_cellmath__31__7__out0(inst_cellmath__31), .inst_cellmath__31__7__in0({b_exp[7], b_exp[6], b_exp[5], b_exp[4], b_exp[3], b_exp[2], b_exp[1], b_exp[0]}));
cynw_cm_float_add2_inst_cellmath__38__13__bdw1137511134_bdw cynw_cm_float_add2_I14 (.inst_cellmath__38__13__out0({N597, N596, N595, N594, N593, N592, N591, N590, N589, N588, N587, N586, N585, N584, N583, N582, N581, N580, N579, N578, N577, N576, N575}), .inst_cellmath__38__13__in0({inst_cellmath__43[8]}), .inst_cellmath__38__13__in1({b_man[22], b_man[21], b_man[20], b_man[19], b_man[18], b_man[17], b_man[16], b_man[15], b_man[14], b_man[13], b_man[12], b_man[11], b_man[10], b_man[9], b_man[8], b_man[7], b_man[6], b_man[5], b_man[4], b_man[3], b_man[2], b_man[1], b_man[0]}), .inst_cellmath__38__13__in2({a_man[22], a_man[21], a_man[20], a_man[19], a_man[18], a_man[17], a_man[16], a_man[15], a_man[14], a_man[13], a_man[12], a_man[11], a_man[10], a_man[9], a_man[8], a_man[7], a_man[6], a_man[5], a_man[4], a_man[3], a_man[2], a_man[1], a_man[0]}));
cynw_cm_float_add2_inst_cellmath__30_0_bdw1137511134_bdw cynw_cm_float_add2_I15 (.inst_cellmath__30_0_out0(inst_cellmath__30), .inst_cellmath__30_0_in0({b_exp[7], b_exp[6], b_exp[5], b_exp[4], b_exp[3], b_exp[2], b_exp[1], b_exp[0]}));
cynw_cm_float_add2_inst_cellmath__32__8__bdw1137511134_bdw cynw_cm_float_add2_I16 (.inst_cellmath__32__8__out0(inst_cellmath__32), .inst_cellmath__32__8__in0({b_man[22], b_man[21], b_man[20], b_man[19], b_man[18], b_man[17], b_man[16], b_man[15], b_man[14], b_man[13], b_man[12], b_man[11], b_man[10], b_man[9], b_man[8], b_man[7], b_man[6], b_man[5], b_man[4], b_man[3], b_man[2], b_man[1], b_man[0]}));
cynw_cm_float_add2_inst_cellmath__24_0_bdw1137511134_bdw cynw_cm_float_add2_I17 (.inst_cellmath__24_0_out0(inst_cellmath__24), .inst_cellmath__24_0_in0(inst_cellmath__32), .inst_cellmath__24_0_in1(inst_cellmath__30));
cynw_cm_float_add2_inst_cellmath__50_0_bdw1137511134_bdw cynw_cm_float_add2_I18 (.inst_cellmath__50_0_out0(inst_cellmath__50), .inst_cellmath__50_0_in0(b_sign), .inst_cellmath__50_0_in1(a_sign));
cynw_cm_float_add2_inst_cellmath__27_0_bdw1137511134_bdw cynw_cm_float_add2_I19 (.inst_cellmath__27_0_out0(inst_cellmath__27), .inst_cellmath__27_0_in0({a_exp[7], a_exp[6], a_exp[5], a_exp[4], a_exp[3], a_exp[2], a_exp[1], a_exp[0]}));
cynw_cm_float_add2_inst_cellmath__29__6__bdw1137511134_bdw cynw_cm_float_add2_I20 (.inst_cellmath__29__6__out0(inst_cellmath__29), .inst_cellmath__29__6__in0({a_man[22], a_man[21], a_man[20], a_man[19], a_man[18], a_man[17], a_man[16], a_man[15], a_man[14], a_man[13], a_man[12], a_man[11], a_man[10], a_man[9], a_man[8], a_man[7], a_man[6], a_man[5], a_man[4], a_man[3], a_man[2], a_man[1], a_man[0]}));
cynw_cm_float_add2_inst_cellmath__21_0_bdw1137511134_bdw cynw_cm_float_add2_I21 (.inst_cellmath__21_0_out0(inst_cellmath__21), .inst_cellmath__21_0_in0(inst_cellmath__29), .inst_cellmath__21_0_in1(inst_cellmath__27));
cynw_cm_float_add2_inst_cellmath__62__28__bdw1137511134_bdw cynw_cm_float_add2_I22 (.inst_cellmath__62__28__out0({N495}), .inst_cellmath__62__28__in0(inst_cellmath__50), .inst_cellmath__62__28__in1(inst_cellmath__24), .inst_cellmath__62__28__in2(inst_cellmath__21));
cynw_cm_float_add2_inst_cellmath__20_0_bdw1137511134_bdw cynw_cm_float_add2_I23 (.inst_cellmath__20_0_out0(inst_cellmath__20), .inst_cellmath__20_0_in0(inst_cellmath__29), .inst_cellmath__20_0_in1(inst_cellmath__27));
cynw_cm_float_add2_inst_cellmath__23_0_bdw1137511134_bdw cynw_cm_float_add2_I24 (.inst_cellmath__23_0_out0(inst_cellmath__23), .inst_cellmath__23_0_in0(inst_cellmath__32), .inst_cellmath__23_0_in1(inst_cellmath__30));
cynw_cm_float_add2_inst_cellmath__62_0_bdw1137511134_bdw cynw_cm_float_add2_I25 (.inst_cellmath__62_0_out0(inst_cellmath__62), .inst_cellmath__62_0_in0({N495}), .inst_cellmath__62_0_in1(inst_cellmath__23), .inst_cellmath__62_0_in2(inst_cellmath__20));
cynw_cm_float_add2_inst_cellmath__47_0_bdw1137511134_bdw cynw_cm_float_add2_I26 (.inst_cellmath__47_0_out0({inst_cellmath__47[7], inst_cellmath__47[6], inst_cellmath__47[5], inst_cellmath__47[4], inst_cellmath__47[3], inst_cellmath__47[2], inst_cellmath__47[1], inst_cellmath__47[0]}), .inst_cellmath__47_0_in0({inst_cellmath__44[8], inst_cellmath__44[7], inst_cellmath__44[6], inst_cellmath__44[5], inst_cellmath__44[4], inst_cellmath__44[3], inst_cellmath__44[2], inst_cellmath__44[1], inst_cellmath__44[0]}), .inst_cellmath__47_0_in1({N516, N515, N514, N513, N512, N511, N510, N509}));
cynw_cm_float_add2_inst_cellmath__49_0_bdw1137511134_bdw cynw_cm_float_add2_I27 (.inst_cellmath__49_0_out0({inst_cellmath__49[24], inst_cellmath__49[23], inst_cellmath__49[22], inst_cellmath__49[21], inst_cellmath__49[20], inst_cellmath__49[19], inst_cellmath__49[18], inst_cellmath__49[17], inst_cellmath__49[16], inst_cellmath__49[15], inst_cellmath__49[14], inst_cellmath__49[13], inst_cellmath__49[12], inst_cellmath__49[11], inst_cellmath__49[10], inst_cellmath__49[9], inst_cellmath__49[8], inst_cellmath__49[7], inst_cellmath__49[6], inst_cellmath__49[5], inst_cellmath__49[4], inst_cellmath__49[3], inst_cellmath__49[2], inst_cellmath__49[1], inst_cellmath__49[0]}), .inst_cellmath__49_0_in0({inst_cellmath__48[23], inst_cellmath__48[22], inst_cellmath__48[21], inst_cellmath__48[20], inst_cellmath__48[19], inst_cellmath__48[18], inst_cellmath__48[17], inst_cellmath__48[16], inst_cellmath__48[15], inst_cellmath__48[14], inst_cellmath__48[13], inst_cellmath__48[12], inst_cellmath__48[11], inst_cellmath__48[10], inst_cellmath__48[9], inst_cellmath__48[8], inst_cellmath__48[7], inst_cellmath__48[6], inst_cellmath__48[5], inst_cellmath__48[4], inst_cellmath__48[3], inst_cellmath__48[2], inst_cellmath__48[1]}), .inst_cellmath__49_0_in1({inst_cellmath__47[4], inst_cellmath__47[3], inst_cellmath__47[2], inst_cellmath__47[1], inst_cellmath__47[0]}));
cynw_cm_float_add2_inst_cellmath__39_0_0_0_bdw1137511134_bdw cynw_cm_float_add2_I28 (.inst_cellmath__39_0_0_0_out0({N546, N545, N544, N543, N542, N541, N540, N539, N538, N537, N536, N535, N534, N533, N532, N531, N530, N529, N528, N527, N526, N525, N524, N523, N522}), .inst_cellmath__39_0_0_0_in0({inst_cellmath__49[24], inst_cellmath__49[23], inst_cellmath__49[22], inst_cellmath__49[21], inst_cellmath__49[20], inst_cellmath__49[19], inst_cellmath__49[18], inst_cellmath__49[17], inst_cellmath__49[16], inst_cellmath__49[15], inst_cellmath__49[14], inst_cellmath__49[13], inst_cellmath__49[12], inst_cellmath__49[11], inst_cellmath__49[10], inst_cellmath__49[9], inst_cellmath__49[8], inst_cellmath__49[7], inst_cellmath__49[6], inst_cellmath__49[5], inst_cellmath__49[4], inst_cellmath__49[3], inst_cellmath__49[2], inst_cellmath__49[1], inst_cellmath__49[0]}), .inst_cellmath__39_0_0_0_in1({inst_cellmath__47[7], inst_cellmath__47[6], inst_cellmath__47[5]}));
cynw_cm_float_add2_inst_cellmath__39_2mx_bdw1137511134_bdw cynw_cm_float_add2_I29 (.inst_cellmath__39_2mx_out0({inst_cellmath__39[24], inst_cellmath__39[23], inst_cellmath__39[22], inst_cellmath__39[21], inst_cellmath__39[20], inst_cellmath__39[19], inst_cellmath__39[18], inst_cellmath__39[17], inst_cellmath__39[16], inst_cellmath__39[15], inst_cellmath__39[14], inst_cellmath__39[13], inst_cellmath__39[12], inst_cellmath__39[11], inst_cellmath__39[10], inst_cellmath__39[9], inst_cellmath__39[8], inst_cellmath__39[7], inst_cellmath__39[6], inst_cellmath__39[5], inst_cellmath__39[4], inst_cellmath__39[3], inst_cellmath__39[2], inst_cellmath__39[1], inst_cellmath__39[0]}), .inst_cellmath__39_2mx_in0({N546, N545, N544, N543, N542, N541, N540, N539, N538, N537, N536, N535, N534, N533, N532, N531, N530, N529, N528, N527, N526, N525, N524, N523, N522}), .inst_cellmath__39_2mx_in1(inst_cellmath__31), .inst_cellmath__39_2mx_in2(inst_cellmath__28));
cynw_cm_float_add2_inst_cellmath__55_2mx_bdw1137511134_bdw cynw_cm_float_add2_I30 (.inst_cellmath__55_2mx_out0({inst_cellmath__55[24], inst_cellmath__55[23], inst_cellmath__55[22], inst_cellmath__55[21], inst_cellmath__55[20], inst_cellmath__55[19], inst_cellmath__55[18], inst_cellmath__55[17], inst_cellmath__55[16], inst_cellmath__55[15], inst_cellmath__55[14], inst_cellmath__55[13], inst_cellmath__55[12], inst_cellmath__55[11], inst_cellmath__55[10], inst_cellmath__55[9], inst_cellmath__55[8], inst_cellmath__55[7], inst_cellmath__55[6], inst_cellmath__55[5], inst_cellmath__55[4], inst_cellmath__55[3], inst_cellmath__55[2], inst_cellmath__55[1], inst_cellmath__55[0]}), .inst_cellmath__55_2mx_in0(inst_cellmath__50), .inst_cellmath__55_2mx_in1({N597, N596, N595, N594, N593, N592, N591, N590, N589, N588, N587, N586, N585, N584, N583, N582, N581, N580, N579, N578, N577, N576, N575}));
cynw_cm_float_add2_inst_cellmath__57__22__bdw1137511134_bdw cynw_cm_float_add2_I31 (.inst_cellmath__57__22__out0({N469, N468, N467, N466, N465, N464, N463, N462, N461, N460, N459, N458, N457, N456, N455, N454, N453, N452, N451, N450, N449, N448, N447, N446, N445}), .inst_cellmath__57__22__out1({N444, N443, N442, N441, N440, N439, N438, N437, N436, N435, N434, N433, N432, N431, N430, N429, N428, N427, N426, N425, N424, N423, N422, N421, N420, N419}), .inst_cellmath__57__22__in0({inst_cellmath__55[24], inst_cellmath__55[23], inst_cellmath__55[22], inst_cellmath__55[21], inst_cellmath__55[20], inst_cellmath__55[19], inst_cellmath__55[18], inst_cellmath__55[17], inst_cellmath__55[16], inst_cellmath__55[15], inst_cellmath__55[14], inst_cellmath__55[13], inst_cellmath__55[12], inst_cellmath__55[11], inst_cellmath__55[10], inst_cellmath__55[9], inst_cellmath__55[8], inst_cellmath__55[7], inst_cellmath__55[6], inst_cellmath__55[5], inst_cellmath__55[4], inst_cellmath__55[3], inst_cellmath__55[2], inst_cellmath__55[1], inst_cellmath__55[0]}), .inst_cellmath__57__22__in1(inst_cellmath__50), .inst_cellmath__57__22__in2({inst_cellmath__39[24], inst_cellmath__39[23], inst_cellmath__39[22], inst_cellmath__39[21], inst_cellmath__39[20], inst_cellmath__39[19], inst_cellmath__39[18], inst_cellmath__39[17], inst_cellmath__39[16], inst_cellmath__39[15], inst_cellmath__39[14], inst_cellmath__39[13], inst_cellmath__39[12], inst_cellmath__39[11], inst_cellmath__39[10], inst_cellmath__39[9], inst_cellmath__39[8], inst_cellmath__39[7], inst_cellmath__39[6], inst_cellmath__39[5], inst_cellmath__39[4], inst_cellmath__39[3], inst_cellmath__39[2], inst_cellmath__39[1], inst_cellmath__39[0]}));
INVXL cynw_cm_float_add2_I32 (.Y(inst_cellmath__56[25]), .A(N444));
cynw_cm_float_add2_inst_cellmath__41__18__bdw1137511134_bdw cynw_cm_float_add2_I33 (.inst_cellmath__41__18__out0({N418}), .inst_cellmath__41__18__in0(inst_cellmath__28), .inst_cellmath__41__18__in1(a_sign));
cynw_cm_float_add2_inst_cellmath__41__17__bdw1137511134_bdw cynw_cm_float_add2_I34 (.inst_cellmath__41__17__out0({N417}), .inst_cellmath__41__17__in0(inst_cellmath__31), .inst_cellmath__41__17__in1(b_sign));
cynw_cm_float_add2_inst_cellmath__52_0_bdw1137511134_bdw cynw_cm_float_add2_I35 (.inst_cellmath__52_0_out0(inst_cellmath__52), .inst_cellmath__52_0_in0({inst_cellmath__56[25]}), .inst_cellmath__52_0_in1({inst_cellmath__43[8]}), .inst_cellmath__52_0_in2({N418}), .inst_cellmath__52_0_in3({N417}), .inst_cellmath__52_0_in4(b_sign), .inst_cellmath__52_0_in5(a_sign));
cynw_cm_float_add2_inst_cellmath__51__26__bdw1137511134_bdw cynw_cm_float_add2_I36 (.inst_cellmath__51__26__out0({inst_cellmath__51[25]}), .inst_cellmath__51__26__in0({inst_cellmath__56[25]}), .inst_cellmath__51__26__in1(inst_cellmath__50));
cynw_cm_float_add2_inst_cellmath__51__24__bdw1137511134_bdw cynw_cm_float_add2_I37 (.inst_cellmath__51__24__out0({N494, N493, N492, N491, N490, N489, N488, N487, N486, N485, N484, N483, N482, N481, N480, N479, N478, N477, N476, N475, N474, N473, N472, N471, N470}), .inst_cellmath__51__24__in0({N469, N468, N467, N466, N465, N464, N463, N462, N461, N460, N459, N458, N457, N456, N455, N454, N453, N452, N451, N450, N449, N448, N447, N446, N445}), .inst_cellmath__51__24__in1({N443, N442, N441, N440, N439, N438, N437, N436, N435, N434, N433, N432, N431, N430, N429, N428, N427, N426, N425, N424, N423, N422, N421, N420, N419}), .inst_cellmath__51__24__in2({inst_cellmath__56[25]}), .inst_cellmath__51__24__in3(inst_cellmath__50));
INVXL cynw_cm_float_add2_I38 (.Y(inst_cellmath__51[0]), .A(N470));
INVXL cynw_cm_float_add2_I39 (.Y(inst_cellmath__51[1]), .A(N471));
INVXL cynw_cm_float_add2_I40 (.Y(inst_cellmath__51[2]), .A(N472));
INVXL cynw_cm_float_add2_I41 (.Y(inst_cellmath__51[3]), .A(N473));
INVXL cynw_cm_float_add2_I42 (.Y(inst_cellmath__51[4]), .A(N474));
INVXL cynw_cm_float_add2_I43 (.Y(inst_cellmath__51[5]), .A(N475));
INVXL cynw_cm_float_add2_I44 (.Y(inst_cellmath__51[6]), .A(N476));
INVXL cynw_cm_float_add2_I45 (.Y(inst_cellmath__51[7]), .A(N477));
INVXL cynw_cm_float_add2_I46 (.Y(inst_cellmath__51[8]), .A(N478));
INVXL cynw_cm_float_add2_I47 (.Y(inst_cellmath__51[9]), .A(N479));
INVXL cynw_cm_float_add2_I48 (.Y(inst_cellmath__51[10]), .A(N480));
INVXL cynw_cm_float_add2_I49 (.Y(inst_cellmath__51[11]), .A(N481));
INVXL cynw_cm_float_add2_I50 (.Y(inst_cellmath__51[12]), .A(N482));
INVXL cynw_cm_float_add2_I51 (.Y(inst_cellmath__51[13]), .A(N483));
INVXL cynw_cm_float_add2_I52 (.Y(inst_cellmath__51[14]), .A(N484));
INVXL cynw_cm_float_add2_I53 (.Y(inst_cellmath__51[15]), .A(N485));
INVXL cynw_cm_float_add2_I54 (.Y(inst_cellmath__51[16]), .A(N486));
INVXL cynw_cm_float_add2_I55 (.Y(inst_cellmath__51[17]), .A(N487));
INVXL cynw_cm_float_add2_I56 (.Y(inst_cellmath__51[18]), .A(N488));
INVXL cynw_cm_float_add2_I57 (.Y(inst_cellmath__51[19]), .A(N489));
INVXL cynw_cm_float_add2_I58 (.Y(inst_cellmath__51[20]), .A(N490));
INVXL cynw_cm_float_add2_I59 (.Y(inst_cellmath__51[21]), .A(N491));
INVXL cynw_cm_float_add2_I60 (.Y(inst_cellmath__51[22]), .A(N492));
INVXL cynw_cm_float_add2_I61 (.Y(inst_cellmath__51[23]), .A(N493));
INVXL cynw_cm_float_add2_I62 (.Y(inst_cellmath__51[24]), .A(N494));
cynw_cm_float_add2_inst_delta_0_bdw1137511134_bdw cynw_cm_float_add2_I63 (.inst_delta_0_out0({inst_delta[5], inst_delta[4], inst_delta[3], inst_delta[2], inst_delta[1], inst_delta[0]}), .inst_delta_0_in0({inst_cellmath__51[25], inst_cellmath__51[24], inst_cellmath__51[23], inst_cellmath__51[22], inst_cellmath__51[21], inst_cellmath__51[20], inst_cellmath__51[19], inst_cellmath__51[18], inst_cellmath__51[17], inst_cellmath__51[16], inst_cellmath__51[15], inst_cellmath__51[14], inst_cellmath__51[13], inst_cellmath__51[12], inst_cellmath__51[11], inst_cellmath__51[10], inst_cellmath__51[9], inst_cellmath__51[8], inst_cellmath__51[7], inst_cellmath__51[6], inst_cellmath__51[5], inst_cellmath__51[4], inst_cellmath__51[3], inst_cellmath__51[2], inst_cellmath__51[1], inst_cellmath__51[0]}));
cynw_cm_float_add2_inst_cellmath__69__29__bdw1137511134_bdw cynw_cm_float_add2_I64 (.inst_cellmath__69__29__out0({N496}), .inst_cellmath__69__29__in0({inst_delta[5]}), .inst_cellmath__69__29__in1(inst_cellmath__52));
cynw_cm_float_add2_inst_cellmath__69__30__bdw1137511134_bdw cynw_cm_float_add2_I65 (.inst_cellmath__69__30__out0({N497}), .inst_cellmath__69__30__in0(b_sign), .inst_cellmath__69__30__in1(a_sign));
cynw_cm_float_add2_inst_cellmath__69_0_bdw1137511134_bdw cynw_cm_float_add2_I66 (.inst_cellmath__69_0_out0(inst_cellmath__69), .inst_cellmath__69_0_in0({N497}), .inst_cellmath__69_0_in1({N496}));
cynw_cm_float_add2_inst_cellmath__59_0_bdw1137511134_bdw cynw_cm_float_add2_I67 (.inst_cellmath__59_0_out0(x[31]), .inst_cellmath__59_0_in0(inst_cellmath__69), .inst_cellmath__59_0_in1(inst_cellmath__62));
cynw_cm_float_add2_inst_cellmath__40_0_bdw1137511134_bdw cynw_cm_float_add2_I68 (.inst_cellmath__40_0_out0({inst_cellmath__40[7], inst_cellmath__40[6], inst_cellmath__40[5], inst_cellmath__40[4], inst_cellmath__40[3], inst_cellmath__40[2], inst_cellmath__40[1], inst_cellmath__40[0]}), .inst_cellmath__40_0_in0({inst_cellmath__43[8]}), .inst_cellmath__40_0_in1({b_exp[7], b_exp[6], b_exp[5], b_exp[4], b_exp[3], b_exp[2], b_exp[1], b_exp[0]}), .inst_cellmath__40_0_in2({a_exp[7], a_exp[6], a_exp[5], a_exp[4], a_exp[3], a_exp[2], a_exp[1], a_exp[0]}));
cynw_cm_float_add2_inst_cellmath__73_0_bdw1137511134_bdw cynw_cm_float_add2_I69 (.inst_cellmath__73_0_out0(inst_cellmath__73), .inst_cellmath__73_0_in0({inst_delta[4], inst_delta[3], inst_delta[2], inst_delta[1], inst_delta[0]}), .inst_cellmath__73_0_in1({inst_cellmath__40[7], inst_cellmath__40[6], inst_cellmath__40[5], inst_cellmath__40[4], inst_cellmath__40[3], inst_cellmath__40[2], inst_cellmath__40[1], inst_cellmath__40[0]}));
cynw_cm_float_add2_inst_cellmath__75__32__bdw1137511134_bdw cynw_cm_float_add2_I70 (.inst_cellmath__75__32__out0({N499}), .inst_cellmath__75__32__in0({inst_cellmath__51[25]}), .inst_cellmath__75__32__in1({inst_cellmath__40[7], inst_cellmath__40[6], inst_cellmath__40[5], inst_cellmath__40[4], inst_cellmath__40[3], inst_cellmath__40[2], inst_cellmath__40[1]}));
cynw_cm_float_add2_inst_cellmath__77_0_bdw1137511134_bdw cynw_cm_float_add2_I71 (.inst_cellmath__77_0_out0(inst_cellmath__77), .inst_cellmath__77_0_in0({N499}), .inst_cellmath__77_0_in1(inst_cellmath__62), .inst_cellmath__77_0_in2(inst_cellmath__24), .inst_cellmath__77_0_in3(inst_cellmath__21));
cynw_cm_float_add2_inst_cellmath__74__31__bdw1137511134_bdw cynw_cm_float_add2_I72 (.inst_cellmath__74__31__out0({N498}), .inst_cellmath__74__31__in0(inst_cellmath__31), .inst_cellmath__74__31__in1(inst_cellmath__28));
cynw_cm_float_add2_inst_cellmath__72_0_bdw1137511134_bdw cynw_cm_float_add2_I73 (.inst_cellmath__72_0_out0(inst_cellmath__72), .inst_cellmath__72_0_in0({inst_delta[5]}), .inst_cellmath__72_0_in1(inst_cellmath__77), .inst_cellmath__72_0_in2({N498}), .inst_cellmath__72_0_in3(inst_cellmath__73));
cynw_cm_float_add2_inst_cellmath__66_0_bdw1137511134_bdw cynw_cm_float_add2_I74 (.inst_cellmath__66_0_out0({inst_cellmath__66[7], inst_cellmath__66[6], inst_cellmath__66[5], inst_cellmath__66[4], inst_cellmath__66[3], inst_cellmath__66[2], inst_cellmath__66[1], inst_cellmath__66[0]}), .inst_cellmath__66_0_in0({inst_delta[4], inst_delta[3], inst_delta[2], inst_delta[1], inst_delta[0]}), .inst_cellmath__66_0_in1({inst_cellmath__40[7], inst_cellmath__40[6], inst_cellmath__40[5], inst_cellmath__40[4], inst_cellmath__40[3], inst_cellmath__40[2], inst_cellmath__40[1], inst_cellmath__40[0]}));
cynw_cm_float_add2_inst_cellmath__60_0_bdw1137511134_bdw cynw_cm_float_add2_I75 (.inst_cellmath__60_0_out0({x[30], x[29], x[28], x[27], x[26], x[25], x[24], x[23]}), .inst_cellmath__60_0_in0(inst_cellmath__77), .inst_cellmath__60_0_in1(inst_cellmath__72), .inst_cellmath__60_0_in2({inst_cellmath__66[7], inst_cellmath__66[6], inst_cellmath__66[5], inst_cellmath__66[4], inst_cellmath__66[3], inst_cellmath__66[2], inst_cellmath__66[1], inst_cellmath__66[0]}));
cynw_cm_float_add2_inst_cellmath__63_0_bdw1137511134_bdw cynw_cm_float_add2_I76 (.inst_cellmath__63_0_out0({inst_cellmath__63[24], inst_cellmath__63[23], inst_cellmath__63[22], inst_cellmath__63[21], inst_cellmath__63[20], inst_cellmath__63[19], inst_cellmath__63[18], inst_cellmath__63[17], inst_cellmath__63[16], inst_cellmath__63[15], inst_cellmath__63[14], inst_cellmath__63[13], inst_cellmath__63[12], inst_cellmath__63[11], inst_cellmath__63[10], inst_cellmath__63[9], inst_cellmath__63[8], inst_cellmath__63[7], inst_cellmath__63[6], inst_cellmath__63[5], inst_cellmath__63[4], inst_cellmath__63[3], inst_cellmath__63[2], inst_cellmath__63[1], inst_cellmath__63[0]}), .inst_cellmath__63_0_in0({inst_delta[4], inst_delta[3], inst_delta[2], inst_delta[1], inst_delta[0]}), .inst_cellmath__63_0_in1({inst_cellmath__51[25], inst_cellmath__51[24], inst_cellmath__51[23], inst_cellmath__51[22], inst_cellmath__51[21], inst_cellmath__51[20], inst_cellmath__51[19], inst_cellmath__51[18], inst_cellmath__51[17], inst_cellmath__51[16], inst_cellmath__51[15], inst_cellmath__51[14], inst_cellmath__51[13], inst_cellmath__51[12], inst_cellmath__51[11], inst_cellmath__51[10], inst_cellmath__51[9], inst_cellmath__51[8], inst_cellmath__51[7], inst_cellmath__51[6], inst_cellmath__51[5], inst_cellmath__51[4], inst_cellmath__51[3], inst_cellmath__51[2], inst_cellmath__51[1], inst_cellmath__51[0]}));
cynw_cm_float_add2_inst_cellmath__61_0_bdw1137511134_bdw cynw_cm_float_add2_I77 (.inst_cellmath__61_0_out0({x[22], x[21], x[20], x[19], x[18], x[17], x[16], x[15], x[14], x[13], x[12], x[11], x[10], x[9], x[8], x[7], x[6], x[5], x[4], x[3], x[2], x[1], x[0]}), .inst_cellmath__61_0_in0(inst_cellmath__72), .inst_cellmath__61_0_in1({inst_cellmath__63[24], inst_cellmath__63[23], inst_cellmath__63[22], inst_cellmath__63[21], inst_cellmath__63[20], inst_cellmath__63[19], inst_cellmath__63[18], inst_cellmath__63[17], inst_cellmath__63[16], inst_cellmath__63[15], inst_cellmath__63[14], inst_cellmath__63[13], inst_cellmath__63[12], inst_cellmath__63[11], inst_cellmath__63[10], inst_cellmath__63[9], inst_cellmath__63[8], inst_cellmath__63[7], inst_cellmath__63[6], inst_cellmath__63[5], inst_cellmath__63[4], inst_cellmath__63[3], inst_cellmath__63[2]}), .inst_cellmath__61_0_in2(inst_cellmath__62));
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

module cynw_cm_float_add2_inst_cellmath__43_1_bdw1137511134_bdw (
	inst_cellmath__43_1_out0,
	inst_cellmath__43_1_out1,
	inst_cellmath__43_1_in0,
	inst_cellmath__43_1_in1
	); /* architecture "gate_level" */ 
output [8:0] inst_cellmath__43_1_out0,
	inst_cellmath__43_1_out1;
input [8:0] inst_cellmath__43_1_in0;
input [7:0] inst_cellmath__43_1_in1;
wire N38,N42,N44,N46,N48,N50,N52 
	,N54,N60,N64,N66,N68,N70,N72,N74 
	,N76;
ADDHX1 inst_cellmath__43_1_I0 (.CO(N38), .S(inst_cellmath__43_1_out1[0]), .A(inst_cellmath__43_1_in1[0]), .B(inst_cellmath__43_1_in0[0]));
ADDFX1 inst_cellmath__43_1_I1 (.CO(N42), .S(inst_cellmath__43_1_out1[1]), .A(inst_cellmath__43_1_in0[1]), .B(inst_cellmath__43_1_in1[1]), .CI(N38));
ADDFX1 inst_cellmath__43_1_I2 (.CO(N44), .S(inst_cellmath__43_1_out1[2]), .A(inst_cellmath__43_1_in0[2]), .B(inst_cellmath__43_1_in1[2]), .CI(N42));
ADDFX1 inst_cellmath__43_1_I3 (.CO(N46), .S(inst_cellmath__43_1_out1[3]), .A(inst_cellmath__43_1_in0[3]), .B(inst_cellmath__43_1_in1[3]), .CI(N44));
ADDFX1 inst_cellmath__43_1_I4 (.CO(N48), .S(inst_cellmath__43_1_out1[4]), .A(inst_cellmath__43_1_in0[4]), .B(inst_cellmath__43_1_in1[4]), .CI(N46));
ADDFX1 inst_cellmath__43_1_I5 (.CO(N50), .S(inst_cellmath__43_1_out1[5]), .A(inst_cellmath__43_1_in0[5]), .B(inst_cellmath__43_1_in1[5]), .CI(N48));
ADDFX1 inst_cellmath__43_1_I6 (.CO(N52), .S(inst_cellmath__43_1_out1[6]), .A(inst_cellmath__43_1_in0[6]), .B(inst_cellmath__43_1_in1[6]), .CI(N50));
ADDFX1 inst_cellmath__43_1_I7 (.CO(N54), .S(inst_cellmath__43_1_out1[7]), .A(inst_cellmath__43_1_in0[7]), .B(inst_cellmath__43_1_in1[7]), .CI(N52));
XOR2XL inst_cellmath__43_1_I8 (.Y(inst_cellmath__43_1_out1[8]), .A(inst_cellmath__43_1_in0[8]), .B(N54));
XNOR2X1 hap1_A_I25 (.Y(inst_cellmath__43_1_out0[0]), .A(inst_cellmath__43_1_in0[0]), .B(inst_cellmath__43_1_in1[0]));
OR2XL hap1_A_I26 (.Y(N60), .A(inst_cellmath__43_1_in0[0]), .B(inst_cellmath__43_1_in1[0]));
ADDFX1 inst_cellmath__43_1_I10 (.CO(N64), .S(inst_cellmath__43_1_out0[1]), .A(inst_cellmath__43_1_in0[1]), .B(inst_cellmath__43_1_in1[1]), .CI(N60));
ADDFX1 inst_cellmath__43_1_I11 (.CO(N66), .S(inst_cellmath__43_1_out0[2]), .A(inst_cellmath__43_1_in0[2]), .B(inst_cellmath__43_1_in1[2]), .CI(N64));
ADDFX1 inst_cellmath__43_1_I12 (.CO(N68), .S(inst_cellmath__43_1_out0[3]), .A(inst_cellmath__43_1_in0[3]), .B(inst_cellmath__43_1_in1[3]), .CI(N66));
ADDFX1 inst_cellmath__43_1_I13 (.CO(N70), .S(inst_cellmath__43_1_out0[4]), .A(inst_cellmath__43_1_in0[4]), .B(inst_cellmath__43_1_in1[4]), .CI(N68));
ADDFX1 inst_cellmath__43_1_I14 (.CO(N72), .S(inst_cellmath__43_1_out0[5]), .A(inst_cellmath__43_1_in0[5]), .B(inst_cellmath__43_1_in1[5]), .CI(N70));
ADDFX1 inst_cellmath__43_1_I15 (.CO(N74), .S(inst_cellmath__43_1_out0[6]), .A(inst_cellmath__43_1_in0[6]), .B(inst_cellmath__43_1_in1[6]), .CI(N72));
ADDFX1 inst_cellmath__43_1_I16 (.CO(N76), .S(inst_cellmath__43_1_out0[7]), .A(inst_cellmath__43_1_in0[7]), .B(inst_cellmath__43_1_in1[7]), .CI(N74));
XOR2XL inst_cellmath__43_1_I17 (.Y(inst_cellmath__43_1_out0[8]), .A(inst_cellmath__43_1_in0[8]), .B(N76));
endmodule

module cynw_cm_float_add2_inst_cellmath__48__10__bdw1137511134_bdw (
	inst_cellmath__48__10__out0,
	inst_cellmath__48__10__in0,
	inst_cellmath__48__10__in1,
	inst_cellmath__48__10__in2
	); /* architecture "gate_level" */ 
output [22:0] inst_cellmath__48__10__out0;
input [8:8] inst_cellmath__48__10__in0;
input [22:0] inst_cellmath__48__10__in1,
	inst_cellmath__48__10__in2;
wire N263,N266;
INVXL buf1_A_I77 (.Y(N266), .A(inst_cellmath__48__10__in0[8]));
INVXL buf1_A_I78 (.Y(N263), .A(N266));
MX2XL inst_cellmath__48__10__I46 (.Y(inst_cellmath__48__10__out0[0]), .A(inst_cellmath__48__10__in1[0]), .B(inst_cellmath__48__10__in2[0]), .S0(N263));
MX2XL inst_cellmath__48__10__I47 (.Y(inst_cellmath__48__10__out0[1]), .A(inst_cellmath__48__10__in1[1]), .B(inst_cellmath__48__10__in2[1]), .S0(N263));
MX2XL inst_cellmath__48__10__I48 (.Y(inst_cellmath__48__10__out0[2]), .A(inst_cellmath__48__10__in1[2]), .B(inst_cellmath__48__10__in2[2]), .S0(N263));
MX2XL inst_cellmath__48__10__I49 (.Y(inst_cellmath__48__10__out0[3]), .A(inst_cellmath__48__10__in1[3]), .B(inst_cellmath__48__10__in2[3]), .S0(N263));
MX2XL inst_cellmath__48__10__I50 (.Y(inst_cellmath__48__10__out0[4]), .A(inst_cellmath__48__10__in1[4]), .B(inst_cellmath__48__10__in2[4]), .S0(N263));
MX2XL inst_cellmath__48__10__I51 (.Y(inst_cellmath__48__10__out0[5]), .A(inst_cellmath__48__10__in1[5]), .B(inst_cellmath__48__10__in2[5]), .S0(N263));
MX2XL inst_cellmath__48__10__I52 (.Y(inst_cellmath__48__10__out0[6]), .A(inst_cellmath__48__10__in1[6]), .B(inst_cellmath__48__10__in2[6]), .S0(N263));
MX2XL inst_cellmath__48__10__I53 (.Y(inst_cellmath__48__10__out0[7]), .A(inst_cellmath__48__10__in1[7]), .B(inst_cellmath__48__10__in2[7]), .S0(N263));
MX2XL inst_cellmath__48__10__I54 (.Y(inst_cellmath__48__10__out0[8]), .A(inst_cellmath__48__10__in1[8]), .B(inst_cellmath__48__10__in2[8]), .S0(N263));
MX2XL inst_cellmath__48__10__I55 (.Y(inst_cellmath__48__10__out0[9]), .A(inst_cellmath__48__10__in1[9]), .B(inst_cellmath__48__10__in2[9]), .S0(N263));
MX2XL inst_cellmath__48__10__I56 (.Y(inst_cellmath__48__10__out0[10]), .A(inst_cellmath__48__10__in1[10]), .B(inst_cellmath__48__10__in2[10]), .S0(N263));
MX2XL inst_cellmath__48__10__I57 (.Y(inst_cellmath__48__10__out0[11]), .A(inst_cellmath__48__10__in1[11]), .B(inst_cellmath__48__10__in2[11]), .S0(N263));
MX2XL inst_cellmath__48__10__I58 (.Y(inst_cellmath__48__10__out0[12]), .A(inst_cellmath__48__10__in1[12]), .B(inst_cellmath__48__10__in2[12]), .S0(N263));
MX2XL inst_cellmath__48__10__I59 (.Y(inst_cellmath__48__10__out0[13]), .A(inst_cellmath__48__10__in1[13]), .B(inst_cellmath__48__10__in2[13]), .S0(N263));
MX2XL inst_cellmath__48__10__I60 (.Y(inst_cellmath__48__10__out0[14]), .A(inst_cellmath__48__10__in1[14]), .B(inst_cellmath__48__10__in2[14]), .S0(N263));
MX2XL inst_cellmath__48__10__I61 (.Y(inst_cellmath__48__10__out0[15]), .A(inst_cellmath__48__10__in1[15]), .B(inst_cellmath__48__10__in2[15]), .S0(N263));
MX2XL inst_cellmath__48__10__I62 (.Y(inst_cellmath__48__10__out0[16]), .A(inst_cellmath__48__10__in1[16]), .B(inst_cellmath__48__10__in2[16]), .S0(N263));
MX2XL inst_cellmath__48__10__I63 (.Y(inst_cellmath__48__10__out0[17]), .A(inst_cellmath__48__10__in1[17]), .B(inst_cellmath__48__10__in2[17]), .S0(N263));
MX2XL inst_cellmath__48__10__I64 (.Y(inst_cellmath__48__10__out0[18]), .A(inst_cellmath__48__10__in1[18]), .B(inst_cellmath__48__10__in2[18]), .S0(N263));
MX2XL inst_cellmath__48__10__I65 (.Y(inst_cellmath__48__10__out0[19]), .A(inst_cellmath__48__10__in1[19]), .B(inst_cellmath__48__10__in2[19]), .S0(N263));
MX2XL inst_cellmath__48__10__I66 (.Y(inst_cellmath__48__10__out0[20]), .A(inst_cellmath__48__10__in1[20]), .B(inst_cellmath__48__10__in2[20]), .S0(N263));
MX2XL inst_cellmath__48__10__I67 (.Y(inst_cellmath__48__10__out0[21]), .A(inst_cellmath__48__10__in1[21]), .B(inst_cellmath__48__10__in2[21]), .S0(N263));
MX2XL inst_cellmath__48__10__I68 (.Y(inst_cellmath__48__10__out0[22]), .A(inst_cellmath__48__10__in1[22]), .B(inst_cellmath__48__10__in2[22]), .S0(N263));
endmodule

module cynw_cm_float_add2_inst_cellmath__28__5__bdw1137511134_bdw (
	inst_cellmath__28__5__out0,
	inst_cellmath__28__5__in0
	); /* architecture "gate_level" */ 
output  inst_cellmath__28__5__out0;
input [7:0] inst_cellmath__28__5__in0;
wire N11,N12,N13,N14,N15,N16;
NOR2XL inst_cellmath__28__5__I0 (.Y(N11), .A(inst_cellmath__28__5__in0[0]), .B(inst_cellmath__28__5__in0[1]));
NOR2XL inst_cellmath__28__5__I1 (.Y(N12), .A(inst_cellmath__28__5__in0[7]), .B(inst_cellmath__28__5__in0[6]));
NOR2XL inst_cellmath__28__5__I2 (.Y(N13), .A(inst_cellmath__28__5__in0[5]), .B(inst_cellmath__28__5__in0[4]));
NOR2XL inst_cellmath__28__5__I3 (.Y(N14), .A(inst_cellmath__28__5__in0[3]), .B(inst_cellmath__28__5__in0[2]));
NAND2XL inst_cellmath__28__5__I4 (.Y(N15), .A(N11), .B(N12));
NAND2XL inst_cellmath__28__5__I5 (.Y(N16), .A(N13), .B(N14));
NOR2XL inst_cellmath__28__5__I6 (.Y(inst_cellmath__28__5__out0), .A(N15), .B(N16));
endmodule

module cynw_cm_float_add2_inst_cellmath__31__7__bdw1137511134_bdw (
	inst_cellmath__31__7__out0,
	inst_cellmath__31__7__in0
	); /* architecture "gate_level" */ 
output  inst_cellmath__31__7__out0;
input [7:0] inst_cellmath__31__7__in0;
wire N11,N12,N13,N14,N15,N16;
NOR2XL inst_cellmath__31__7__I0 (.Y(N11), .A(inst_cellmath__31__7__in0[0]), .B(inst_cellmath__31__7__in0[1]));
NOR2XL inst_cellmath__31__7__I1 (.Y(N12), .A(inst_cellmath__31__7__in0[7]), .B(inst_cellmath__31__7__in0[6]));
NOR2XL inst_cellmath__31__7__I2 (.Y(N13), .A(inst_cellmath__31__7__in0[5]), .B(inst_cellmath__31__7__in0[4]));
NOR2XL inst_cellmath__31__7__I3 (.Y(N14), .A(inst_cellmath__31__7__in0[3]), .B(inst_cellmath__31__7__in0[2]));
NAND2XL inst_cellmath__31__7__I4 (.Y(N15), .A(N11), .B(N12));
NAND2XL inst_cellmath__31__7__I5 (.Y(N16), .A(N13), .B(N14));
NOR2XL inst_cellmath__31__7__I6 (.Y(inst_cellmath__31__7__out0), .A(N15), .B(N16));
endmodule

module cynw_cm_float_add2_inst_cellmath__38__13__bdw1137511134_bdw (
	inst_cellmath__38__13__out0,
	inst_cellmath__38__13__in0,
	inst_cellmath__38__13__in1,
	inst_cellmath__38__13__in2
	); /* architecture "gate_level" */ 
output [22:0] inst_cellmath__38__13__out0;
input [8:8] inst_cellmath__38__13__in0;
input [22:0] inst_cellmath__38__13__in1,
	inst_cellmath__38__13__in2;
wire N263,N266;
INVXL buf1_A_I77 (.Y(N266), .A(inst_cellmath__38__13__in0[8]));
INVXL buf1_A_I78 (.Y(N263), .A(N266));
MX2XL inst_cellmath__38__13__I46 (.Y(inst_cellmath__38__13__out0[0]), .A(inst_cellmath__38__13__in2[0]), .B(inst_cellmath__38__13__in1[0]), .S0(N263));
MX2XL inst_cellmath__38__13__I47 (.Y(inst_cellmath__38__13__out0[1]), .A(inst_cellmath__38__13__in2[1]), .B(inst_cellmath__38__13__in1[1]), .S0(N263));
MX2XL inst_cellmath__38__13__I48 (.Y(inst_cellmath__38__13__out0[2]), .A(inst_cellmath__38__13__in2[2]), .B(inst_cellmath__38__13__in1[2]), .S0(N263));
MX2XL inst_cellmath__38__13__I49 (.Y(inst_cellmath__38__13__out0[3]), .A(inst_cellmath__38__13__in2[3]), .B(inst_cellmath__38__13__in1[3]), .S0(N263));
MX2XL inst_cellmath__38__13__I50 (.Y(inst_cellmath__38__13__out0[4]), .A(inst_cellmath__38__13__in2[4]), .B(inst_cellmath__38__13__in1[4]), .S0(N263));
MX2XL inst_cellmath__38__13__I51 (.Y(inst_cellmath__38__13__out0[5]), .A(inst_cellmath__38__13__in2[5]), .B(inst_cellmath__38__13__in1[5]), .S0(N263));
MX2XL inst_cellmath__38__13__I52 (.Y(inst_cellmath__38__13__out0[6]), .A(inst_cellmath__38__13__in2[6]), .B(inst_cellmath__38__13__in1[6]), .S0(N263));
MX2XL inst_cellmath__38__13__I53 (.Y(inst_cellmath__38__13__out0[7]), .A(inst_cellmath__38__13__in2[7]), .B(inst_cellmath__38__13__in1[7]), .S0(N263));
MX2XL inst_cellmath__38__13__I54 (.Y(inst_cellmath__38__13__out0[8]), .A(inst_cellmath__38__13__in2[8]), .B(inst_cellmath__38__13__in1[8]), .S0(N263));
MX2XL inst_cellmath__38__13__I55 (.Y(inst_cellmath__38__13__out0[9]), .A(inst_cellmath__38__13__in2[9]), .B(inst_cellmath__38__13__in1[9]), .S0(N263));
MX2XL inst_cellmath__38__13__I56 (.Y(inst_cellmath__38__13__out0[10]), .A(inst_cellmath__38__13__in2[10]), .B(inst_cellmath__38__13__in1[10]), .S0(N263));
MX2XL inst_cellmath__38__13__I57 (.Y(inst_cellmath__38__13__out0[11]), .A(inst_cellmath__38__13__in2[11]), .B(inst_cellmath__38__13__in1[11]), .S0(N263));
MX2XL inst_cellmath__38__13__I58 (.Y(inst_cellmath__38__13__out0[12]), .A(inst_cellmath__38__13__in2[12]), .B(inst_cellmath__38__13__in1[12]), .S0(N263));
MX2XL inst_cellmath__38__13__I59 (.Y(inst_cellmath__38__13__out0[13]), .A(inst_cellmath__38__13__in2[13]), .B(inst_cellmath__38__13__in1[13]), .S0(N263));
MX2XL inst_cellmath__38__13__I60 (.Y(inst_cellmath__38__13__out0[14]), .A(inst_cellmath__38__13__in2[14]), .B(inst_cellmath__38__13__in1[14]), .S0(N263));
MX2XL inst_cellmath__38__13__I61 (.Y(inst_cellmath__38__13__out0[15]), .A(inst_cellmath__38__13__in2[15]), .B(inst_cellmath__38__13__in1[15]), .S0(N263));
MX2XL inst_cellmath__38__13__I62 (.Y(inst_cellmath__38__13__out0[16]), .A(inst_cellmath__38__13__in2[16]), .B(inst_cellmath__38__13__in1[16]), .S0(N263));
MX2XL inst_cellmath__38__13__I63 (.Y(inst_cellmath__38__13__out0[17]), .A(inst_cellmath__38__13__in2[17]), .B(inst_cellmath__38__13__in1[17]), .S0(N263));
MX2XL inst_cellmath__38__13__I64 (.Y(inst_cellmath__38__13__out0[18]), .A(inst_cellmath__38__13__in2[18]), .B(inst_cellmath__38__13__in1[18]), .S0(N263));
MX2XL inst_cellmath__38__13__I65 (.Y(inst_cellmath__38__13__out0[19]), .A(inst_cellmath__38__13__in2[19]), .B(inst_cellmath__38__13__in1[19]), .S0(N263));
MX2XL inst_cellmath__38__13__I66 (.Y(inst_cellmath__38__13__out0[20]), .A(inst_cellmath__38__13__in2[20]), .B(inst_cellmath__38__13__in1[20]), .S0(N263));
MX2XL inst_cellmath__38__13__I67 (.Y(inst_cellmath__38__13__out0[21]), .A(inst_cellmath__38__13__in2[21]), .B(inst_cellmath__38__13__in1[21]), .S0(N263));
MX2XL inst_cellmath__38__13__I68 (.Y(inst_cellmath__38__13__out0[22]), .A(inst_cellmath__38__13__in2[22]), .B(inst_cellmath__38__13__in1[22]), .S0(N263));
endmodule

module cynw_cm_float_add2_inst_cellmath__30_0_bdw1137511134_bdw (
	inst_cellmath__30_0_out0,
	inst_cellmath__30_0_in0
	); /* architecture "gate_level" */ 
output  inst_cellmath__30_0_out0;
input [7:0] inst_cellmath__30_0_in0;
wire N11,N12,N13,N14,N15,N16;
NAND2XL inst_cellmath__30_0_I0 (.Y(N11), .A(inst_cellmath__30_0_in0[0]), .B(inst_cellmath__30_0_in0[1]));
NAND2XL inst_cellmath__30_0_I1 (.Y(N12), .A(inst_cellmath__30_0_in0[7]), .B(inst_cellmath__30_0_in0[6]));
NAND2XL inst_cellmath__30_0_I2 (.Y(N13), .A(inst_cellmath__30_0_in0[5]), .B(inst_cellmath__30_0_in0[4]));
NAND2XL inst_cellmath__30_0_I3 (.Y(N14), .A(inst_cellmath__30_0_in0[3]), .B(inst_cellmath__30_0_in0[2]));
NOR2XL inst_cellmath__30_0_I4 (.Y(N15), .A(N11), .B(N12));
NOR2XL inst_cellmath__30_0_I5 (.Y(N16), .A(N13), .B(N14));
AND2XL inst_cellmath__30_0_I6 (.Y(inst_cellmath__30_0_out0), .A(N15), .B(N16));
endmodule

module cynw_cm_float_add2_inst_cellmath__32__8__bdw1137511134_bdw (
	inst_cellmath__32__8__out0,
	inst_cellmath__32__8__in0
	); /* architecture "gate_level" */ 
output  inst_cellmath__32__8__out0;
input [22:0] inst_cellmath__32__8__in0;
wire N27,N28,N29,N30,N31,N32,N33 
	,N34,N35,N36,N39,N40,N41,N44,N45 
	,N47,N48;
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
NAND2XL inst_cellmath__32__8__I13 (.Y(N39), .A(N27), .B(N28));
NAND2XL inst_cellmath__32__8__I14 (.Y(N40), .A(N29), .B(N30));
NAND2XL inst_cellmath__32__8__I15 (.Y(N41), .A(N31), .B(N32));
NOR4X1 inst_cellmath__32__8__I25 (.Y(N44), .A(inst_cellmath__32__8__in0[0]), .B(inst_cellmath__32__8__in0[1]), .C(inst_cellmath__32__8__in0[2]), .D(N39));
NOR2XL inst_cellmath__32__8__I19 (.Y(N45), .A(N40), .B(N41));
NAND4XL inst_cellmath__32__8__I27 (.Y(N48), .A(N33), .B(N35), .C(N34), .D(N36));
NAND2XL inst_cellmath__32__8__I21 (.Y(N47), .A(N44), .B(N45));
NOR2XL inst_cellmath__32__8__I23 (.Y(inst_cellmath__32__8__out0), .A(N48), .B(N47));
endmodule

module cynw_cm_float_add2_inst_cellmath__24_0_bdw1137511134_bdw (
	inst_cellmath__24_0_out0,
	inst_cellmath__24_0_in0,
	inst_cellmath__24_0_in1
	); /* architecture "gate_level" */ 
output  inst_cellmath__24_0_out0;
input  inst_cellmath__24_0_in0,
	inst_cellmath__24_0_in1;
AND2XL inst_cellmath__24_0_I0 (.Y(inst_cellmath__24_0_out0), .A(inst_cellmath__24_0_in1), .B(inst_cellmath__24_0_in0));
endmodule

module cynw_cm_float_add2_inst_cellmath__50_0_bdw1137511134_bdw (
	inst_cellmath__50_0_out0,
	inst_cellmath__50_0_in0,
	inst_cellmath__50_0_in1
	); /* architecture "gate_level" */ 
output  inst_cellmath__50_0_out0;
input  inst_cellmath__50_0_in0,
	inst_cellmath__50_0_in1;
CLKXOR2X1 inst_cellmath__50_0_I0 (.Y(inst_cellmath__50_0_out0), .A(inst_cellmath__50_0_in1), .B(inst_cellmath__50_0_in0));
endmodule

module cynw_cm_float_add2_inst_cellmath__27_0_bdw1137511134_bdw (
	inst_cellmath__27_0_out0,
	inst_cellmath__27_0_in0
	); /* architecture "gate_level" */ 
output  inst_cellmath__27_0_out0;
input [7:0] inst_cellmath__27_0_in0;
wire N11,N12,N13,N14,N15,N16;
NAND2XL inst_cellmath__27_0_I0 (.Y(N11), .A(inst_cellmath__27_0_in0[0]), .B(inst_cellmath__27_0_in0[1]));
NAND2XL inst_cellmath__27_0_I1 (.Y(N12), .A(inst_cellmath__27_0_in0[7]), .B(inst_cellmath__27_0_in0[6]));
NAND2XL inst_cellmath__27_0_I2 (.Y(N13), .A(inst_cellmath__27_0_in0[5]), .B(inst_cellmath__27_0_in0[4]));
NAND2XL inst_cellmath__27_0_I3 (.Y(N14), .A(inst_cellmath__27_0_in0[3]), .B(inst_cellmath__27_0_in0[2]));
NOR2XL inst_cellmath__27_0_I4 (.Y(N15), .A(N11), .B(N12));
NOR2XL inst_cellmath__27_0_I5 (.Y(N16), .A(N13), .B(N14));
AND2XL inst_cellmath__27_0_I6 (.Y(inst_cellmath__27_0_out0), .A(N15), .B(N16));
endmodule

module cynw_cm_float_add2_inst_cellmath__29__6__bdw1137511134_bdw (
	inst_cellmath__29__6__out0,
	inst_cellmath__29__6__in0
	); /* architecture "gate_level" */ 
output  inst_cellmath__29__6__out0;
input [22:0] inst_cellmath__29__6__in0;
wire N27,N28,N29,N30,N31,N32,N33 
	,N34,N35,N36,N39,N40,N41,N44,N45 
	,N47,N48;
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
NAND2XL inst_cellmath__29__6__I13 (.Y(N39), .A(N27), .B(N28));
NAND2XL inst_cellmath__29__6__I14 (.Y(N40), .A(N29), .B(N30));
NAND2XL inst_cellmath__29__6__I15 (.Y(N41), .A(N31), .B(N32));
NOR4X1 inst_cellmath__29__6__I25 (.Y(N44), .A(inst_cellmath__29__6__in0[0]), .B(inst_cellmath__29__6__in0[1]), .C(inst_cellmath__29__6__in0[2]), .D(N39));
NOR2XL inst_cellmath__29__6__I19 (.Y(N45), .A(N40), .B(N41));
NAND4XL inst_cellmath__29__6__I27 (.Y(N48), .A(N33), .B(N35), .C(N34), .D(N36));
NAND2XL inst_cellmath__29__6__I21 (.Y(N47), .A(N44), .B(N45));
NOR2XL inst_cellmath__29__6__I23 (.Y(inst_cellmath__29__6__out0), .A(N48), .B(N47));
endmodule

module cynw_cm_float_add2_inst_cellmath__21_0_bdw1137511134_bdw (
	inst_cellmath__21_0_out0,
	inst_cellmath__21_0_in0,
	inst_cellmath__21_0_in1
	); /* architecture "gate_level" */ 
output  inst_cellmath__21_0_out0;
input  inst_cellmath__21_0_in0,
	inst_cellmath__21_0_in1;
AND2XL inst_cellmath__21_0_I0 (.Y(inst_cellmath__21_0_out0), .A(inst_cellmath__21_0_in1), .B(inst_cellmath__21_0_in0));
endmodule

module cynw_cm_float_add2_inst_cellmath__62__28__bdw1137511134_bdw (
	inst_cellmath__62__28__out0,
	inst_cellmath__62__28__in0,
	inst_cellmath__62__28__in1,
	inst_cellmath__62__28__in2
	); /* architecture "gate_level" */ 
output [0:0] inst_cellmath__62__28__out0;
input  inst_cellmath__62__28__in0,
	inst_cellmath__62__28__in1,
	inst_cellmath__62__28__in2;
AND3XL inst_cellmath__62__28__I4 (.Y(inst_cellmath__62__28__out0[0]), .A(inst_cellmath__62__28__in1), .B(inst_cellmath__62__28__in2), .C(inst_cellmath__62__28__in0));
endmodule

module cynw_cm_float_add2_inst_cellmath__20_0_bdw1137511134_bdw (
	inst_cellmath__20_0_out0,
	inst_cellmath__20_0_in0,
	inst_cellmath__20_0_in1
	); /* architecture "gate_level" */ 
output  inst_cellmath__20_0_out0;
input  inst_cellmath__20_0_in0,
	inst_cellmath__20_0_in1;
NOR2BX1 inst_cellmath__20_0_I2 (.Y(inst_cellmath__20_0_out0), .AN(inst_cellmath__20_0_in1), .B(inst_cellmath__20_0_in0));
endmodule

module cynw_cm_float_add2_inst_cellmath__23_0_bdw1137511134_bdw (
	inst_cellmath__23_0_out0,
	inst_cellmath__23_0_in0,
	inst_cellmath__23_0_in1
	); /* architecture "gate_level" */ 
output  inst_cellmath__23_0_out0;
input  inst_cellmath__23_0_in0,
	inst_cellmath__23_0_in1;
NOR2BX1 inst_cellmath__23_0_I2 (.Y(inst_cellmath__23_0_out0), .AN(inst_cellmath__23_0_in1), .B(inst_cellmath__23_0_in0));
endmodule

module cynw_cm_float_add2_inst_cellmath__62_0_bdw1137511134_bdw (
	inst_cellmath__62_0_out0,
	inst_cellmath__62_0_in0,
	inst_cellmath__62_0_in1,
	inst_cellmath__62_0_in2
	); /* architecture "gate_level" */ 
output  inst_cellmath__62_0_out0;
input [0:0] inst_cellmath__62_0_in0;
input  inst_cellmath__62_0_in1,
	inst_cellmath__62_0_in2;
OR3XL inst_cellmath__62_0_I4 (.Y(inst_cellmath__62_0_out0), .A(inst_cellmath__62_0_in1), .B(inst_cellmath__62_0_in2), .C(inst_cellmath__62_0_in0[0]));
endmodule

module cynw_cm_float_add2_inst_cellmath__47_0_bdw1137511134_bdw (
	inst_cellmath__47_0_out0,
	inst_cellmath__47_0_in0,
	inst_cellmath__47_0_in1
	); /* architecture "gate_level" */ 
output [7:0] inst_cellmath__47_0_out0;
input [8:0] inst_cellmath__47_0_in0;
input [7:0] inst_cellmath__47_0_in1;
wire N43,N44,N45,N46,N47,N48,N49 
	,N50,N68,N69,N71,N73;
INVXL inst_cellmath__47_0_I16 (.Y(N43), .A(inst_cellmath__47_0_in0[0]));
INVXL inst_cellmath__47_0_I17 (.Y(N44), .A(inst_cellmath__47_0_in0[1]));
INVXL inst_cellmath__47_0_I18 (.Y(N45), .A(inst_cellmath__47_0_in0[2]));
INVXL inst_cellmath__47_0_I19 (.Y(N46), .A(inst_cellmath__47_0_in0[3]));
INVXL inst_cellmath__47_0_I20 (.Y(N47), .A(inst_cellmath__47_0_in0[4]));
INVXL inst_cellmath__47_0_I21 (.Y(N48), .A(inst_cellmath__47_0_in0[5]));
INVXL inst_cellmath__47_0_I22 (.Y(N49), .A(inst_cellmath__47_0_in0[6]));
INVXL inst_cellmath__47_0_I23 (.Y(N50), .A(inst_cellmath__47_0_in0[7]));
INVXL inst_cellmath__47_0_I37 (.Y(N68), .A(inst_cellmath__47_0_in0[8]));
AOI22XL inst_cellmath__47_0_I25 (.Y(inst_cellmath__47_0_out0[0]), .A0(N68), .A1(N43), .B0(inst_cellmath__47_0_in1[0]), .B1(inst_cellmath__47_0_in0[8]));
AOI22XL inst_cellmath__47_0_I26 (.Y(inst_cellmath__47_0_out0[1]), .A0(N68), .A1(N44), .B0(inst_cellmath__47_0_in1[1]), .B1(inst_cellmath__47_0_in0[8]));
AOI22XL inst_cellmath__47_0_I27 (.Y(inst_cellmath__47_0_out0[2]), .A0(N68), .A1(N45), .B0(inst_cellmath__47_0_in1[2]), .B1(inst_cellmath__47_0_in0[8]));
AOI22XL inst_cellmath__47_0_I28 (.Y(inst_cellmath__47_0_out0[3]), .A0(N68), .A1(N46), .B0(inst_cellmath__47_0_in1[3]), .B1(inst_cellmath__47_0_in0[8]));
AOI22XL inst_cellmath__47_0_I29 (.Y(inst_cellmath__47_0_out0[4]), .A0(N68), .A1(N47), .B0(inst_cellmath__47_0_in1[4]), .B1(inst_cellmath__47_0_in0[8]));
AO22XL inst_cellmath__47_0_I46 (.Y(N69), .A0(inst_cellmath__47_0_in1[5]), .A1(inst_cellmath__47_0_in0[8]), .B0(N68), .B1(N48));
INVXL inst_cellmath__47_0_I39 (.Y(inst_cellmath__47_0_out0[5]), .A(N69));
AO22XL inst_cellmath__47_0_I48 (.Y(N71), .A0(inst_cellmath__47_0_in1[6]), .A1(inst_cellmath__47_0_in0[8]), .B0(N68), .B1(N49));
INVXL inst_cellmath__47_0_I41 (.Y(inst_cellmath__47_0_out0[6]), .A(N71));
AO22XL inst_cellmath__47_0_I50 (.Y(N73), .A0(inst_cellmath__47_0_in1[7]), .A1(inst_cellmath__47_0_in0[8]), .B0(N68), .B1(N50));
INVXL inst_cellmath__47_0_I43 (.Y(inst_cellmath__47_0_out0[7]), .A(N73));
endmodule

module cynw_cm_float_add2_inst_cellmath__49_0_bdw1137511134_bdw (
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
	,N106,N140,N141,N142,N143,N144,N145,N146 
	,N147,N148,N149,N150,N151,N152,N153,N154 
	,N155,N156,N157,N158,N159,N160,N161,N162 
	,N163,N165,N196,N197,N198,N199,N200,N201 
	,N202,N203,N204,N205,N206,N207,N208,N209 
	,N210,N211,N212,N213,N214,N215,N216,N217 
	,N220,N223,N226,N283,N284,N285,N286,N287 
	,N288,N289,N290,N291,N292,N293,N294,N295 
	,N296,N297,N298,N299,N300,N302,N304,N306 
	,N308,N310,N312,N314,N470,N471,N472,N474 
	,N475,N477,N478,N480,N481;
INVX1 inst_cellmath__49_0_I278 (.Y(N470), .A(inst_cellmath__49_0_in1[0]));
NOR2BX1 inst_cellmath__49_0_I2 (.Y(N82), .AN(inst_cellmath__49_0_in0[0]), .B(N470));
MX2XL inst_cellmath__49_0_I3 (.Y(N84), .A(inst_cellmath__49_0_in0[1]), .B(inst_cellmath__49_0_in0[0]), .S0(N470));
MX2XL inst_cellmath__49_0_I4 (.Y(N85), .A(inst_cellmath__49_0_in0[2]), .B(inst_cellmath__49_0_in0[1]), .S0(N470));
MX2XL inst_cellmath__49_0_I5 (.Y(N86), .A(inst_cellmath__49_0_in0[3]), .B(inst_cellmath__49_0_in0[2]), .S0(N470));
MX2XL inst_cellmath__49_0_I6 (.Y(N87), .A(inst_cellmath__49_0_in0[4]), .B(inst_cellmath__49_0_in0[3]), .S0(N470));
MX2XL inst_cellmath__49_0_I7 (.Y(N88), .A(inst_cellmath__49_0_in0[5]), .B(inst_cellmath__49_0_in0[4]), .S0(N470));
MX2XL inst_cellmath__49_0_I8 (.Y(N89), .A(inst_cellmath__49_0_in0[6]), .B(inst_cellmath__49_0_in0[5]), .S0(N470));
MX2XL inst_cellmath__49_0_I9 (.Y(N90), .A(inst_cellmath__49_0_in0[7]), .B(inst_cellmath__49_0_in0[6]), .S0(N470));
MX2XL inst_cellmath__49_0_I10 (.Y(N91), .A(inst_cellmath__49_0_in0[8]), .B(inst_cellmath__49_0_in0[7]), .S0(N470));
MX2XL inst_cellmath__49_0_I11 (.Y(N92), .A(inst_cellmath__49_0_in0[9]), .B(inst_cellmath__49_0_in0[8]), .S0(N470));
MX2XL inst_cellmath__49_0_I12 (.Y(N93), .A(inst_cellmath__49_0_in0[10]), .B(inst_cellmath__49_0_in0[9]), .S0(N470));
MX2XL inst_cellmath__49_0_I13 (.Y(N94), .A(inst_cellmath__49_0_in0[11]), .B(inst_cellmath__49_0_in0[10]), .S0(N470));
MX2XL inst_cellmath__49_0_I14 (.Y(N95), .A(inst_cellmath__49_0_in0[12]), .B(inst_cellmath__49_0_in0[11]), .S0(N470));
MX2XL inst_cellmath__49_0_I15 (.Y(N96), .A(inst_cellmath__49_0_in0[13]), .B(inst_cellmath__49_0_in0[12]), .S0(N470));
MX2XL inst_cellmath__49_0_I16 (.Y(N97), .A(inst_cellmath__49_0_in0[14]), .B(inst_cellmath__49_0_in0[13]), .S0(N470));
MX2XL inst_cellmath__49_0_I17 (.Y(N98), .A(inst_cellmath__49_0_in0[15]), .B(inst_cellmath__49_0_in0[14]), .S0(N470));
MX2XL inst_cellmath__49_0_I18 (.Y(N99), .A(inst_cellmath__49_0_in0[16]), .B(inst_cellmath__49_0_in0[15]), .S0(N470));
MX2XL inst_cellmath__49_0_I19 (.Y(N100), .A(inst_cellmath__49_0_in0[17]), .B(inst_cellmath__49_0_in0[16]), .S0(N470));
MX2XL inst_cellmath__49_0_I20 (.Y(N101), .A(inst_cellmath__49_0_in0[18]), .B(inst_cellmath__49_0_in0[17]), .S0(N470));
MX2XL inst_cellmath__49_0_I21 (.Y(N102), .A(inst_cellmath__49_0_in0[19]), .B(inst_cellmath__49_0_in0[18]), .S0(N470));
MX2XL inst_cellmath__49_0_I22 (.Y(N103), .A(inst_cellmath__49_0_in0[20]), .B(inst_cellmath__49_0_in0[19]), .S0(N470));
MX2XL inst_cellmath__49_0_I23 (.Y(N104), .A(inst_cellmath__49_0_in0[21]), .B(inst_cellmath__49_0_in0[20]), .S0(N470));
MX2XL inst_cellmath__49_0_I24 (.Y(N105), .A(inst_cellmath__49_0_in0[22]), .B(inst_cellmath__49_0_in0[21]), .S0(N470));
NAND2BXL inst_cellmath__49_0_I25 (.Y(N106), .AN(inst_cellmath__49_0_in0[22]), .B(N470));
INVX1 inst_cellmath__49_0_I279 (.Y(N471), .A(inst_cellmath__49_0_in1[1]));
INVX1 inst_cellmath__49_0_I280 (.Y(N472), .A(N471));
AOI22XL inst_cellmath__49_0_I56 (.Y(N140), .A0(N472), .A1(N85), .B0(N82), .B1(N471));
AOI22XL inst_cellmath__49_0_I57 (.Y(N141), .A0(N472), .A1(N86), .B0(N84), .B1(N471));
AOI22XL inst_cellmath__49_0_I58 (.Y(N142), .A0(N472), .A1(N87), .B0(N85), .B1(N471));
AOI22XL inst_cellmath__49_0_I59 (.Y(N143), .A0(N472), .A1(N88), .B0(N86), .B1(N471));
AOI22XL inst_cellmath__49_0_I60 (.Y(N144), .A0(N472), .A1(N89), .B0(N87), .B1(N471));
AOI22XL inst_cellmath__49_0_I61 (.Y(N145), .A0(N472), .A1(N90), .B0(N88), .B1(N471));
AOI22XL inst_cellmath__49_0_I62 (.Y(N146), .A0(N472), .A1(N91), .B0(N89), .B1(N471));
AOI22XL inst_cellmath__49_0_I63 (.Y(N147), .A0(N472), .A1(N92), .B0(N90), .B1(N471));
AOI22XL inst_cellmath__49_0_I64 (.Y(N148), .A0(N472), .A1(N93), .B0(N91), .B1(N471));
AOI22XL inst_cellmath__49_0_I65 (.Y(N149), .A0(N472), .A1(N94), .B0(N92), .B1(N471));
AOI22XL inst_cellmath__49_0_I66 (.Y(N150), .A0(N472), .A1(N95), .B0(N93), .B1(N471));
AOI22XL inst_cellmath__49_0_I67 (.Y(N151), .A0(N472), .A1(N96), .B0(N94), .B1(N471));
AOI22XL inst_cellmath__49_0_I68 (.Y(N152), .A0(N472), .A1(N97), .B0(N95), .B1(N471));
AOI22XL inst_cellmath__49_0_I69 (.Y(N153), .A0(N472), .A1(N98), .B0(N96), .B1(N471));
AOI22XL inst_cellmath__49_0_I70 (.Y(N154), .A0(N472), .A1(N99), .B0(N97), .B1(N471));
AOI22XL inst_cellmath__49_0_I71 (.Y(N155), .A0(N472), .A1(N100), .B0(N98), .B1(N471));
AOI22XL inst_cellmath__49_0_I72 (.Y(N156), .A0(N472), .A1(N101), .B0(N99), .B1(N471));
AOI22XL inst_cellmath__49_0_I73 (.Y(N157), .A0(N472), .A1(N102), .B0(N100), .B1(N471));
AOI22XL inst_cellmath__49_0_I74 (.Y(N158), .A0(N472), .A1(N103), .B0(N101), .B1(N471));
AOI22XL inst_cellmath__49_0_I75 (.Y(N159), .A0(N472), .A1(N104), .B0(N102), .B1(N471));
AOI22XL inst_cellmath__49_0_I76 (.Y(N160), .A0(N472), .A1(N105), .B0(N103), .B1(N471));
AOI22XL inst_cellmath__49_0_I77 (.Y(N161), .A0(N472), .A1(N106), .B0(N104), .B1(N471));
AOI22XL inst_cellmath__49_0_I78 (.Y(N162), .A0(N472), .A1(N470), .B0(N105), .B1(N471));
NAND2XL inst_cellmath__49_0_I79 (.Y(N163), .A(N106), .B(N471));
NAND2XL inst_cellmath__49_0_I80 (.Y(N165), .A(N470), .B(N471));
INVX1 inst_cellmath__49_0_I282 (.Y(N474), .A(inst_cellmath__49_0_in1[2]));
INVX1 inst_cellmath__49_0_I283 (.Y(N475), .A(N474));
AOI22XL inst_cellmath__49_0_I110 (.Y(N196), .A0(N474), .A1(N140), .B0(N144), .B1(N475));
AOI22XL inst_cellmath__49_0_I111 (.Y(N197), .A0(N474), .A1(N141), .B0(N145), .B1(N475));
AOI22XL inst_cellmath__49_0_I112 (.Y(N198), .A0(N474), .A1(N142), .B0(N146), .B1(N475));
AOI22XL inst_cellmath__49_0_I113 (.Y(N199), .A0(N474), .A1(N143), .B0(N147), .B1(N475));
AOI22XL inst_cellmath__49_0_I114 (.Y(N200), .A0(N474), .A1(N144), .B0(N148), .B1(N475));
AOI22XL inst_cellmath__49_0_I115 (.Y(N201), .A0(N474), .A1(N145), .B0(N149), .B1(N475));
AOI22XL inst_cellmath__49_0_I116 (.Y(N202), .A0(N474), .A1(N146), .B0(N150), .B1(N475));
AOI22XL inst_cellmath__49_0_I117 (.Y(N203), .A0(N474), .A1(N147), .B0(N151), .B1(N475));
AOI22XL inst_cellmath__49_0_I118 (.Y(N204), .A0(N474), .A1(N148), .B0(N152), .B1(N475));
AOI22XL inst_cellmath__49_0_I119 (.Y(N205), .A0(N474), .A1(N149), .B0(N153), .B1(N475));
AOI22XL inst_cellmath__49_0_I120 (.Y(N206), .A0(N474), .A1(N150), .B0(N154), .B1(N475));
AOI22XL inst_cellmath__49_0_I121 (.Y(N207), .A0(N474), .A1(N151), .B0(N155), .B1(N475));
AOI22XL inst_cellmath__49_0_I122 (.Y(N208), .A0(N474), .A1(N152), .B0(N156), .B1(N475));
AOI22XL inst_cellmath__49_0_I123 (.Y(N209), .A0(N474), .A1(N153), .B0(N157), .B1(N475));
AOI22XL inst_cellmath__49_0_I124 (.Y(N210), .A0(N474), .A1(N154), .B0(N158), .B1(N475));
AOI22XL inst_cellmath__49_0_I125 (.Y(N211), .A0(N474), .A1(N155), .B0(N159), .B1(N475));
AOI22XL inst_cellmath__49_0_I126 (.Y(N212), .A0(N474), .A1(N156), .B0(N160), .B1(N475));
AOI22XL inst_cellmath__49_0_I127 (.Y(N213), .A0(N474), .A1(N157), .B0(N161), .B1(N475));
AOI22XL inst_cellmath__49_0_I128 (.Y(N214), .A0(N474), .A1(N158), .B0(N162), .B1(N475));
AOI22XL inst_cellmath__49_0_I129 (.Y(N215), .A0(N474), .A1(N159), .B0(N163), .B1(N475));
AOI22XL inst_cellmath__49_0_I130 (.Y(N216), .A0(N474), .A1(N160), .B0(N165), .B1(N475));
NOR2XL inst_cellmath__49_0_I131 (.Y(N217), .A(N475), .B(N161));
NOR2XL inst_cellmath__49_0_I132 (.Y(N220), .A(N475), .B(N162));
NOR2XL inst_cellmath__49_0_I133 (.Y(N223), .A(N475), .B(N163));
NOR2XL inst_cellmath__49_0_I134 (.Y(N226), .A(N475), .B(N165));
INVX1 inst_cellmath__49_0_I285 (.Y(N477), .A(inst_cellmath__49_0_in1[3]));
INVXL inst_cellmath__49_0_I286 (.Y(N478), .A(N477));
AOI22XL inst_cellmath__49_0_I164 (.Y(N283), .A0(N478), .A1(N204), .B0(N196), .B1(N477));
AOI22XL inst_cellmath__49_0_I165 (.Y(N284), .A0(N478), .A1(N205), .B0(N197), .B1(N477));
AOI22XL inst_cellmath__49_0_I166 (.Y(N285), .A0(N478), .A1(N206), .B0(N198), .B1(N477));
AOI22XL inst_cellmath__49_0_I167 (.Y(N286), .A0(N478), .A1(N207), .B0(N199), .B1(N477));
AOI22XL inst_cellmath__49_0_I168 (.Y(N287), .A0(N478), .A1(N208), .B0(N200), .B1(N477));
AOI22XL inst_cellmath__49_0_I169 (.Y(N288), .A0(N478), .A1(N209), .B0(N201), .B1(N477));
AOI22XL inst_cellmath__49_0_I170 (.Y(N289), .A0(N478), .A1(N210), .B0(N202), .B1(N477));
AOI22XL inst_cellmath__49_0_I171 (.Y(N290), .A0(N478), .A1(N211), .B0(N203), .B1(N477));
AOI22XL inst_cellmath__49_0_I172 (.Y(N291), .A0(N478), .A1(N212), .B0(N204), .B1(N477));
AOI22XL inst_cellmath__49_0_I173 (.Y(N292), .A0(N478), .A1(N213), .B0(N205), .B1(N477));
AOI22XL inst_cellmath__49_0_I174 (.Y(N293), .A0(N478), .A1(N214), .B0(N206), .B1(N477));
AOI22XL inst_cellmath__49_0_I175 (.Y(N294), .A0(N478), .A1(N215), .B0(N207), .B1(N477));
AOI22XL inst_cellmath__49_0_I176 (.Y(N295), .A0(N478), .A1(N216), .B0(N208), .B1(N477));
AOI22XL inst_cellmath__49_0_I177 (.Y(N296), .A0(N478), .A1(N217), .B0(N209), .B1(N477));
AOI22XL inst_cellmath__49_0_I178 (.Y(N297), .A0(N478), .A1(N220), .B0(N210), .B1(N477));
AOI22XL inst_cellmath__49_0_I179 (.Y(N298), .A0(N478), .A1(N223), .B0(N211), .B1(N477));
AOI22XL inst_cellmath__49_0_I180 (.Y(N299), .A0(N478), .A1(N226), .B0(N212), .B1(N477));
NAND2XL inst_cellmath__49_0_I181 (.Y(N300), .A(N213), .B(N477));
NAND2XL inst_cellmath__49_0_I182 (.Y(N302), .A(N214), .B(N477));
NAND2XL inst_cellmath__49_0_I183 (.Y(N304), .A(N215), .B(N477));
NAND2XL inst_cellmath__49_0_I184 (.Y(N306), .A(N216), .B(N477));
NAND2XL inst_cellmath__49_0_I185 (.Y(N308), .A(N217), .B(N477));
NAND2XL inst_cellmath__49_0_I186 (.Y(N310), .A(N220), .B(N477));
NAND2XL inst_cellmath__49_0_I187 (.Y(N312), .A(N223), .B(N477));
NAND2XL inst_cellmath__49_0_I188 (.Y(N314), .A(N226), .B(N477));
INVXL inst_cellmath__49_0_I288 (.Y(N480), .A(inst_cellmath__49_0_in1[4]));
INVX1 inst_cellmath__49_0_I289 (.Y(N481), .A(N480));
AOI22XL inst_cellmath__49_0_I218 (.Y(inst_cellmath__49_0_out0[0]), .A0(N480), .A1(N283), .B0(N299), .B1(N481));
AOI22XL inst_cellmath__49_0_I219 (.Y(inst_cellmath__49_0_out0[1]), .A0(N480), .A1(N284), .B0(N300), .B1(N481));
AOI22XL inst_cellmath__49_0_I220 (.Y(inst_cellmath__49_0_out0[2]), .A0(N480), .A1(N285), .B0(N302), .B1(N481));
AOI22XL inst_cellmath__49_0_I221 (.Y(inst_cellmath__49_0_out0[3]), .A0(N480), .A1(N286), .B0(N304), .B1(N481));
AOI22XL inst_cellmath__49_0_I222 (.Y(inst_cellmath__49_0_out0[4]), .A0(N480), .A1(N287), .B0(N306), .B1(N481));
AOI22XL inst_cellmath__49_0_I223 (.Y(inst_cellmath__49_0_out0[5]), .A0(N480), .A1(N288), .B0(N308), .B1(N481));
AOI22XL inst_cellmath__49_0_I224 (.Y(inst_cellmath__49_0_out0[6]), .A0(N480), .A1(N289), .B0(N310), .B1(N481));
AOI22XL inst_cellmath__49_0_I225 (.Y(inst_cellmath__49_0_out0[7]), .A0(N480), .A1(N290), .B0(N312), .B1(N481));
AOI22XL inst_cellmath__49_0_I226 (.Y(inst_cellmath__49_0_out0[8]), .A0(N480), .A1(N291), .B0(N314), .B1(N481));
NOR2XL inst_cellmath__49_0_I227 (.Y(inst_cellmath__49_0_out0[9]), .A(N481), .B(N292));
NOR2XL inst_cellmath__49_0_I228 (.Y(inst_cellmath__49_0_out0[10]), .A(N481), .B(N293));
NOR2XL inst_cellmath__49_0_I229 (.Y(inst_cellmath__49_0_out0[11]), .A(N481), .B(N294));
NOR2XL inst_cellmath__49_0_I230 (.Y(inst_cellmath__49_0_out0[12]), .A(N481), .B(N295));
NOR2XL inst_cellmath__49_0_I231 (.Y(inst_cellmath__49_0_out0[13]), .A(N481), .B(N296));
NOR2XL inst_cellmath__49_0_I232 (.Y(inst_cellmath__49_0_out0[14]), .A(N481), .B(N297));
NOR2XL inst_cellmath__49_0_I233 (.Y(inst_cellmath__49_0_out0[15]), .A(N481), .B(N298));
NOR2XL inst_cellmath__49_0_I234 (.Y(inst_cellmath__49_0_out0[16]), .A(N481), .B(N299));
NOR2XL inst_cellmath__49_0_I235 (.Y(inst_cellmath__49_0_out0[17]), .A(N481), .B(N300));
NOR2XL inst_cellmath__49_0_I236 (.Y(inst_cellmath__49_0_out0[18]), .A(N481), .B(N302));
NOR2XL inst_cellmath__49_0_I237 (.Y(inst_cellmath__49_0_out0[19]), .A(N481), .B(N304));
NOR2XL inst_cellmath__49_0_I238 (.Y(inst_cellmath__49_0_out0[20]), .A(N481), .B(N306));
NOR2XL inst_cellmath__49_0_I239 (.Y(inst_cellmath__49_0_out0[21]), .A(N481), .B(N308));
NOR2XL inst_cellmath__49_0_I240 (.Y(inst_cellmath__49_0_out0[22]), .A(N481), .B(N310));
NOR2XL inst_cellmath__49_0_I241 (.Y(inst_cellmath__49_0_out0[23]), .A(N481), .B(N312));
NOR2XL inst_cellmath__49_0_I242 (.Y(inst_cellmath__49_0_out0[24]), .A(N481), .B(N314));
endmodule

module cynw_cm_float_add2_inst_cellmath__39_0_0_0_bdw1137511134_bdw (
	inst_cellmath__39_0_0_0_out0,
	inst_cellmath__39_0_0_0_in0,
	inst_cellmath__39_0_0_0_in1
	); /* architecture "gate_level" */ 
output [24:0] inst_cellmath__39_0_0_0_out0;
input [24:0] inst_cellmath__39_0_0_0_in0;
input [7:5] inst_cellmath__39_0_0_0_in1;
wire N58;
NOR3X1 inst_cellmath__39_0_0_0_I151 (.Y(N58), .A(inst_cellmath__39_0_0_0_in1[6]), .B(inst_cellmath__39_0_0_0_in1[5]), .C(inst_cellmath__39_0_0_0_in1[7]));
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

module cynw_cm_float_add2_inst_cellmath__39_2mx_bdw1137511134_bdw (
	inst_cellmath__39_2mx_out0,
	inst_cellmath__39_2mx_in0,
	inst_cellmath__39_2mx_in1,
	inst_cellmath__39_2mx_in2
	); /* architecture "gate_level" */ 
output [24:0] inst_cellmath__39_2mx_out0;
input [24:0] inst_cellmath__39_2mx_in0;
input  inst_cellmath__39_2mx_in1,
	inst_cellmath__39_2mx_in2;
wire N135;
NOR2XL inst_cellmath__39_2mx_I0 (.Y(N135), .A(inst_cellmath__39_2mx_in1), .B(inst_cellmath__39_2mx_in2));
AND2XL inst_cellmath__39_2mx_I4 (.Y(inst_cellmath__39_2mx_out0[0]), .A(N135), .B(inst_cellmath__39_2mx_in0[0]));
AND2XL inst_cellmath__39_2mx_I5 (.Y(inst_cellmath__39_2mx_out0[1]), .A(N135), .B(inst_cellmath__39_2mx_in0[1]));
AND2XL inst_cellmath__39_2mx_I6 (.Y(inst_cellmath__39_2mx_out0[2]), .A(N135), .B(inst_cellmath__39_2mx_in0[2]));
AND2XL inst_cellmath__39_2mx_I7 (.Y(inst_cellmath__39_2mx_out0[3]), .A(N135), .B(inst_cellmath__39_2mx_in0[3]));
AND2XL inst_cellmath__39_2mx_I8 (.Y(inst_cellmath__39_2mx_out0[4]), .A(N135), .B(inst_cellmath__39_2mx_in0[4]));
AND2XL inst_cellmath__39_2mx_I9 (.Y(inst_cellmath__39_2mx_out0[5]), .A(N135), .B(inst_cellmath__39_2mx_in0[5]));
AND2XL inst_cellmath__39_2mx_I10 (.Y(inst_cellmath__39_2mx_out0[6]), .A(N135), .B(inst_cellmath__39_2mx_in0[6]));
AND2XL inst_cellmath__39_2mx_I11 (.Y(inst_cellmath__39_2mx_out0[7]), .A(N135), .B(inst_cellmath__39_2mx_in0[7]));
AND2XL inst_cellmath__39_2mx_I12 (.Y(inst_cellmath__39_2mx_out0[8]), .A(N135), .B(inst_cellmath__39_2mx_in0[8]));
AND2XL inst_cellmath__39_2mx_I13 (.Y(inst_cellmath__39_2mx_out0[9]), .A(N135), .B(inst_cellmath__39_2mx_in0[9]));
AND2XL inst_cellmath__39_2mx_I14 (.Y(inst_cellmath__39_2mx_out0[10]), .A(N135), .B(inst_cellmath__39_2mx_in0[10]));
AND2XL inst_cellmath__39_2mx_I15 (.Y(inst_cellmath__39_2mx_out0[11]), .A(N135), .B(inst_cellmath__39_2mx_in0[11]));
AND2XL inst_cellmath__39_2mx_I16 (.Y(inst_cellmath__39_2mx_out0[12]), .A(N135), .B(inst_cellmath__39_2mx_in0[12]));
AND2XL inst_cellmath__39_2mx_I17 (.Y(inst_cellmath__39_2mx_out0[13]), .A(N135), .B(inst_cellmath__39_2mx_in0[13]));
AND2XL inst_cellmath__39_2mx_I18 (.Y(inst_cellmath__39_2mx_out0[14]), .A(N135), .B(inst_cellmath__39_2mx_in0[14]));
AND2XL inst_cellmath__39_2mx_I19 (.Y(inst_cellmath__39_2mx_out0[15]), .A(N135), .B(inst_cellmath__39_2mx_in0[15]));
AND2XL inst_cellmath__39_2mx_I20 (.Y(inst_cellmath__39_2mx_out0[16]), .A(N135), .B(inst_cellmath__39_2mx_in0[16]));
AND2XL inst_cellmath__39_2mx_I21 (.Y(inst_cellmath__39_2mx_out0[17]), .A(N135), .B(inst_cellmath__39_2mx_in0[17]));
AND2XL inst_cellmath__39_2mx_I22 (.Y(inst_cellmath__39_2mx_out0[18]), .A(N135), .B(inst_cellmath__39_2mx_in0[18]));
AND2XL inst_cellmath__39_2mx_I23 (.Y(inst_cellmath__39_2mx_out0[19]), .A(N135), .B(inst_cellmath__39_2mx_in0[19]));
AND2XL inst_cellmath__39_2mx_I24 (.Y(inst_cellmath__39_2mx_out0[20]), .A(N135), .B(inst_cellmath__39_2mx_in0[20]));
AND2XL inst_cellmath__39_2mx_I25 (.Y(inst_cellmath__39_2mx_out0[21]), .A(N135), .B(inst_cellmath__39_2mx_in0[21]));
AND2XL inst_cellmath__39_2mx_I26 (.Y(inst_cellmath__39_2mx_out0[22]), .A(N135), .B(inst_cellmath__39_2mx_in0[22]));
AND2XL inst_cellmath__39_2mx_I27 (.Y(inst_cellmath__39_2mx_out0[23]), .A(N135), .B(inst_cellmath__39_2mx_in0[23]));
AND2XL inst_cellmath__39_2mx_I28 (.Y(inst_cellmath__39_2mx_out0[24]), .A(N135), .B(inst_cellmath__39_2mx_in0[24]));
endmodule

module cynw_cm_float_add2_inst_cellmath__55_2mx_bdw1137511134_bdw (
	inst_cellmath__55_2mx_out0,
	inst_cellmath__55_2mx_in0,
	inst_cellmath__55_2mx_in1
	); /* architecture "gate_level" */ 
output [24:0] inst_cellmath__55_2mx_out0;
input  inst_cellmath__55_2mx_in0;
input [22:0] inst_cellmath__55_2mx_in1;
INVX1 inst_cellmath__55_2mx_I59 (.Y(inst_cellmath__55_2mx_out0[24]), .A(inst_cellmath__55_2mx_in0));
XNOR2X1 inst_cellmath__55_2mx_I28 (.Y(inst_cellmath__55_2mx_out0[1]), .A(inst_cellmath__55_2mx_in1[0]), .B(inst_cellmath__55_2mx_out0[24]));
XNOR2X1 inst_cellmath__55_2mx_I29 (.Y(inst_cellmath__55_2mx_out0[2]), .A(inst_cellmath__55_2mx_in1[1]), .B(inst_cellmath__55_2mx_out0[24]));
XNOR2X1 inst_cellmath__55_2mx_I30 (.Y(inst_cellmath__55_2mx_out0[3]), .A(inst_cellmath__55_2mx_in1[2]), .B(inst_cellmath__55_2mx_out0[24]));
XNOR2X1 inst_cellmath__55_2mx_I31 (.Y(inst_cellmath__55_2mx_out0[4]), .A(inst_cellmath__55_2mx_in1[3]), .B(inst_cellmath__55_2mx_out0[24]));
XNOR2X1 inst_cellmath__55_2mx_I32 (.Y(inst_cellmath__55_2mx_out0[5]), .A(inst_cellmath__55_2mx_in1[4]), .B(inst_cellmath__55_2mx_out0[24]));
XNOR2X1 inst_cellmath__55_2mx_I33 (.Y(inst_cellmath__55_2mx_out0[6]), .A(inst_cellmath__55_2mx_in1[5]), .B(inst_cellmath__55_2mx_out0[24]));
XNOR2X1 inst_cellmath__55_2mx_I34 (.Y(inst_cellmath__55_2mx_out0[7]), .A(inst_cellmath__55_2mx_in1[6]), .B(inst_cellmath__55_2mx_out0[24]));
XNOR2X1 inst_cellmath__55_2mx_I35 (.Y(inst_cellmath__55_2mx_out0[8]), .A(inst_cellmath__55_2mx_in1[7]), .B(inst_cellmath__55_2mx_out0[24]));
XNOR2X1 inst_cellmath__55_2mx_I36 (.Y(inst_cellmath__55_2mx_out0[9]), .A(inst_cellmath__55_2mx_in1[8]), .B(inst_cellmath__55_2mx_out0[24]));
XNOR2X1 inst_cellmath__55_2mx_I37 (.Y(inst_cellmath__55_2mx_out0[10]), .A(inst_cellmath__55_2mx_in1[9]), .B(inst_cellmath__55_2mx_out0[24]));
XNOR2X1 inst_cellmath__55_2mx_I38 (.Y(inst_cellmath__55_2mx_out0[11]), .A(inst_cellmath__55_2mx_in1[10]), .B(inst_cellmath__55_2mx_out0[24]));
XNOR2X1 inst_cellmath__55_2mx_I39 (.Y(inst_cellmath__55_2mx_out0[12]), .A(inst_cellmath__55_2mx_in1[11]), .B(inst_cellmath__55_2mx_out0[24]));
XNOR2X1 inst_cellmath__55_2mx_I40 (.Y(inst_cellmath__55_2mx_out0[13]), .A(inst_cellmath__55_2mx_in1[12]), .B(inst_cellmath__55_2mx_out0[24]));
XNOR2X1 inst_cellmath__55_2mx_I41 (.Y(inst_cellmath__55_2mx_out0[14]), .A(inst_cellmath__55_2mx_in1[13]), .B(inst_cellmath__55_2mx_out0[24]));
XNOR2X1 inst_cellmath__55_2mx_I42 (.Y(inst_cellmath__55_2mx_out0[15]), .A(inst_cellmath__55_2mx_in1[14]), .B(inst_cellmath__55_2mx_out0[24]));
XNOR2X1 inst_cellmath__55_2mx_I43 (.Y(inst_cellmath__55_2mx_out0[16]), .A(inst_cellmath__55_2mx_in1[15]), .B(inst_cellmath__55_2mx_out0[24]));
XNOR2X1 inst_cellmath__55_2mx_I44 (.Y(inst_cellmath__55_2mx_out0[17]), .A(inst_cellmath__55_2mx_in1[16]), .B(inst_cellmath__55_2mx_out0[24]));
XNOR2X1 inst_cellmath__55_2mx_I45 (.Y(inst_cellmath__55_2mx_out0[18]), .A(inst_cellmath__55_2mx_in1[17]), .B(inst_cellmath__55_2mx_out0[24]));
XNOR2X1 inst_cellmath__55_2mx_I46 (.Y(inst_cellmath__55_2mx_out0[19]), .A(inst_cellmath__55_2mx_in1[18]), .B(inst_cellmath__55_2mx_out0[24]));
XNOR2X1 inst_cellmath__55_2mx_I47 (.Y(inst_cellmath__55_2mx_out0[20]), .A(inst_cellmath__55_2mx_in1[19]), .B(inst_cellmath__55_2mx_out0[24]));
XNOR2X1 inst_cellmath__55_2mx_I48 (.Y(inst_cellmath__55_2mx_out0[21]), .A(inst_cellmath__55_2mx_in1[20]), .B(inst_cellmath__55_2mx_out0[24]));
XNOR2X1 inst_cellmath__55_2mx_I49 (.Y(inst_cellmath__55_2mx_out0[22]), .A(inst_cellmath__55_2mx_in1[21]), .B(inst_cellmath__55_2mx_out0[24]));
XNOR2X1 inst_cellmath__55_2mx_I50 (.Y(inst_cellmath__55_2mx_out0[23]), .A(inst_cellmath__55_2mx_in1[22]), .B(inst_cellmath__55_2mx_out0[24]));
assign inst_cellmath__55_2mx_out0[0] = inst_cellmath__55_2mx_in0;
endmodule

module cynw_cm_float_add2_inst_cellmath__57__22__bdw1137511134_bdw (
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
wire N105,N109,N111,N113,N115,N117,N119 
	,N121,N123,N125,N127,N129,N131,N133,N135 
	,N137,N139,N141,N143,N145,N147,N149,N151 
	,N153,N155,N157,N159,N161,N163,N165,N167 
	,N169,N171,N173,N175,N177,N179,N181,N183 
	,N185,N187,N189,N191,N193,N195,N197,N199 
	,N201,N203;
ADDHX1 inst_cellmath__57__22__I0 (.CO(N105), .S(inst_cellmath__57__22__out0[0]), .A(inst_cellmath__57__22__in0[0]), .B(inst_cellmath__57__22__in2[0]));
ADDFX1 inst_cellmath__57__22__I1 (.CO(N109), .S(inst_cellmath__57__22__out0[1]), .A(inst_cellmath__57__22__in2[1]), .B(inst_cellmath__57__22__in0[1]), .CI(N105));
ADDFX1 inst_cellmath__57__22__I2 (.CO(N111), .S(inst_cellmath__57__22__out0[2]), .A(inst_cellmath__57__22__in2[2]), .B(inst_cellmath__57__22__in0[2]), .CI(N109));
ADDFX1 inst_cellmath__57__22__I3 (.CO(N113), .S(inst_cellmath__57__22__out0[3]), .A(inst_cellmath__57__22__in2[3]), .B(inst_cellmath__57__22__in0[3]), .CI(N111));
ADDFX1 inst_cellmath__57__22__I4 (.CO(N115), .S(inst_cellmath__57__22__out0[4]), .A(inst_cellmath__57__22__in2[4]), .B(inst_cellmath__57__22__in0[4]), .CI(N113));
ADDFX1 inst_cellmath__57__22__I5 (.CO(N117), .S(inst_cellmath__57__22__out0[5]), .A(inst_cellmath__57__22__in2[5]), .B(inst_cellmath__57__22__in0[5]), .CI(N115));
ADDFX1 inst_cellmath__57__22__I6 (.CO(N119), .S(inst_cellmath__57__22__out0[6]), .A(inst_cellmath__57__22__in2[6]), .B(inst_cellmath__57__22__in0[6]), .CI(N117));
ADDFX1 inst_cellmath__57__22__I7 (.CO(N121), .S(inst_cellmath__57__22__out0[7]), .A(inst_cellmath__57__22__in2[7]), .B(inst_cellmath__57__22__in0[7]), .CI(N119));
ADDFX1 inst_cellmath__57__22__I8 (.CO(N123), .S(inst_cellmath__57__22__out0[8]), .A(inst_cellmath__57__22__in2[8]), .B(inst_cellmath__57__22__in0[8]), .CI(N121));
ADDFX1 inst_cellmath__57__22__I9 (.CO(N125), .S(inst_cellmath__57__22__out0[9]), .A(inst_cellmath__57__22__in2[9]), .B(inst_cellmath__57__22__in0[9]), .CI(N123));
ADDFX1 inst_cellmath__57__22__I10 (.CO(N127), .S(inst_cellmath__57__22__out0[10]), .A(inst_cellmath__57__22__in2[10]), .B(inst_cellmath__57__22__in0[10]), .CI(N125));
ADDFX1 inst_cellmath__57__22__I11 (.CO(N129), .S(inst_cellmath__57__22__out0[11]), .A(inst_cellmath__57__22__in2[11]), .B(inst_cellmath__57__22__in0[11]), .CI(N127));
ADDFX1 inst_cellmath__57__22__I12 (.CO(N131), .S(inst_cellmath__57__22__out0[12]), .A(inst_cellmath__57__22__in2[12]), .B(inst_cellmath__57__22__in0[12]), .CI(N129));
ADDFX1 inst_cellmath__57__22__I13 (.CO(N133), .S(inst_cellmath__57__22__out0[13]), .A(inst_cellmath__57__22__in2[13]), .B(inst_cellmath__57__22__in0[13]), .CI(N131));
ADDFX1 inst_cellmath__57__22__I14 (.CO(N135), .S(inst_cellmath__57__22__out0[14]), .A(inst_cellmath__57__22__in2[14]), .B(inst_cellmath__57__22__in0[14]), .CI(N133));
ADDFX1 inst_cellmath__57__22__I15 (.CO(N137), .S(inst_cellmath__57__22__out0[15]), .A(inst_cellmath__57__22__in2[15]), .B(inst_cellmath__57__22__in0[15]), .CI(N135));
ADDFX1 inst_cellmath__57__22__I16 (.CO(N139), .S(inst_cellmath__57__22__out0[16]), .A(inst_cellmath__57__22__in2[16]), .B(inst_cellmath__57__22__in0[16]), .CI(N137));
ADDFX1 inst_cellmath__57__22__I17 (.CO(N141), .S(inst_cellmath__57__22__out0[17]), .A(inst_cellmath__57__22__in2[17]), .B(inst_cellmath__57__22__in0[17]), .CI(N139));
ADDFX1 inst_cellmath__57__22__I18 (.CO(N143), .S(inst_cellmath__57__22__out0[18]), .A(inst_cellmath__57__22__in2[18]), .B(inst_cellmath__57__22__in0[18]), .CI(N141));
ADDFX1 inst_cellmath__57__22__I19 (.CO(N145), .S(inst_cellmath__57__22__out0[19]), .A(inst_cellmath__57__22__in2[19]), .B(inst_cellmath__57__22__in0[19]), .CI(N143));
ADDFX1 inst_cellmath__57__22__I20 (.CO(N147), .S(inst_cellmath__57__22__out0[20]), .A(inst_cellmath__57__22__in2[20]), .B(inst_cellmath__57__22__in0[20]), .CI(N145));
ADDFX1 inst_cellmath__57__22__I21 (.CO(N149), .S(inst_cellmath__57__22__out0[21]), .A(inst_cellmath__57__22__in2[21]), .B(inst_cellmath__57__22__in0[21]), .CI(N147));
ADDFX1 inst_cellmath__57__22__I22 (.CO(N151), .S(inst_cellmath__57__22__out0[22]), .A(inst_cellmath__57__22__in2[22]), .B(inst_cellmath__57__22__in0[22]), .CI(N149));
ADDFX1 inst_cellmath__57__22__I23 (.CO(N153), .S(inst_cellmath__57__22__out0[23]), .A(inst_cellmath__57__22__in2[23]), .B(inst_cellmath__57__22__in0[23]), .CI(N151));
ADDFX1 inst_cellmath__57__22__I24 (.CO(N155), .S(inst_cellmath__57__22__out0[24]), .A(inst_cellmath__57__22__in2[24]), .B(inst_cellmath__57__22__in0[24]), .CI(N153));
ADDFX1 inst_cellmath__57__22__I25 (.CO(N157), .S(inst_cellmath__57__22__out1[0]), .A(inst_cellmath__57__22__in0[0]), .B(inst_cellmath__57__22__in1), .CI(inst_cellmath__57__22__in2[0]));
ADDFX1 inst_cellmath__57__22__I26 (.CO(N159), .S(inst_cellmath__57__22__out1[1]), .A(inst_cellmath__57__22__in2[1]), .B(inst_cellmath__57__22__in0[1]), .CI(N157));
ADDFX1 inst_cellmath__57__22__I27 (.CO(N161), .S(inst_cellmath__57__22__out1[2]), .A(inst_cellmath__57__22__in2[2]), .B(inst_cellmath__57__22__in0[2]), .CI(N159));
ADDFX1 inst_cellmath__57__22__I28 (.CO(N163), .S(inst_cellmath__57__22__out1[3]), .A(inst_cellmath__57__22__in2[3]), .B(inst_cellmath__57__22__in0[3]), .CI(N161));
ADDFX1 inst_cellmath__57__22__I29 (.CO(N165), .S(inst_cellmath__57__22__out1[4]), .A(inst_cellmath__57__22__in2[4]), .B(inst_cellmath__57__22__in0[4]), .CI(N163));
ADDFX1 inst_cellmath__57__22__I30 (.CO(N167), .S(inst_cellmath__57__22__out1[5]), .A(inst_cellmath__57__22__in2[5]), .B(inst_cellmath__57__22__in0[5]), .CI(N165));
ADDFX1 inst_cellmath__57__22__I31 (.CO(N169), .S(inst_cellmath__57__22__out1[6]), .A(inst_cellmath__57__22__in2[6]), .B(inst_cellmath__57__22__in0[6]), .CI(N167));
ADDFX1 inst_cellmath__57__22__I32 (.CO(N171), .S(inst_cellmath__57__22__out1[7]), .A(inst_cellmath__57__22__in2[7]), .B(inst_cellmath__57__22__in0[7]), .CI(N169));
ADDFX1 inst_cellmath__57__22__I33 (.CO(N173), .S(inst_cellmath__57__22__out1[8]), .A(inst_cellmath__57__22__in2[8]), .B(inst_cellmath__57__22__in0[8]), .CI(N171));
ADDFX1 inst_cellmath__57__22__I34 (.CO(N175), .S(inst_cellmath__57__22__out1[9]), .A(inst_cellmath__57__22__in2[9]), .B(inst_cellmath__57__22__in0[9]), .CI(N173));
ADDFX1 inst_cellmath__57__22__I35 (.CO(N177), .S(inst_cellmath__57__22__out1[10]), .A(inst_cellmath__57__22__in2[10]), .B(inst_cellmath__57__22__in0[10]), .CI(N175));
ADDFX1 inst_cellmath__57__22__I36 (.CO(N179), .S(inst_cellmath__57__22__out1[11]), .A(inst_cellmath__57__22__in2[11]), .B(inst_cellmath__57__22__in0[11]), .CI(N177));
ADDFX1 inst_cellmath__57__22__I37 (.CO(N181), .S(inst_cellmath__57__22__out1[12]), .A(inst_cellmath__57__22__in2[12]), .B(inst_cellmath__57__22__in0[12]), .CI(N179));
ADDFX1 inst_cellmath__57__22__I38 (.CO(N183), .S(inst_cellmath__57__22__out1[13]), .A(inst_cellmath__57__22__in2[13]), .B(inst_cellmath__57__22__in0[13]), .CI(N181));
ADDFX1 inst_cellmath__57__22__I39 (.CO(N185), .S(inst_cellmath__57__22__out1[14]), .A(inst_cellmath__57__22__in2[14]), .B(inst_cellmath__57__22__in0[14]), .CI(N183));
ADDFX1 inst_cellmath__57__22__I40 (.CO(N187), .S(inst_cellmath__57__22__out1[15]), .A(inst_cellmath__57__22__in2[15]), .B(inst_cellmath__57__22__in0[15]), .CI(N185));
ADDFX1 inst_cellmath__57__22__I41 (.CO(N189), .S(inst_cellmath__57__22__out1[16]), .A(inst_cellmath__57__22__in2[16]), .B(inst_cellmath__57__22__in0[16]), .CI(N187));
ADDFX1 inst_cellmath__57__22__I42 (.CO(N191), .S(inst_cellmath__57__22__out1[17]), .A(inst_cellmath__57__22__in2[17]), .B(inst_cellmath__57__22__in0[17]), .CI(N189));
ADDFXL inst_cellmath__57__22__I43 (.CO(N193), .S(inst_cellmath__57__22__out1[18]), .A(inst_cellmath__57__22__in2[18]), .B(inst_cellmath__57__22__in0[18]), .CI(N191));
ADDFXL inst_cellmath__57__22__I44 (.CO(N195), .S(inst_cellmath__57__22__out1[19]), .A(inst_cellmath__57__22__in2[19]), .B(inst_cellmath__57__22__in0[19]), .CI(N193));
ADDFXL inst_cellmath__57__22__I45 (.CO(N197), .S(inst_cellmath__57__22__out1[20]), .A(inst_cellmath__57__22__in2[20]), .B(inst_cellmath__57__22__in0[20]), .CI(N195));
ADDFXL inst_cellmath__57__22__I46 (.CO(N199), .S(inst_cellmath__57__22__out1[21]), .A(inst_cellmath__57__22__in2[21]), .B(inst_cellmath__57__22__in0[21]), .CI(N197));
ADDFXL inst_cellmath__57__22__I47 (.CO(N201), .S(inst_cellmath__57__22__out1[22]), .A(inst_cellmath__57__22__in2[22]), .B(inst_cellmath__57__22__in0[22]), .CI(N199));
ADDFXL inst_cellmath__57__22__I48 (.CO(N203), .S(inst_cellmath__57__22__out1[23]), .A(inst_cellmath__57__22__in2[23]), .B(inst_cellmath__57__22__in0[23]), .CI(N201));
ADDFXL inst_cellmath__57__22__I49 (.CO(inst_cellmath__57__22__out1[25]), .S(inst_cellmath__57__22__out1[24]), .A(inst_cellmath__57__22__in2[24]), .B(inst_cellmath__57__22__in0[24]), .CI(N203));
endmodule

module cynw_cm_float_add2_inst_cellmath__41__18__bdw1137511134_bdw (
	inst_cellmath__41__18__out0,
	inst_cellmath__41__18__in0,
	inst_cellmath__41__18__in1
	); /* architecture "gate_level" */ 
output [0:0] inst_cellmath__41__18__out0;
input  inst_cellmath__41__18__in0,
	inst_cellmath__41__18__in1;
NOR2BX1 inst_cellmath__41__18__I2 (.Y(inst_cellmath__41__18__out0[0]), .AN(inst_cellmath__41__18__in1), .B(inst_cellmath__41__18__in0));
endmodule

module cynw_cm_float_add2_inst_cellmath__41__17__bdw1137511134_bdw (
	inst_cellmath__41__17__out0,
	inst_cellmath__41__17__in0,
	inst_cellmath__41__17__in1
	); /* architecture "gate_level" */ 
output [0:0] inst_cellmath__41__17__out0;
input  inst_cellmath__41__17__in0,
	inst_cellmath__41__17__in1;
NOR2BX1 inst_cellmath__41__17__I2 (.Y(inst_cellmath__41__17__out0[0]), .AN(inst_cellmath__41__17__in1), .B(inst_cellmath__41__17__in0));
endmodule

module cynw_cm_float_add2_inst_cellmath__52_0_bdw1137511134_bdw (
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
wire N11,N12,N14;
INVXL inst_cellmath__52_0_I0 (.Y(N11), .A(inst_cellmath__52_0_in1[8]));
AOI22XL inst_cellmath__52_0_I1 (.Y(N12), .A0(N11), .A1(inst_cellmath__52_0_in2[0]), .B0(inst_cellmath__52_0_in3[0]), .B1(inst_cellmath__52_0_in1[8]));
AOI22XL inst_cellmath__52_0_I3 (.Y(N14), .A0(N11), .A1(inst_cellmath__52_0_in4), .B0(inst_cellmath__52_0_in5), .B1(inst_cellmath__52_0_in1[8]));
MXI2XL inst_cellmath__52_0_I6 (.Y(inst_cellmath__52_0_out0), .A(N14), .B(N12), .S0(inst_cellmath__52_0_in0[25]));
endmodule

module cynw_cm_float_add2_inst_cellmath__51__26__bdw1137511134_bdw (
	inst_cellmath__51__26__out0,
	inst_cellmath__51__26__in0,
	inst_cellmath__51__26__in1
	); /* architecture "gate_level" */ 
output [25:25] inst_cellmath__51__26__out0;
input [25:25] inst_cellmath__51__26__in0;
input  inst_cellmath__51__26__in1;
NOR2XL inst_cellmath__51__26__I0 (.Y(inst_cellmath__51__26__out0[25]), .A(inst_cellmath__51__26__in1), .B(inst_cellmath__51__26__in0[25]));
endmodule

module cynw_cm_float_add2_inst_cellmath__51__24__bdw1137511134_bdw (
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
	,N155,N156,N212,N213;
INVXL inst_cellmath__51__24__I129 (.Y(N212), .A(inst_cellmath__51__24__in3));
MXI2XL inst_cellmath__51__24__I135 (.Y(N132), .A(N212), .B(inst_cellmath__51__24__in3), .S0(inst_cellmath__51__24__in0[0]));
MXI2XL inst_cellmath__51__24__I136 (.Y(N133), .A(N212), .B(inst_cellmath__51__24__in3), .S0(inst_cellmath__51__24__in0[1]));
MXI2XL inst_cellmath__51__24__I137 (.Y(N134), .A(N212), .B(inst_cellmath__51__24__in3), .S0(inst_cellmath__51__24__in0[2]));
MXI2XL inst_cellmath__51__24__I138 (.Y(N135), .A(N212), .B(inst_cellmath__51__24__in3), .S0(inst_cellmath__51__24__in0[3]));
MXI2XL inst_cellmath__51__24__I139 (.Y(N136), .A(N212), .B(inst_cellmath__51__24__in3), .S0(inst_cellmath__51__24__in0[4]));
MXI2XL inst_cellmath__51__24__I140 (.Y(N137), .A(N212), .B(inst_cellmath__51__24__in3), .S0(inst_cellmath__51__24__in0[5]));
MXI2XL inst_cellmath__51__24__I141 (.Y(N138), .A(N212), .B(inst_cellmath__51__24__in3), .S0(inst_cellmath__51__24__in0[6]));
MXI2XL inst_cellmath__51__24__I142 (.Y(N139), .A(N212), .B(inst_cellmath__51__24__in3), .S0(inst_cellmath__51__24__in0[7]));
MXI2XL inst_cellmath__51__24__I143 (.Y(N140), .A(N212), .B(inst_cellmath__51__24__in3), .S0(inst_cellmath__51__24__in0[8]));
MXI2XL inst_cellmath__51__24__I144 (.Y(N141), .A(N212), .B(inst_cellmath__51__24__in3), .S0(inst_cellmath__51__24__in0[9]));
MXI2XL inst_cellmath__51__24__I145 (.Y(N142), .A(N212), .B(inst_cellmath__51__24__in3), .S0(inst_cellmath__51__24__in0[10]));
MXI2XL inst_cellmath__51__24__I146 (.Y(N143), .A(N212), .B(inst_cellmath__51__24__in3), .S0(inst_cellmath__51__24__in0[11]));
MXI2XL inst_cellmath__51__24__I147 (.Y(N144), .A(N212), .B(inst_cellmath__51__24__in3), .S0(inst_cellmath__51__24__in0[12]));
MXI2XL inst_cellmath__51__24__I148 (.Y(N145), .A(N212), .B(inst_cellmath__51__24__in3), .S0(inst_cellmath__51__24__in0[13]));
MXI2XL inst_cellmath__51__24__I149 (.Y(N146), .A(N212), .B(inst_cellmath__51__24__in3), .S0(inst_cellmath__51__24__in0[14]));
MXI2XL inst_cellmath__51__24__I150 (.Y(N147), .A(N212), .B(inst_cellmath__51__24__in3), .S0(inst_cellmath__51__24__in0[15]));
MXI2XL inst_cellmath__51__24__I151 (.Y(N148), .A(N212), .B(inst_cellmath__51__24__in3), .S0(inst_cellmath__51__24__in0[16]));
MXI2XL inst_cellmath__51__24__I152 (.Y(N149), .A(N212), .B(inst_cellmath__51__24__in3), .S0(inst_cellmath__51__24__in0[17]));
MXI2XL inst_cellmath__51__24__I153 (.Y(N150), .A(N212), .B(inst_cellmath__51__24__in3), .S0(inst_cellmath__51__24__in0[18]));
MXI2XL inst_cellmath__51__24__I154 (.Y(N151), .A(N212), .B(inst_cellmath__51__24__in3), .S0(inst_cellmath__51__24__in0[19]));
MXI2XL inst_cellmath__51__24__I155 (.Y(N152), .A(N212), .B(inst_cellmath__51__24__in3), .S0(inst_cellmath__51__24__in0[20]));
MXI2XL inst_cellmath__51__24__I156 (.Y(N153), .A(N212), .B(inst_cellmath__51__24__in3), .S0(inst_cellmath__51__24__in0[21]));
MXI2XL inst_cellmath__51__24__I157 (.Y(N154), .A(N212), .B(inst_cellmath__51__24__in3), .S0(inst_cellmath__51__24__in0[22]));
MXI2XL inst_cellmath__51__24__I158 (.Y(N155), .A(N212), .B(inst_cellmath__51__24__in3), .S0(inst_cellmath__51__24__in0[23]));
MXI2XL inst_cellmath__51__24__I159 (.Y(N156), .A(N212), .B(inst_cellmath__51__24__in3), .S0(inst_cellmath__51__24__in0[24]));
INVXL inst_cellmath__51__24__I130 (.Y(N213), .A(inst_cellmath__51__24__in2[25]));
AOI22XL inst_cellmath__51__24__I102 (.Y(inst_cellmath__51__24__out0[0]), .A0(N213), .A1(inst_cellmath__51__24__in1[0]), .B0(N132), .B1(inst_cellmath__51__24__in2[25]));
AOI22XL inst_cellmath__51__24__I103 (.Y(inst_cellmath__51__24__out0[1]), .A0(N213), .A1(inst_cellmath__51__24__in1[1]), .B0(N133), .B1(inst_cellmath__51__24__in2[25]));
AOI22XL inst_cellmath__51__24__I104 (.Y(inst_cellmath__51__24__out0[2]), .A0(N213), .A1(inst_cellmath__51__24__in1[2]), .B0(N134), .B1(inst_cellmath__51__24__in2[25]));
AOI22XL inst_cellmath__51__24__I105 (.Y(inst_cellmath__51__24__out0[3]), .A0(N213), .A1(inst_cellmath__51__24__in1[3]), .B0(N135), .B1(inst_cellmath__51__24__in2[25]));
AOI22XL inst_cellmath__51__24__I106 (.Y(inst_cellmath__51__24__out0[4]), .A0(N213), .A1(inst_cellmath__51__24__in1[4]), .B0(N136), .B1(inst_cellmath__51__24__in2[25]));
AOI22XL inst_cellmath__51__24__I107 (.Y(inst_cellmath__51__24__out0[5]), .A0(N213), .A1(inst_cellmath__51__24__in1[5]), .B0(N137), .B1(inst_cellmath__51__24__in2[25]));
AOI22XL inst_cellmath__51__24__I108 (.Y(inst_cellmath__51__24__out0[6]), .A0(N213), .A1(inst_cellmath__51__24__in1[6]), .B0(N138), .B1(inst_cellmath__51__24__in2[25]));
AOI22XL inst_cellmath__51__24__I109 (.Y(inst_cellmath__51__24__out0[7]), .A0(N213), .A1(inst_cellmath__51__24__in1[7]), .B0(N139), .B1(inst_cellmath__51__24__in2[25]));
AOI22XL inst_cellmath__51__24__I110 (.Y(inst_cellmath__51__24__out0[8]), .A0(N213), .A1(inst_cellmath__51__24__in1[8]), .B0(N140), .B1(inst_cellmath__51__24__in2[25]));
AOI22XL inst_cellmath__51__24__I111 (.Y(inst_cellmath__51__24__out0[9]), .A0(N213), .A1(inst_cellmath__51__24__in1[9]), .B0(N141), .B1(inst_cellmath__51__24__in2[25]));
AOI22XL inst_cellmath__51__24__I112 (.Y(inst_cellmath__51__24__out0[10]), .A0(N213), .A1(inst_cellmath__51__24__in1[10]), .B0(N142), .B1(inst_cellmath__51__24__in2[25]));
AOI22XL inst_cellmath__51__24__I113 (.Y(inst_cellmath__51__24__out0[11]), .A0(N213), .A1(inst_cellmath__51__24__in1[11]), .B0(N143), .B1(inst_cellmath__51__24__in2[25]));
AOI22XL inst_cellmath__51__24__I114 (.Y(inst_cellmath__51__24__out0[12]), .A0(N213), .A1(inst_cellmath__51__24__in1[12]), .B0(N144), .B1(inst_cellmath__51__24__in2[25]));
AOI22XL inst_cellmath__51__24__I115 (.Y(inst_cellmath__51__24__out0[13]), .A0(N213), .A1(inst_cellmath__51__24__in1[13]), .B0(N145), .B1(inst_cellmath__51__24__in2[25]));
AOI22XL inst_cellmath__51__24__I116 (.Y(inst_cellmath__51__24__out0[14]), .A0(N213), .A1(inst_cellmath__51__24__in1[14]), .B0(N146), .B1(inst_cellmath__51__24__in2[25]));
AOI22XL inst_cellmath__51__24__I117 (.Y(inst_cellmath__51__24__out0[15]), .A0(N213), .A1(inst_cellmath__51__24__in1[15]), .B0(N147), .B1(inst_cellmath__51__24__in2[25]));
AOI22XL inst_cellmath__51__24__I118 (.Y(inst_cellmath__51__24__out0[16]), .A0(N213), .A1(inst_cellmath__51__24__in1[16]), .B0(N148), .B1(inst_cellmath__51__24__in2[25]));
AOI22XL inst_cellmath__51__24__I119 (.Y(inst_cellmath__51__24__out0[17]), .A0(N213), .A1(inst_cellmath__51__24__in1[17]), .B0(N149), .B1(inst_cellmath__51__24__in2[25]));
AOI22XL inst_cellmath__51__24__I120 (.Y(inst_cellmath__51__24__out0[18]), .A0(N213), .A1(inst_cellmath__51__24__in1[18]), .B0(N150), .B1(inst_cellmath__51__24__in2[25]));
AOI22XL inst_cellmath__51__24__I121 (.Y(inst_cellmath__51__24__out0[19]), .A0(N213), .A1(inst_cellmath__51__24__in1[19]), .B0(N151), .B1(inst_cellmath__51__24__in2[25]));
AOI22XL inst_cellmath__51__24__I122 (.Y(inst_cellmath__51__24__out0[20]), .A0(N213), .A1(inst_cellmath__51__24__in1[20]), .B0(N152), .B1(inst_cellmath__51__24__in2[25]));
AOI22XL inst_cellmath__51__24__I123 (.Y(inst_cellmath__51__24__out0[21]), .A0(N213), .A1(inst_cellmath__51__24__in1[21]), .B0(N153), .B1(inst_cellmath__51__24__in2[25]));
AOI22XL inst_cellmath__51__24__I124 (.Y(inst_cellmath__51__24__out0[22]), .A0(N213), .A1(inst_cellmath__51__24__in1[22]), .B0(N154), .B1(inst_cellmath__51__24__in2[25]));
AOI22XL inst_cellmath__51__24__I125 (.Y(inst_cellmath__51__24__out0[23]), .A0(N213), .A1(inst_cellmath__51__24__in1[23]), .B0(N155), .B1(inst_cellmath__51__24__in2[25]));
AOI22XL inst_cellmath__51__24__I126 (.Y(inst_cellmath__51__24__out0[24]), .A0(N213), .A1(inst_cellmath__51__24__in1[24]), .B0(N156), .B1(inst_cellmath__51__24__in2[25]));
endmodule

module cynw_cm_float_add2_inst_delta_0_bdw1137511134_bdw (
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
NOR2BX1 inst_delta_0_I137 (.Y(N183), .AN(inst_delta_0_in0[0]), .B(inst_delta_0_in0[1]));
NOR2XL inst_delta_0_I11 (.Y(N72), .A(inst_delta_0_in0[1]), .B(inst_delta_0_in0[0]));
NOR2BX1 inst_delta_0_I138 (.Y(N74), .AN(inst_delta_0_in0[2]), .B(inst_delta_0_in0[3]));
INVXL inst_delta_0_I14 (.Y(N75), .A(inst_delta_0_in0[5]));
OAI21XL inst_delta_0_I15 (.Y(N76), .A0(inst_delta_0_in0[4]), .A1(N74), .B0(N75));
NOR2XL inst_delta_0_I16 (.Y(N77), .A(inst_delta_0_in0[3]), .B(inst_delta_0_in0[2]));
NOR2XL inst_delta_0_I17 (.Y(N78), .A(inst_delta_0_in0[5]), .B(inst_delta_0_in0[4]));
NOR2BX1 inst_delta_0_I139 (.Y(N80), .AN(inst_delta_0_in0[6]), .B(inst_delta_0_in0[7]));
INVXL inst_delta_0_I20 (.Y(N81), .A(inst_delta_0_in0[9]));
OAI21XL inst_delta_0_I21 (.Y(N82), .A0(inst_delta_0_in0[8]), .A1(N80), .B0(N81));
NOR2XL inst_delta_0_I22 (.Y(N83), .A(inst_delta_0_in0[7]), .B(inst_delta_0_in0[6]));
NOR2XL inst_delta_0_I23 (.Y(N84), .A(inst_delta_0_in0[9]), .B(inst_delta_0_in0[8]));
NOR2BX1 inst_delta_0_I140 (.Y(N86), .AN(inst_delta_0_in0[10]), .B(inst_delta_0_in0[11]));
INVXL inst_delta_0_I26 (.Y(N87), .A(inst_delta_0_in0[13]));
OAI21XL inst_delta_0_I27 (.Y(N88), .A0(inst_delta_0_in0[12]), .A1(N86), .B0(N87));
NOR2XL inst_delta_0_I28 (.Y(N89), .A(inst_delta_0_in0[11]), .B(inst_delta_0_in0[10]));
NOR2XL inst_delta_0_I29 (.Y(N90), .A(inst_delta_0_in0[13]), .B(inst_delta_0_in0[12]));
NOR2BX1 inst_delta_0_I141 (.Y(N92), .AN(inst_delta_0_in0[14]), .B(inst_delta_0_in0[15]));
INVXL inst_delta_0_I32 (.Y(N93), .A(inst_delta_0_in0[17]));
OAI21XL inst_delta_0_I33 (.Y(N94), .A0(inst_delta_0_in0[16]), .A1(N92), .B0(N93));
NOR2XL inst_delta_0_I34 (.Y(N95), .A(inst_delta_0_in0[15]), .B(inst_delta_0_in0[14]));
NOR2XL inst_delta_0_I35 (.Y(N96), .A(inst_delta_0_in0[17]), .B(inst_delta_0_in0[16]));
NOR2BX1 inst_delta_0_I142 (.Y(N98), .AN(inst_delta_0_in0[18]), .B(inst_delta_0_in0[19]));
INVXL inst_delta_0_I38 (.Y(N99), .A(inst_delta_0_in0[21]));
OAI21XL inst_delta_0_I39 (.Y(N100), .A0(inst_delta_0_in0[20]), .A1(N98), .B0(N99));
NOR2XL inst_delta_0_I40 (.Y(N101), .A(inst_delta_0_in0[19]), .B(inst_delta_0_in0[18]));
NOR2XL inst_delta_0_I41 (.Y(N102), .A(inst_delta_0_in0[21]), .B(inst_delta_0_in0[20]));
NOR2BX1 inst_delta_0_I143 (.Y(N104), .AN(inst_delta_0_in0[22]), .B(inst_delta_0_in0[23]));
INVXL inst_delta_0_I44 (.Y(N105), .A(inst_delta_0_in0[25]));
OAI21XL inst_delta_0_I45 (.Y(N106), .A0(inst_delta_0_in0[24]), .A1(N104), .B0(N105));
NOR2XL inst_delta_0_I46 (.Y(N107), .A(inst_delta_0_in0[23]), .B(inst_delta_0_in0[22]));
NOR2XL inst_delta_0_I47 (.Y(N108), .A(inst_delta_0_in0[25]), .B(inst_delta_0_in0[24]));
NAND2BXL inst_delta_0_I144 (.Y(N117), .AN(N77), .B(N78));
NAND2XL inst_delta_0_I58 (.Y(N120), .A(N78), .B(N77));
NAND2XL inst_delta_0_I59 (.Y(N121), .A(N84), .B(N83));
NAND2BXL inst_delta_0_I145 (.Y(N123), .AN(N89), .B(N90));
INVXL inst_delta_0_I62 (.Y(N124), .A(N96));
AOI21XL inst_delta_0_I63 (.Y(N125), .A0(N95), .A1(N123), .B0(N124));
NAND2XL inst_delta_0_I64 (.Y(N126), .A(N90), .B(N89));
NAND2XL inst_delta_0_I65 (.Y(N127), .A(N96), .B(N95));
NAND2BXL inst_delta_0_I146 (.Y(N129), .AN(N101), .B(N102));
INVXL inst_delta_0_I68 (.Y(N130), .A(N108));
AOI21XL inst_delta_0_I69 (.Y(N131), .A0(N107), .A1(N129), .B0(N130));
NAND2XL inst_delta_0_I70 (.Y(N132), .A(N102), .B(N101));
NAND2X1 inst_delta_0_I71 (.Y(N133), .A(N108), .B(N107));
NAND2BXL inst_delta_0_I147 (.Y(N137), .AN(N121), .B(N120));
NOR2XL inst_delta_0_I77 (.Y(N141), .A(N121), .B(N120));
NOR2BX1 inst_delta_0_I148 (.Y(N143), .AN(N126), .B(N127));
INVXL inst_delta_0_I80 (.Y(N144), .A(N133));
OAI21XL inst_delta_0_I81 (.Y(N145), .A0(N132), .A1(N143), .B0(N144));
NOR2XL inst_delta_0_I82 (.Y(N146), .A(N127), .B(N126));
NOR2XL inst_delta_0_I83 (.Y(N199), .A(N133), .B(N132));
NAND2BXL inst_delta_0_I149 (.Y(N149), .AN(N72), .B(N141));
INVXL inst_delta_0_I86 (.Y(N150), .A(N199));
AOI21XL inst_delta_0_I87 (.Y(inst_delta_0_out0[3]), .A0(N146), .A1(N149), .B0(N150));
NAND2XL inst_delta_0_I88 (.Y(N152), .A(N141), .B(N72));
NAND2X1 inst_delta_0_I89 (.Y(N201), .A(N199), .B(N146));
NOR2BX1 inst_delta_0_I150 (.Y(inst_delta_0_out0[4]), .AN(N152), .B(N201));
NOR2XL inst_delta_0_I92 (.Y(inst_delta_0_out0[5]), .A(N201), .B(N152));
OAI21XL inst_delta_0_I96 (.Y(inst_delta_0_out0[2]), .A0(N201), .A1(N137), .B0(N145));
OAI2BB1X1 inst_delta_0_I152 (.Y(N167), .A0N(N83), .A1N(N117), .B0(N84));
AOI21XL inst_delta_0_I104 (.Y(N170), .A0(N199), .A1(N125), .B0(N131));
OAI21XL inst_delta_0_I106 (.Y(inst_delta_0_out0[1]), .A0(N201), .A1(N167), .B0(N170));
OAI21XL inst_delta_0_I118 (.Y(N187), .A0(N121), .A1(N76), .B0(N82));
OAI21XL inst_delta_0_I120 (.Y(N189), .A0(N127), .A1(N88), .B0(N94));
OAI21XL inst_delta_0_I122 (.Y(N191), .A0(N133), .A1(N100), .B0(N106));
AOI21XL inst_delta_0_I124 (.Y(N193), .A0(N141), .A1(N183), .B0(N187));
AOI21XL inst_delta_0_I126 (.Y(N195), .A0(N199), .A1(N189), .B0(N191));
OAI21XL inst_delta_0_I128 (.Y(inst_delta_0_out0[0]), .A0(N201), .A1(N193), .B0(N195));
endmodule

module cynw_cm_float_add2_inst_cellmath__69__29__bdw1137511134_bdw (
	inst_cellmath__69__29__out0,
	inst_cellmath__69__29__in0,
	inst_cellmath__69__29__in1
	); /* architecture "gate_level" */ 
output [0:0] inst_cellmath__69__29__out0;
input [5:5] inst_cellmath__69__29__in0;
input  inst_cellmath__69__29__in1;
NOR2BX1 inst_cellmath__69__29__I2 (.Y(inst_cellmath__69__29__out0[0]), .AN(inst_cellmath__69__29__in1), .B(inst_cellmath__69__29__in0[5]));
endmodule

module cynw_cm_float_add2_inst_cellmath__69__30__bdw1137511134_bdw (
	inst_cellmath__69__30__out0,
	inst_cellmath__69__30__in0,
	inst_cellmath__69__30__in1
	); /* architecture "gate_level" */ 
output [0:0] inst_cellmath__69__30__out0;
input  inst_cellmath__69__30__in0,
	inst_cellmath__69__30__in1;
AND2XL inst_cellmath__69__30__I0 (.Y(inst_cellmath__69__30__out0[0]), .A(inst_cellmath__69__30__in1), .B(inst_cellmath__69__30__in0));
endmodule

module cynw_cm_float_add2_inst_cellmath__69_0_bdw1137511134_bdw (
	inst_cellmath__69_0_out0,
	inst_cellmath__69_0_in0,
	inst_cellmath__69_0_in1
	); /* architecture "gate_level" */ 
output  inst_cellmath__69_0_out0;
input [0:0] inst_cellmath__69_0_in0,
	inst_cellmath__69_0_in1;
OR2XL inst_cellmath__69_0_I0 (.Y(inst_cellmath__69_0_out0), .A(inst_cellmath__69_0_in0[0]), .B(inst_cellmath__69_0_in1[0]));
endmodule

module cynw_cm_float_add2_inst_cellmath__59_0_bdw1137511134_bdw (
	inst_cellmath__59_0_out0,
	inst_cellmath__59_0_in0,
	inst_cellmath__59_0_in1
	); /* architecture "gate_level" */ 
output  inst_cellmath__59_0_out0;
input  inst_cellmath__59_0_in0,
	inst_cellmath__59_0_in1;
NOR2BX1 inst_cellmath__59_0_I6 (.Y(inst_cellmath__59_0_out0), .AN(inst_cellmath__59_0_in0), .B(inst_cellmath__59_0_in1));
endmodule

module cynw_cm_float_add2_inst_cellmath__40_0_bdw1137511134_bdw (
	inst_cellmath__40_0_out0,
	inst_cellmath__40_0_in0,
	inst_cellmath__40_0_in1,
	inst_cellmath__40_0_in2
	); /* architecture "gate_level" */ 
output [7:0] inst_cellmath__40_0_out0;
input [8:8] inst_cellmath__40_0_in0;
input [7:0] inst_cellmath__40_0_in1,
	inst_cellmath__40_0_in2;
wire N94,N97;
INVXL buf1_A_I28 (.Y(N97), .A(inst_cellmath__40_0_in0[8]));
INVXL buf1_A_I29 (.Y(N94), .A(N97));
MX2XL inst_cellmath__40_0_I16 (.Y(inst_cellmath__40_0_out0[0]), .A(inst_cellmath__40_0_in2[0]), .B(inst_cellmath__40_0_in1[0]), .S0(N94));
MX2XL inst_cellmath__40_0_I17 (.Y(inst_cellmath__40_0_out0[1]), .A(inst_cellmath__40_0_in2[1]), .B(inst_cellmath__40_0_in1[1]), .S0(N94));
MX2XL inst_cellmath__40_0_I18 (.Y(inst_cellmath__40_0_out0[2]), .A(inst_cellmath__40_0_in2[2]), .B(inst_cellmath__40_0_in1[2]), .S0(N94));
MX2XL inst_cellmath__40_0_I19 (.Y(inst_cellmath__40_0_out0[3]), .A(inst_cellmath__40_0_in2[3]), .B(inst_cellmath__40_0_in1[3]), .S0(N94));
MX2XL inst_cellmath__40_0_I20 (.Y(inst_cellmath__40_0_out0[4]), .A(inst_cellmath__40_0_in2[4]), .B(inst_cellmath__40_0_in1[4]), .S0(N94));
MX2XL inst_cellmath__40_0_I21 (.Y(inst_cellmath__40_0_out0[5]), .A(inst_cellmath__40_0_in2[5]), .B(inst_cellmath__40_0_in1[5]), .S0(N94));
MX2XL inst_cellmath__40_0_I22 (.Y(inst_cellmath__40_0_out0[6]), .A(inst_cellmath__40_0_in2[6]), .B(inst_cellmath__40_0_in1[6]), .S0(N94));
MX2XL inst_cellmath__40_0_I23 (.Y(inst_cellmath__40_0_out0[7]), .A(inst_cellmath__40_0_in2[7]), .B(inst_cellmath__40_0_in1[7]), .S0(N94));
endmodule

module cynw_cm_float_add2_inst_cellmath__73_0_bdw1137511134_bdw (
	inst_cellmath__73_0_out0,
	inst_cellmath__73_0_in0,
	inst_cellmath__73_0_in1
	); /* architecture "gate_level" */ 
output  inst_cellmath__73_0_out0;
input [4:0] inst_cellmath__73_0_in0;
input [7:0] inst_cellmath__73_0_in1;
wire N49,N53,N73,N75,N76,N77,N78 
	,N86,N90,N97,N104,N108,N115;
INVXL inst_cellmath__73_0_I17 (.Y(N49), .A(inst_cellmath__73_0_in1[2]));
INVXL inst_cellmath__73_0_I19 (.Y(N53), .A(inst_cellmath__73_0_in1[4]));
NAND2BXL inst_cellmath__73_0_I53 (.Y(N73), .AN(inst_cellmath__73_0_in1[0]), .B(inst_cellmath__73_0_in0[0]));
INVXL cmpii_A_I42 (.Y(N90), .A(inst_cellmath__73_0_in0[1]));
AND2XL cmpii_A_I43 (.Y(N86), .A(inst_cellmath__73_0_in1[1]), .B(N90));
OAI22XL cmpii_A_I44 (.Y(N75), .A0(N86), .A1(N73), .B0(inst_cellmath__73_0_in1[1]), .B1(N90));
OR2XL cmpoi_A_I45 (.Y(N97), .A(N49), .B(inst_cellmath__73_0_in0[2]));
AOI22XL cmpoi_A_I46 (.Y(N76), .A0(N75), .A1(N97), .B0(N49), .B1(inst_cellmath__73_0_in0[2]));
INVXL cmpii_A_I48 (.Y(N108), .A(inst_cellmath__73_0_in0[3]));
AND2XL cmpii_A_I49 (.Y(N104), .A(inst_cellmath__73_0_in1[3]), .B(N108));
OAI22XL cmpii_A_I50 (.Y(N77), .A0(N104), .A1(N76), .B0(inst_cellmath__73_0_in1[3]), .B1(N108));
OR2XL cmpoi_A_I51 (.Y(N115), .A(N53), .B(inst_cellmath__73_0_in0[4]));
AOI22XL cmpoi_A_I52 (.Y(N78), .A0(N77), .A1(N115), .B0(N53), .B1(inst_cellmath__73_0_in0[4]));
NOR4X1 inst_cellmath__73_0_I100 (.Y(inst_cellmath__73_0_out0), .A(inst_cellmath__73_0_in1[7]), .B(inst_cellmath__73_0_in1[6]), .C(inst_cellmath__73_0_in1[5]), .D(N78));
endmodule

module cynw_cm_float_add2_inst_cellmath__75__32__bdw1137511134_bdw (
	inst_cellmath__75__32__out0,
	inst_cellmath__75__32__in0,
	inst_cellmath__75__32__in1
	); /* architecture "gate_level" */ 
output [0:0] inst_cellmath__75__32__out0;
input [25:25] inst_cellmath__75__32__in0;
input [7:1] inst_cellmath__75__32__in1;
wire N13,N14,N15,N16;
AND4XL inst_cellmath__75__32__I17 (.Y(N13), .A(inst_cellmath__75__32__in1[7]), .B(inst_cellmath__75__32__in1[4]), .C(inst_cellmath__75__32__in1[2]), .D(inst_cellmath__75__32__in1[3]));
NAND2XL inst_cellmath__75__32__I3 (.Y(N14), .A(N13), .B(inst_cellmath__75__32__in1[6]));
NAND2XL inst_cellmath__75__32__I4 (.Y(N15), .A(inst_cellmath__75__32__in1[5]), .B(inst_cellmath__75__32__in1[1]));
NOR2XL inst_cellmath__75__32__I5 (.Y(N16), .A(N14), .B(N15));
AND2XL inst_cellmath__75__32__I6 (.Y(inst_cellmath__75__32__out0[0]), .A(N16), .B(inst_cellmath__75__32__in0[25]));
endmodule

module cynw_cm_float_add2_inst_cellmath__77_0_bdw1137511134_bdw (
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
OR4X1 inst_cellmath__77_0_I7 (.Y(inst_cellmath__77_0_out0), .A(inst_cellmath__77_0_in2), .B(inst_cellmath__77_0_in3), .C(inst_cellmath__77_0_in1), .D(inst_cellmath__77_0_in0[0]));
endmodule

module cynw_cm_float_add2_inst_cellmath__74__31__bdw1137511134_bdw (
	inst_cellmath__74__31__out0,
	inst_cellmath__74__31__in0,
	inst_cellmath__74__31__in1
	); /* architecture "gate_level" */ 
output [0:0] inst_cellmath__74__31__out0;
input  inst_cellmath__74__31__in0,
	inst_cellmath__74__31__in1;
AND2XL inst_cellmath__74__31__I0 (.Y(inst_cellmath__74__31__out0[0]), .A(inst_cellmath__74__31__in0), .B(inst_cellmath__74__31__in1));
endmodule

module cynw_cm_float_add2_inst_cellmath__72_0_bdw1137511134_bdw (
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
OR4X1 inst_cellmath__72_0_I7 (.Y(inst_cellmath__72_0_out0), .A(inst_cellmath__72_0_in2[0]), .B(inst_cellmath__72_0_in1), .C(inst_cellmath__72_0_in0[5]), .D(inst_cellmath__72_0_in3));
endmodule

module cynw_cm_float_add2_inst_cellmath__66_0_bdw1137511134_bdw (
	inst_cellmath__66_0_out0,
	inst_cellmath__66_0_in0,
	inst_cellmath__66_0_in1
	); /* architecture "gate_level" */ 
output [7:0] inst_cellmath__66_0_out0;
input [4:0] inst_cellmath__66_0_in0;
input [7:0] inst_cellmath__66_0_in1;
wire N30,N32,N34,N36,N38,N81,N85 
	,N86,N87,N88,N89,N90,N91,N95,N99 
	,N104,N108,N110,N112,N114,N116,N118,N120 
	;
INVXL inst_cellmath__66_0_I5 (.Y(N30), .A(inst_cellmath__66_0_in0[0]));
INVXL inst_cellmath__66_0_I6 (.Y(N32), .A(inst_cellmath__66_0_in0[1]));
INVXL inst_cellmath__66_0_I7 (.Y(N34), .A(inst_cellmath__66_0_in0[2]));
INVXL inst_cellmath__66_0_I8 (.Y(N36), .A(inst_cellmath__66_0_in0[3]));
INVXL inst_cellmath__66_0_I9 (.Y(N38), .A(inst_cellmath__66_0_in0[4]));
INVXL inst_cellmath__66_0_I31 (.Y(N81), .A(inst_cellmath__66_0_in1[1]));
ADDHX1 inst_cellmath__66_0_I32 (.CO(N86), .S(N85), .A(inst_cellmath__66_0_in1[2]), .B(inst_cellmath__66_0_in1[1]));
ADDHX1 inst_cellmath__66_0_I33 (.CO(N88), .S(N87), .A(inst_cellmath__66_0_in1[3]), .B(N86));
ADDHX1 inst_cellmath__66_0_I34 (.CO(N90), .S(N89), .A(inst_cellmath__66_0_in1[4]), .B(N88));
INVXL inst_cellmath__66_0_I35 (.Y(N91), .A(inst_cellmath__66_0_in1[5]));
INVXL inst_cellmath__66_0_I36 (.Y(N95), .A(inst_cellmath__66_0_in1[6]));
INVXL inst_cellmath__66_0_I37 (.Y(N99), .A(inst_cellmath__66_0_in1[7]));
ADDHX1 inst_cellmath__66_0_I38 (.CO(N104), .S(inst_cellmath__66_0_out0[0]), .A(inst_cellmath__66_0_in1[0]), .B(N30));
ADDFX1 inst_cellmath__66_0_I39 (.CO(N108), .S(inst_cellmath__66_0_out0[1]), .A(N32), .B(N81), .CI(N104));
ADDFX1 inst_cellmath__66_0_I40 (.CO(N110), .S(inst_cellmath__66_0_out0[2]), .A(N34), .B(N85), .CI(N108));
ADDFX1 inst_cellmath__66_0_I41 (.CO(N112), .S(inst_cellmath__66_0_out0[3]), .A(N36), .B(N87), .CI(N110));
ADDFX1 inst_cellmath__66_0_I42 (.CO(N114), .S(inst_cellmath__66_0_out0[4]), .A(N38), .B(N89), .CI(N112));
ADDFX1 inst_cellmath__66_0_I43 (.CO(N116), .S(inst_cellmath__66_0_out0[5]), .A(N90), .B(N91), .CI(N114));
ADDFX1 inst_cellmath__66_0_I44 (.CO(N118), .S(inst_cellmath__66_0_out0[6]), .A(N95), .B(inst_cellmath__66_0_in1[5]), .CI(N116));
ADDFX1 inst_cellmath__66_0_I45 (.CO(N120), .S(inst_cellmath__66_0_out0[7]), .A(inst_cellmath__66_0_in1[6]), .B(N99), .CI(N118));
endmodule

module cynw_cm_float_add2_inst_cellmath__60_0_bdw1137511134_bdw (
	inst_cellmath__60_0_out0,
	inst_cellmath__60_0_in0,
	inst_cellmath__60_0_in1,
	inst_cellmath__60_0_in2
	); /* architecture "gate_level" */ 
output [7:0] inst_cellmath__60_0_out0;
input  inst_cellmath__60_0_in0,
	inst_cellmath__60_0_in1;
input [7:0] inst_cellmath__60_0_in2;
MX2XL inst_cellmath__60_0_I16 (.Y(inst_cellmath__60_0_out0[0]), .A(inst_cellmath__60_0_in2[0]), .B(inst_cellmath__60_0_in0), .S0(inst_cellmath__60_0_in1));
MX2XL inst_cellmath__60_0_I17 (.Y(inst_cellmath__60_0_out0[1]), .A(inst_cellmath__60_0_in2[1]), .B(inst_cellmath__60_0_in0), .S0(inst_cellmath__60_0_in1));
MX2XL inst_cellmath__60_0_I18 (.Y(inst_cellmath__60_0_out0[2]), .A(inst_cellmath__60_0_in2[2]), .B(inst_cellmath__60_0_in0), .S0(inst_cellmath__60_0_in1));
MX2XL inst_cellmath__60_0_I19 (.Y(inst_cellmath__60_0_out0[3]), .A(inst_cellmath__60_0_in2[3]), .B(inst_cellmath__60_0_in0), .S0(inst_cellmath__60_0_in1));
MX2XL inst_cellmath__60_0_I20 (.Y(inst_cellmath__60_0_out0[4]), .A(inst_cellmath__60_0_in2[4]), .B(inst_cellmath__60_0_in0), .S0(inst_cellmath__60_0_in1));
MX2XL inst_cellmath__60_0_I21 (.Y(inst_cellmath__60_0_out0[5]), .A(inst_cellmath__60_0_in2[5]), .B(inst_cellmath__60_0_in0), .S0(inst_cellmath__60_0_in1));
MX2XL inst_cellmath__60_0_I22 (.Y(inst_cellmath__60_0_out0[6]), .A(inst_cellmath__60_0_in2[6]), .B(inst_cellmath__60_0_in0), .S0(inst_cellmath__60_0_in1));
MX2XL inst_cellmath__60_0_I23 (.Y(inst_cellmath__60_0_out0[7]), .A(inst_cellmath__60_0_in2[7]), .B(inst_cellmath__60_0_in0), .S0(inst_cellmath__60_0_in1));
endmodule

module cynw_cm_float_add2_inst_cellmath__63_0_bdw1137511134_bdw (
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
	,N188,N189,N190,N222,N225,N226,N227,N228 
	,N229,N230,N231,N232,N233,N234,N235,N236 
	,N237,N238,N239,N240,N241,N242,N243,N244 
	,N245,N246,N247,N248,N306,N308,N310,N311 
	,N312,N313,N314,N315,N316,N317,N318,N319 
	,N320,N321,N322,N323,N324,N325,N326,N327 
	,N328,N329,N330,N331,N332,N469,N474,N476 
	,N479,N480,N485,N486,N495,N496,N502,N512 
	,N519,N522,N523,N524;
BUFX2 inst_cellmath__63_0_I349 (.Y(N469), .A(inst_cellmath__63_0_in0[3]));
INVX2 inst_cellmath__63_0_I296 (.Y(N476), .A(N469));
INVXL inst_cellmath__63_0_I294 (.Y(N474), .A(N469));
AND2XL inst_cellmath__63_0_I2 (.Y(N86), .A(N476), .B(inst_cellmath__63_0_in1[0]));
AND2XL inst_cellmath__63_0_I3 (.Y(N88), .A(N476), .B(inst_cellmath__63_0_in1[1]));
AND2XL inst_cellmath__63_0_I4 (.Y(N90), .A(N476), .B(inst_cellmath__63_0_in1[2]));
AND2XL inst_cellmath__63_0_I5 (.Y(N92), .A(N476), .B(inst_cellmath__63_0_in1[3]));
AND2XL inst_cellmath__63_0_I6 (.Y(N94), .A(N476), .B(inst_cellmath__63_0_in1[4]));
AND2XL inst_cellmath__63_0_I7 (.Y(N96), .A(N474), .B(inst_cellmath__63_0_in1[5]));
AND2XL inst_cellmath__63_0_I8 (.Y(N98), .A(N474), .B(inst_cellmath__63_0_in1[6]));
AND2XL inst_cellmath__63_0_I9 (.Y(N100), .A(N474), .B(inst_cellmath__63_0_in1[7]));
MX2XL inst_cellmath__63_0_I10 (.Y(N102), .A(inst_cellmath__63_0_in1[0]), .B(inst_cellmath__63_0_in1[8]), .S0(N474));
MX2XL inst_cellmath__63_0_I11 (.Y(N103), .A(inst_cellmath__63_0_in1[1]), .B(inst_cellmath__63_0_in1[9]), .S0(N474));
MX2XL inst_cellmath__63_0_I12 (.Y(N104), .A(inst_cellmath__63_0_in1[2]), .B(inst_cellmath__63_0_in1[10]), .S0(N474));
MX2XL inst_cellmath__63_0_I13 (.Y(N105), .A(inst_cellmath__63_0_in1[3]), .B(inst_cellmath__63_0_in1[11]), .S0(N474));
MX2XL inst_cellmath__63_0_I14 (.Y(N106), .A(inst_cellmath__63_0_in1[4]), .B(inst_cellmath__63_0_in1[12]), .S0(N474));
MX2XL inst_cellmath__63_0_I15 (.Y(N107), .A(inst_cellmath__63_0_in1[5]), .B(inst_cellmath__63_0_in1[13]), .S0(N474));
MX2XL inst_cellmath__63_0_I16 (.Y(N108), .A(inst_cellmath__63_0_in1[6]), .B(inst_cellmath__63_0_in1[14]), .S0(N474));
MX2XL inst_cellmath__63_0_I17 (.Y(N109), .A(inst_cellmath__63_0_in1[7]), .B(inst_cellmath__63_0_in1[15]), .S0(N474));
MX2XL inst_cellmath__63_0_I18 (.Y(N110), .A(inst_cellmath__63_0_in1[8]), .B(inst_cellmath__63_0_in1[16]), .S0(N474));
MX2XL inst_cellmath__63_0_I19 (.Y(N111), .A(inst_cellmath__63_0_in1[9]), .B(inst_cellmath__63_0_in1[17]), .S0(N474));
MX2XL inst_cellmath__63_0_I20 (.Y(N112), .A(inst_cellmath__63_0_in1[10]), .B(inst_cellmath__63_0_in1[18]), .S0(N474));
MX2XL inst_cellmath__63_0_I21 (.Y(N113), .A(inst_cellmath__63_0_in1[11]), .B(inst_cellmath__63_0_in1[19]), .S0(N474));
MX2XL inst_cellmath__63_0_I22 (.Y(N114), .A(inst_cellmath__63_0_in1[12]), .B(inst_cellmath__63_0_in1[20]), .S0(N474));
MX2XL inst_cellmath__63_0_I23 (.Y(N115), .A(inst_cellmath__63_0_in1[13]), .B(inst_cellmath__63_0_in1[21]), .S0(N476));
MX2XL inst_cellmath__63_0_I24 (.Y(N116), .A(inst_cellmath__63_0_in1[14]), .B(inst_cellmath__63_0_in1[22]), .S0(N476));
MX2XL inst_cellmath__63_0_I25 (.Y(N117), .A(inst_cellmath__63_0_in1[15]), .B(inst_cellmath__63_0_in1[23]), .S0(N476));
MX2XL inst_cellmath__63_0_I26 (.Y(N118), .A(inst_cellmath__63_0_in1[16]), .B(inst_cellmath__63_0_in1[24]), .S0(N476));
BUFX3 inst_cellmath__63_0_I353 (.Y(N522), .A(inst_cellmath__63_0_in0[4]));
CLKINVX4 inst_cellmath__63_0_I299 (.Y(N479), .A(N522));
NAND2XL inst_cellmath__63_0_I58 (.Y(N150), .A(N86), .B(N479));
NAND2X1 inst_cellmath__63_0_I59 (.Y(N152), .A(N88), .B(N479));
NAND2XL inst_cellmath__63_0_I60 (.Y(N154), .A(N90), .B(N479));
NAND2XL inst_cellmath__63_0_I61 (.Y(N156), .A(N92), .B(N479));
NAND2XL inst_cellmath__63_0_I62 (.Y(N158), .A(N94), .B(N479));
NAND2XL inst_cellmath__63_0_I63 (.Y(N160), .A(N96), .B(N479));
NAND2XL inst_cellmath__63_0_I64 (.Y(N162), .A(N98), .B(N479));
NAND2XL inst_cellmath__63_0_I65 (.Y(N164), .A(N100), .B(N479));
NAND2XL inst_cellmath__63_0_I66 (.Y(N166), .A(N102), .B(N479));
NAND2XL inst_cellmath__63_0_I67 (.Y(N168), .A(N103), .B(N479));
NAND2XL inst_cellmath__63_0_I68 (.Y(N170), .A(N104), .B(N479));
NAND2XL inst_cellmath__63_0_I69 (.Y(N172), .A(N105), .B(N479));
NAND2XL inst_cellmath__63_0_I70 (.Y(N174), .A(N106), .B(N479));
NAND2XL inst_cellmath__63_0_I71 (.Y(N176), .A(N107), .B(N479));
NAND2XL inst_cellmath__63_0_I72 (.Y(N178), .A(N108), .B(N479));
NAND2XL inst_cellmath__63_0_I73 (.Y(N180), .A(N109), .B(N479));
AOI22XL inst_cellmath__63_0_I74 (.Y(N182), .A0(N522), .A1(N86), .B0(N110), .B1(N479));
AOI22XL inst_cellmath__63_0_I75 (.Y(N183), .A0(N522), .A1(N88), .B0(N111), .B1(N479));
AOI22XL inst_cellmath__63_0_I76 (.Y(N184), .A0(N522), .A1(N90), .B0(N112), .B1(N479));
AOI22XL inst_cellmath__63_0_I77 (.Y(N185), .A0(N522), .A1(N92), .B0(N113), .B1(N479));
AOI22XL inst_cellmath__63_0_I78 (.Y(N186), .A0(N522), .A1(N94), .B0(N114), .B1(N479));
AOI22XL inst_cellmath__63_0_I79 (.Y(N187), .A0(N522), .A1(N96), .B0(N115), .B1(N479));
AOI22XL inst_cellmath__63_0_I80 (.Y(N188), .A0(N522), .A1(N98), .B0(N116), .B1(N479));
AOI22XL inst_cellmath__63_0_I81 (.Y(N189), .A0(N522), .A1(N100), .B0(N117), .B1(N479));
AOI22XL inst_cellmath__63_0_I82 (.Y(N190), .A0(N522), .A1(N102), .B0(N118), .B1(N479));
INVXL inst_cellmath__63_0_I343 (.Y(N523), .A(inst_cellmath__63_0_in0[0]));
INVX1 inst_cellmath__63_0_I344 (.Y(N524), .A(N523));
INVXL inst_cellmath__63_0_I300 (.Y(N480), .A(N524));
INVX1 inst_cellmath__63_0_I306 (.Y(N486), .A(N480));
INVXL inst_cellmath__63_0_I305 (.Y(N485), .A(N480));
INVX2 inst_cellmath__63_0_I315 (.Y(N495), .A(N524));
NOR2BX1 inst_cellmath__63_0_I350 (.Y(N222), .AN(N480), .B(N150));
AOI22X1 inst_cellmath__63_0_I115 (.Y(N225), .A0(N495), .A1(N152), .B0(N150), .B1(N486));
AOI22XL inst_cellmath__63_0_I116 (.Y(N226), .A0(N495), .A1(N154), .B0(N152), .B1(N486));
AOI22XL inst_cellmath__63_0_I117 (.Y(N227), .A0(N495), .A1(N156), .B0(N154), .B1(N486));
AOI22XL inst_cellmath__63_0_I118 (.Y(N228), .A0(N495), .A1(N158), .B0(N156), .B1(N486));
AOI22XL inst_cellmath__63_0_I119 (.Y(N229), .A0(N495), .A1(N160), .B0(N158), .B1(N485));
AOI22XL inst_cellmath__63_0_I120 (.Y(N230), .A0(N495), .A1(N162), .B0(N160), .B1(N485));
AOI22XL inst_cellmath__63_0_I121 (.Y(N231), .A0(N495), .A1(N164), .B0(N162), .B1(N485));
AOI22XL inst_cellmath__63_0_I122 (.Y(N232), .A0(N495), .A1(N166), .B0(N164), .B1(N485));
AOI22XL inst_cellmath__63_0_I123 (.Y(N233), .A0(N495), .A1(N168), .B0(N166), .B1(N485));
AOI22XL inst_cellmath__63_0_I124 (.Y(N234), .A0(N495), .A1(N170), .B0(N168), .B1(N485));
AOI22XL inst_cellmath__63_0_I125 (.Y(N235), .A0(N495), .A1(N172), .B0(N170), .B1(N485));
AOI22XL inst_cellmath__63_0_I126 (.Y(N236), .A0(N495), .A1(N174), .B0(N172), .B1(N485));
AOI22XL inst_cellmath__63_0_I127 (.Y(N237), .A0(N495), .A1(N176), .B0(N174), .B1(N485));
AOI22XL inst_cellmath__63_0_I128 (.Y(N238), .A0(N495), .A1(N178), .B0(N176), .B1(N485));
AOI22XL inst_cellmath__63_0_I129 (.Y(N239), .A0(N495), .A1(N180), .B0(N178), .B1(N485));
AOI22XL inst_cellmath__63_0_I130 (.Y(N240), .A0(N495), .A1(N182), .B0(N180), .B1(N485));
AOI22XL inst_cellmath__63_0_I131 (.Y(N241), .A0(N495), .A1(N183), .B0(N182), .B1(N485));
AOI22XL inst_cellmath__63_0_I132 (.Y(N242), .A0(N495), .A1(N184), .B0(N183), .B1(N485));
AOI22XL inst_cellmath__63_0_I133 (.Y(N243), .A0(N495), .A1(N185), .B0(N184), .B1(N485));
AOI22XL inst_cellmath__63_0_I134 (.Y(N244), .A0(N495), .A1(N186), .B0(N185), .B1(N485));
AOI22XL inst_cellmath__63_0_I135 (.Y(N245), .A0(N495), .A1(N187), .B0(N186), .B1(N486));
AOI22XL inst_cellmath__63_0_I136 (.Y(N246), .A0(N495), .A1(N188), .B0(N187), .B1(N486));
AOI22XL inst_cellmath__63_0_I137 (.Y(N247), .A0(N495), .A1(N189), .B0(N188), .B1(N486));
AOI22XL inst_cellmath__63_0_I138 (.Y(N248), .A0(N495), .A1(N190), .B0(N189), .B1(N486));
INVX1 inst_cellmath__63_0_I360 (.Y(N496), .A(inst_cellmath__63_0_in0[1]));
INVXL inst_cellmath__63_0_I322 (.Y(N502), .A(N496));
NAND2XL inst_cellmath__63_0_I170 (.Y(N306), .A(N222), .B(N496));
NAND2XL inst_cellmath__63_0_I171 (.Y(N308), .A(N225), .B(N496));
AOI22XL inst_cellmath__63_0_I172 (.Y(N310), .A0(N502), .A1(N222), .B0(N226), .B1(N496));
AOI22XL inst_cellmath__63_0_I173 (.Y(N311), .A0(N502), .A1(N225), .B0(N227), .B1(N496));
AOI22XL inst_cellmath__63_0_I174 (.Y(N312), .A0(N502), .A1(N226), .B0(N228), .B1(N496));
AOI22XL inst_cellmath__63_0_I175 (.Y(N313), .A0(N502), .A1(N227), .B0(N229), .B1(N496));
AOI22XL inst_cellmath__63_0_I176 (.Y(N314), .A0(N502), .A1(N228), .B0(N230), .B1(N496));
AOI22XL inst_cellmath__63_0_I177 (.Y(N315), .A0(N502), .A1(N229), .B0(N231), .B1(N496));
AOI22XL inst_cellmath__63_0_I178 (.Y(N316), .A0(N502), .A1(N230), .B0(N232), .B1(N496));
AOI22XL inst_cellmath__63_0_I179 (.Y(N317), .A0(N502), .A1(N231), .B0(N233), .B1(N496));
AOI22XL inst_cellmath__63_0_I180 (.Y(N318), .A0(N502), .A1(N232), .B0(N234), .B1(N496));
AOI22XL inst_cellmath__63_0_I181 (.Y(N319), .A0(N502), .A1(N233), .B0(N235), .B1(N496));
AOI22XL inst_cellmath__63_0_I182 (.Y(N320), .A0(N502), .A1(N234), .B0(N236), .B1(N496));
AOI22XL inst_cellmath__63_0_I183 (.Y(N321), .A0(N502), .A1(N235), .B0(N237), .B1(N496));
AOI22XL inst_cellmath__63_0_I184 (.Y(N322), .A0(N502), .A1(N236), .B0(N238), .B1(N496));
AOI22XL inst_cellmath__63_0_I185 (.Y(N323), .A0(N502), .A1(N237), .B0(N239), .B1(N496));
AOI22XL inst_cellmath__63_0_I186 (.Y(N324), .A0(N502), .A1(N238), .B0(N240), .B1(N496));
AOI22XL inst_cellmath__63_0_I187 (.Y(N325), .A0(N502), .A1(N239), .B0(N241), .B1(N496));
AOI22XL inst_cellmath__63_0_I188 (.Y(N326), .A0(N502), .A1(N240), .B0(N242), .B1(N496));
AOI22XL inst_cellmath__63_0_I189 (.Y(N327), .A0(N502), .A1(N241), .B0(N243), .B1(N496));
AOI22XL inst_cellmath__63_0_I190 (.Y(N328), .A0(N502), .A1(N242), .B0(N244), .B1(N496));
AOI22XL inst_cellmath__63_0_I191 (.Y(N329), .A0(N502), .A1(N243), .B0(N245), .B1(N496));
AOI22XL inst_cellmath__63_0_I192 (.Y(N330), .A0(N502), .A1(N244), .B0(N246), .B1(N496));
AOI22XL inst_cellmath__63_0_I193 (.Y(N331), .A0(N502), .A1(N245), .B0(N247), .B1(N496));
AOI22XL inst_cellmath__63_0_I194 (.Y(N332), .A0(N502), .A1(N246), .B0(N248), .B1(N496));
INVX1 inst_cellmath__63_0_I356 (.Y(N512), .A(inst_cellmath__63_0_in0[2]));
INVX2 inst_cellmath__63_0_I339 (.Y(N519), .A(N512));
NOR2XL inst_cellmath__63_0_I226 (.Y(inst_cellmath__63_0_out0[0]), .A(N519), .B(N306));
NOR2XL inst_cellmath__63_0_I227 (.Y(inst_cellmath__63_0_out0[1]), .A(N519), .B(N308));
NOR2XL inst_cellmath__63_0_I228 (.Y(inst_cellmath__63_0_out0[2]), .A(N519), .B(N310));
NOR2XL inst_cellmath__63_0_I229 (.Y(inst_cellmath__63_0_out0[3]), .A(N519), .B(N311));
AOI22XL inst_cellmath__63_0_I230 (.Y(inst_cellmath__63_0_out0[4]), .A0(N512), .A1(N312), .B0(N306), .B1(N519));
AOI22XL inst_cellmath__63_0_I231 (.Y(inst_cellmath__63_0_out0[5]), .A0(N512), .A1(N313), .B0(N308), .B1(N519));
AOI22XL inst_cellmath__63_0_I232 (.Y(inst_cellmath__63_0_out0[6]), .A0(N512), .A1(N314), .B0(N310), .B1(N519));
AOI22XL inst_cellmath__63_0_I233 (.Y(inst_cellmath__63_0_out0[7]), .A0(N512), .A1(N315), .B0(N311), .B1(N519));
AOI22XL inst_cellmath__63_0_I234 (.Y(inst_cellmath__63_0_out0[8]), .A0(N512), .A1(N316), .B0(N312), .B1(N519));
AOI22XL inst_cellmath__63_0_I235 (.Y(inst_cellmath__63_0_out0[9]), .A0(N512), .A1(N317), .B0(N313), .B1(N519));
AOI22XL inst_cellmath__63_0_I236 (.Y(inst_cellmath__63_0_out0[10]), .A0(N512), .A1(N318), .B0(N314), .B1(N519));
AOI22XL inst_cellmath__63_0_I237 (.Y(inst_cellmath__63_0_out0[11]), .A0(N512), .A1(N319), .B0(N315), .B1(N519));
AOI22XL inst_cellmath__63_0_I238 (.Y(inst_cellmath__63_0_out0[12]), .A0(N512), .A1(N320), .B0(N316), .B1(N519));
AOI22XL inst_cellmath__63_0_I239 (.Y(inst_cellmath__63_0_out0[13]), .A0(N512), .A1(N321), .B0(N317), .B1(N519));
AOI22XL inst_cellmath__63_0_I240 (.Y(inst_cellmath__63_0_out0[14]), .A0(N512), .A1(N322), .B0(N318), .B1(N519));
AOI22XL inst_cellmath__63_0_I241 (.Y(inst_cellmath__63_0_out0[15]), .A0(N512), .A1(N323), .B0(N319), .B1(N519));
AOI22XL inst_cellmath__63_0_I242 (.Y(inst_cellmath__63_0_out0[16]), .A0(N512), .A1(N324), .B0(N320), .B1(N519));
AOI22XL inst_cellmath__63_0_I243 (.Y(inst_cellmath__63_0_out0[17]), .A0(N512), .A1(N325), .B0(N321), .B1(N519));
AOI22XL inst_cellmath__63_0_I244 (.Y(inst_cellmath__63_0_out0[18]), .A0(N512), .A1(N326), .B0(N322), .B1(N519));
AOI22XL inst_cellmath__63_0_I245 (.Y(inst_cellmath__63_0_out0[19]), .A0(N512), .A1(N327), .B0(N323), .B1(N519));
AOI22XL inst_cellmath__63_0_I246 (.Y(inst_cellmath__63_0_out0[20]), .A0(N512), .A1(N328), .B0(N324), .B1(N519));
AOI22XL inst_cellmath__63_0_I247 (.Y(inst_cellmath__63_0_out0[21]), .A0(N512), .A1(N329), .B0(N325), .B1(N519));
AOI22XL inst_cellmath__63_0_I248 (.Y(inst_cellmath__63_0_out0[22]), .A0(N512), .A1(N330), .B0(N326), .B1(N519));
AOI22XL inst_cellmath__63_0_I249 (.Y(inst_cellmath__63_0_out0[23]), .A0(N512), .A1(N331), .B0(N327), .B1(N519));
AOI22XL inst_cellmath__63_0_I250 (.Y(inst_cellmath__63_0_out0[24]), .A0(N512), .A1(N332), .B0(N328), .B1(N519));
endmodule

module cynw_cm_float_add2_inst_cellmath__61_0_bdw1137511134_bdw (
	inst_cellmath__61_0_out0,
	inst_cellmath__61_0_in0,
	inst_cellmath__61_0_in1,
	inst_cellmath__61_0_in2
	); /* architecture "gate_level" */ 
output [22:0] inst_cellmath__61_0_out0;
input  inst_cellmath__61_0_in0;
input [24:2] inst_cellmath__61_0_in1;
input  inst_cellmath__61_0_in2;
MX2XL inst_cellmath__61_0_I46 (.Y(inst_cellmath__61_0_out0[0]), .A(inst_cellmath__61_0_in1[2]), .B(inst_cellmath__61_0_in2), .S0(inst_cellmath__61_0_in0));
MX2XL inst_cellmath__61_0_I47 (.Y(inst_cellmath__61_0_out0[1]), .A(inst_cellmath__61_0_in1[3]), .B(inst_cellmath__61_0_in2), .S0(inst_cellmath__61_0_in0));
MX2XL inst_cellmath__61_0_I48 (.Y(inst_cellmath__61_0_out0[2]), .A(inst_cellmath__61_0_in1[4]), .B(inst_cellmath__61_0_in2), .S0(inst_cellmath__61_0_in0));
MX2XL inst_cellmath__61_0_I49 (.Y(inst_cellmath__61_0_out0[3]), .A(inst_cellmath__61_0_in1[5]), .B(inst_cellmath__61_0_in2), .S0(inst_cellmath__61_0_in0));
MX2XL inst_cellmath__61_0_I50 (.Y(inst_cellmath__61_0_out0[4]), .A(inst_cellmath__61_0_in1[6]), .B(inst_cellmath__61_0_in2), .S0(inst_cellmath__61_0_in0));
MX2XL inst_cellmath__61_0_I51 (.Y(inst_cellmath__61_0_out0[5]), .A(inst_cellmath__61_0_in1[7]), .B(inst_cellmath__61_0_in2), .S0(inst_cellmath__61_0_in0));
MX2XL inst_cellmath__61_0_I52 (.Y(inst_cellmath__61_0_out0[6]), .A(inst_cellmath__61_0_in1[8]), .B(inst_cellmath__61_0_in2), .S0(inst_cellmath__61_0_in0));
MX2XL inst_cellmath__61_0_I53 (.Y(inst_cellmath__61_0_out0[7]), .A(inst_cellmath__61_0_in1[9]), .B(inst_cellmath__61_0_in2), .S0(inst_cellmath__61_0_in0));
MX2XL inst_cellmath__61_0_I54 (.Y(inst_cellmath__61_0_out0[8]), .A(inst_cellmath__61_0_in1[10]), .B(inst_cellmath__61_0_in2), .S0(inst_cellmath__61_0_in0));
MX2XL inst_cellmath__61_0_I55 (.Y(inst_cellmath__61_0_out0[9]), .A(inst_cellmath__61_0_in1[11]), .B(inst_cellmath__61_0_in2), .S0(inst_cellmath__61_0_in0));
MX2XL inst_cellmath__61_0_I56 (.Y(inst_cellmath__61_0_out0[10]), .A(inst_cellmath__61_0_in1[12]), .B(inst_cellmath__61_0_in2), .S0(inst_cellmath__61_0_in0));
MX2XL inst_cellmath__61_0_I57 (.Y(inst_cellmath__61_0_out0[11]), .A(inst_cellmath__61_0_in1[13]), .B(inst_cellmath__61_0_in2), .S0(inst_cellmath__61_0_in0));
MX2XL inst_cellmath__61_0_I58 (.Y(inst_cellmath__61_0_out0[12]), .A(inst_cellmath__61_0_in1[14]), .B(inst_cellmath__61_0_in2), .S0(inst_cellmath__61_0_in0));
MX2XL inst_cellmath__61_0_I59 (.Y(inst_cellmath__61_0_out0[13]), .A(inst_cellmath__61_0_in1[15]), .B(inst_cellmath__61_0_in2), .S0(inst_cellmath__61_0_in0));
MX2XL inst_cellmath__61_0_I60 (.Y(inst_cellmath__61_0_out0[14]), .A(inst_cellmath__61_0_in1[16]), .B(inst_cellmath__61_0_in2), .S0(inst_cellmath__61_0_in0));
MX2XL inst_cellmath__61_0_I61 (.Y(inst_cellmath__61_0_out0[15]), .A(inst_cellmath__61_0_in1[17]), .B(inst_cellmath__61_0_in2), .S0(inst_cellmath__61_0_in0));
MX2XL inst_cellmath__61_0_I62 (.Y(inst_cellmath__61_0_out0[16]), .A(inst_cellmath__61_0_in1[18]), .B(inst_cellmath__61_0_in2), .S0(inst_cellmath__61_0_in0));
MX2XL inst_cellmath__61_0_I63 (.Y(inst_cellmath__61_0_out0[17]), .A(inst_cellmath__61_0_in1[19]), .B(inst_cellmath__61_0_in2), .S0(inst_cellmath__61_0_in0));
MX2XL inst_cellmath__61_0_I64 (.Y(inst_cellmath__61_0_out0[18]), .A(inst_cellmath__61_0_in1[20]), .B(inst_cellmath__61_0_in2), .S0(inst_cellmath__61_0_in0));
MX2XL inst_cellmath__61_0_I65 (.Y(inst_cellmath__61_0_out0[19]), .A(inst_cellmath__61_0_in1[21]), .B(inst_cellmath__61_0_in2), .S0(inst_cellmath__61_0_in0));
MX2XL inst_cellmath__61_0_I66 (.Y(inst_cellmath__61_0_out0[20]), .A(inst_cellmath__61_0_in1[22]), .B(inst_cellmath__61_0_in2), .S0(inst_cellmath__61_0_in0));
MX2XL inst_cellmath__61_0_I67 (.Y(inst_cellmath__61_0_out0[21]), .A(inst_cellmath__61_0_in1[23]), .B(inst_cellmath__61_0_in2), .S0(inst_cellmath__61_0_in0));
MX2XL inst_cellmath__61_0_I68 (.Y(inst_cellmath__61_0_out0[22]), .A(inst_cellmath__61_0_in1[24]), .B(inst_cellmath__61_0_in2), .S0(inst_cellmath__61_0_in0));
endmodule

/* CADENCE  urT5Tw7YrBo= : u9/ySgnWtBlWxVPRXgAZ4Og= ** DO NOT EDIT THIS LINE **/




module DFT_compute_cynw_cm_float_add2_E8_M23_2( a_sign, a_exp, a_man, b_sign, b_exp, b_man, x, aclk, astall );
input a_sign;
input [7:0] a_exp;
input [22:0] a_man;
input b_sign;
input [7:0] b_exp;
input [22:0] b_man;
output [31:0] x;
wire[31:0] x_wire;
input aclk;
input astall;
cynw_cm_float_add2_inst_cellmath__61_0_bdw1137511134_bdw cynw_cm_float_add2_inst_cellmath__61_0_bdw3670301540_bdw_inst( .a_sign(a_sign), .a_exp(a_exp), .a_man(a_man), .b_sign(b_sign), .b_exp(b_exp), .b_man(b_man), .x(x_wire));
reg [31:0] x_reg_0;
/* $A : movable_reg */
always @(posedge aclk) begin
    if ( !astall) x_reg_0 <= x_wire;
end
/* $A : movable_reg = reset */
assign x = x_reg_0;
endmodule


