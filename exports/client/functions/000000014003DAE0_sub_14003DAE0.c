/* Address: 0x14003dae0 | Name: sub_14003DAE0 | Size: 917 bytes */
_BOOL8 __fastcall sub_14003DAE0(float *a1, __int64 a2, int a3, int a4, int a5)
{
  __int128 v5; // xmm6
  __int128 v6; // xmm7
  __int128 v7; // xmm8
  __int128 v8; // xmm9
  __int128 v9; // xmm10
  __int128 v10; // xmm11
  __int128 v11; // xmm12
  int v12; // r14d
  int *v17; // rsi
  int v18; // xmm10_4
  float v19; // xmm1_4
  float v20; // xmm2_4
  __int64 v21; // rax
  float v22; // xmm3_4
  float v23; // xmm6_4
  float v24; // xmm5_4
  __int64 v25; // rax
  float v26; // xmm3_4
  float v27; // xmm5_4
  float v28; // xmm6_4
  float v29; // xmm8_4
  float v30; // xmm4_4
  float v31; // xmm8_4
  float v32; // xmm4_4
  float v33; // xmm9_4
  float v34; // xmm7_4
  float v35; // xmm8_4
  float v36; // xmm3_4
  float v37; // xmm2_4
  int v38; // xmm1_4
  int v39; // xmm0_4
  int v40; // xmm1_4
  int v41; // xmm0_4
  float v42; // xmm1_4
  float v43; // xmm2_4
  int v44; // xmm1_4
  int v45; // xmm0_4
  int v46; // xmm1_4
  int v47; // xmm0_4
  float v48; // xmm1_4
  int v50; // [rsp+50h] [rbp-B8h]
  __int64 v51; // [rsp+58h] [rbp-B0h] BYREF
  float v52; // [rsp+60h] [rbp-A8h]
  int v53; // [rsp+68h] [rbp-A0h] BYREF
  int v54; // [rsp+6Ch] [rbp-9Ch]
  int v55; // [rsp+70h] [rbp-98h]
  _DWORD v56[2]; // [rsp+78h] [rbp-90h] BYREF
  float v57; // [rsp+80h] [rbp-88h]
  float v58[2]; // [rsp+88h] [rbp-80h] BYREF
  float v59; // [rsp+90h] [rbp-78h]
  _DWORD v60[2]; // [rsp+98h] [rbp-70h] BYREF
  float v61; // [rsp+A0h] [rbp-68h]
  _DWORD v62[4]; // [rsp+A8h] [rbp-60h] BYREF
  __int128 v63; // [rsp+B8h] [rbp-50h]
  __int128 v64; // [rsp+C8h] [rbp-40h]
  __int128 v65; // [rsp+D8h] [rbp-30h]
  __int128 v66; // [rsp+E8h] [rbp-20h]
  __int128 v67; // [rsp+F8h] [rbp-10h]
  __int128 v68; // [rsp+108h] [rbp+0h]
  __int128 v69; // [rsp+118h] [rbp+10h]
  __int64 v70; // [rsp+128h] [rbp+20h]
  __int64 v71; // [rsp+130h] [rbp+28h]
  __int64 v72; // [rsp+138h] [rbp+30h]
  float v73; // [rsp+158h] [rbp+50h] BYREF

  v12 = 0;
  a1[7] = 65536.0;
  if ( *(int *)(a2 + 32772) <= 0 )
    return 0;
  v17 = (int *)(a2 + 32784);
  v69 = v5;
  v68 = v6;
  v67 = v7;
  v66 = v8;
  v65 = v9;
  v18 = a5;
  v64 = v10;
  v63 = v11;
  do
  {
    v19 = *(float *)(a2 + 16LL * *(v17 - 1) + 12);
    v20 = *(float *)(a2 + 16LL * *(v17 - 1) + 16);
    v21 = 2LL * *v17;
    v58[0] = *(float *)(a2 + 16LL * *(v17 - 1) + 8);
    v59 = v20;
    v58[1] = v19;
    v22 = *(float *)(a2 + 8 * v21 + 16);
    v23 = *(float *)(a2 + 8 * v21 + 8);
    v24 = *(float *)(a2 + 8 * v21 + 12);
    v25 = 2LL * v17[1];
    v61 = v22;
    v26 = v22 - v20;
    *(float *)&v60[1] = v24;
    v27 = v24 - v19;
    *(float *)v60 = v23;
    v28 = v23 - v58[0];
    v29 = *(float *)(a2 + 8 * v25 + 8);
    v30 = *(float *)(a2 + 8 * v25 + 12);
    v57 = *(float *)(a2 + 8 * v25 + 16);
    *(float *)v56 = v29;
    v31 = v29 - v58[0];
    *(float *)&v56[1] = v30;
    v32 = v30 - v19;
    v33 = (float)(v32 * v26) - (float)((float)(v57 - v20) * v27);
    v34 = (float)((float)(v57 - v20) * v28) - (float)(v31 * v26);
    v35 = (float)(v31 * v27) - (float)(v32 * v28);
    v36 = fsqrt((float)((float)(v34 * v34) + (float)(v33 * v33)) + (float)(v35 * v35));
    if ( v36 == 0.0 )
    {
      v51 = 0;
      v52 = 0.0;
    }
    else
    {
      *(float *)&v51 = v33 * (float)(1.0 / v36);
      *((float *)&v51 + 1) = v34 * (float)(1.0 / v36);
      v52 = v35 * (float)(1.0 / v36);
    }
    if ( (unsigned int)sub_14003F0B0(
                         (unsigned int)&v53,
                         (unsigned int)&v51,
                         (unsigned int)&v73,
                         a3,
                         a4,
                         v18,
                         (unsigned int)v58,
                         (unsigned int)v60,
                         (unsigned int)v56,
                         v50,
                         v51,
                         LODWORD(v52),
                         v53,
                         v55,
                         v56[0],
                         LODWORD(v57),
                         LODWORD(v58[0]),
                         LODWORD(v59),
                         v60[0],
                         LODWORD(v61),
                         v62[0],
                         v62[2],
                         v63,
                         DWORD2(v63),
                         v64,
                         DWORD2(v64),
                         v65,
                         *((__int64 *)&v65 + 1),
                         v66,
                         *((__int64 *)&v66 + 1),
                         v67,
                         *((__int64 *)&v67 + 1),
                         v68,
                         *((__int64 *)&v68 + 1),
                         v69,
                         *((__int64 *)&v69 + 1),
                         v70,
                         v71,
                         v72) )
    {
      v37 = v73;
      if ( v73 < a1[7] )
      {
        v38 = v54;
        *(_DWORD *)a1 = v53;
        v39 = v55;
        *((_DWORD *)a1 + 1) = v38;
        v40 = v51;
        *((_DWORD *)a1 + 2) = v39;
        v41 = HIDWORD(v51);
        *((_DWORD *)a1 + 3) = v40;
        v42 = v52;
        *((_DWORD *)a1 + 4) = v41;
        a1[5] = v42;
        a1[7] = v37;
      }
    }
    if ( *(v17 - 2) == 4
      && (unsigned int)sub_14003F0B0(
                         (unsigned int)&v53,
                         (unsigned int)&v51,
                         (unsigned int)&v73,
                         a3,
                         a4,
                         v18,
                         (unsigned int)v58,
                         (unsigned int)v56,
                         (unsigned int)v62,
                         v50,
                         v51,
                         LODWORD(v52),
                         v53,
                         v55,
                         v56[0],
                         LODWORD(v57),
                         LODWORD(v58[0]),
                         LODWORD(v59),
                         v60[0],
                         LODWORD(v61),
                         *(_DWORD *)(a2 + 16LL * v17[2] + 8),
                         *(_DWORD *)(a2 + 16LL * v17[2] + 16),
                         v63,
                         DWORD2(v63),
                         v64,
                         DWORD2(v64),
                         v65,
                         *((__int64 *)&v65 + 1),
                         v66,
                         *((__int64 *)&v66 + 1),
                         v67,
                         *((__int64 *)&v67 + 1),
                         v68,
                         *((__int64 *)&v68 + 1),
                         v69,
                         *((__int64 *)&v69 + 1),
                         v70,
                         v71,
                         v72) )
    {
      v43 = v73;
      if ( v73 < a1[7] )
      {
        v44 = v54;
        *(_DWORD *)a1 = v53;
        v45 = v55;
        *((_DWORD *)a1 + 1) = v44;
        v46 = v51;
        *((_DWORD *)a1 + 2) = v45;
        v47 = HIDWORD(v51);
        *((_DWORD *)a1 + 3) = v46;
        v48 = v52;
        *((_DWORD *)a1 + 4) = v47;
        a1[5] = v48;
        a1[7] = v43;
      }
    }
    ++v12;
    v17 += 8;
  }
  while ( v12 < *(_DWORD *)(a2 + 32772) );
  return a1[7] < 65536.0;
}

