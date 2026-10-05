/* Address: 0x14004bfc0 | Name: sub_14004BFC0 | Stack analysis corrected in export snapshot. */
__int64 __fastcall sub_14004BFC0(__int16 a1, __int64 a2, float *a3, float *a4, float *a5, float *a6)
{
  float *v6; // rsi
  __int64 v8; // rbx
  int v10; // r15d
  int v11; // r9d
  __int64 v12; // r13
  __int64 v13; // r8
  __int64 v14; // rdx
  float v15; // xmm12_4
  float v16; // xmm11_4
  float v17; // xmm10_4
  float v18; // xmm15_4
  float v19; // xmm14_4
  float v20; // xmm13_4
  int v21; // eax
  float v22; // xmm7_4
  float v23; // xmm9_4
  float v24; // xmm4_4
  __int64 v25; // rax
  float v26; // xmm2_4
  float v27; // xmm3_4
  float v28; // xmm0_4
  float v29; // xmm1_4
  float v30; // xmm7_4
  float v31; // xmm2_4
  float v32; // xmm4_4
  float v33; // xmm3_4
  float v34; // xmm1_4
  float v35; // xmm9_4
  float v36; // xmm2_4
  float v37; // xmm1_4
  float v38; // xmm2_4
  float v39; // xmm3_4
  float v40; // xmm1_4
  float v41; // xmm9_4
  float v42; // xmm7_4
  float v43; // xmm2_4
  float *v44; // rbx
  __int64 v45; // r14
  float v46; // xmm3_4
  float v47; // xmm4_4
  float v48; // xmm5_4
  float v49; // xmm0_4
  unsigned int v50; // xmm7_4
  unsigned int v51; // xmm8_4
  __int64 v53; // [rsp-20h] [rbp-1A80h] BYREF
  __int64 v54; // [rsp+20h] [rbp-1A40h] BYREF
  float v55; // [rsp+28h] [rbp-1A38h]
  float v56; // [rsp+30h] [rbp-1A30h]
  float v57; // [rsp+34h] [rbp-1A2Ch]
  float v58; // [rsp+38h] [rbp-1A28h] BYREF
  float v59[3]; // [rsp+40h] [rbp-1A20h] BYREF
  float v60[3]; // [rsp+4Ch] [rbp-1A14h] BYREF
  float v61; // [rsp+58h] [rbp-1A08h] BYREF
  float v62; // [rsp+5Ch] [rbp-1A04h]
  float v63; // [rsp+19E0h] [rbp-80h]
  float v64[4]; // [rsp+19E8h] [rbp-78h] BYREF
  unsigned int v65[4]; // [rsp+19F8h] [rbp-68h] BYREF
  __int64 v66; // [rsp+1A08h] [rbp-58h]
  float *v67; // [rsp+1A10h] [rbp-50h]
  int v68; // [rsp+1A20h] [rbp-40h] BYREF
  char v69; // [rsp+1A24h] [rbp-3Ch] BYREF
  __int64 v70; // [rsp+3230h] [rbp+17D0h]

  v6 = a4;
  v67 = a4;
  v8 = a2;
  v66 = a2;
  v10 = 0;
  v68 = 0;
  sub_14000C180(&v68, 0, a5, a6);
  if ( *(int *)(v8 + 64) > 0 )
  {
    v11 = v68;
    v12 = 0;
    do
    {
      v13 = *(_QWORD *)(v8 + 8);
      v14 = *(_QWORD *)(v8 + 72);
      v15 = v6[3];
      v16 = *v6;
      v17 = v6[6];
      v18 = v6[4];
      v19 = v6[1];
      v20 = v6[7];
      v21 = 3 * *(_DWORD *)(v14 + v12);
      v57 = v6[5];
      v56 = v6[2];
      v22 = *(float *)(v13 + 4LL * v21);
      v23 = *(float *)(v13 + 4LL * v21 + 4);
      v24 = *(float *)(v13 + 4LL * v21 + 8);
      v25 = 3 * *(_DWORD *)(v14 + v12 + 4);
      v26 = (float)((float)(v17 * v24) + (float)(v16 * v22)) + (float)((float)(v15 * v23) + *a3);
      v27 = (float)(v20 * v24) + (float)(v19 * v22);
      v28 = v6[2] * v22;
      v29 = (float)(v18 * v23) + a3[1];
      v30 = *(float *)(v13 + 4 * v25 + 4);
      v59[0] = v26;
      v31 = v6[8] * v24;
      v32 = *(float *)(v13 + 4 * v25);
      v33 = v27 + v29;
      v34 = v6[5] * v23;
      v35 = *(float *)(v13 + 4 * v25 + 8);
      v59[1] = v33;
      v36 = (float)(v31 + v28) + (float)(v34 + a3[2]);
      v37 = (float)(v30 * v15) + *a3;
      v59[2] = v36;
      v38 = v35;
      v39 = (float)((float)(v35 * v17) + (float)(v32 * v16)) + v37;
      v40 = v30;
      v41 = (float)(v35 * v6[8]) + (float)(v32 * v56);
      v42 = (float)(v30 * v57) + a3[2];
      v60[0] = v39;
      v43 = (float)((float)(v38 * v20) + (float)(v32 * v19)) + (float)((float)(v40 * v18) + a3[1]);
      v60[2] = v41 + v42;
      v60[1] = v43;
      if ( v11 > 0 )
      {
        v44 = (float *)&v69;
        v45 = (unsigned int)v11;
        do
        {
          if ( (unsigned int)sub_14008CEB0(v64, &v61, &v58, v59, v60, v44, v44 + 3)
            && sub_140187410(v44, v44 + 3, a3, v59, v60) )
          {
            v46 = v61 - v64[0];
            v47 = v62 - v64[1];
            v48 = v63 - v64[2];
            v49 = fsqrt((float)((float)(v47 * v47) + (float)(v46 * v46)) + (float)(v48 * v48));
            if ( v49 == 0.0 )
            {
              v54 = 0;
              v55 = 0.0;
            }
            else
            {
              *(float *)&v54 = (float)(1.0 / v49) * v46;
              *((float *)&v54 + 1) = (float)(1.0 / v49) * v47;
              v55 = (float)(1.0 / v49) * v48;
            }
            *(float *)&v50 = v62 - a3[1];
            *(float *)&v51 = v63 - a3[2];
            *(float *)v65 = v61 - *a3;
            v65[1] = v50;
            v65[2] = v51;
            sub_140005160(a1, v65, (unsigned int *)&v54, v58, 0x3F19999Au, 0.001953125, 0x3B800000u);
          }
          v44 += 6;
          --v45;
        }
        while ( v45 );
        v8 = v66;
        v11 = v68;
        v6 = v67;
      }
      ++v10;
      v12 += 12;
    }
    while ( v10 < *(_DWORD *)(v8 + 64) );
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&v53 ^ v70);
}

