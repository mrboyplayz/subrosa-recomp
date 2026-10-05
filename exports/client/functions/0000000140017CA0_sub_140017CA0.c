/* Address: 0x140017ca0 | Name: sub_140017CA0 | Size: 4081 bytes */
__int64 __fastcall sub_140017CA0(int a1)
{
  signed int v1; // ebx
  __int64 v2; // rbp
  __int64 v3; // r14
  bool v4; // cc
  unsigned int v5; // eax
  int v6; // r15d
  int v7; // r9d
  __int64 v8; // r12
  signed int v9; // edi
  int v10; // edx
  __int64 v11; // rsi
  float v12; // xmm0_4
  float v13; // xmm0_4
  float v14; // xmm0_4
  float v15; // xmm0_4
  float v16; // xmm0_4
  float v17; // xmm0_4
  __int64 v18; // r11
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rcx
  int v22; // r9d
  unsigned int *v23; // r8
  unsigned int *v24; // rdx
  int v25; // eax
  __int64 v26; // rcx
  unsigned int v27; // eax
  __int64 v28; // rcx
  unsigned int v29; // eax
  void *v30; // rcx
  __int64 v31; // rax
  void *v32; // rcx
  __int64 v33; // rax
  void *v34; // rcx
  __int64 v35; // rax
  void *v36; // rcx
  __int64 v37; // rax
  int v38; // r9d
  __int64 v39; // r8
  __int64 v40; // rdx
  __int64 v41; // xmm0_8
  __int64 v42; // rcx
  __int64 v43; // rcx
  __int64 v44; // rcx
  void *v45; // rcx
  __int64 v46; // rax
  void *v47; // rcx
  __int64 v48; // rax
  void *v49; // rcx
  __int64 v50; // rax
  void *v51; // rcx
  __int64 v52; // rax
  void *v53; // rcx
  __int64 v54; // rax
  void *v55; // rcx
  __int64 v56; // rax
  __int64 v57; // rcx
  signed int v58; // edx
  __int64 v59; // rcx
  void *v60; // rcx
  __int64 result; // rax
  __int64 v62; // rdx
  unsigned int *v63; // r8
  int v64; // eax
  __int64 v65; // rcx
  __int64 v66; // rcx
  __int64 v67; // rcx
  __int64 v68; // rcx
  int v69; // [rsp+50h] [rbp+8h]

  v1 = 0;
  v2 = 58LL * a1;
  v3 = 58LL * a1;
  v4 = (signed int)dword_140404A6C[70998846] <= 0;
  v5 = 0;
  dword_140404A6C[v2 + 20074624] = 0;
  v6 = 0;
  *(_QWORD *)&dword_140404A6C[v3 + 20074625] = 0;
  *(_QWORD *)&dword_140404A6C[v3 + 20074627] = 0;
  *(_QWORD *)&dword_140404A6C[v3 + 20074629] = 0;
  if ( !v4 )
  {
    v7 = v69;
    v8 = 0;
    do
    {
      v9 = -1;
      v10 = 0;
      v11 = 3LL * (int)dword_140404A6C[4 * v8 + 70998847];
      do
      {
        if ( !v10 || v10 == 5 )
          v7 = 0;
        if ( v10 == 1 || v10 == 4 )
          v7 = 1;
        if ( (unsigned int)(v10 - 2) <= 1 )
          v7 = 2;
        if ( v10 >= 3 )
          v12 = 1.0;
        else
          v12 = 0.0;
        if ( v12 == *(float *)&dword_140404A6C[v7 + 70687550 + v11]
          && v12 == *(float *)&dword_140404A6C[2 * dword_140404A6C[4 * v8 + 70998848]
                                             + 70687550
                                             + v7
                                             + dword_140404A6C[4 * v8 + 70998848]]
          && v12 == *(float *)&dword_140404A6C[2 * dword_140404A6C[4 * v8 + 70998849]
                                             + 70687550
                                             + v7
                                             + dword_140404A6C[4 * v8 + 70998849]]
          && v12 == *(float *)&dword_140404A6C[2 * dword_140404A6C[4 * v8 + 70998850]
                                             + 70687550
                                             + v7
                                             + dword_140404A6C[4 * v8 + 70998850]] )
        {
          v9 = v10;
        }
        if ( v10 == -1 || v10 == 4 )
          v7 = 0;
        if ( !v10 || v10 == 3 )
          v7 = 1;
        if ( (unsigned int)(v10 - 1) <= 1 )
          v7 = 2;
        if ( v10 + 1 >= 3 )
          v13 = 1.0;
        else
          v13 = 0.0;
        if ( v13 == *(float *)&dword_140404A6C[v7 + 70687550 + v11]
          && v13 == *(float *)&dword_140404A6C[2 * dword_140404A6C[4 * v8 + 70998848]
                                             + 70687550
                                             + v7
                                             + dword_140404A6C[4 * v8 + 70998848]]
          && v13 == *(float *)&dword_140404A6C[2 * dword_140404A6C[4 * v8 + 70998849]
                                             + 70687550
                                             + v7
                                             + dword_140404A6C[4 * v8 + 70998849]]
          && v13 == *(float *)&dword_140404A6C[2 * dword_140404A6C[4 * v8 + 70998850]
                                             + 70687550
                                             + v7
                                             + dword_140404A6C[4 * v8 + 70998850]] )
        {
          v9 = v10 + 1;
        }
        if ( v10 == -2 || v10 == 3 )
          v7 = 0;
        if ( v10 == -1 || v10 == 2 )
          v7 = 1;
        if ( (unsigned int)v10 <= 1 )
          v7 = 2;
        if ( v10 + 2 >= 3 )
          v14 = 1.0;
        else
          v14 = 0.0;
        if ( v14 == *(float *)&dword_140404A6C[v7 + 70687550 + v11]
          && v14 == *(float *)&dword_140404A6C[2 * dword_140404A6C[4 * v8 + 70998848]
                                             + 70687550
                                             + v7
                                             + dword_140404A6C[4 * v8 + 70998848]]
          && v14 == *(float *)&dword_140404A6C[2 * dword_140404A6C[4 * v8 + 70998849]
                                             + 70687550
                                             + v7
                                             + dword_140404A6C[4 * v8 + 70998849]]
          && v14 == *(float *)&dword_140404A6C[2 * dword_140404A6C[4 * v8 + 70998850]
                                             + 70687550
                                             + v7
                                             + dword_140404A6C[4 * v8 + 70998850]] )
        {
          v9 = v10 + 2;
        }
        if ( v10 == -3 || v10 == 2 )
          v7 = 0;
        if ( v10 == -2 || v10 == 1 )
          v7 = 1;
        if ( (unsigned int)(v10 + 1) <= 1 )
          v7 = 2;
        if ( v10 + 3 >= 3 )
          v15 = 1.0;
        else
          v15 = 0.0;
        if ( v15 == *(float *)&dword_140404A6C[v7 + 70687550 + v11]
          && v15 == *(float *)&dword_140404A6C[2 * dword_140404A6C[4 * v8 + 70998848]
                                             + 70687550
                                             + v7
                                             + dword_140404A6C[4 * v8 + 70998848]]
          && v15 == *(float *)&dword_140404A6C[2 * dword_140404A6C[4 * v8 + 70998849]
                                             + 70687550
                                             + v7
                                             + dword_140404A6C[4 * v8 + 70998849]]
          && v15 == *(float *)&dword_140404A6C[2 * dword_140404A6C[4 * v8 + 70998850]
                                             + 70687550
                                             + v7
                                             + dword_140404A6C[4 * v8 + 70998850]] )
        {
          v9 = v10 + 3;
        }
        if ( v10 == -4 || v10 == 1 )
          v7 = 0;
        if ( v10 == -3 || !v10 )
          v7 = 1;
        if ( (unsigned int)(v10 + 2) <= 1 )
          v7 = 2;
        if ( v10 + 4 >= 3 )
          v16 = 1.0;
        else
          v16 = 0.0;
        if ( v16 == *(float *)&dword_140404A6C[v7 + 70687550 + v11]
          && v16 == *(float *)&dword_140404A6C[2 * dword_140404A6C[4 * v8 + 70998848]
                                             + 70687550
                                             + v7
                                             + dword_140404A6C[4 * v8 + 70998848]]
          && v16 == *(float *)&dword_140404A6C[2 * dword_140404A6C[4 * v8 + 70998849]
                                             + 70687550
                                             + v7
                                             + dword_140404A6C[4 * v8 + 70998849]]
          && v16 == *(float *)&dword_140404A6C[2 * dword_140404A6C[4 * v8 + 70998850]
                                             + 70687550
                                             + v7
                                             + dword_140404A6C[4 * v8 + 70998850]] )
        {
          v9 = v10 + 4;
        }
        if ( v10 == -5 || !v10 )
          v7 = 0;
        if ( v10 == -4 || v10 == -1 )
          v7 = 1;
        if ( (unsigned int)(v10 + 3) <= 1 )
          v7 = 2;
        if ( v10 + 5 >= 3 )
          v17 = 1.0;
        else
          v17 = 0.0;
        if ( v17 == *(float *)&dword_140404A6C[v7 + 70687550 + v11]
          && v17 == *(float *)&dword_140404A6C[2 * dword_140404A6C[4 * v8 + 70998848]
                                             + 70687550
                                             + v7
                                             + dword_140404A6C[4 * v8 + 70998848]]
          && v17 == *(float *)&dword_140404A6C[2 * dword_140404A6C[4 * v8 + 70998849]
                                             + 70687550
                                             + v7
                                             + dword_140404A6C[4 * v8 + 70998849]]
          && v17 == *(float *)&dword_140404A6C[2 * dword_140404A6C[4 * v8 + 70998850]
                                             + 70687550
                                             + v7
                                             + dword_140404A6C[4 * v8 + 70998850]] )
        {
          v9 = v10 + 5;
        }
        v10 += 6;
      }
      while ( v10 < 6 );
      if ( v9 != -1 )
      {
        v18 = (int)dword_140404A6C[v2 + 20074624];
        if ( v6 > (int)v18 )
        {
          v19 = (int)dword_140404A6C[v2 + 20074624];
          dword_140404A6C[71002943] = dword_140404A6C[4 * v19 + 70998847];
          dword_140404A6C[71002944] = dword_140404A6C[4 * v19 + 70998848];
          dword_140404A6C[71002945] = dword_140404A6C[4 * v19 + 70998849];
          dword_140404A6C[71002946] = dword_140404A6C[4 * v19 + 70998850];
          v20 = 2 * v19;
          dword_140404A6C[71065407] = dword_140404A6C[v18 + 71064383];
          dword_140404A6C[71098175] = dword_140404A6C[v18 + 71097151];
          dword_140404A6C[2 * v20 + 70998847] = dword_140404A6C[4 * v8 + 70998847];
          dword_140404A6C[2 * v20 + 70998848] = dword_140404A6C[4 * v8 + 70998848];
          dword_140404A6C[2 * v20 + 70998849] = dword_140404A6C[4 * v8 + 70998849];
          dword_140404A6C[2 * v20 + 70998850] = dword_140404A6C[4 * v8 + 70998850];
          dword_140404A6C[v18 + 71064383] = dword_140404A6C[v8 + 71064383];
          dword_140404A6C[v18 + 71097151] = dword_140404A6C[v8 + 71097151];
          dword_140404A6C[4 * v8 + 70998847] = dword_140404A6C[71002943];
          dword_140404A6C[4 * v8 + 70998848] = dword_140404A6C[71002944];
          dword_140404A6C[4 * v8 + 70998849] = dword_140404A6C[71002945];
          dword_140404A6C[4 * v8 + 70998850] = dword_140404A6C[71002946];
          dword_140404A6C[v8 + 71064383] = dword_140404A6C[71065407];
          dword_140404A6C[v8 + 71097151] = dword_140404A6C[71098175];
        }
        dword_140404A6C[v3 + 20074625 + v9] |= 1 << v18;
        v21 = (int)dword_140404A6C[v2 + 20074624];
        dword_140404A6C[v21 + 71080767] = v9;
        dword_140404A6C[v2 + 20074624] = v21 + 1;
      }
      ++v6;
      ++v8;
    }
    while ( v6 < (int)dword_140404A6C[70998846] );
    v5 = dword_140404A6C[v3 + 20074625];
  }
  v4 = (signed int)dword_140404A6C[70998846] <= 0;
  dword_140404A6C[v3 + 20074626] = ~dword_140404A6C[v3 + 20074626];
  v22 = 0;
  dword_140404A6C[v3 + 20074627] = ~dword_140404A6C[v3 + 20074627];
  dword_140404A6C[v3 + 20074628] = ~dword_140404A6C[v3 + 20074628];
  dword_140404A6C[v3 + 20074629] = ~dword_140404A6C[v3 + 20074629];
  dword_140404A6C[v3 + 20074630] = ~dword_140404A6C[v3 + 20074630];
  dword_140404A6C[v3 + 20074625] = ~v5;
  if ( !v4 )
  {
    v23 = &dword_140404A6C[71097151];
    v24 = &dword_140404A6C[70998848];
    do
    {
      v25 = *(v23 - 0x8000) & 0xF0000;
      if ( v25 )
      {
        switch ( v25 )
        {
          case 65536:
            dword_140404A6C[3 * *(v24 - 1) + 70835006] = dword_140404A6C[3 * *(v24 - 1) + 70687552];
            dword_140404A6C[3 * *(v24 - 1) + 70835007] = dword_140404A6C[3 * *(v24 - 1) + 70687551];
            dword_140404A6C[3 * *v24 + 70835006] = dword_140404A6C[3 * *v24 + 70687552];
            dword_140404A6C[3 * *v24 + 70835007] = dword_140404A6C[3 * *v24 + 70687551];
            dword_140404A6C[3 * v24[1] + 70835006] = dword_140404A6C[3 * v24[1] + 70687552];
            dword_140404A6C[3 * v24[1] + 70835007] = dword_140404A6C[3 * v24[1] + 70687551];
            v26 = 3LL * (int)v24[2];
            v27 = dword_140404A6C[3 * v24[2] + 70687552];
            goto LABEL_122;
          case 131072:
            *(float *)&dword_140404A6C[3 * *(v24 - 1) + 70835006] = 1.0
                                                                  - *(float *)&dword_140404A6C[3 * *(v24 - 1) + 70687552];
            dword_140404A6C[3 * *(v24 - 1) + 70835007] = dword_140404A6C[3 * *(v24 - 1) + 70687551];
            *(float *)&dword_140404A6C[3 * *v24 + 70835006] = 1.0 - *(float *)&dword_140404A6C[3 * *v24 + 70687552];
            dword_140404A6C[3 * *v24 + 70835007] = dword_140404A6C[3 * *v24 + 70687551];
            *(float *)&dword_140404A6C[3 * v24[1] + 70835006] = 1.0 - *(float *)&dword_140404A6C[3 * v24[1] + 70687552];
            dword_140404A6C[3 * v24[1] + 70835007] = dword_140404A6C[3 * v24[1] + 70687551];
            *(float *)&dword_140404A6C[3 * v24[2] + 70835006] = 1.0 - *(float *)&dword_140404A6C[3 * v24[2] + 70687552];
            goto LABEL_123;
          case 196608:
            dword_140404A6C[3 * *(v24 - 1) + 70835006] = dword_140404A6C[3 * *(v24 - 1) + 70687550];
            dword_140404A6C[3 * *(v24 - 1) + 70835007] = dword_140404A6C[3 * *(v24 - 1) + 70687552];
            dword_140404A6C[3 * *v24 + 70835006] = dword_140404A6C[3 * *v24 + 70687550];
            dword_140404A6C[3 * *v24 + 70835007] = dword_140404A6C[3 * *v24 + 70687552];
            dword_140404A6C[3 * v24[1] + 70835006] = dword_140404A6C[3 * v24[1] + 70687550];
            dword_140404A6C[3 * v24[1] + 70835007] = dword_140404A6C[3 * v24[1] + 70687552];
            dword_140404A6C[3 * v24[2] + 70835006] = dword_140404A6C[3 * v24[2] + 70687550];
            v28 = 3LL * (int)v24[2];
            v29 = dword_140404A6C[3 * v24[2] + 70687552];
LABEL_124:
            dword_140404A6C[v28 + 70835007] = v29;
            break;
          case 262144:
            dword_140404A6C[3 * *(v24 - 1) + 70835006] = dword_140404A6C[3 * *(v24 - 1) + 70687550];
            *(float *)&dword_140404A6C[3 * *(v24 - 1) + 70835007] = 1.0
                                                                  - *(float *)&dword_140404A6C[3 * *(v24 - 1) + 70687552];
            dword_140404A6C[3 * *v24 + 70835006] = dword_140404A6C[3 * *v24 + 70687550];
            *(float *)&dword_140404A6C[3 * *v24 + 70835007] = 1.0 - *(float *)&dword_140404A6C[3 * *v24 + 70687552];
            dword_140404A6C[3 * v24[1] + 70835006] = dword_140404A6C[3 * v24[1] + 70687550];
            *(float *)&dword_140404A6C[3 * v24[1] + 70835007] = 1.0 - *(float *)&dword_140404A6C[3 * v24[1] + 70687552];
            dword_140404A6C[3 * v24[2] + 70835006] = dword_140404A6C[3 * v24[2] + 70687550];
            *(float *)&dword_140404A6C[3 * v24[2] + 70835007] = 1.0 - *(float *)&dword_140404A6C[3 * v24[2] + 70687552];
            *v23 |= 1u;
            break;
          case 327680:
            *(float *)&dword_140404A6C[3 * *(v24 - 1) + 70835006] = 1.0
                                                                  - *(float *)&dword_140404A6C[3 * *(v24 - 1) + 70687550];
            dword_140404A6C[3 * *(v24 - 1) + 70835007] = dword_140404A6C[3 * *(v24 - 1) + 70687551];
            *(float *)&dword_140404A6C[3 * *v24 + 70835006] = 1.0 - *(float *)&dword_140404A6C[3 * *v24 + 70687550];
            dword_140404A6C[3 * *v24 + 70835007] = dword_140404A6C[3 * *v24 + 70687551];
            *(float *)&dword_140404A6C[3 * v24[1] + 70835006] = 1.0 - *(float *)&dword_140404A6C[3 * v24[1] + 70687550];
            dword_140404A6C[3 * v24[1] + 70835007] = dword_140404A6C[3 * v24[1] + 70687551];
            *(float *)&dword_140404A6C[3 * v24[2] + 70835006] = 1.0 - *(float *)&dword_140404A6C[3 * v24[2] + 70687550];
LABEL_123:
            v28 = 3LL * (int)v24[2];
            v29 = dword_140404A6C[3 * v24[2] + 70687551];
            goto LABEL_124;
          case 393216:
            dword_140404A6C[3 * *(v24 - 1) + 70835006] = dword_140404A6C[3 * *(v24 - 1) + 70687550];
            dword_140404A6C[3 * *(v24 - 1) + 70835007] = dword_140404A6C[3 * *(v24 - 1) + 70687551];
            dword_140404A6C[3 * *v24 + 70835006] = dword_140404A6C[3 * *v24 + 70687550];
            dword_140404A6C[3 * *v24 + 70835007] = dword_140404A6C[3 * *v24 + 70687551];
            dword_140404A6C[3 * v24[1] + 70835006] = dword_140404A6C[3 * v24[1] + 70687550];
            dword_140404A6C[3 * v24[1] + 70835007] = dword_140404A6C[3 * v24[1] + 70687551];
            v26 = 3LL * (int)v24[2];
            v27 = dword_140404A6C[3 * v24[2] + 70687550];
LABEL_122:
            dword_140404A6C[v26 + 70835006] = v27;
            goto LABEL_123;
        }
      }
      ++v22;
      ++v23;
      v24 += 4;
    }
    while ( v22 < (int)dword_140404A6C[70998846] );
  }
  v30 = *(void **)&dword_140404A6C[v2 + 20074615];
  dword_140404A6C[v2 + 20074613] = dword_140404A6C[70425405];
  free(v30);
  v31 = j__malloc_base(12 * dword_140404A6C[70425405]);
  v32 = *(void **)&dword_140404A6C[v2 + 20074617];
  *(_QWORD *)&dword_140404A6C[v2 + 20074615] = v31;
  free(v32);
  v33 = j__malloc_base(12 * dword_140404A6C[70425405]);
  v34 = *(void **)&dword_140404A6C[v2 + 20074619];
  *(_QWORD *)&dword_140404A6C[v2 + 20074617] = v33;
  free(v34);
  v35 = j__malloc_base(12 * dword_140404A6C[70425405]);
  v36 = *(void **)&dword_140404A6C[v2 + 20074621];
  *(_QWORD *)&dword_140404A6C[v2 + 20074619] = v35;
  free(v36);
  v37 = j__malloc_base(8 * dword_140404A6C[70425405]);
  v4 = (signed int)dword_140404A6C[70425405] <= 0;
  v38 = 0;
  *(_QWORD *)&dword_140404A6C[v2 + 20074621] = v37;
  if ( !v4 )
  {
    v39 = 0;
    v40 = 0;
    do
    {
      v41 = *(_QWORD *)&dword_140404A6C[v40 + 70687550];
      v40 += 3;
      v42 = *(_QWORD *)&dword_140404A6C[v2 + 20074615];
      v39 += 8;
      ++v38;
      *(_QWORD *)(v42 + v40 * 4 - 12) = v41;
      *(_DWORD *)(v42 + v40 * 4 - 4) = dword_140404A6C[v40 + 70687549];
      v43 = *(_QWORD *)&dword_140404A6C[v2 + 20074617];
      *(_QWORD *)(v43 + v40 * 4 - 12) = *(_QWORD *)&dword_140404A6C[v40 + 70736699];
      *(_DWORD *)(v43 + v40 * 4 - 4) = dword_140404A6C[v40 + 70736701];
      v44 = *(_QWORD *)&dword_140404A6C[v2 + 20074619];
      *(_QWORD *)(v44 + v40 * 4 - 12) = *(_QWORD *)&dword_140404A6C[v40 + 70785851];
      *(_DWORD *)(v44 + v40 * 4 - 4) = dword_140404A6C[v40 + 70785853];
      *(_QWORD *)(v39 + *(_QWORD *)&dword_140404A6C[v2 + 20074621] - 8) = *(_QWORD *)&dword_140404A6C[v40 + 70835003];
    }
    while ( v38 < (int)dword_140404A6C[70425405] );
  }
  v45 = *(void **)&dword_140404A6C[v2 + 20074631];
  dword_140404A6C[v2 + 20074623] = dword_140404A6C[70998846];
  dword_140404A6C[v2 + 20074639] = dword_140404A6C[71179071];
  free(v45);
  v46 = j__malloc_base(16 * dword_140404A6C[70998846]);
  v47 = *(void **)&dword_140404A6C[v2 + 20074633];
  *(_QWORD *)&dword_140404A6C[v2 + 20074631] = v46;
  free(v47);
  v48 = j__malloc_base(4 * dword_140404A6C[70998846]);
  v49 = *(void **)&dword_140404A6C[v2 + 20074637];
  *(_QWORD *)&dword_140404A6C[v2 + 20074633] = v48;
  free(v49);
  v50 = j__malloc_base(4 * dword_140404A6C[70998846]);
  v51 = *(void **)&dword_140404A6C[v2 + 20074635];
  *(_QWORD *)&dword_140404A6C[v2 + 20074637] = v50;
  free(v51);
  v52 = j__malloc_base(4 * dword_140404A6C[70998846]);
  v53 = *(void **)&dword_140404A6C[v2 + 20074641];
  *(_QWORD *)&dword_140404A6C[v2 + 20074635] = v52;
  free(v53);
  v54 = j__malloc_base(12 * dword_140404A6C[71179071]);
  v55 = *(void **)&dword_140404A6C[v2 + 20074643];
  *(_QWORD *)&dword_140404A6C[v2 + 20074641] = v54;
  free(v55);
  v56 = j__malloc_base(4 * dword_140404A6C[71179071]);
  v57 = *(_QWORD *)&dword_140404A6C[v2 + 20074631];
  *(_QWORD *)&dword_140404A6C[v2 + 20074643] = v56;
  MEMORY[0x1401FC920](v57, &dword_140404A6C[70998847]);
  MEMORY[0x1401FC920](*(_QWORD *)&dword_140404A6C[v2 + 20074633], &dword_140404A6C[71064383]);
  MEMORY[0x1401FC920](*(_QWORD *)&dword_140404A6C[v2 + 20074637], &dword_140404A6C[71080767]);
  MEMORY[0x1401FC920](*(_QWORD *)&dword_140404A6C[v2 + 20074635], &dword_140404A6C[71097151]);
  MEMORY[0x1401FC920](*(_QWORD *)&dword_140404A6C[v2 + 20074641], &dword_140404A6C[71179072]);
  MEMORY[0x1401FC920](*(_QWORD *)&dword_140404A6C[v2 + 20074643], &dword_140404A6C[71277377]);
  v58 = 0;
  if ( (int)dword_140404A6C[v2 + 20074623] > 0 )
  {
    v59 = 0;
    do
    {
      v59 += 4;
      ++v58;
      *(_DWORD *)(*(_QWORD *)&dword_140404A6C[v2 + 20074633] + v59 - 4) &= 0xFFFu;
    }
    while ( v58 < (int)dword_140404A6C[v2 + 20074623] );
  }
  v60 = *(void **)&dword_140404A6C[v2 + 20074653];
  dword_140404A6C[v2 + 20074651] = dword_140404A6C[71655762];
  free(v60);
  result = j__malloc_base(48 * dword_140404A6C[71655762]);
  *(_QWORD *)&dword_140404A6C[v2 + 20074653] = result;
  if ( (int)dword_140404A6C[v2 + 20074651] > 0 )
  {
    v62 = 0;
    v63 = &dword_140404A6C[71655770];
    do
    {
      v64 = *(v63 - 2);
      v63 += 20;
      v65 = *(_QWORD *)&dword_140404A6C[v2 + 20074653];
      v62 += 48;
      ++v1;
      *(_DWORD *)(v62 + v65 - 48) = v64;
      *(_DWORD *)(v62 + v65 - 44) = *(v63 - 21);
      *(_DWORD *)(v62 + v65 - 40) = *(v63 - 20);
      v66 = *(_QWORD *)&dword_140404A6C[v2 + 20074653];
      *(_DWORD *)(v66 + v62 - 36) = *(v63 - 19);
      *(_DWORD *)(v66 + v62 - 32) = *(v63 - 18);
      *(_DWORD *)(v66 + v62 - 28) = *(v63 - 17);
      v67 = *(_QWORD *)&dword_140404A6C[v2 + 20074653];
      *(_DWORD *)(v67 + v62 - 24) = *(v63 - 16);
      *(_DWORD *)(v67 + v62 - 20) = *(v63 - 15);
      *(_DWORD *)(v67 + v62 - 16) = *(v63 - 14);
      v68 = *(_QWORD *)&dword_140404A6C[v2 + 20074653];
      *(_DWORD *)(v68 + v62 - 12) = *(v63 - 13);
      *(_DWORD *)(v68 + v62 - 8) = *(v63 - 12);
      result = *(v63 - 11);
      *(_DWORD *)(v68 + v62 - 4) = result;
    }
    while ( v1 < (int)dword_140404A6C[v2 + 20074651] );
  }
  return result;
}

