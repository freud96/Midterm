/********************/
state0:;
goto state1;
/********************/
state1:;
goto state2;
/********************/
state2:;
/*HLS_DEFINE_PROTOCOL("main_reset");*//* 27ULL */
i_real_m_busy_req_0 = 1ULL;
i_real_m_stalling = 0ULL;
/*HLS_SET_OUTPUT_OPTIONS(i_real_m_stalling, 11ULL);*//* 30ULL */
o_dft_real_m_req_m_trig_req = 0ULL;
o_dft_imag_m_req_m_trig_req = 0ULL;
goto state3;
/********************/
state3:;
/*HLS_DEFINE_PROTOCOL("main_reset");*//* 27ULL */
wait( 1LL ); // cycle_id 1
goto state4;
/********************/
state4:;
(temp_imag_value)[((/*imp*/sc_uint<1> )(0ULL))] = 0LL;
(temp_real_value)[((/*imp*/sc_uint<1> )(0ULL))] = 0LL;
j = 0ULL;
goto state5;
/********************/
state5:;
/*HLS_DEFINE_PROTOCOL("input");*//* 42ULL */
/*HLS_SET_OUTPUT_OPTIONS(i_real_m_busy_req_0, 0ULL);*//* 45ULL */
i_real_m_busy_req_0 = 0ULL;
/*HLS_SET_OUTPUT_OPTIONS(i_real_m_use_stall_reg_ip, 4ULL);*//* 50ULL */
goto state6;
/********************/
state6:;
/*HLS_DEFINE_STALL_LOOP(ALL,4096ULL, "get", (long long)0x0ULL);*//* 53ULL */
/*HLS_DEFINE_PROTOCOL("input");*//* 42ULL */
goto state7;
/********************/
state7:;
/*HLS_DEFINE_STALL_LOOP(ALL,4096ULL, "get", (long long)0x0ULL);*//* 53ULL */
/*HLS_DEFINE_PROTOCOL("input");*//* 42ULL */
wait( 1LL ); // cycle_id 2
stall0 = i_real_m_data_is_invalid;
goto state8;
/********************/
state8:;
/*HLS_DEFINE_PROTOCOL("input");*//* 42ULL */
/*HLS_SET_STALL_LOCAL(i_real_m_stalling, 1LL, 0ULL, (long long)0x0ULL, 
(long long)0x0ULL);*//* 56ULL */
i_real_m_busy_req_0 = 1ULL;
goto state9;
/********************/
state9:;
/*HLS_DEFINE_PROTOCOL("input");*//* 42ULL */
/*HLS_SET_INPUT_DELAY(i_real_data_value, -1.000000);*//* 279ULL */
goto state10;
/********************/
state10:;
/*HLS_DEFINE_PROTOCOL("input");*//* 42ULL */
$$g$$n$$$990_value = i_real_data_value;
(temp_real_value)[((/*imp*/sc_uint<3> )(j))] = $$g$$n$$$990_value;
goto state11;
/********************/
state11:;
/*HLS_DEFINE_PROTOCOL("input");*//* 42ULL */
wait( 1LL ); // cycle_id 3
j = (j + 1ULL);
switch( (sc_uint<1>)(j.range(3,3)) ) {
case 0ULL: 
  goto state5;
default:
  goto state12;
}
/********************/
state12:;
bi = 0ULL;
goto state13;
/********************/
state13:;
goto state14;
/********************/
state14:;
/*HLS_CONSTRAIN_LATENCY(0LL, 1LL, "lat00");*//* 61ULL */
goto state15;
/********************/
state15:;
/*HLS_CONSTRAIN_LATENCY(0LL, 1LL, "lat00");*//* 346ULL */
goto state16;
/********************/
state16:;
/*HLS_CONSTRAIN_LATENCY(0LL, 1LL, "lat00");*//* 347ULL */
$$b$$$717 = ( (sc_uint<4> )(sc_bv<4>)((sc_bv<3>)((sc_bv<2>)((sc_bv<1>)(0ULL), 
            (sc_bv<1>)(bi.range(0,0))), 
            (sc_bv<1>)(bi.range(1,1))), 
            (sc_bv<1>)(bi.range(2,2))) );
goto state17;
/********************/
state17:;
amtmp001 = (/*imp*/sc_uint<1>)(((/*imp*/sc_uint<3> )(bi)) < $$b$$$717);
btemp_value = /*Enable*/(amtmp001?(sc_int<32> )(temp_real_value)[((/*imp*/
              sc_uint<3> )(bi))]:(sc_int<32> )0ULL);
if /*guard*/( amtmp001 ) /*Enable*/if (amtmp001) (temp_real_value)[((/*imp*/
sc_uint<3> )(bi))] = (sc_int<32> )(/*Enable*/(amtmp001?(sc_int<32> )(
                     temp_real_value)[((/*imp*/sc_uint<3> )($$b$$$717))]:(
                     sc_int<32> )0ULL));
if /*guard*/( amtmp001 ) /*Enable*/if (amtmp001) (temp_real_value)[((/*imp*/
sc_uint<3> )($$b$$$717))] = btemp_value;
btemp1_value = /*Enable*/(amtmp001?(sc_int<32> )(temp_imag_value)[((/*imp*/
               sc_uint<3> )(bi))]:(sc_int<32> )0ULL);
if /*guard*/( amtmp001 ) /*Enable*/if (amtmp001) (temp_imag_value)[((/*imp*/
sc_uint<3> )(bi))] = /*Enable*/(amtmp001?(sc_int<32> )(temp_imag_value)[
                     ((/*imp*/sc_uint<3> )($$b$$$717))]:(sc_int<32> )0ULL);
if /*guard*/( amtmp001 ) /*Enable*/if (amtmp001) (temp_imag_value)[((/*imp*/
sc_uint<3> )($$b$$$717))] = btemp1_value;
bi = (bi + 1ULL);
switch( (sc_uint<1>)(bi.range(3,3)) ) {
case 0ULL: 
  goto state13;
default:
  goto state18;
}
/********************/
state18:;
fstage = 1ULL;
goto state19;
/********************/
state19:;
fDFTpts = (sc_uint<8> )(( (sc_int<2> )(1LL) << (sc_uint<2> )fstage ));
fnumBF = (/*cliff*/sc_uint<32>)(( ((sc_uint<8> )( fDFTpts )<0)/*SIGN*/ & 
         ((/*imp*/sc_uint<1> ) fDFTpts.range(0,0)) ) + fDFTpts.range(7,1));
fj = 0ULL;
switch( (sc_uint<8>)(fnumBF) ) {
case 0ULL: 
  goto state30;
default:
  goto state20;
}
/********************/
state20:;
/*HLS_MESSAGE(2843LL);*//* 64ULL */
fc = cos((long long)0x0ULL);
/*HLS_MESSAGE(2843LL);*//* 65ULL */
fs = sin((long long)0x0ULL);
goto state21;
/********************/
state21:;
fi = fj;
switch( (sc_uint<5>)(fj.range(7,3)) ) {
case 0ULL: 
  goto state22;
default:
  goto state29;
}
/********************/
state22:;
fi_lower = (fi + fnumBF);
fcccbits = /* reinterpret */( fc );
fcccmant = ((/*imp*/sc_uint<52> ) fcccbits.range(51,0)) | 4503599627370496ULL;
fcccF1 = (/*cliff*/sc_int<32>)(sc_int<13> )(( ((/*imp*/sc_uint<11> ) fcccbits
         .range(62,52)) - 1023LL )) - 52LL;
fcccmantSliceLSB = (/*cliff*/sc_int<32>)-34LL - fcccF1;
$$f$$c$$c$$c$$$1186 = (((sc_int<15> )( fcccmantSliceLSB )<0)/*SIGN*/ ? (
                      sc_int<7> )
                        (0LL) : (sc_int<7> )
                        (fcccmantSliceLSB));
fcccmt1_i0 = (/*cliff*/sc_int<32>)34LL - fcccF1;
fcccresult = ((/*imp*/sc_uint<1>)(fcccmantSliceLSB > ((/*imp*/sc_int<7> )(52LL))
             ) | ((sc_int<15> )( (/*cliff*/sc_int<32>)34LL - fcccF1 )<0)/*SIGN*/
              ? (sc_bigint<54> )
               (sc_bigint<1>(0LL)) : (sc_bigint<54> )
               ((sc_int<54> )(( (sc_uint<53> )((sc_uint<53> )fcccmant) >> (
                sc_uint<6> )$$f$$c$$c$$c$$$1186 & ( (sc_int<2> )(1LL) << (
                sc_uint<6> )(( (/*cliff*/sc_int<32>)(( (/*cliff*/sc_int<32>)(
                (/*imp*/sc_uint<1>)(((/*imp*/sc_int<7> )(52LL)) < fcccmt1_i0)
                 ? (sc_uint<6> )
                  (52ULL) : (sc_uint<6> )
                  ((sc_uint<6> )fcccmt1_i0)) - $$f$$c$$c$$c$$$1186 ) + 1ULL) ))
                 ) - 1LL ))));
amtmp032 = (/*imp*/sc_uint<1>)(fcccmantSliceLSB > ((/*imp*/sc_int<1> )(0LL)));
fcccresult_u0 = (sc_bigint<66> ) (((/*imp*/sc_biguint<66> ) ((sc_bigint<66> )((
                amtmp032 & ( (/*imp*/sc_uint<1>)(fcccmantSliceLSB > ((/*imp*/
                sc_int<7> )(52LL))) | ((sc_uint<54>)( (sc_int<54> )(( (
                sc_uint<53> )fcccmant & ( (sc_int<2> )(1LL) << (sc_uint<6> )
                fcccmantSliceLSB ) - 1LL )) )).or_reduce() ) ? (sc_bigint<66> )
                  ((sc_bigint<54> )fcccresult | sc_bigint<2>(1LL)) : (
                sc_bigint<66> )
                  ((amtmp032 ? (sc_bigint<66> )
                     ((sc_bigint<54> )fcccresult) : (sc_bigint<66> )
                     ((sc_bigint<54> )(fcccresult) << (/*cliff*/sc_int<32>)((
                      sc_int<16> ) - fcccmantSliceLSB))))))).range(65,0)));
goto state23;
/********************/
state23:;
/*HLS_MESSAGE(2980LL);*//* 66ULL */
fcccbits_i0 = /* reinterpret */( fs );
fcccmant_i0 = ((/*imp*/sc_uint<52> ) fcccbits_i0.range(51,0)) | 
              4503599627370496ULL;
fcccF1_i0 = (/*cliff*/sc_int<32>)(sc_int<13> )(( ((/*imp*/sc_uint<11> ) 
            fcccbits_i0.range(62,52)) - 1023LL )) - 52LL;
fcccmantSliceLSB_i0 = (/*cliff*/sc_int<32>)-34LL - fcccF1_i0;
$$f$$c$$c$$c$$$1186_i0 = (((sc_int<15> )( fcccmantSliceLSB_i0 )<0)/*SIGN*/ ? (
                         sc_int<7> )
                           (0LL) : (sc_int<7> )
                           (fcccmantSliceLSB_i0));
fcccmt1_i0_i0 = (/*cliff*/sc_int<32>)34LL - fcccF1_i0;
fcccresult_i0 = ((/*imp*/sc_uint<1>)(fcccmantSliceLSB_i0 > ((/*imp*/sc_int<7> )(
                52LL))) | ((sc_int<15> )( (/*cliff*/sc_int<32>)34LL - fcccF1_i0
                 )<0)/*SIGN*/ ? (sc_bigint<54> )
                  (sc_bigint<1>(0LL)) : (sc_bigint<54> )
                  ((sc_int<54> )(( (sc_uint<53> )((sc_uint<53> )fcccmant_i0) >> 
                   (sc_uint<6> )$$f$$c$$c$$c$$$1186_i0 & ( (sc_int<2> )(1LL) << 
                   (sc_uint<6> )(( (/*cliff*/sc_int<32>)(( (/*cliff*/sc_int<32>)
                   ((/*imp*/sc_uint<1>)(((/*imp*/sc_int<7> )(52LL)) < 
                   fcccmt1_i0_i0) ? (sc_uint<6> )
                     (52ULL) : (sc_uint<6> )
                     ((sc_uint<6> )fcccmt1_i0_i0)) - $$f$$c$$c$$c$$$1186_i0 ) + 
                   1ULL) )) ) - 1LL ))));
amtmp033 = (/*imp*/sc_uint<1>)(fcccmantSliceLSB_i0 > ((/*imp*/sc_int<1> )(0LL)))
;
fcccresult_i0_u0 = (sc_bigint<66> ) (((/*imp*/sc_biguint<66> ) ((sc_bigint<66> )
                   ((amtmp033 & ( (/*imp*/sc_uint<1>)(fcccmantSliceLSB_i0 > 
                   ((/*imp*/sc_int<7> )(52LL))) | ((sc_uint<54>)( (sc_int<54> )(
                   ( (sc_uint<53> )fcccmant_i0 & ( (sc_int<2> )(1LL) << (
                   sc_uint<6> )fcccmantSliceLSB_i0 ) - 1LL )) )).or_reduce() )
                    ? (sc_bigint<66> )
                     ((sc_bigint<54> )fcccresult_i0 | sc_bigint<2>(1LL)) : (
                   sc_bigint<66> )
                     ((amtmp033 ? (sc_bigint<66> )
                        ((sc_bigint<54> )fcccresult_i0) : (sc_bigint<66> )
                        ((sc_bigint<54> )(fcccresult_i0) << 
                         (/*cliff*/sc_int<32>)((sc_int<16> ) - 
                         fcccmantSliceLSB_i0))))))).range(65,0)));
goto state24;
/********************/
state24:;
/*HLS_MESSAGE(2980LL);*//* 67ULL */
_com0 = (temp_imag_value)[fi_lower];
_com1 = (temp_real_value)[fi_lower];
$$f$$$724_value = (sc_bigint<96> )(( _com1 * (sc_int<64> )((((sc_uint<63>)( 
                  ((/*imp*/sc_uint<63> ) fcccbits.range(62,0)) )).or_reduce()
                   ? (sc_int<64> )
                    (((/*imp*/sc_bigint<64> ) ((((/*imp*/sc_uint<1> ) fcccbits
                     .range(63,63)) ? (sc_bigint<66> )
                       (((sc_bigint<66> ) - fcccresult_u0)) : (sc_bigint<66> )
                       (fcccresult_u0))).range(65,2))) : (sc_int<64> )
                    (0LL))) )) - (sc_bigint<96> )(( _com0 * (sc_int<64> )((
                  ((sc_uint<63>)( ((/*imp*/sc_uint<63> ) fcccbits_i0.range(62,0)
                  ) )).or_reduce() ? (sc_int<64> )
                    (((/*imp*/sc_bigint<64> ) ((((/*imp*/sc_uint<1> ) 
                     fcccbits_i0.range(63,63)) ? (sc_bigint<66> )
                       (((sc_bigint<66> ) - fcccresult_i0_u0)) : (sc_bigint<66> 
                     )
                       (fcccresult_i0_u0))).range(65,2))) : (sc_int<64> )
                    (0LL))) ));
ftemp_R_value = ((/*imp*/sc_bigint<32> ) $$f$$$724_value.range(63,32));
goto state25;
/********************/
state25:;
ftemp_R_value_u0 = (!((/*imp*/sc_uint<1> ) $$f$$$724_value.range(63,63)) & 
                   ((sc_uint<33>)( ((/*imp*/sc_biguint<33> ) $$f$$$724_value
                   .range(96,64)) )).or_reduce() | ((/*imp*/sc_uint<1> ) 
                   $$f$$$724_value.range(63,63)) & !((sc_uint<33>)( ((/*imp*/
                   sc_biguint<33> ) $$f$$$724_value.range(96,64)) ))
                   .and_reduce() ? (sc_int<32> )
                     ((((/*imp*/sc_uint<1> ) $$f$$$724_value.range(96,96)) ? (
                      sc_int<32> )
                        (-2147483648LL) : (sc_int<32> )
                        (2147483647LL))) : (sc_int<32> )
                     ((ftemp_R_value + ((ftemp_R_value == 2147483647LL) ? (
                      sc_int<2> )
                        (0LL) : (sc_int<2> )
                        (((/*imp*/sc_uint<1> ) $$f$$$724_value.range(31,31)))))
                   ));
fcccbits_i1 = /* reinterpret */( fc );
fcccmant_i1 = ((/*imp*/sc_uint<52> ) fcccbits_i1.range(51,0)) | 
              4503599627370496ULL;
fcccF1_i1 = (/*cliff*/sc_int<32>)(sc_int<13> )(( ((/*imp*/sc_uint<11> ) 
            fcccbits_i1.range(62,52)) - 1023LL )) - 52LL;
fcccmantSliceLSB_i1 = (/*cliff*/sc_int<32>)-34LL - fcccF1_i1;
$$f$$c$$c$$c$$$1186_i1 = (((sc_int<15> )( fcccmantSliceLSB_i1 )<0)/*SIGN*/ ? (
                         sc_int<7> )
                           (0LL) : (sc_int<7> )
                           (fcccmantSliceLSB_i1));
fcccmt1_i0_i1 = (/*cliff*/sc_int<32>)34LL - fcccF1_i1;
fcccresult_i1 = ((/*imp*/sc_uint<1>)(fcccmantSliceLSB_i1 > ((/*imp*/sc_int<7> )(
                52LL))) | ((sc_int<15> )( (/*cliff*/sc_int<32>)34LL - fcccF1_i1
                 )<0)/*SIGN*/ ? (sc_bigint<54> )
                  (sc_bigint<1>(0LL)) : (sc_bigint<54> )
                  ((sc_int<54> )(( (sc_uint<53> )((sc_uint<53> )fcccmant_i1) >> 
                   (sc_uint<6> )$$f$$c$$c$$c$$$1186_i1 & ( (sc_int<2> )(1LL) << 
                   (sc_uint<6> )(( (/*cliff*/sc_int<32>)(( (/*cliff*/sc_int<32>)
                   ((/*imp*/sc_uint<1>)(((/*imp*/sc_int<7> )(52LL)) < 
                   fcccmt1_i0_i1) ? (sc_uint<6> )
                     (52ULL) : (sc_uint<6> )
                     ((sc_uint<6> )fcccmt1_i0_i1)) - $$f$$c$$c$$c$$$1186_i1 ) + 
                   1ULL) )) ) - 1LL ))));
amtmp034 = (/*imp*/sc_uint<1>)(fcccmantSliceLSB_i1 > ((/*imp*/sc_int<1> )(0LL)))
;
fcccresult_i1_u0 = (sc_bigint<66> ) (((/*imp*/sc_biguint<66> ) ((sc_bigint<66> )
                   ((amtmp034 & ( (/*imp*/sc_uint<1>)(fcccmantSliceLSB_i1 > 
                   ((/*imp*/sc_int<7> )(52LL))) | ((sc_uint<54>)( (sc_int<54> )(
                   ( (sc_uint<53> )fcccmant_i1 & ( (sc_int<2> )(1LL) << (
                   sc_uint<6> )fcccmantSliceLSB_i1 ) - 1LL )) )).or_reduce() )
                    ? (sc_bigint<66> )
                     ((sc_bigint<54> )fcccresult_i1 | sc_bigint<2>(1LL)) : (
                   sc_bigint<66> )
                     ((amtmp034 ? (sc_bigint<66> )
                        ((sc_bigint<54> )fcccresult_i1) : (sc_bigint<66> )
                        ((sc_bigint<54> )(fcccresult_i1) << 
                         (/*cliff*/sc_int<32>)((sc_int<16> ) - 
                         fcccmantSliceLSB_i1))))))).range(65,0)));
goto state26;
/********************/
state26:;
/*HLS_MESSAGE(2980LL);*//* 68ULL */
fcccbits_i2 = /* reinterpret */( fs );
fcccmant_i2 = ((/*imp*/sc_uint<52> ) fcccbits_i2.range(51,0)) | 
              4503599627370496ULL;
fcccF1_i2 = (/*cliff*/sc_int<32>)(sc_int<13> )(( ((/*imp*/sc_uint<11> ) 
            fcccbits_i2.range(62,52)) - 1023LL )) - 52LL;
fcccmantSliceLSB_i2 = (/*cliff*/sc_int<32>)-34LL - fcccF1_i2;
$$f$$c$$c$$c$$$1186_i2 = (((sc_int<15> )( fcccmantSliceLSB_i2 )<0)/*SIGN*/ ? (
                         sc_int<7> )
                           (0LL) : (sc_int<7> )
                           (fcccmantSliceLSB_i2));
fcccmt1_i0_i2 = (/*cliff*/sc_int<32>)34LL - fcccF1_i2;
fcccresult_i2 = ((/*imp*/sc_uint<1>)(fcccmantSliceLSB_i2 > ((/*imp*/sc_int<7> )(
                52LL))) | ((sc_int<15> )( (/*cliff*/sc_int<32>)34LL - fcccF1_i2
                 )<0)/*SIGN*/ ? (sc_bigint<54> )
                  (sc_bigint<1>(0LL)) : (sc_bigint<54> )
                  ((sc_int<54> )(( (sc_uint<53> )((sc_uint<53> )fcccmant_i2) >> 
                   (sc_uint<6> )$$f$$c$$c$$c$$$1186_i2 & ( (sc_int<2> )(1LL) << 
                   (sc_uint<6> )(( (/*cliff*/sc_int<32>)(( (/*cliff*/sc_int<32>)
                   ((/*imp*/sc_uint<1>)(((/*imp*/sc_int<7> )(52LL)) < 
                   fcccmt1_i0_i2) ? (sc_uint<6> )
                     (52ULL) : (sc_uint<6> )
                     ((sc_uint<6> )fcccmt1_i0_i2)) - $$f$$c$$c$$c$$$1186_i2 ) + 
                   1ULL) )) ) - 1LL ))));
amtmp035 = (/*imp*/sc_uint<1>)(fcccmantSliceLSB_i2 > ((/*imp*/sc_int<1> )(0LL)))
;
fcccresult_i2_u0 = (sc_bigint<66> ) (((/*imp*/sc_biguint<66> ) ((sc_bigint<66> )
                   ((amtmp035 & ( (/*imp*/sc_uint<1>)(fcccmantSliceLSB_i2 > 
                   ((/*imp*/sc_int<7> )(52LL))) | ((sc_uint<54>)( (sc_int<54> )(
                   ( (sc_uint<53> )fcccmant_i2 & ( (sc_int<2> )(1LL) << (
                   sc_uint<6> )fcccmantSliceLSB_i2 ) - 1LL )) )).or_reduce() )
                    ? (sc_bigint<66> )
                     ((sc_bigint<54> )fcccresult_i2 | sc_bigint<2>(1LL)) : (
                   sc_bigint<66> )
                     ((amtmp035 ? (sc_bigint<66> )
                        ((sc_bigint<54> )fcccresult_i2) : (sc_bigint<66> )
                        ((sc_bigint<54> )(fcccresult_i2) << 
                         (/*cliff*/sc_int<32>)((sc_int<16> ) - 
                         fcccmantSliceLSB_i2))))))).range(65,0)));
goto state27;
/********************/
state27:;
/*HLS_MESSAGE(2980LL);*//* 69ULL */
$$f$$$727_value = ((sc_bigint<96> )(( _com0 * (sc_int<64> )((((sc_uint<63>)( 
                  ((/*imp*/sc_uint<63> ) fcccbits_i1.range(62,0)) )).or_reduce()
                   ? (sc_int<64> )
                    (((/*imp*/sc_bigint<64> ) ((((/*imp*/sc_uint<1> ) 
                     fcccbits_i1.range(63,63)) ? (sc_bigint<66> )
                       (((sc_bigint<66> ) - fcccresult_i1_u0)) : (sc_bigint<66> 
                     )
                       (fcccresult_i1_u0))).range(65,2))) : (sc_int<64> )
                    (0LL))) )) + (sc_bigint<96> )(( _com1 * (sc_int<64> )((
                  ((sc_uint<63>)( ((/*imp*/sc_uint<63> ) fcccbits_i2.range(62,0)
                  ) )).or_reduce() ? (sc_int<64> )
                    (((/*imp*/sc_bigint<64> ) ((((/*imp*/sc_uint<1> ) 
                     fcccbits_i2.range(63,63)) ? (sc_bigint<66> )
                       (((sc_bigint<66> ) - fcccresult_i2_u0)) : (sc_bigint<66> 
                     )
                       (fcccresult_i2_u0))).range(65,2))) : (sc_int<64> )
                    (0LL))) )));
ftemp_I_value = ((/*imp*/sc_bigint<32> ) $$f$$$727_value.range(63,32));
goto state28;
/********************/
state28:;
ftemp_I_value_u0 = (!((/*imp*/sc_uint<1> ) $$f$$$727_value.range(63,63)) & 
                   ((sc_uint<33>)( ((/*imp*/sc_biguint<33> ) $$f$$$727_value
                   .range(96,64)) )).or_reduce() | ((/*imp*/sc_uint<1> ) 
                   $$f$$$727_value.range(63,63)) & !((sc_uint<33>)( ((/*imp*/
                   sc_biguint<33> ) $$f$$$727_value.range(96,64)) ))
                   .and_reduce() ? (sc_int<32> )
                     ((((/*imp*/sc_uint<1> ) $$f$$$727_value.range(96,96)) ? (
                      sc_int<32> )
                        (-2147483648LL) : (sc_int<32> )
                        (2147483647LL))) : (sc_int<32> )
                     ((ftemp_I_value + ((ftemp_I_value == 2147483647LL) ? (
                      sc_int<2> )
                        (0LL) : (sc_int<2> )
                        (((/*imp*/sc_uint<1> ) $$f$$$727_value.range(31,31)))))
                   ));
$$f$$$730_value = (sc_int<32> )((temp_real_value)[((/*imp*/sc_uint<3> )(fi))])
                   - ftemp_R_value_u0;
(temp_real_value)[fi_lower] = $$f$$$730_value;
amtmp022 = !((/*imp*/sc_uint<1> ) $$f$$$730_value.range(31,31)) & ((/*imp*/
           sc_uint<1> ) $$f$$$730_value.range(32,32)) | ((/*imp*/sc_uint<1> ) 
           $$f$$$730_value.range(31,31)) & !((/*imp*/sc_uint<1> ) 
           $$f$$$730_value.range(32,32));
if /*guard*/( amtmp022 ) /*Enable*/if (amtmp022) (temp_real_value)[fi_lower] = (((/*imp*/sc_uint<1> ) $$f$$$730_value.range(32
                                                                               ,32
                                                                               )
                                                                               ) ? (sc_int<32> 
                                                                               )
                                                                                 (
  -2147483648LL) : (sc_int<32> )
                                                                                 (
  2147483647LL));
$$f$$$731_value = (sc_int<32> )((temp_imag_value)[((/*imp*/sc_uint<3> )(fi))])
                   - ftemp_I_value_u0;
(temp_imag_value)[fi_lower] = $$f$$$731_value;
amtmp023 = !((/*imp*/sc_uint<1> ) $$f$$$731_value.range(31,31)) & ((/*imp*/
           sc_uint<1> ) $$f$$$731_value.range(32,32)) | ((/*imp*/sc_uint<1> ) 
           $$f$$$731_value.range(31,31)) & !((/*imp*/sc_uint<1> ) 
           $$f$$$731_value.range(32,32));
if /*guard*/( amtmp023 ) /*Enable*/if (amtmp023) (temp_imag_value)[fi_lower] = (((/*imp*/sc_uint<1> ) $$f$$$731_value.range(32
                                                                               ,32
                                                                               )
                                                                               ) ? (sc_int<32> 
                                                                               )
                                                                                 (
  -2147483648LL) : (sc_int<32> )
                                                                                 (
  2147483647LL));
$$f$$$732_value = ((sc_int<32> )((temp_real_value)[((/*imp*/sc_uint<3> )(fi))])
                   + ftemp_R_value_u0);
(temp_real_value)[((/*imp*/sc_uint<3> )(fi))] = $$f$$$732_value;
amtmp024 = !((/*imp*/sc_uint<1> ) $$f$$$732_value.range(31,31)) & ((/*imp*/
           sc_uint<1> ) $$f$$$732_value.range(32,32)) | ((/*imp*/sc_uint<1> ) 
           $$f$$$732_value.range(31,31)) & !((/*imp*/sc_uint<1> ) 
           $$f$$$732_value.range(32,32));
if /*guard*/( amtmp024 ) /*Enable*/if (amtmp024) (temp_real_value)[((/*imp*/
sc_uint<3> )(fi))] = (((/*imp*/sc_uint<1> ) $$f$$$732_value.range(32,32)) ? (
                     sc_int<32> )
                       (-2147483648LL) : (sc_int<32> )
                       (2147483647LL));
$$f$$$733_value = ((sc_int<32> )((temp_imag_value)[((/*imp*/sc_uint<3> )(fi))])
                   + ftemp_I_value_u0);
(temp_imag_value)[((/*imp*/sc_uint<3> )(fi))] = $$f$$$733_value;
amtmp025 = !((/*imp*/sc_uint<1> ) $$f$$$733_value.range(31,31)) & ((/*imp*/
           sc_uint<1> ) $$f$$$733_value.range(32,32)) | ((/*imp*/sc_uint<1> ) 
           $$f$$$733_value.range(31,31)) & !((/*imp*/sc_uint<1> ) 
           $$f$$$733_value.range(32,32));
if /*guard*/( amtmp025 ) /*Enable*/if (amtmp025) (temp_imag_value)[((/*imp*/
sc_uint<3> )(fi))] = (((/*imp*/sc_uint<1> ) $$f$$$733_value.range(32,32)) ? (
                     sc_int<32> )
                       (-2147483648LL) : (sc_int<32> )
                       (2147483647LL));
fi = (fi + (sc_uint<8> )fDFTpts);
switch( (sc_uint<5>)(fi.range(7,3)) ) {
case 0ULL: 
  goto state22;
default:
  goto state29;
}
/********************/
state29:;
fj = (fj + 1ULL);
switch( (sc_uint<1>)((/*imp*/sc_uint<1>)(fj < fnumBF)) ) {
case 0ULL: 
  goto state30;
case 1ULL: 
  goto state20;
}
/********************/
state30:;
fstage = (/*cliff*/sc_uint<32>)(fstage + 1ULL);
switch( (sc_uint<1>)((/*imp*/sc_uint<1>)((sc_int<4> )((sc_uint<3> )fstage) <= 
        ((/*imp*/sc_int<3> )(3LL)))) ) {
case 0ULL: 
  goto state31;
case 1ULL: 
  goto state19;
}
/********************/
state31:;
wait( 1LL ); // cycle_id 0
goto state32;
/********************/
state32:;
wait( 1LL ); // cycle_id 0
goto state33;
/********************/
state33:;
wait( 1LL ); // cycle_id 0
goto state34;
/********************/
state34:;
wait( 1LL ); // cycle_id 0
goto state35;
/********************/
state35:;
wait( 1LL ); // cycle_id 0
goto state36;
/********************/
state36:;
wait( 1LL ); // cycle_id 0
goto state37;
/********************/
state37:;
wait( 1LL ); // cycle_id 0
goto state38;
/********************/
state38:;
wait( 1LL ); // cycle_id 0
goto state39;
/********************/
state39:;
wait( 1LL ); // cycle_id 0
goto state40;
/********************/
state40:;
wait( 1LL ); // cycle_id 0
j_u0 = 0ULL;
goto state41;
/********************/
state41:;
/*HLS_DEFINE_PROTOCOL("output");*//* 70ULL */
goto state42;
/********************/
state42:;
/*HLS_DEFINE_PROTOCOL("output");*//* 70ULL */
wait( 1LL ); // cycle_id 4
goto state43;
/********************/
state43:;
/*HLS_DEFINE_PROTOCOL("output");*//* 70ULL */
wait( 1LL ); // cycle_id 5
goto state44;
/********************/
state44:;
/*HLS_DEFINE_PROTOCOL("output");*//* 70ULL */
wait( 1LL ); // cycle_id 6
goto state45;
/********************/
state45:;
/*HLS_DEFINE_PROTOCOL("output");*//* 70ULL */
wait( 1LL ); // cycle_id 7
goto state46;
/********************/
state46:;
/*HLS_DEFINE_PROTOCOL("output");*//* 70ULL */
wait( 1LL ); // cycle_id 8
goto state47;
/********************/
state47:;
/*HLS_DEFINE_PROTOCOL("output");*//* 70ULL */
wait( 1LL ); // cycle_id 9
goto state48;
/********************/
state48:;
/*HLS_DEFINE_PROTOCOL("output");*//* 70ULL */
wait( 1LL ); // cycle_id 10
goto state49;
/********************/
state49:;
/*HLS_DEFINE_PROTOCOL("output");*//* 70ULL */
wait( 1LL ); // cycle_id 11
goto state50;
/********************/
state50:;
/*HLS_DEFINE_PROTOCOL("output");*//* 70ULL */
wait( 1LL ); // cycle_id 12
goto state51;
/********************/
state51:;
/*HLS_DEFINE_PROTOCOL("output");*//* 70ULL */
wait( 1LL ); // cycle_id 13
o_dft_real_data_value = (temp_real_value)[((/*imp*/sc_uint<3> )(j_u0))];
/*HLS_SET_OUTPUT_OPTIONS(o_dft_real_m_req_m_trig_req, 0ULL);*//* 79ULL */
o_dft_real_m_req_m_trig_req = o_dft_real_m_req_m_next_trig_req;
/*HLS_SET_OUTPUT_OPTIONS(o_dft_real_data_value, 2ULL);*//* 284ULL */
goto state52;
/********************/
state52:;
/*HLS_DEFINE_STALL_LOOP(ALL,4096ULL, "put", (long long)0x0ULL);*//* 81ULL */
/*HLS_DEFINE_PROTOCOL("output");*//* 70ULL */
goto state53;
/********************/
state53:;
/*HLS_DEFINE_STALL_LOOP(ALL,4096ULL, "put", (long long)0x0ULL);*//* 81ULL */
/*HLS_DEFINE_PROTOCOL("output");*//* 70ULL */
wait( 1LL ); // cycle_id 14
stall0 = o_dft_real_m_stalling;
goto state54;
/********************/
state54:;
/*HLS_DEFINE_PROTOCOL("output");*//* 70ULL */
o_dft_imag_data_value = (temp_imag_value)[((/*imp*/sc_uint<3> )(j_u0))];
/*HLS_SET_OUTPUT_OPTIONS(o_dft_imag_m_req_m_trig_req, 0ULL);*//* 90ULL */
o_dft_imag_m_req_m_trig_req = o_dft_imag_m_req_m_next_trig_req;
/*HLS_SET_OUTPUT_OPTIONS(o_dft_imag_data_value, 2ULL);*//* 289ULL */
goto state55;
/********************/
state55:;
/*HLS_DEFINE_STALL_LOOP(ALL,4096ULL, "put", (long long)0x0ULL);*//* 92ULL */
/*HLS_DEFINE_PROTOCOL("output");*//* 70ULL */
goto state56;
/********************/
state56:;
/*HLS_DEFINE_STALL_LOOP(ALL,4096ULL, "put", (long long)0x0ULL);*//* 92ULL */
/*HLS_DEFINE_PROTOCOL("output");*//* 70ULL */
wait( 1LL ); // cycle_id 15
stall0 = o_dft_imag_m_stalling;
goto state57;
/********************/
state57:;
/*HLS_DEFINE_PROTOCOL("output");*//* 70ULL */
j_u0 = (j_u0 + 1ULL);
switch( (sc_uint<1>)(j_u0.range(3,3)) ) {
case 0ULL: 
  goto state41;
default:
  goto state58;
}
/********************/
state58:;
(temp_real_value)[((/*imp*/sc_uint<1> )(0ULL))] = 0LL;
(temp_imag_value)[((/*imp*/sc_uint<1> )(0ULL))] = 0LL;
(temp_real_value)[((/*imp*/sc_uint<1> )(1ULL))] = 0LL;
(temp_imag_value)[((/*imp*/sc_uint<1> )(1ULL))] = 0LL;
(temp_real_value)[((/*imp*/sc_uint<2> )(2ULL))] = 0LL;
(temp_imag_value)[((/*imp*/sc_uint<2> )(2ULL))] = 0LL;
(temp_real_value)[((/*imp*/sc_uint<2> )(3ULL))] = 0LL;
(temp_imag_value)[((/*imp*/sc_uint<2> )(3ULL))] = 0LL;
(temp_real_value)[((/*imp*/sc_uint<3> )(4ULL))] = 0LL;
(temp_imag_value)[((/*imp*/sc_uint<3> )(4ULL))] = 0LL;
(temp_real_value)[((/*imp*/sc_uint<3> )(5ULL))] = 0LL;
(temp_imag_value)[((/*imp*/sc_uint<3> )(5ULL))] = 0LL;
(temp_real_value)[((/*imp*/sc_uint<3> )(6ULL))] = 0LL;
(temp_imag_value)[((/*imp*/sc_uint<3> )(6ULL))] = 0LL;
(temp_real_value)[((/*imp*/sc_uint<3> )(7ULL))] = 0LL;
(temp_imag_value)[((/*imp*/sc_uint<3> )(7ULL))] = 0LL;
goto state4;
