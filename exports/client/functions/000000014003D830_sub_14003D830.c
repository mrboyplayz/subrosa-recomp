/* Address: 0x14003d830 | Name: sub_14003D830 | Size: 683 bytes */
_BOOL8 __fastcall sub_14003D830(float *a1, int *a2, int a3, int a4, int a5)
{
  __int128 v5; // xmm6
  __int128 v6; // xmm7
  __int128 v7; // xmm8
  __int128 v8; // xmm9
  __int128 v9; // xmm10
  __int128 v10; // xmm11
  __int128 v11; // xmm12
  int v12; // edi
  float *v17; // rsi
  int v18; // xmm10_4
  float v19; // xmm7_4
  float v20; // xmm1_4
  float v21; // xmm2_4
  float v22; // xmm8_4
  float v23; // xmm4_4
  float v24; // xmm3_4
  float v25; // xmm5_4
  float v26; // xmm6_4
  float v27; // xmm7_4
  float v28; // xmm3_4
  float v29; // xmm4_4
  float v30; // xmm5_4
  float v31; // xmm6_4
  float v32; // xmm9_4
  float v33; // xmm0_4
  float v34; // xmm8_4
  float v35; // xmm7_4
  float v36; // xmm3_4
  float v37; // xmm2_4
  int v38; // xmm1_4
  int v39; // xmm0_4
  int v40; // xmm1_4
  int v41; // xmm0_4
  float v42; // xmm1_4
  int v44; // [rsp+50h] [rbp-B8h]
  __int64 v45; // [rsp+58h] [rbp-B0h] BYREF
  float v46; // [rsp+60h] [rbp-A8h]
  _DWORD v47[2]; // [rsp+68h] [rbp-A0h] BYREF
  float v48; // [rsp+70h] [rbp-98h]
  _DWORD v49[2]; // [rsp+78h] [rbp-90h] BYREF
  float v50; // [rsp+80h] [rbp-88h]
  float v51[2]; // [rsp+88h] [rbp-80h] BYREF
  float v52; // [rsp+90h] [rbp-78h]
  _DWORD v53[2]; // [rsp+98h] [rbp-70h] BYREF
  int v54; // [rsp+A0h] [rbp-68h]
  __int128 v55; // [rsp+A8h] [rbp-60h]
  __int128 v56; // [rsp+B8h] [rbp-50h]
  __int128 v57; // [rsp+C8h] [rbp-40h]
  __int128 v58; // [rsp+D8h] [rbp-30h]
  __int128 v59; // [rsp+E8h] [rbp-20h]
  __int128 v60; // [rsp+F8h] [rbp-10h]
  __int128 v61; // [rsp+108h] [rbp+0h]
  __int64 v62; // [rsp+118h] [rbp+10h]
  __int64 v63; // [rsp+120h] [rbp+18h]
  __int64 v64; // [rsp+128h] [rbp+20h]
  __int64 v65; // [rsp+130h] [rbp+28h]
  __int64 savedregs; // [rsp+138h] [rbp+30h]
  float v67; // [rsp+148h] [rbp+40h] BYREF

  v12 = 0;
  a1[7] = 65536.0;
  if ( *a2 <= 0 )
    return 0;
  v17 = (float *)(a2 + 3);
  v61 = v5;
  v60 = v6;
  v59 = v7;
  v58 = v8;
  v57 = v9;
  v18 = a5;
  v56 = v10;
  v55 = v11;
  do
  {
    v19 = v17[6];
    v20 = *(v17 - 1);
    v21 = *v17;
    v22 = v17[4];
    v23 = v17[5];
    v24 = v17[3];
    v25 = v17[2];
    v26 = v17[1];
    v51[0] = *(v17 - 2);
    v52 = v21;
    v48 = v19;
    v27 = v19 - v21;
    v50 = v24;
    v28 = v24 - v21;
    *(float *)v47 = v22;
    *(float *)&v47[1] = v23;
    v29 = v23 - v20;
    v51[1] = v20;
    *(float *)&v49[1] = v25;
    v30 = v25 - v20;
    *(float *)v49 = v26;
    v31 = v26 - v51[0];
    v32 = (float)(v29 * v28) - (float)(v27 * v30);
    v33 = (float)(v22 - v51[0]) * v28;
    v34 = (float)((float)(v22 - v51[0]) * v30) - (float)(v29 * v31);
    v35 = (float)(v27 * v31) - v33;
    v36 = fsqrt((float)((float)(v35 * v35) + (float)(v32 * v32)) + (float)(v34 * v34));
    if ( v36 == 0.0 )
    {
      v45 = 0;
      v46 = 0.0;
    }
    else
    {
      *(float *)&v45 = v32 * (float)(1.0 / v36);
      *((float *)&v45 + 1) = v35 * (float)(1.0 / v36);
      v46 = v34 * (float)(1.0 / v36);
    }
    if ( (unsigned int)sub_14003F0B0(
                         (unsigned int)v53,
                         (unsigned int)&v45,
                         (unsigned int)&v67,
                         a3,
                         a4,
                         v18,
                         (unsigned int)v51,
                         (unsigned int)v49,
                         (unsigned int)v47,
                         v44,
                         v45,
                         LODWORD(v46),
                         v47[0],
                         LODWORD(v48),
                         v49[0],
                         LODWORD(v50),
                         LODWORD(v51[0]),
                         LODWORD(v52),
                         v53[0],
                         v54,
                         v55,
                         DWORD2(v55),
                         v56,
                         DWORD2(v56),
                         v57,
                         DWORD2(v57),
                         v58,
                         *((__int64 *)&v58 + 1),
                         v59,
                         *((__int64 *)&v59 + 1),
                         v60,
                         *((__int64 *)&v60 + 1),
                         v61,
                         *((__int64 *)&v61 + 1),
                         v62,
                         v63,
                         v64,
                         v65,
                         savedregs) )
    {
      v37 = v67;
      if ( v67 < a1[7] )
      {
        v38 = v53[1];
        *a1 = *(float *)v53;
        v39 = v54;
        *((_DWORD *)a1 + 1) = v38;
        v40 = v45;
        *((_DWORD *)a1 + 2) = v39;
        v41 = HIDWORD(v45);
        *((_DWORD *)a1 + 3) = v40;
        v42 = v46;
        *((_DWORD *)a1 + 4) = v41;
        a1[5] = v42;
        a1[7] = v37;
      }
    }
    ++v12;
    v17 += 12;
  }
  while ( v12 < *a2 );
  return a1[7] < 65536.0;
}

