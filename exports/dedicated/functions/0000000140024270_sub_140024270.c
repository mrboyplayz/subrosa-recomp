/* Address: 0x140024270 | Name: sub_140024270 | Size: 1012 bytes */
_BOOL8 __fastcall sub_140024270(float *a1, __int64 a2, __int64 a3, int a4, __int64 a5, int a6)
{
  int v6; // eax
  __int64 v10; // r12
  __int64 v11; // r15
  int v12; // xmm10_4
  int v13; // r14d
  __int64 v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // rax
  float v17; // xmm0_4
  float v18; // xmm1_4
  float v19; // xmm2_4
  __int64 v20; // rax
  float v21; // xmm3_4
  float v22; // xmm6_4
  float v23; // xmm5_4
  float v24; // xmm3_4
  float v25; // xmm5_4
  float v26; // xmm6_4
  __int64 v27; // rax
  float v28; // xmm8_4
  float v29; // xmm4_4
  float v30; // xmm8_4
  float v31; // xmm4_4
  float v32; // xmm9_4
  float v33; // xmm7_4
  float v34; // xmm8_4
  float v35; // xmm3_4
  __int64 v36; // rax
  int v37; // xmm1_4
  float v38; // xmm2_4
  int v39; // xmm1_4
  int v40; // xmm0_4
  int v41; // xmm1_4
  int v42; // xmm0_4
  float v43; // xmm1_4
  float v44; // xmm2_4
  int v45; // xmm1_4
  int v46; // xmm0_4
  int v47; // xmm1_4
  int v48; // xmm0_4
  float v49; // xmm1_4
  int v51; // [rsp+58h] [rbp-B0h]
  __int64 v52; // [rsp+60h] [rbp-A8h] BYREF
  float v53; // [rsp+68h] [rbp-A0h]
  int v54; // [rsp+70h] [rbp-98h] BYREF
  int v55; // [rsp+74h] [rbp-94h]
  int v56; // [rsp+78h] [rbp-90h]
  _DWORD v57[2]; // [rsp+80h] [rbp-88h] BYREF
  float v58; // [rsp+88h] [rbp-80h]
  _DWORD v59[4]; // [rsp+90h] [rbp-78h] BYREF
  _DWORD v60[4]; // [rsp+A0h] [rbp-68h] BYREF
  _DWORD v61[4]; // [rsp+B0h] [rbp-58h] BYREF
  float v62; // [rsp+178h] [rbp+70h] BYREF
  __int64 v63; // [rsp+180h] [rbp+78h]

  v63 = a2;
  v6 = 0;
  a1[7] = 0.0;
  v51 = 0;
  if ( *(int *)(a2 + 16) <= 0 )
    return 0;
  v10 = a5;
  v11 = a2 + 48;
  v12 = a6;
  do
  {
    v13 = 0;
    if ( *(int *)v11 > 0 )
    {
      v14 = 0;
      do
      {
        v15 = *(_QWORD *)(v11 + 8);
        v16 = 3 * *(_DWORD *)(v15 + v14 + 8);
        v17 = *(float *)(a3 + 4 * v16);
        v18 = *(float *)(a3 + 4 * v16 + 4);
        v19 = *(float *)(a3 + 4 * v16 + 8);
        LODWORD(v16) = *(_DWORD *)(v15 + v14 + 12);
        *(float *)v59 = v17;
        *(float *)&v59[2] = v19;
        *(float *)&v59[1] = v18;
        v20 = 3 * (int)v16;
        v21 = *(float *)(a3 + 4 * v20 + 8);
        v22 = *(float *)(a3 + 4 * v20);
        v23 = *(float *)(a3 + 4 * v20 + 4);
        LODWORD(v20) = *(_DWORD *)(v15 + v14 + 16);
        *(float *)&v60[2] = v21;
        v24 = v21 - v19;
        *(float *)&v60[1] = v23;
        v25 = v23 - v18;
        *(float *)v60 = v22;
        v26 = v22 - v17;
        v27 = 3 * (int)v20;
        v28 = *(float *)(a3 + 4 * v27);
        v29 = *(float *)(a3 + 4 * v27 + 4);
        v58 = *(float *)(a3 + 4 * v27 + 8);
        *(float *)v57 = v28;
        v30 = v28 - v17;
        *(float *)&v57[1] = v29;
        v31 = v29 - v18;
        v32 = (float)(v31 * v24) - (float)((float)(v58 - v19) * v25);
        v33 = (float)((float)(v58 - v19) * v26) - (float)(v30 * v24);
        v34 = (float)(v30 * v25) - (float)(v31 * v26);
        v35 = fsqrt((float)((float)(v33 * v33) + (float)(v32 * v32)) + (float)(v34 * v34));
        if ( v35 == 0.0 )
        {
          v52 = 0;
          v53 = 0.0;
        }
        else
        {
          *(float *)&v52 = v32 * (float)(1.0 / v35);
          *((float *)&v52 + 1) = v33 * (float)(1.0 / v35);
          v53 = v34 * (float)(1.0 / v35);
        }
        if ( *(_DWORD *)(v15 + v14 + 4) == 4 )
        {
          v36 = 3 * *(_DWORD *)(v15 + v14 + 20);
          v37 = *(_DWORD *)(a3 + 4 * v36 + 4);
          v61[0] = *(_DWORD *)(a3 + 4 * v36);
          v61[2] = *(_DWORD *)(a3 + 4 * v36 + 8);
          v61[1] = v37;
        }
        if ( (unsigned int)sub_140025D20(
                             (unsigned int)&v54,
                             (unsigned int)&v52,
                             (unsigned int)&v62,
                             a4,
                             v10,
                             v12,
                             (__int64)v59,
                             (__int64)v60,
                             (__int64)v57) )
        {
          v38 = v62;
          if ( v62 > a1[7] )
          {
            v39 = v55;
            *(_DWORD *)a1 = v54;
            v40 = v56;
            *((_DWORD *)a1 + 1) = v39;
            v41 = v52;
            *((_DWORD *)a1 + 2) = v40;
            v42 = HIDWORD(v52);
            *((_DWORD *)a1 + 3) = v41;
            v43 = v53;
            *((_DWORD *)a1 + 4) = v42;
            a1[5] = v43;
            a1[7] = v38;
          }
        }
        if ( *(_DWORD *)(*(_QWORD *)(v11 + 8) + v14 + 4) == 4
          && (unsigned int)sub_140025D20(
                             (unsigned int)&v54,
                             (unsigned int)&v52,
                             (unsigned int)&v62,
                             a4,
                             v10,
                             v12,
                             (__int64)v59,
                             (__int64)v57,
                             (__int64)v61) )
        {
          v44 = v62;
          if ( v62 > a1[7] )
          {
            v45 = v55;
            *(_DWORD *)a1 = v54;
            v46 = v56;
            *((_DWORD *)a1 + 1) = v45;
            v47 = v52;
            *((_DWORD *)a1 + 2) = v46;
            v48 = HIDWORD(v52);
            *((_DWORD *)a1 + 3) = v47;
            v49 = v53;
            *((_DWORD *)a1 + 4) = v48;
            a1[5] = v49;
            a1[7] = v44;
          }
        }
        ++v13;
        v14 += 36;
      }
      while ( v13 < *(_DWORD *)v11 );
      v6 = v51;
      a2 = v63;
    }
    ++v6;
    v11 += 56;
    v51 = v6;
  }
  while ( v6 < *(_DWORD *)(a2 + 16) );
  return a1[7] > 0.0;
}

