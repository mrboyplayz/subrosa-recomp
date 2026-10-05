/* Address: 0x140087810 | Name: sub_140087810 | Size: 2020 bytes */
__int64 __fastcall sub_140087810(int a1, int a2)
{
  __int64 v2; // r9
  __int64 v3; // rbx
  signed int v4; // r8d
  __int64 v5; // rcx
  unsigned int v6; // eax
  __int64 v7; // rax
  int v8; // ecx
  float v9; // xmm0_4
  int v10; // xmm1_4
  unsigned int v11; // ecx
  __int64 v12; // r8
  unsigned int v13; // eax
  char v14; // dl
  __int64 v15; // rdx
  float v16; // xmm0_4
  float v17; // xmm2_4
  __int64 v18; // rdx
  __int64 v19; // rdx
  float *v20; // r14
  __int64 v21; // r15
  unsigned int *v22; // rbp
  __m128i v23; // xmm9
  __m128i v24; // xmm7
  __m128i v25; // xmm8
  __int64 v26; // r8
  signed int v27; // esi
  int *v28; // rdi
  __int64 v29; // rbx
  __int64 v30; // r8
  float v31; // xmm0_4
  float v32; // xmm1_4
  int v33; // edx
  __m128i v34; // xmm1
  const char *v35; // rcx
  bool v36; // zf
  __int64 v37; // r9
  __int64 v38; // r8
  __int64 v39; // rdx
  unsigned __int64 v40; // rbp
  __int64 v41; // r12
  _BYTE *v42; // r14
  __int64 v43; // r13
  char *v44; // r15
  int v45; // edi
  unsigned int *v46; // rsi
  __m128i v47; // xmm9
  __int64 v48; // rbx
  double v49; // xmm7_8
  double v50; // xmm10_8
  __m128i v51; // xmm8
  __int64 v52; // r8
  __m128i v53; // xmm2
  __m128i v54; // xmm3
  signed int v55; // edi
  __int64 v56; // rbx
  __int64 v57; // rdx
  int v58; // xmm2_4
  float v59; // xmm0_4
  float v60; // xmm1_4
  __int64 v62; // [rsp+0h] [rbp-1B8h] BYREF
  int v63; // [rsp+20h] [rbp-198h]
  int v64; // [rsp+28h] [rbp-190h]
  int v65; // [rsp+30h] [rbp-188h]
  int v66; // [rsp+38h] [rbp-180h]
  int v67; // [rsp+40h] [rbp-178h]
  int v68; // [rsp+48h] [rbp-170h]
  int v69; // [rsp+50h] [rbp-168h]
  _BOOL8 v70; // [rsp+60h] [rbp-158h]
  unsigned __int64 v71; // [rsp+68h] [rbp-150h]
  __int64 v72; // [rsp+70h] [rbp-148h]
  __int64 v73; // [rsp+78h] [rbp-140h]
  __int64 v74; // [rsp+80h] [rbp-138h]
  float v76[4]; // [rsp+94h] [rbp-124h] BYREF
  char v77; // [rsp+A4h] [rbp-114h] BYREF
  __int64 v78; // [rsp+D0h] [rbp-E8h]

  v2 = 7166LL * a2;
  v3 = a1;
  v4 = -1;
  if ( (int)dword_140404A6C[v2 + 280658139] > 0 )
    v4 = dword_140404A6C[v2 + 280658140];
  v70 = 0;
  v72 = 1;
  if ( v4 != -1 )
  {
    v5 = 1760LL * v4;
    v6 = dword_140404A6C[v5 + 278845898];
    if ( v6 == 25 || (v70 = 0, v6 == 33) )
      v70 = dword_140404A6C[v5 + 278846052] == 1;
  }
  v7 = 0;
  v8 = -2;
  do
  {
    if ( (unsigned __int64)v7 >= 2 )
    {
      v10 = 1141374976;
      v9 = (float)((float)v8 * 140.0) + 212.0;
    }
    else
    {
      v9 = 608.0;
      if ( v7 == 1 )
        v9 = 416.0;
      v10 = 1140195328;
    }
    v76[2 * v7 - 1] = v9;
    ++v8;
    LODWORD(v76[2 * v7++]) = v10;
  }
  while ( v7 < 7 );
  v11 = dword_140404A6C[v2 + 280658335];
  dword_140404A6C[438291413] = 1;
  if ( v11 - 1 <= 1 )
  {
    v12 = (int)dword_140404A6C[v2 + 280658338];
    if ( v11 == 2 )
    {
      v13 = dword_140404A6C[v2 + 280658339] + 2;
      v14 = v13;
      if ( dword_140404A6C[3597 * v3 + 71857714 + 9 * v12] )
      {
        v14 = dword_140404A6C[v2 + 280658338];
        LOBYTE(v12) = v13;
      }
    }
    else
    {
      v14 = dword_140404A6C[v2 + 280658338];
      LOBYTE(v12) = v12 ^ 1;
    }
    v15 = v14 & 7;
    v16 = v76[2 * v15 - 1];
    v17 = v76[2 * v15];
    v18 = 14388 * v3 + 36 * v15;
    if ( *(int *)((char *)&dword_140404A6C[71857714] + v18) > 0 )
    {
      v19 = (int)dword_140404A6C[*((unsigned __int8 *)&dword_140404A6C[71857715] + v18) + 282486849];
      if ( (_DWORD)v19 != -1 )
        sub_14006D300(
          0,
          v19,
          (float)((float)(v76[2 * (v12 & 7) - 1] - v16)
                * (float)((float)(int)dword_140404A6C[v2 + 280658337] * 0.0099999998))
        + v16,
          (float)((float)(v76[2 * (v12 & 7)] - v17) * (float)((float)(int)dword_140404A6C[v2 + 280658337] * 0.0099999998))
        + v17,
          (float)(int)dword_140404A6C[12 * v19 + 433435868] * 0.5,
          (float)(int)dword_140404A6C[12 * v19 + 433435869] * 0.5,
          9,
          1065353216,
          1065353216,
          1065353216,
          1065353216);
    }
  }
  v20 = v76;
  v21 = 2;
  v74 = v3;
  v71 = 14388 * v3;
  v22 = &dword_140404A6C[3597 * v3 + 71857714];
  do
  {
    v23 = (__m128i)*((unsigned int *)v20 - 1);
    v24 = (__m128i)*(unsigned int *)v20;
    unk_140404050(3553, dword_140404A6C[451221642]);
    v25 = v23;
    *(float *)v25.m128i_i32 = *(float *)v23.m128i_i32 + 8.0;
    sub_14006CFF0(*(double *)v25.m128i_i64, *(double *)v24.m128i_i64, v26, 32.0, 9, 0, 0, 0, 1048576000);
    v27 = 0;
    if ( (int)*v22 > 0 )
    {
      v28 = (int *)(v22 + 1);
      do
      {
        v29 = (unsigned __int8)*v28;
        v30 = (int)dword_140404A6C[v29 + 282486849];
        if ( (_DWORD)v30 != -1 )
        {
          v31 = (float)(int)dword_140404A6C[12 * v30 + 433435868] * 0.5;
          v32 = (float)(int)dword_140404A6C[12 * v30 + 433435869] * 0.5;
          if ( (_DWORD)v29 == 13 && (*v28 < 0 || (*v28 & 0xFFFFFF00) == 0) )
          {
            v69 = 1065353216;
            v68 = 0;
            v67 = 0;
          }
          else
          {
            v69 = 1065353216;
            v68 = 1065353216;
            v67 = 1065353216;
          }
          sub_14006D300(
            0,
            v30,
            *(float *)v25.m128i_i32,
            *(float *)v24.m128i_i32,
            v31,
            v32,
            9,
            1065353216,
            v67,
            v68,
            v69);
        }
        v33 = *v28 >> 8;
        if ( (int)dword_140404A6C[1268 * v29 + 278521294] <= 0 )
        {
          if ( v33 > 0 && (_DWORD)v29 != 16 )
          {
            v67 = 1065353216;
            v35 = "+magazine";
            v66 = 1065353216;
            v65 = 1065353216;
            v64 = 1065353216;
            v36 = v33 == 1;
            v63 = 8;
            v37 = (unsigned int)_mm_cvtsi128_si32((__m128i)0x41000000u);
            v38 = (unsigned int)_mm_cvtsi128_si32(v24);
            v39 = (unsigned int)_mm_cvtsi128_si32(v25);
            if ( !v36 )
              v35 = "+empty magazine";
            sub_14006D930(v35, v39, v38, v37, v63);
          }
        }
        else
        {
          v68 = *v28 >> 8;
          v67 = 1065353216;
          v34 = v23;
          v66 = 1065353216;
          *(float *)v34.m128i_i32 = *(float *)v23.m128i_i32 + 16.0;
          v65 = 1065353216;
          v64 = 1065353216;
          sub_14006D930(
            "/i",
            (unsigned int)_mm_cvtsi128_si32(v34),
            (unsigned int)_mm_cvtsi128_si32(v24),
            (unsigned int)_mm_cvtsi128_si32((__m128i)0x41000000u),
            8);
        }
        ++v27;
        ++v28;
      }
      while ( v27 < (int)*v22 );
    }
    v20 += 2;
    v22 += 9;
    --v21;
  }
  while ( v21 );
  v40 = v71;
  v41 = 18;
  v42 = (char *)&dword_140404A6C[284024772] + 2;
  v43 = 5;
  v44 = &v77;
  v73 = 5;
  v45 = 1;
  v46 = &dword_140404A6C[v71 / 4 + 71857732];
  do
  {
    v47 = (__m128i)*((unsigned int *)v44 - 1);
    v48 = 2;
    *(_QWORD *)&v49 = *(unsigned int *)v44;
    *(_QWORD *)&v50 = *((unsigned int *)v44 - 1);
    *(float *)&v50 = *(float *)&v50 + 8.0;
    v51 = (__m128i)*(unsigned int *)v44;
    do
    {
      unk_140404050(3553, dword_140404A6C[451221642]);
      sub_14006CFF0(v50, v49, v52, 32.0, 9, 0, 0, 0, 1048576000);
      *(float *)&v49 = *(float *)&v49 + 32.0;
      --v48;
    }
    while ( v48 );
    v53 = v51;
    if ( *(unsigned int *)((char *)&dword_140404A6C[71856337] + v40) == v45 + 2 )
      v54 = (__m128i)0x41C00000u;
    else
      v54 = (__m128i)0x41400000u;
    v68 = v45;
    v67 = 1065353216;
    v66 = 1065353216;
    v65 = 1065353216;
    v64 = 1065353216;
    *(float *)v53.m128i_i32 = *(float *)v51.m128i_i32 - 32.0;
    sub_14006D930(
      "/i",
      (unsigned int)_mm_cvtsi128_si32(v47),
      (unsigned int)_mm_cvtsi128_si32(v53),
      (unsigned int)_mm_cvtsi128_si32(v54),
      8);
    v55 = 0;
    v56 = 0;
    if ( (int)*v46 > 0 )
    {
      do
      {
        v57 = (int)dword_140404A6C[LOBYTE(dword_140404A6C[3597 * v74 + 71857715 + v56 + v41]) + 282486849];
        if ( (_DWORD)v57 != -1 )
        {
          v58 = 1065353216;
          v59 = (float)(int)dword_140404A6C[12 * v57 + 433435868] * 0.5;
          v60 = (float)(int)dword_140404A6C[12 * v57 + 433435869] * 0.5;
          if ( !v56 && *v42 && !v70 )
          {
            v58 = 0;
            v59 = v59 * 1.125;
            v60 = v60 * 1.125;
          }
          sub_14006D300(0, v57, *(float *)&v50, *(float *)v51.m128i_i32, v59, v60, 9, v58, 1065353216, v58, 1065353216);
        }
        ++v55;
        *(float *)v51.m128i_i32 = *(float *)v51.m128i_i32 + 32.0;
        ++v56;
      }
      while ( v55 < (int)*v46 );
      v43 = v73;
      v40 = v71;
    }
    v44 += 8;
    v45 = v72 + 1;
    v41 += 9;
    v46 += 9;
    v72 = (unsigned int)(v72 + 1);
    ++v42;
    v73 = --v43;
  }
  while ( v43 );
  dword_140404A6C[438291413] = 2;
  return MEMORY[0x1401F8B20]((unsigned __int64)&v62 ^ v78);
}

