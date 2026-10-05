/* Address: 0x1400b5460 | Name: sub_1400B5460 | Size: 2561 bytes */
__int64 __fastcall sub_1400B5460(unsigned int a1, int a2)
{
  float v2; // xmm11_4
  float v3; // xmm9_4
  float v4; // xmm7_4
  __int64 v7; // rsi
  __int64 v8; // r14
  __int64 v9; // r15
  float v10; // xmm10_4
  float v11; // xmm8_4
  float v12; // xmm6_4
  float v13; // xmm1_4
  float v14; // xmm1_4
  BOOL v15; // ecx
  unsigned int v16; // xmm7_4
  unsigned int v17; // xmm8_4
  unsigned int v18; // xmm10_4
  unsigned int *v19; // rax
  float v20; // xmm6_4
  signed int v21; // edi
  __int64 v22; // rbx
  float v23; // xmm6_4
  __int64 v24; // r12
  float v25; // xmm0_4
  unsigned int v26; // eax
  float v27; // xmm1_4
  float v28; // xmm1_4
  unsigned int v29; // eax
  unsigned int v30; // ecx
  unsigned int v31; // xmm0_4
  int v32; // eax
  float *v33; // r14
  float v34; // xmm13_4
  float v35; // xmm4_4
  float v36; // xmm5_4
  float v37; // xmm12_4
  float v38; // xmm4_4
  float v39; // xmm5_4
  float v40; // xmm12_4
  float v41; // xmm7_4
  float v42; // xmm6_4
  float v43; // xmm8_4
  float v44; // xmm3_4
  float v45; // xmm4_4
  float v46; // xmm7_4
  float v47; // xmm6_4
  float v48; // xmm8_4
  double v49; // xmm0_8
  float v50; // xmm1_4
  float v51; // xmm7_4
  float v52; // xmm6_4
  float v53; // xmm8_4
  float v54; // xmm3_4
  float v55; // xmm0_4
  float v56; // xmm7_4
  float v57; // xmm6_4
  float v58; // xmm8_4
  float v59; // xmm3_4
  float v60; // xmm0_4
  unsigned int v61; // xmm2_4
  float v62; // xmm1_4
  float v63; // xmm6_4
  float v64; // xmm8_4
  bool v65; // zf
  float v66; // xmm12_4
  float v67; // xmm11_4
  float v68; // xmm0_4
  unsigned int v69; // xmm11_4
  float v70; // xmm12_4
  float v71; // xmm0_4
  float v72; // xmm11_4
  float v73; // xmm2_4
  __int64 v75; // [rsp+8h] [rbp-D9h] BYREF
  __m128 v76[2]; // [rsp+28h] [rbp-B9h] BYREF
  int v77; // [rsp+48h] [rbp-99h]
  float v78; // [rsp+50h] [rbp-91h] BYREF
  float v79; // [rsp+54h] [rbp-8Dh]
  float v80; // [rsp+58h] [rbp-89h]
  float v81; // [rsp+5Ch] [rbp-85h]
  __int128 v82; // [rsp+60h] [rbp-81h]

  v2 = *(float *)&dword_1402F6188;
  v3 = *(float *)&dword_1402F618C;
  v4 = *(float *)&dword_1402F6190;
  v7 = 7166LL * (int)a1;
  v8 = 234LL * (a2 + 4);
  v9 = v7 * 4 + 220LL * a2;
  v10 = *(float *)&dword_140404A6C[v8 + 280651440 + v7];
  v11 = *(float *)&dword_140404A6C[v8 + 280651441 + v7];
  v12 = *(float *)&dword_140404A6C[v8 + 280651442 + v7];
  v78 = (float)(*(float *)&dword_1402F6188 * 0.375) + v10;
  v79 = (float)(*(float *)&dword_1402F618C * 0.375) + v11;
  v80 = (float)(*(float *)&dword_1402F6190 * 0.375) + v12;
  v13 = sin(*(float *)((char *)&dword_140404A6C[280658055] + v9)) * 0.1875;
  v14 = v13 - 0.03125;
  v76[0].m128_f32[0] = (float)(v2 * v14) + v10;
  v76[0].m128_f32[1] = (float)(v3 * v14) + v11;
  v76[0].m128_f32[2] = (float)(v4 * v14) + v12;
  v15 = sub_1400B91E0(a1, &v78, v76) != 0;
  if ( *(float *)&dword_140404A6C[v7 + 280651378 + v8] >= 0.0 && v15 )
  {
    v16 = dword_1402F6188;
    v17 = dword_1402F618C;
    v18 = dword_1402F6190;
    v19 = &dword_140404A6C[486149253];
    v20 = *(float *)&dword_140404A6C[73006982];
    v21 = 0;
    dword_140404A6C[73006984] = dword_1402F6188;
    dword_140404A6C[73006985] = dword_1402F618C;
    dword_140404A6C[73006986] = dword_1402F6190;
    *(unsigned int *)((char *)&dword_140404A6C[280658054] + v9) = dword_140404A6C[73006982];
    while ( *v19 )
    {
      ++v21;
      v19 += 61;
      if ( (__int64)v19 >= (__int64)&dword_140404A6C[487148677] )
        return MEMORY[0x1401F8B20]((unsigned __int64)&v75 ^ v82);
    }
    if ( v21 != -1 )
    {
      v22 = 61LL * v21;
      MEMORY[0x1401FCD30](&dword_140404A6C[v22 + 486149254], 0, 240);
      v23 = v20 - v76[0].m128_f32[1];
      v24 = v8 * 4 + v7 * 4;
      v25 = *(float *)&dword_140404A6C[73006983] - v76[0].m128_f32[2];
      v26 = dword_140404A6C[v8 + 280651439 + v7];
      v27 = (float)(*(float *)&dword_140404A6C[73006981] - v76[0].m128_f32[0]) * *(float *)&v16;
      dword_140404A6C[v22 + 486149253] = 1;
      dword_140404A6C[v22 + 486149254] = 9;
      dword_140404A6C[v22 + 486149256] = 0;
      dword_140404A6C[v22 + 486149291] = v26;
      v28 = (float)(v27 + (float)(v23 * *(float *)&v17)) + (float)(v25 * *(float *)&v18);
      if ( v28 >= 0.0625 )
        v28 = 0.0625;
      v29 = dword_140404A6C[v7 + 280657986];
      v30 = dword_140404A6C[v7 + 280651325];
      *(float *)&v31 = *(float *)((char *)&dword_140404A6C[280651479] + v24)
                     + *(float *)((char *)&dword_140404A6C[280651479] + v24);
      *(float *)&dword_140404A6C[v22 + 486149278] = v28;
      dword_140404A6C[v22 + 486149281] = 1056964608;
      dword_140404A6C[v22 + 486149282] = 1056964608;
      dword_140404A6C[v22 + 486149257] = 0;
      dword_140404A6C[v22 + 486149283] = v16;
      dword_140404A6C[v22 + 486149284] = v17;
      dword_140404A6C[v22 + 486149285] = v18;
      dword_140404A6C[v22 + 486149286] = 1082130432;
      *(_QWORD *)&dword_140404A6C[v22 + 486149267] = 0;
      dword_140404A6C[v22 + 486149269] = 0;
      dword_140404A6C[v22 + 486149302] = v29;
      dword_140404A6C[v22 + 486149303] = dword_140404A6C[v7 + 280657987];
      dword_140404A6C[v22 + 486149304] = dword_140404A6C[v7 + 280657988];
      dword_140404A6C[v22 + 486149273] = v31;
      dword_140404A6C[v22 + 486149274] = 1044381696;
      if ( v30 == 2 )
      {
        dword_140404A6C[v22 + 486149273] = 0;
      }
      else if ( v30 == 3 )
      {
        dword_140404A6C[v22 + 486149274] = 1065353216;
      }
      v32 = *(unsigned int *)((char *)&dword_140404A6C[280658026] + v9);
      if ( !v32 || v32 == 3 )
      {
        dword_140404A6C[v22 + 486149286] = 0;
        dword_140404A6C[v22 + 486149281] = 1015021568;
        dword_140404A6C[v22 + 486149282] = 1015021568;
      }
      if ( v30 == 2 )
        dword_140404A6C[v22 + 486149286] = 1036831949;
      v77 = 1065353216;
      v76[0] = (__m128)xmmword_140278D30;
      v76[1] = (__m128)xmmword_140278D30;
      sub_14007B2A0((__int64)v76, &v76[0].m128_f32[3]);
      sub_14007B2A0((__int64)v76, v76[0].m128_f32);
      sub_14010E370(&v78, v76);
      v33 = (float *)((char *)&dword_140404A6C[280651452] + v24);
      sub_14010E370(v76, v33);
      v34 = v76[0].m128_f32[3];
      v35 = v76[0].m128_f32[2];
      v36 = v76[0].m128_f32[0];
      v37 = v76[0].m128_f32[1];
      if ( (float)((float)((float)(v81 * v76[0].m128_f32[3]) + (float)(v80 * v76[0].m128_f32[2]))
                 + (float)((float)(v78 * v76[0].m128_f32[0]) + (float)(v79 * v76[0].m128_f32[1]))) < 0.0 )
      {
        v76[0] = _mm_xor_ps(v76[0], (__m128)xmmword_140279870);
        v35 = v76[0].m128_f32[2];
        v37 = v76[0].m128_f32[1];
        v36 = v76[0].m128_f32[0];
        v34 = _mm_shuffle_ps(v76[0], v76[0], 255).m128_f32[0];
      }
      v38 = -v35;
      v39 = -v36;
      v40 = -v37;
      v41 = (float)((float)((float)(v81 * v39) + (float)(v34 * v78)) + (float)(v79 * v38)) - (float)(v80 * v40);
      v42 = (float)((float)((float)(v81 * v40) - (float)(v78 * v38)) + (float)(v34 * v79)) + (float)(v80 * v39);
      v43 = (float)((float)((float)(v81 * v38) + (float)(v78 * v40)) - (float)(v79 * v39)) + (float)(v34 * v80);
      v44 = (float)((float)((float)(v81 * v34) - (float)(v78 * v39)) - (float)(v79 * v40)) - (float)(v80 * v38);
      v45 = fsqrt((float)((float)(v41 * v41) + (float)(v42 * v42)) + (float)(v43 * v43));
      if ( v45 == 0.0 )
      {
        v46 = 0.0;
        v47 = 0.0;
        v48 = 0.0;
      }
      else
      {
        v46 = v41 * (float)(1.0 / v45);
        v47 = v42 * (float)(1.0 / v45);
        v48 = v43 * (float)(1.0 / v45);
      }
      v49 = acos(fminf(fmaxf(v44, -1.0), 1.0));
      v50 = v49 + v49;
      v51 = v46 * v50;
      v52 = v47 * v50;
      v53 = v48 * v50;
      if ( !*(unsigned int *)((char *)&dword_140404A6C[280658026] + v9) )
      {
        v51 = 0.0;
        v52 = 0.0;
        v53 = 0.0;
      }
      v54 = fsqrt((float)((float)(v52 * v52) + (float)(v51 * v51)) + (float)(v53 * v53));
      if ( v54 > 0.25 )
      {
        v51 = (float)(v51 * (float)(1.0 / v54)) * 0.25;
        v52 = (float)(v52 * (float)(1.0 / v54)) * 0.25;
        v53 = (float)(v53 * (float)(1.0 / v54)) * 0.25;
      }
      if ( LOBYTE(dword_140404A6C[284024765]) && v54 > 0.0625 )
      {
        v55 = fsqrt((float)((float)(v52 * v52) + (float)(v51 * v51)) + (float)(v53 * v53));
        if ( v55 == 0.0 )
        {
          v56 = 0.0;
          v57 = 0.0;
          v58 = 0.0;
        }
        else
        {
          v56 = v51 * (float)(1.0 / v55);
          v57 = v52 * (float)(1.0 / v55);
          v58 = v53 * (float)(1.0 / v55);
        }
        v51 = v56 * 0.0625;
        v52 = v57 * 0.0625;
        v53 = v58 * 0.0625;
      }
      v59 = v52 * v33[4];
      v60 = v51 * v33[1];
      *(float *)&v61 = (float)((float)(v52 * v33[3]) + (float)(v51 * *v33)) + (float)(v53 * v33[6]);
      v62 = v53 * v33[7];
      v63 = (float)(v52 * v33[5]) + (float)(v51 * v33[2]);
      v64 = v53 * v33[8];
      *(unsigned int *)((char *)&dword_140404A6C[280658023] + v9) = v21;
      ++*(unsigned int *)((char *)&dword_140404A6C[280651515] + v24);
      v65 = dword_140404A6C[v7 + 280651325] == 3;
      dword_140404A6C[v22 + 486149264] = v61;
      dword_140404A6C[v7 + 280651324] = 1;
      *(float *)&dword_140404A6C[v22 + 486149266] = v63 + v64;
      *(float *)&dword_140404A6C[v22 + 486149265] = (float)(v59 + v60) + v62;
      if ( !v65
        && (int)dword_140404A6C[v7 + 280657908] > 0
        && (dword_140404A6C[v7 + 280651436] & 4) == 0
        && *(unsigned int *)((char *)&dword_140404A6C[280658026] + v9) == 1
        && *(float *)((char *)&dword_140404A6C[280658053] + v9) == 0.0 )
      {
        dword_140404A6C[v7 + 280651325] = 3;
        *(unsigned int *)((char *)&dword_140404A6C[280658026] + v9) = 1;
        dword_140404A6C[v7 + 280658004] = a2 ^ 1;
        v66 = *(float *)&dword_140404A6C[282486299];
        v67 = *(float *)&dword_140404A6C[282486350];
        v68 = *(float *)&dword_140404A6C[282486299];
        dword_140404A6C[v7 + 280657911] = dword_140404A6C[v7 + 280651394];
        dword_140404A6C[v7 + 280657912] = dword_140404A6C[v7 + 280651393];
        dword_140404A6C[v7 + 280657979] = 1075235812;
        dword_140404A6C[v7 + 280658028] = 0;
        dword_140404A6C[v7 + 280658083] = 0;
        *(float *)&dword_140404A6C[v7 + 280658029] = (float)((float)(v67 * *(float *)&dword_140404A6C[v7 + 280652313])
                                                           + *(float *)&dword_140404A6C[v7 + 280652298])
                                                   - (float)((float)(v68 * *(float *)&dword_140404A6C[v7 + 280651452])
                                                           + *(float *)&dword_140404A6C[v7 + 280651440]);
        *(float *)&dword_140404A6C[v7 + 280658030] = (float)((float)(v67 * *(float *)&dword_140404A6C[v7 + 280652314])
                                                           + *(float *)&dword_140404A6C[v7 + 280652299])
                                                   - (float)((float)(v66 * *(float *)&dword_140404A6C[v7 + 280651453])
                                                           + *(float *)&dword_140404A6C[v7 + 280651441]);
        *(float *)&v69 = (float)((float)(v67 * *(float *)&dword_140404A6C[v7 + 280652315])
                               + *(float *)&dword_140404A6C[v7 + 280652300])
                       - (float)((float)(v66 * *(float *)&dword_140404A6C[v7 + 280651454])
                               + *(float *)&dword_140404A6C[v7 + 280651442]);
        v70 = *(float *)&dword_140404A6C[282486374];
        v71 = *(float *)&dword_140404A6C[282486374];
        dword_140404A6C[v7 + 280658031] = v69;
        v72 = *(float *)&dword_140404A6C[282486425];
        v73 = *(float *)&dword_140404A6C[282486425];
        *(float *)&dword_140404A6C[v7 + 280658084] = (float)((float)(*(float *)&dword_140404A6C[282486425]
                                                                   * *(float *)&dword_140404A6C[v7 + 280652547])
                                                           + *(float *)&dword_140404A6C[v7 + 280652532])
                                                   - (float)((float)(v71 * *(float *)&dword_140404A6C[v7 + 280651452])
                                                           + *(float *)&dword_140404A6C[v7 + 280651440]);
        *(float *)&dword_140404A6C[v7 + 280658085] = (float)((float)(v73 * *(float *)&dword_140404A6C[v7 + 280652548])
                                                           + *(float *)&dword_140404A6C[v7 + 280652533])
                                                   - (float)((float)(v70 * *(float *)&dword_140404A6C[v7 + 280651453])
                                                           + *(float *)&dword_140404A6C[v7 + 280651441]);
        *(float *)&dword_140404A6C[v7 + 280658086] = (float)((float)(v72 * *(float *)&dword_140404A6C[v7 + 280652549])
                                                           + *(float *)&dword_140404A6C[v7 + 280652534])
                                                   - (float)((float)(v70 * *(float *)&dword_140404A6C[v7 + 280651454])
                                                           + *(float *)&dword_140404A6C[v7 + 280651442]);
      }
    }
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&v75 ^ v82);
}

