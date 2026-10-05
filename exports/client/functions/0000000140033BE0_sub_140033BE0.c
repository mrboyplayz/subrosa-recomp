/* Address: 0x140033be0 | Name: sub_140033BE0 | Size: 1012 bytes */
_BOOL8 __fastcall sub_140033BE0(float *a1, __int64 a2, __int64 a3, int a4, __int64 a5, int a6)
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
  __int64 v51; // [rsp+30h] [rbp-D8h]
  int v52; // [rsp+50h] [rbp-B8h]
  int v53; // [rsp+58h] [rbp-B0h]
  __int64 v54; // [rsp+60h] [rbp-A8h] BYREF
  float v55; // [rsp+68h] [rbp-A0h]
  int v56; // [rsp+70h] [rbp-98h] BYREF
  int v57; // [rsp+74h] [rbp-94h]
  int v58; // [rsp+78h] [rbp-90h]
  _DWORD v59[2]; // [rsp+80h] [rbp-88h] BYREF
  float v60; // [rsp+88h] [rbp-80h]
  _DWORD v61[4]; // [rsp+90h] [rbp-78h] BYREF
  _DWORD v62[4]; // [rsp+A0h] [rbp-68h] BYREF
  _DWORD v63[4]; // [rsp+B0h] [rbp-58h] BYREF
  float v64; // [rsp+178h] [rbp+70h] BYREF
  __int64 v65; // [rsp+180h] [rbp+78h]

  v65 = a2;
  v6 = 0;
  a1[7] = 0.0;
  v53 = 0;
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
        *(float *)v61 = v17;
        *(float *)&v61[2] = v19;
        *(float *)&v61[1] = v18;
        v20 = 3 * (int)v16;
        v21 = *(float *)(a3 + 4 * v20 + 8);
        v22 = *(float *)(a3 + 4 * v20);
        v23 = *(float *)(a3 + 4 * v20 + 4);
        LODWORD(v20) = *(_DWORD *)(v15 + v14 + 16);
        *(float *)&v62[2] = v21;
        v24 = v21 - v19;
        *(float *)&v62[1] = v23;
        v25 = v23 - v18;
        *(float *)v62 = v22;
        v26 = v22 - v17;
        v27 = 3 * (int)v20;
        v28 = *(float *)(a3 + 4 * v27);
        v29 = *(float *)(a3 + 4 * v27 + 4);
        v60 = *(float *)(a3 + 4 * v27 + 8);
        *(float *)v59 = v28;
        v30 = v28 - v17;
        *(float *)&v59[1] = v29;
        v31 = v29 - v18;
        v32 = (float)(v31 * v24) - (float)((float)(v60 - v19) * v25);
        v33 = (float)((float)(v60 - v19) * v26) - (float)(v30 * v24);
        v34 = (float)(v30 * v25) - (float)(v31 * v26);
        v35 = fsqrt((float)((float)(v33 * v33) + (float)(v32 * v32)) + (float)(v34 * v34));
        if ( v35 == 0.0 )
        {
          v54 = 0;
          v55 = 0.0;
        }
        else
        {
          *(float *)&v54 = v32 * (float)(1.0 / v35);
          *((float *)&v54 + 1) = v33 * (float)(1.0 / v35);
          v55 = v34 * (float)(1.0 / v35);
        }
        if ( *(_DWORD *)(v15 + v14 + 4) == 4 )
        {
          v36 = 3 * *(_DWORD *)(v15 + v14 + 20);
          v37 = *(_DWORD *)(a3 + 4 * v36 + 4);
          v63[0] = *(_DWORD *)(a3 + 4 * v36);
          v63[2] = *(_DWORD *)(a3 + 4 * v36 + 8);
          v63[1] = v37;
        }
        LODWORD(v51) = v12;
        if ( (unsigned int)((__int64 (__fastcall *)(unsigned int, unsigned int, unsigned int, int, __int64, __int64, __int64, __int64, __int64, int, int, _DWORD, _DWORD, int, int))sub_140035690)(
                             (unsigned int)&v56,
                             (unsigned int)&v54,
                             (unsigned int)&v64,
                             a4,
                             v10,
                             v51,
                             (__int64)v61,
                             (__int64)v62,
                             (__int64)v59,
                             v52,
                             v53,
                             v54,
                             LODWORD(v55),
                             v56,
                             v58) )
        {
          v38 = v64;
          if ( v64 > a1[7] )
          {
            v39 = v57;
            *(_DWORD *)a1 = v56;
            v40 = v58;
            *((_DWORD *)a1 + 1) = v39;
            v41 = v54;
            *((_DWORD *)a1 + 2) = v40;
            v42 = HIDWORD(v54);
            *((_DWORD *)a1 + 3) = v41;
            v43 = v55;
            *((_DWORD *)a1 + 4) = v42;
            a1[5] = v43;
            a1[7] = v38;
          }
        }
        if ( *(_DWORD *)(*(_QWORD *)(v11 + 8) + v14 + 4) == 4 )
        {
          LODWORD(v51) = v12;
          if ( (unsigned int)((__int64 (__fastcall *)(unsigned int, unsigned int, unsigned int, int, __int64, __int64, __int64, __int64, __int64, int, int, _DWORD, _DWORD, int, int))sub_140035690)(
                               (unsigned int)&v56,
                               (unsigned int)&v54,
                               (unsigned int)&v64,
                               a4,
                               v10,
                               v51,
                               (__int64)v61,
                               (__int64)v59,
                               (__int64)v63,
                               v52,
                               v53,
                               v54,
                               LODWORD(v55),
                               v56,
                               v58) )
          {
            v44 = v64;
            if ( v64 > a1[7] )
            {
              v45 = v57;
              *(_DWORD *)a1 = v56;
              v46 = v58;
              *((_DWORD *)a1 + 1) = v45;
              v47 = v54;
              *((_DWORD *)a1 + 2) = v46;
              v48 = HIDWORD(v54);
              *((_DWORD *)a1 + 3) = v47;
              v49 = v55;
              *((_DWORD *)a1 + 4) = v48;
              a1[5] = v49;
              a1[7] = v44;
            }
          }
        }
        ++v13;
        v14 += 36;
      }
      while ( v13 < *(_DWORD *)v11 );
      v6 = v53;
      a2 = v65;
    }
    ++v6;
    v11 += 56;
    v53 = v6;
  }
  while ( v6 < *(_DWORD *)(a2 + 16) );
  return a1[7] > 0.0;
}

