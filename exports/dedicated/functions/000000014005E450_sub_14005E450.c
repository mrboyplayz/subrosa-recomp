/* Address: 0x14005e450 | Name: sub_14005E450 | Size: 1634 bytes */
void __fastcall sub_14005E450(int a1, int a2, int a3, _DWORD *a4, _DWORD *a5, float *a6)
{
  __int64 v6; // rbp
  __int64 v8; // rdi
  __int64 v9; // r15
  int v10; // r8d
  _DWORD *v11; // rax
  __int64 v12; // rbx
  __int64 v13; // r8
  __int64 v14; // rdi
  bool v15; // zf
  int v16; // edx
  int v17; // ecx
  _DWORD *v18; // rax
  float v19; // xmm4_4
  float v20; // xmm5_4
  float v21; // xmm3_4
  float v22; // xmm6_4
  __int64 v23; // rax
  float v24; // xmm7_4
  float v25; // xmm0_4
  __int64 v26; // rbx
  float v27; // xmm2_4
  float v28; // xmm8_4
  float v29; // xmm1_4
  float v30; // xmm9_4
  float v31; // xmm10_4
  float v32; // xmm2_4
  float v33; // xmm0_4
  float v34; // xmm4_4
  float v35; // xmm2_4
  float v36; // xmm1_4
  float v37; // xmm5_4
  float v38; // xmm2_4
  float v39; // xmm0_4
  float v40; // xmm2_4
  float v41; // xmm1_4
  float v42; // xmm2_4
  float v43; // xmm0_4
  float v44; // xmm2_4
  float v45; // xmm1_4
  float v46; // xmm6_4
  float v47; // xmm4_4
  float v48; // xmm3_4
  float v49; // xmm1_4
  float v50; // xmm8_4
  float v51; // xmm5_4
  float v52; // xmm0_4
  float v53; // xmm9_4
  float v54; // xmm10_4
  float v55; // xmm3_4
  float v56; // xmm4_4
  float v57; // xmm5_4
  float v58; // xmm0_4
  float v59; // xmm6_4
  float v60; // xmm7_4
  double v61; // xmm0_8
  float v62; // xmm1_4
  float v63; // xmm6_4
  float v64; // xmm8_4
  float v65; // xmm7_4
  float v66; // xmm1_4
  float v67; // xmm2_4
  float v68; // xmm6_4
  float v69; // xmm1_4
  float v70; // xmm7_4
  float v71; // [rsp+20h] [rbp-B8h]
  float v72; // [rsp+24h] [rbp-B4h]
  float v73[4]; // [rsp+28h] [rbp-B0h] BYREF
  _DWORD v74[10]; // [rsp+38h] [rbp-A0h] BYREF

  v6 = 1760LL * a3;
  v8 = a2;
  v9 = a1;
  if ( dword_19025F0D4[v6] != 39 )
  {
    v10 = 0;
    v11 = &unk_14B883320;
    while ( *v11 )
    {
      ++v10;
      v11 += 61;
      if ( (__int64)v11 >= (__int64)dword_14BC53320 )
        return;
    }
    if ( v10 != -1 )
    {
      v12 = 244LL * v10;
      memset((char *)&unk_14B883324 + v12, 0, 0xF0u);
      v13 = (unsigned int)dword_19025F118[v6];
      *(_DWORD *)((char *)&unk_14B883320 + v12) = 1;
      *(_DWORD *)((char *)&unk_14B883320 + v12 + 4) = 7;
      *(_QWORD *)((char *)&unk_14B883320 + v12 + 12) = 0;
      *(_DWORD *)((char *)&unk_14B883320 + v12 + 156) = v13;
      v14 = 28664 * v9 + 312 * v8;
      v15 = dword_19025F0D4[v6] == 28;
      v16 = *(int *)((char *)dword_190941BE8 + v14);
      *(_DWORD *)((char *)&unk_14B883320 + v12 + 152) = v16;
      *(_DWORD *)((char *)&unk_14B883320 + v12 + 112) = 1048576000;
      *(_DWORD *)((char *)&unk_14B883320 + v12 + 116) = 1052770304;
      *(_DWORD *)((char *)&unk_14B883320 + v12 + 56) = *a4;
      *(_DWORD *)((char *)&unk_14B883320 + v12 + 60) = a4[1];
      *(_DWORD *)((char *)&unk_14B883320 + v12 + 64) = a4[2];
      *(_DWORD *)((char *)&unk_14B883320 + v12 + 68) = *a5;
      *(_DWORD *)((char *)&unk_14B883320 + v12 + 72) = a5[1];
      *(_DWORD *)((char *)&unk_14B883320 + v12 + 76) = a5[2];
      if ( !v15 )
      {
        v17 = 0;
        v18 = &unk_14B883320;
        while ( *v18 )
        {
          ++v17;
          v18 += 61;
          if ( (__int64)v18 >= (__int64)dword_14BC53320 )
            return;
        }
        if ( v17 != -1 )
        {
          v19 = *(float *)((char *)&xmmword_190941C1C + v14 + 4);
          v20 = *(float *)((char *)&xmmword_190941C1C + v14 + 8);
          v21 = *(float *)((char *)&xmmword_190941C1C + v14);
          v22 = *(float *)((char *)&xmmword_190941C1C + v14 + 12);
          v23 = 244LL * v17;
          v24 = *(float *)&dword_19025F17C[v6];
          v25 = *(float *)&dword_19025F174[v6] * v19;
          v26 = 9LL * v17;
          v27 = (float)((float)(v21 * *(float *)&dword_19025F164[v6]) + (float)(v19 * *(float *)&dword_19025F168[v6]))
              + (float)(v20 * *(float *)&dword_19025F16C[v6]);
          v28 = *(float *)&dword_19025F180[v6];
          v29 = *(float *)&dword_19025F178[v6] * v20;
          *(_DWORD *)((char *)&unk_14B883320 + v23) = 1;
          *(float *)v74 = v27;
          v30 = *(float *)&dword_19025F184[v6];
          v31 = *(float *)&dword_19025F170[v6];
          v71 = v19;
          *(_DWORD *)((char *)&unk_14B883320 + v23 + 4) = 8;
          v72 = v20;
          *(_QWORD *)((char *)&unk_14B883320 + v23 + 12) = 0;
          v32 = (float)(v31 * v21) + v25;
          *(_DWORD *)((char *)&unk_14B883320 + v23 + 152) = v16;
          *(_DWORD *)((char *)&unk_14B883320 + v23 + 156) = v13;
          v33 = v28 * v19;
          *(_DWORD *)((char *)&unk_14B883320 + v23 + 112) = 1031798784;
          v34 = *(float *)((char *)&xmmword_190941C2C + v14);
          v35 = v32 + v29;
          *(_DWORD *)((char *)&unk_14B883320 + v23 + 136) = 1049135241;
          *(_DWORD *)((char *)&unk_14B883320 + v23 + 116) = 1056964608;
          v36 = v30 * v20;
          DWORD1(xmmword_14B643320[9 * v17]) = 1056964608;
          v37 = *(float *)((char *)&xmmword_190941C2C + v14 + 4);
          *(float *)&v74[1] = v35;
          v38 = (float)(v24 * v21) + v33;
          v39 = v34 * *(float *)&dword_19025F168[v6];
          v40 = v38 + v36;
          v41 = v37 * *(float *)&dword_19025F16C[v6];
          *(float *)&v74[2] = v40;
          v42 = (float)(v22 * *(float *)&dword_19025F164[v6]) + v39;
          v43 = v34 * *(float *)&dword_19025F174[v6];
          v44 = v42 + v41;
          v45 = v37 * *(float *)&dword_19025F178[v6];
          *(float *)&v74[3] = v44;
          *(float *)&v74[4] = (float)((float)(v22 * v31) + v43) + v45;
          *(float *)&v74[5] = (float)((float)(v22 * v24) + (float)(v34 * v28)) + (float)(v37 * v30);
          v46 = *(float *)((char *)&xmmword_190941C2C + v14 + 8);
          v47 = *(float *)((char *)&xmmword_190941C2C + v14 + 12) * v28;
          v48 = (float)(v46 * v31)
              + (float)(*(float *)((char *)&xmmword_190941C2C + v14 + 12) * *(float *)&dword_19025F174[v6]);
          v49 = *(float *)((char *)dword_190941C3C + v14) * *(float *)&dword_19025F178[v6];
          v50 = 0.0;
          v51 = *(float *)((char *)dword_190941C3C + v14) * v30;
          *(float *)&v74[6] = (float)((float)(*(float *)((char *)&xmmword_190941C2C + v14 + 12)
                                            * *(float *)&dword_19025F168[v6])
                                    + (float)(v46 * *(float *)&dword_19025F164[v6]))
                            + (float)(*(float *)((char *)dword_190941C3C + v14) * *(float *)&dword_19025F16C[v6]);
          v52 = fabs(a6[3]);
          *(float *)&v74[7] = v48 + v49;
          *(float *)&v74[8] = (float)((float)(v46 * v24) + v47) + v51;
          if ( v52 <= 0.0 )
          {
            v53 = v71;
            v54 = v72;
          }
          else
          {
            sub_140049C20((__int64)v74, a6, v13);
            v53 = *(float *)((char *)&xmmword_190941C1C + v14 + 4);
            v54 = *(float *)((char *)&xmmword_190941C1C + v14 + 8);
          }
          sub_1400A8390(v73, v74);
          v55 = -v73[0];
          v56 = -v73[1];
          v57 = -v73[2];
          v58 = fsqrt((float)((float)(v56 * v56) + (float)(v55 * v55)) + (float)(v57 * v57));
          if ( v58 == 0.0 )
          {
            v59 = 0.0;
            v60 = 0.0;
          }
          else
          {
            v50 = (float)(1.0 / v58) * v55;
            v59 = (float)(1.0 / v58) * v56;
            v60 = (float)(1.0 / v58) * v57;
          }
          v61 = acos(fminf(fmaxf(v73[3], -1.0), 1.0));
          v62 = v61 + v61;
          v63 = v59 * v62;
          v64 = v50 * v62;
          v65 = v60 * v62;
          v66 = (float)(v63 * *(float *)((char *)&xmmword_190941C2C + v14)) + (float)(v53 * v64);
          v67 = (float)(v63 * *(float *)((char *)&xmmword_190941C2C + v14 + 4)) + (float)(v54 * v64);
          v68 = (float)(v63 * *(float *)((char *)&xmmword_190941C1C + v14 + 12))
              + (float)(v64 * *(float *)((char *)&xmmword_190941C1C + v14));
          v69 = v66 + (float)(v65 * *(float *)((char *)&xmmword_190941C2C + v14 + 12));
          *(float *)&v61 = v65 * *(float *)((char *)dword_190941C3C + v14);
          v70 = v65 * *(float *)((char *)&xmmword_190941C2C + v14 + 8);
          *((float *)&xmmword_14B6432F0[v26] + 1) = v69;
          *((float *)&xmmword_14B6432F0[v26] + 2) = v67 + *(float *)&v61;
          *(float *)&xmmword_14B6432F0[v26] = (float)(v68 + v70) * 0.25;
          *((float *)&xmmword_14B6432F0[v26] + 1) = *((float *)&xmmword_14B6432F0[v26] + 1) * 0.25;
          *((float *)&xmmword_14B6432F0[v26] + 2) = *((float *)&xmmword_14B6432F0[v26] + 2) * 0.25;
        }
      }
    }
  }
}

