/* Address: 0x140034370 | Name: sub_140034370 | Size: 888 bytes */
_BOOL8 __fastcall sub_140034370(
        _DWORD *a1,
        _DWORD *a2,
        float *a3,
        int a4,
        __int64 a5,
        __int64 a6,
        int *a7,
        __int64 a8,
        __int64 a9)
{
  int v9; // r13d
  int *v10; // r15
  int *v11; // r12
  float v13; // xmm7_4
  signed int v16; // esi
  float v17; // xmm8_4
  float v18; // xmm9_4
  float v19; // xmm10_4
  __int64 v20; // rcx
  __int64 v21; // rax
  float v22; // xmm1_4
  float v23; // xmm0_4
  __int64 v24; // rcx
  __int64 v25; // rax
  float v26; // xmm1_4
  float v27; // xmm0_4
  float v28; // xmm0_4
  __int64 v29; // rcx
  __int64 v30; // rax
  float v31; // xmm1_4
  float v32; // xmm0_4
  float v33; // xmm1_4
  float v34; // xmm0_4
  int v35; // xmm1_4
  float v36; // xmm0_4
  int v37; // xmm2_4
  int v38; // xmm1_4
  int v39; // xmm0_4
  int v40; // xmm1_4
  int v41; // xmm0_4
  int v42; // eax
  int v43; // xmm2_4
  int v44; // xmm1_4
  int v45; // xmm0_4
  int v46; // xmm1_4
  int v47; // xmm0_4
  __int64 v49; // [rsp+30h] [rbp-C9h]
  __int64 v50; // [rsp+30h] [rbp-C9h]
  int v51; // [rsp+50h] [rbp-A9h]
  int v52; // [rsp+50h] [rbp-A9h]
  int v53; // [rsp+58h] [rbp-A1h] BYREF
  int v54; // [rsp+5Ch] [rbp-9Dh]
  int v55; // [rsp+60h] [rbp-99h]
  int v56; // [rsp+68h] [rbp-91h] BYREF
  int v57; // [rsp+6Ch] [rbp-8Dh]
  int v58; // [rsp+70h] [rbp-89h]
  float v59[4]; // [rsp+78h] [rbp-81h] BYREF
  float v60[4]; // [rsp+88h] [rbp-71h] BYREF
  float v61[4]; // [rsp+98h] [rbp-61h] BYREF
  float v62[24]; // [rsp+A8h] [rbp-51h] BYREF
  int v63; // [rsp+150h] [rbp+57h]

  v63 = a4;
  v9 = a8;
  v10 = dword_1402B3664;
  v11 = dword_1402B3558;
  v13 = *(float *)&a9;
  v16 = 0;
  *a3 = 65536.0;
  v17 = (float)*a7;
  v18 = (float)a7[1];
  v19 = (float)a7[2];
  do
  {
    if ( ((((64 << v16) & v9) != 0) & _bittest(&v9, v16)) != 0 )
    {
      v20 = 3LL * *(v10 - 1);
      v21 = *v10;
      v22 = (float)(v18 + *(float *)&dword_1402B34F0[3 * *(v10 - 1) + 1]) * v13;
      v60[0] = (float)(v17 + *(float *)&dword_1402B34F0[3 * *(v10 - 1)]) * v13;
      v23 = v19 + *(float *)&dword_1402B34F0[v20 + 2];
      v24 = 3 * v21;
      v60[1] = v22;
      v25 = v10[1];
      v26 = (float)(v18 + *(float *)&dword_1402B34F0[v24 + 1]) * v13;
      v60[2] = v23 * v13;
      v27 = v17 + *(float *)&dword_1402B34F0[v24];
      v61[1] = v26;
      v61[0] = v27 * v13;
      v28 = v19 + *(float *)&dword_1402B34F0[v24 + 2];
      v29 = 3 * v25;
      v30 = v10[2];
      v31 = (float)(v18 + *(float *)&dword_1402B34F0[v29 + 1]) * v13;
      v61[2] = v28 * v13;
      v32 = v17 + *(float *)&dword_1402B34F0[v29];
      v59[1] = v31;
      v59[0] = v32 * v13;
      v33 = v18 + *(float *)&dword_1402B34F0[3 * v30 + 1];
      v59[2] = (float)(v19 + *(float *)&dword_1402B34F0[v29 + 2]) * v13;
      v34 = v17 + *(float *)&dword_1402B34F0[3 * v30];
      LODWORD(v49) = a6;
      v62[1] = v33 * v13;
      v35 = *(v11 - 1);
      v62[0] = v34 * v13;
      v36 = v19 + *(float *)&dword_1402B34F0[3 * v30 + 2];
      v54 = v35;
      v62[2] = v36 * v13;
      if ( (unsigned int)((__int64 (__fastcall *)(unsigned int, unsigned int, unsigned int, int, __int64, __int64, __int64, __int64, __int64, int, _DWORD, int, int, int))sub_140035690)(
                           (unsigned int)&v56,
                           (unsigned int)&v53,
                           (unsigned int)&a9,
                           a4,
                           a5,
                           v49,
                           (__int64)v60,
                           (__int64)v61,
                           (__int64)v59,
                           v51,
                           *(v11 - 2),
                           *v11,
                           v56,
                           v58) )
      {
        v37 = a9;
        if ( *(float *)&a9 < *a3 )
        {
          v38 = v57;
          *a1 = v56;
          v39 = v58;
          a1[1] = v38;
          v40 = v53;
          a1[2] = v39;
          v41 = v54;
          *a2 = v40;
          a2[2] = v55;
          a2[1] = v41;
          *(_DWORD *)a3 = v37;
        }
      }
      LODWORD(v50) = a6;
      v42 = ((__int64 (__fastcall *)(unsigned int, unsigned int, unsigned int, int, __int64, __int64, __int64, __int64, __int64, int, int, int, int, int))sub_140035690)(
              (unsigned int)&v56,
              (unsigned int)&v53,
              (unsigned int)&a9,
              v63,
              a5,
              v50,
              (__int64)v60,
              (__int64)v59,
              (__int64)v62,
              v52,
              v53,
              v55,
              v56,
              v58);
      a4 = v63;
      if ( v42 )
      {
        v43 = a9;
        if ( *(float *)&a9 < *a3 )
        {
          v44 = v57;
          *a1 = v56;
          v45 = v58;
          a1[1] = v44;
          v46 = v53;
          a1[2] = v45;
          v47 = v54;
          *a2 = v46;
          a2[2] = v55;
          a2[1] = v47;
          *(_DWORD *)a3 = v43;
        }
      }
    }
    ++v16;
    v10 += 4;
    v11 += 3;
  }
  while ( v16 < 6 );
  return *a3 < 65536.0;
}

