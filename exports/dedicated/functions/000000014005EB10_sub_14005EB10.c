/* Address: 0x14005eb10 | Name: sub_14005EB10 | Size: 2561 bytes */
void __fastcall sub_14005EB10(unsigned int a1, int a2)
{
  float v2; // xmm11_4
  float v3; // xmm9_4
  float v4; // xmm7_4
  unsigned __int64 v7; // rsi
  __int64 v8; // r14
  unsigned __int64 v9; // r15
  float v10; // xmm10_4
  float v11; // xmm8_4
  float v12; // xmm6_4
  float v13; // xmm1_4
  float v14; // xmm1_4
  BOOL v15; // ecx
  float v16; // xmm7_4
  float v17; // xmm8_4
  float v18; // xmm10_4
  _DWORD *v19; // rax
  float v20; // xmm6_4
  int v21; // edi
  __int64 v22; // rbx
  float v23; // xmm6_4
  unsigned __int64 v24; // r12
  float v25; // xmm0_4
  int v26; // eax
  float v27; // xmm1_4
  float v28; // xmm1_4
  int v29; // eax
  int v30; // ecx
  float v31; // xmm0_4
  int v32; // eax
  __int64 v33; // r8
  float *v34; // r14
  float v35; // xmm13_4
  float v36; // xmm4_4
  float v37; // xmm5_4
  float v38; // xmm12_4
  float v39; // xmm4_4
  float v40; // xmm5_4
  float v41; // xmm12_4
  float v42; // xmm7_4
  float v43; // xmm6_4
  float v44; // xmm8_4
  float v45; // xmm3_4
  float v46; // xmm4_4
  float v47; // xmm7_4
  float v48; // xmm6_4
  float v49; // xmm8_4
  double v50; // xmm0_8
  float v51; // xmm1_4
  float v52; // xmm7_4
  float v53; // xmm6_4
  float v54; // xmm8_4
  float v55; // xmm3_4
  float v56; // xmm0_4
  float v57; // xmm7_4
  float v58; // xmm6_4
  float v59; // xmm8_4
  float v60; // xmm3_4
  float v61; // xmm0_4
  float v62; // xmm2_4
  float v63; // xmm1_4
  float v64; // xmm6_4
  float v65; // xmm8_4
  bool v66; // zf
  float v67; // xmm12_4
  float v68; // xmm11_4
  float v69; // xmm0_4
  float v70; // xmm11_4
  float v71; // xmm12_4
  float v72; // xmm0_4
  float v73; // xmm11_4
  float v74; // xmm2_4
  __m128 v75[2]; // [rsp+28h] [rbp-B9h] BYREF
  int v76; // [rsp+48h] [rbp-99h]
  float v77; // [rsp+50h] [rbp-91h] BYREF
  float v78; // [rsp+54h] [rbp-8Dh]
  float v79; // [rsp+58h] [rbp-89h]
  float v80; // [rsp+5Ch] [rbp-85h]

  v2 = *(float *)&qword_140146A28;
  v3 = *((float *)&qword_140146A28 + 1);
  v4 = *(float *)&dword_140146A30;
  v7 = 28664LL * (int)a1;
  v8 = 234LL * (a2 + 4);
  v9 = v7 + 220LL * a2;
  v10 = *(float *)&dword_190941BEC[v8 + v7 / 4];
  v11 = *(float *)&dword_190941BEC[v8 + 1 + v7 / 4];
  v12 = *(float *)&dword_190941BEC[v8 + 2 + v7 / 4];
  v77 = (float)(*(float *)&qword_140146A28 * 0.375) + v10;
  v78 = (float)(*((float *)&qword_140146A28 + 1) * 0.375) + v11;
  v79 = (float)(*(float *)&dword_140146A30 * 0.375) + v12;
  v13 = sin(*(float *)((char *)&unk_1909419A0 + v9 + 27048)) * 0.1875;
  v14 = v13 - 0.03125;
  v75[0].m128_f32[0] = (float)(v2 * v14) + v10;
  v75[0].m128_f32[1] = (float)(v3 * v14) + v11;
  v75[0].m128_f32[2] = (float)(v4 * v14) + v12;
  v15 = sub_140062890(a1, &v77, v75) != 0;
  if ( *(float *)((char *)&unk_1909419A0 + v7 + v8 * 4 + 340) >= 0.0 && v15 )
  {
    v16 = *(float *)&qword_140146A28;
    v17 = *((float *)&qword_140146A28 + 1);
    v18 = *(float *)&dword_140146A30;
    v19 = &unk_14B883320;
    v20 = *(float *)&qword_16E18CA44;
    v21 = 0;
    qword_16E18CA4C = qword_140146A28;
    dword_16E18CA54 = dword_140146A30;
    *(_DWORD *)((char *)&unk_1909419A0 + v9 + 27044) = qword_16E18CA44;
    while ( *v19 )
    {
      ++v21;
      v19 += 61;
      if ( (__int64)v19 >= (__int64)dword_14BC53320 )
        return;
    }
    if ( v21 != -1 )
    {
      v22 = 244LL * v21;
      memset((char *)&unk_14B883324 + v22, 0, 0xF0u);
      v23 = v20 - v75[0].m128_f32[1];
      v24 = v8 * 4 + v7;
      v25 = *((float *)&qword_16E18CA44 + 1) - v75[0].m128_f32[2];
      v26 = *(_DWORD *)((char *)&unk_1909419A0 + v8 * 4 + v7 + 584);
      v27 = (float)(unk_16E18CA40 - v75[0].m128_f32[0]) * v16;
      *(_DWORD *)((char *)&unk_14B883320 + v22) = 1;
      *(_DWORD *)((char *)&unk_14B883320 + v22 + 4) = 9;
      *(_DWORD *)((char *)&unk_14B883320 + v22 + 12) = 0;
      *(_DWORD *)((char *)&unk_14B883320 + v22 + 152) = v26;
      v28 = (float)(v27 + (float)(v23 * v17)) + (float)(v25 * v18);
      if ( v28 >= 0.0625 )
        v28 = 0.0625;
      v29 = *(_DWORD *)((char *)&unk_1909419A0 + v7 + 26772);
      v30 = *(_DWORD *)((char *)&unk_1909419A0 + v7 + 128);
      v31 = *(float *)((char *)&unk_1909419A0 + v24 + 744) + *(float *)((char *)&unk_1909419A0 + v24 + 744);
      *(float *)((char *)&unk_14B883320 + v22 + 100) = v28;
      *(_DWORD *)((char *)&unk_14B883320 + v22 + 112) = 1056964608;
      *(_DWORD *)((char *)&unk_14B883320 + v22 + 116) = 1056964608;
      *(_DWORD *)((char *)&unk_14B883320 + v22 + 16) = 0;
      *(float *)((char *)&unk_14B883320 + v22 + 120) = v16;
      *(float *)((char *)&unk_14B883320 + v22 + 124) = v17;
      *(float *)((char *)&unk_14B883320 + v22 + 128) = v18;
      *(_DWORD *)((char *)&unk_14B883320 + v22 + 132) = 1082130432;
      *(_QWORD *)((char *)&unk_14B883320 + v22 + 56) = 0;
      *(_DWORD *)((char *)&unk_14B883320 + v22 + 64) = 0;
      *(_DWORD *)((char *)&unk_14B883320 + v22 + 196) = v29;
      *(_DWORD *)((char *)&unk_14B883320 + v22 + 200) = *(_DWORD *)((char *)&unk_1909419A0 + v7 + 26776);
      *(_DWORD *)((char *)&unk_14B883320 + v22 + 204) = *(_DWORD *)((char *)&unk_1909419A0 + v7 + 26780);
      *(float *)((char *)&unk_14B883320 + v22 + 80) = v31;
      *(_DWORD *)((char *)&unk_14B883320 + v22 + 84) = 1044381696;
      if ( v30 == 2 )
      {
        *(_DWORD *)((char *)&unk_14B883320 + v22 + 80) = 0;
      }
      else if ( v30 == 3 )
      {
        *(_DWORD *)((char *)&unk_14B883320 + v22 + 84) = 1065353216;
      }
      v32 = *(_DWORD *)((char *)&unk_1909419A0 + v9 + 26932);
      if ( !v32 || v32 == 3 )
      {
        *(_DWORD *)((char *)&unk_14B883320 + v22 + 132) = 0;
        *(_DWORD *)((char *)&unk_14B883320 + v22 + 112) = 1015021568;
        *(_DWORD *)((char *)&unk_14B883320 + v22 + 116) = 1015021568;
      }
      if ( v30 == 2 )
        *(_DWORD *)((char *)&unk_14B883320 + v22 + 132) = 1036831949;
      v76 = 1065353216;
      v75[0] = (__m128)xmmword_1400F78B0;
      v75[1] = (__m128)xmmword_1400F78B0;
      sub_140049C20((__int64)v75, &v75[0].m128_f32[3], 0);
      sub_140049C20((__int64)v75, v75[0].m128_f32, v33);
      sub_1400A8390(&v77, v75);
      v34 = (float *)((char *)&xmmword_190941C1C + v24);
      sub_1400A8390(v75, (char *)&xmmword_190941C1C + v24);
      v35 = v75[0].m128_f32[3];
      v36 = v75[0].m128_f32[2];
      v37 = v75[0].m128_f32[0];
      v38 = v75[0].m128_f32[1];
      if ( (float)((float)((float)(v80 * v75[0].m128_f32[3]) + (float)(v79 * v75[0].m128_f32[2]))
                 + (float)((float)(v77 * v75[0].m128_f32[0]) + (float)(v78 * v75[0].m128_f32[1]))) < 0.0 )
      {
        v75[0] = _mm_xor_ps(v75[0], (__m128)xmmword_1400F7F50);
        v36 = v75[0].m128_f32[2];
        v38 = v75[0].m128_f32[1];
        v37 = v75[0].m128_f32[0];
        v35 = _mm_shuffle_ps(v75[0], v75[0], 255).m128_f32[0];
      }
      v39 = -v36;
      v40 = -v37;
      v41 = -v38;
      v42 = (float)((float)((float)(v80 * v40) + (float)(v35 * v77)) + (float)(v78 * v39)) - (float)(v79 * v41);
      v43 = (float)((float)((float)(v80 * v41) - (float)(v77 * v39)) + (float)(v35 * v78)) + (float)(v79 * v40);
      v44 = (float)((float)((float)(v80 * v39) + (float)(v77 * v41)) - (float)(v78 * v40)) + (float)(v35 * v79);
      v45 = (float)((float)((float)(v80 * v35) - (float)(v77 * v40)) - (float)(v78 * v41)) - (float)(v79 * v39);
      v46 = fsqrt((float)((float)(v42 * v42) + (float)(v43 * v43)) + (float)(v44 * v44));
      if ( v46 == 0.0 )
      {
        v47 = 0.0;
        v48 = 0.0;
        v49 = 0.0;
      }
      else
      {
        v47 = v42 * (float)(1.0 / v46);
        v48 = v43 * (float)(1.0 / v46);
        v49 = v44 * (float)(1.0 / v46);
      }
      v50 = acos(fminf(fmaxf(v45, -1.0), 1.0));
      v51 = v50 + v50;
      v52 = v47 * v51;
      v53 = v48 * v51;
      v54 = v49 * v51;
      if ( !*(_DWORD *)((char *)&unk_1909419A0 + v9 + 26932) )
      {
        v52 = 0.0;
        v53 = 0.0;
        v54 = 0.0;
      }
      v55 = fsqrt((float)((float)(v53 * v53) + (float)(v52 * v52)) + (float)(v54 * v54));
      if ( v55 > 0.25 )
      {
        v52 = (float)(v52 * (float)(1.0 / v55)) * 0.25;
        v53 = (float)(v53 * (float)(1.0 / v55)) * 0.25;
        v54 = (float)(v54 * (float)(1.0 / v55)) * 0.25;
      }
      if ( byte_1962BC9C0 && v55 > 0.0625 )
      {
        v56 = fsqrt((float)((float)(v53 * v53) + (float)(v52 * v52)) + (float)(v54 * v54));
        if ( v56 == 0.0 )
        {
          v57 = 0.0;
          v58 = 0.0;
          v59 = 0.0;
        }
        else
        {
          v57 = v52 * (float)(1.0 / v56);
          v58 = v53 * (float)(1.0 / v56);
          v59 = v54 * (float)(1.0 / v56);
        }
        v52 = v57 * 0.0625;
        v53 = v58 * 0.0625;
        v54 = v59 * 0.0625;
      }
      v60 = v53 * v34[4];
      v61 = v52 * v34[1];
      v62 = (float)((float)(v53 * v34[3]) + (float)(v52 * *v34)) + (float)(v54 * v34[6]);
      v63 = v54 * v34[7];
      v64 = (float)(v53 * v34[5]) + (float)(v52 * v34[2]);
      v65 = v54 * v34[8];
      *(_DWORD *)((char *)&unk_1909419A0 + v9 + 26920) = v21;
      ++*(_DWORD *)((char *)&unk_1909419A0 + v24 + 888);
      v66 = *(_DWORD *)((char *)&unk_1909419A0 + v7 + 128) == 3;
      *(float *)((char *)&unk_14B883320 + v22 + 44) = v62;
      *(_DWORD *)((char *)&unk_1909419A0 + v7 + 124) = 1;
      *(float *)((char *)&unk_14B883320 + v22 + 52) = v64 + v65;
      *(float *)((char *)&unk_14B883320 + v22 + 48) = (float)(v60 + v61) + v63;
      if ( !v66
        && *(int *)((char *)&unk_1909419A0 + v7 + 26460) > 0
        && (*((_BYTE *)&unk_1909419A0 + v7 + 572) & 4) == 0
        && *(_DWORD *)((char *)&unk_1909419A0 + v9 + 26932) == 1
        && *(float *)((char *)&unk_1909419A0 + v9 + 27040) == 0.0 )
      {
        *(_DWORD *)((char *)&unk_1909419A0 + v7 + 128) = 3;
        *(_DWORD *)((char *)&unk_1909419A0 + v9 + 26932) = 1;
        *(_DWORD *)((char *)&unk_1909419A0 + v7 + 26844) = a2 ^ 1;
        v67 = *(float *)&dword_191041998;
        v68 = *(float *)&dword_191041A64;
        v69 = *(float *)&dword_191041998;
        *(_DWORD *)((char *)&unk_1909419A0 + v7 + 26472) = *(_DWORD *)((char *)&unk_1909419A0 + v7 + 404);
        *(_DWORD *)((char *)&unk_1909419A0 + v7 + 26476) = *(_DWORD *)((char *)&unk_1909419A0 + v7 + 400);
        *(_DWORD *)((char *)&unk_1909419A0 + v7 + 26744) = 1075235812;
        *(_DWORD *)((char *)&unk_1909419A0 + v7 + 26940) = 0;
        *(_DWORD *)((char *)&unk_1909419A0 + v7 + 27160) = 0;
        *(float *)((char *)&unk_1909419A0 + v7 + 26944) = (float)((float)(v68
                                                                        * *(float *)((char *)&unk_1909419A0 + v7 + 4080))
                                                                + *(float *)((char *)&unk_1909419A0 + v7 + 4020))
                                                        - (float)((float)(v69
                                                                        * *(float *)((char *)&unk_1909419A0 + v7 + 636))
                                                                + *(float *)((char *)&unk_1909419A0 + v7 + 588));
        *(float *)((char *)&unk_1909419A0 + v7 + 26948) = (float)((float)(v68
                                                                        * *(float *)((char *)&unk_1909419A0 + v7 + 4084))
                                                                + *(float *)((char *)&unk_1909419A0 + v7 + 4024))
                                                        - (float)((float)(v67
                                                                        * *(float *)((char *)&unk_1909419A0 + v7 + 640))
                                                                + *(float *)((char *)&unk_1909419A0 + v7 + 592));
        v70 = (float)((float)(v68 * *(float *)((char *)&unk_1909419A0 + v7 + 4088))
                    + *(float *)((char *)&unk_1909419A0 + v7 + 4028))
            - (float)((float)(v67 * *(float *)((char *)&unk_1909419A0 + v7 + 644))
                    + *(float *)((char *)&unk_1909419A0 + v7 + 596));
        v71 = *(float *)&dword_191041AC4;
        v72 = *(float *)&dword_191041AC4;
        *(float *)((char *)&unk_1909419A0 + v7 + 26952) = v70;
        v73 = *(float *)&dword_191041B90;
        v74 = *(float *)&dword_191041B90;
        *(float *)((char *)&unk_1909419A0 + v7 + 27164) = (float)((float)(*(float *)&dword_191041B90
                                                                        * *(float *)((char *)&unk_1909419A0 + v7 + 5016))
                                                                + *(float *)((char *)&unk_1909419A0 + v7 + 4956))
                                                        - (float)((float)(v72
                                                                        * *(float *)((char *)&unk_1909419A0 + v7 + 636))
                                                                + *(float *)((char *)&unk_1909419A0 + v7 + 588));
        *(float *)((char *)&unk_1909419A0 + v7 + 27168) = (float)((float)(v74
                                                                        * *(float *)((char *)&unk_1909419A0 + v7 + 5020))
                                                                + *(float *)((char *)&unk_1909419A0 + v7 + 4960))
                                                        - (float)((float)(v71
                                                                        * *(float *)((char *)&unk_1909419A0 + v7 + 640))
                                                                + *(float *)((char *)&unk_1909419A0 + v7 + 592));
        *(float *)((char *)&unk_1909419A0 + v7 + 27172) = (float)((float)(v73
                                                                        * *(float *)((char *)&unk_1909419A0 + v7 + 5024))
                                                                + *(float *)((char *)&unk_1909419A0 + v7 + 4964))
                                                        - (float)((float)(v71
                                                                        * *(float *)((char *)&unk_1909419A0 + v7 + 644))
                                                                + *(float *)((char *)&unk_1909419A0 + v7 + 596));
      }
    }
  }
}

