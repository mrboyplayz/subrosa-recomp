/* Address: 0x14002a8d0 | Name: sub_14002A8D0 | Size: 936 bytes */
_BOOL8 __fastcall sub_14002A8D0(
        _DWORD *a1,
        _DWORD *a2,
        float *a3,
        int a4,
        __int64 a5,
        int a6,
        int *a7,
        int a8,
        float a9)
{
  int *v10; // r12
  int *v11; // r14
  float v13; // xmm7_4
  signed int v16; // ebx
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
  float v37; // xmm2_4
  int v38; // xmm1_4
  int v39; // xmm0_4
  int v40; // xmm1_4
  int v41; // xmm0_4
  int v42; // xmm1_4
  int v43; // xmm0_4
  int v44; // eax
  float v45; // xmm2_4
  int v46; // xmm1_4
  int v47; // xmm0_4
  int v48; // xmm1_4
  int v49; // xmm0_4
  int v51; // [rsp+58h] [rbp-A1h] BYREF
  int v52; // [rsp+5Ch] [rbp-9Dh]
  int v53; // [rsp+60h] [rbp-99h]
  int v54; // [rsp+68h] [rbp-91h] BYREF
  int v55; // [rsp+6Ch] [rbp-8Dh]
  int v56; // [rsp+70h] [rbp-89h]
  float v57[4]; // [rsp+78h] [rbp-81h] BYREF
  float v58[4]; // [rsp+88h] [rbp-71h] BYREF
  float v59[4]; // [rsp+98h] [rbp-61h] BYREF
  float v60[24]; // [rsp+A8h] [rbp-51h] BYREF
  int v61; // [rsp+150h] [rbp+57h]

  v61 = a4;
  v10 = dword_140147804;
  v11 = dword_1401476F8;
  v13 = a9;
  v16 = 0;
  *a3 = 65536.0;
  v17 = (float)*a7;
  v18 = (float)a7[1];
  v19 = (float)a7[2];
  do
  {
    if ( ((((64 << v16) & a8) != 0) & _bittest(&a8, v16)) != 0 )
    {
      v20 = 3LL * *(v10 - 1);
      v21 = *v10;
      v22 = (float)(v18 + *(float *)&dword_140147690[3 * *(v10 - 1) + 1]) * v13;
      v58[0] = (float)(v17 + *(float *)&dword_140147690[3 * *(v10 - 1)]) * v13;
      v23 = v19 + *(float *)&dword_140147690[v20 + 2];
      v24 = 3 * v21;
      v58[1] = v22;
      v25 = v10[1];
      v26 = (float)(v18 + *(float *)&dword_140147690[v24 + 1]) * v13;
      v58[2] = v23 * v13;
      v27 = v17 + *(float *)&dword_140147690[v24];
      v59[1] = v26;
      v59[0] = v27 * v13;
      v28 = v19 + *(float *)&dword_140147690[v24 + 2];
      v29 = 3 * v25;
      v30 = v10[2];
      v31 = (float)(v18 + *(float *)&dword_140147690[v29 + 1]) * v13;
      v59[2] = v28 * v13;
      v32 = v17 + *(float *)&dword_140147690[v29];
      v57[1] = v31;
      v57[0] = v32 * v13;
      v33 = v18 + *(float *)&dword_140147690[3 * v30 + 1];
      v57[2] = (float)(v19 + *(float *)&dword_140147690[v29 + 2]) * v13;
      v34 = v17 + *(float *)&dword_140147690[3 * v30];
      v60[1] = v33 * v13;
      v35 = *(v11 - 1);
      v60[0] = v34 * v13;
      v36 = v19 + *(float *)&dword_140147690[3 * v30 + 2];
      v52 = v35;
      v60[2] = v36 * v13;
      v51 = *(v11 - 2);
      v53 = *v11;
      if ( (unsigned int)sub_14002B880(
                           (unsigned int)&v54,
                           (unsigned int)&v51,
                           (unsigned int)&a9,
                           a4,
                           a5,
                           a6,
                           (__int64)v58,
                           (__int64)v59,
                           (__int64)v57) )
      {
        v37 = a9;
        if ( a9 < *a3 )
        {
          v38 = v55;
          *a1 = v54;
          v39 = v56;
          a1[1] = v38;
          v40 = v51;
          a1[2] = v39;
          v41 = v52;
          *a2 = v40;
          a2[2] = v53;
          a2[1] = v41;
          *a3 = v37;
          dword_16E18CAAC = v16;
        }
      }
      v42 = *(v11 - 1);
      v51 = *(v11 - 2);
      v43 = *v11;
      v52 = v42;
      v53 = v43;
      v44 = sub_14002B880(
              (unsigned int)&v54,
              (unsigned int)&v51,
              (unsigned int)&a9,
              v61,
              a5,
              a6,
              (__int64)v58,
              (__int64)v57,
              (__int64)v60);
      a4 = v61;
      if ( v44 )
      {
        v45 = a9;
        if ( a9 < *a3 )
        {
          v46 = v55;
          *a1 = v54;
          v47 = v56;
          a1[1] = v46;
          v48 = v51;
          a1[2] = v47;
          v49 = v52;
          *a2 = v48;
          a2[2] = v53;
          a2[1] = v49;
          *a3 = v45;
          dword_16E18CAAC = v16;
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

