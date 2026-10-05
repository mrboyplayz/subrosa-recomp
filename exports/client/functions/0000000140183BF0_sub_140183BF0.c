/* Address: 0x140183bf0 | Name: sub_140183BF0 | Size: 461 bytes */
void __fastcall sub_140183BF0(float *a1, int a2)
{
  unsigned int v2; // ebp
  float v4; // xmm2_4
  signed int v5; // edi
  float *v6; // r15
  float *v7; // r14
  __int64 v8; // r9
  float v9; // xmm0_4
  float v10; // xmm1_4
  BOOL v11; // edx
  signed int v12; // eax
  __int64 v13; // rcx
  __int128 v14; // xmm1
  float v15; // edx
  float v16; // ecx
  int v17; // r11d
  __int128 v18; // xmm1
  __int64 v19; // r10
  float v20; // xmm0_4
  __int64 v21; // rcx
  float *v22; // rcx
  __int64 v23; // rcx
  bool v24; // cf
  float *v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int128 v28; // xmm1
  float v29; // r8d
  float v30; // eax
  bool v31; // cc
  signed int v32; // ebx
  __int64 v33; // rdx

  if ( a2 > 12 )
  {
    v2 = a2;
    do
    {
      v4 = a1[1];
      v5 = v2 - 1;
      v6 = a1;
      v7 = a1;
      v8 = v2 - 1LL;
      v9 = a1[5 * ((unsigned __int64)v2 >> 1) + 1];
      v10 = a1[5 * v8 + 1];
      v11 = v10 > v9;
      if ( v9 > v4 != v11 )
      {
        v12 = 0;
        if ( v10 > v4 != v11 )
          v12 = v2 - 1;
        v13 = 5LL * v12;
        v14 = *(_OWORD *)&a1[5 * v12];
        v15 = a1[5 * v12 + 4];
        *(_OWORD *)&a1[v13] = *(_OWORD *)&a1[5 * ((unsigned __int64)v2 >> 1)];
        a1[v13 + 4] = a1[5 * ((unsigned __int64)v2 >> 1) + 4];
        *(_OWORD *)&a1[5 * ((unsigned __int64)v2 >> 1)] = v14;
        a1[5 * ((unsigned __int64)v2 >> 1) + 4] = v15;
      }
      v16 = a1[4];
      v17 = 1;
      v18 = *(_OWORD *)a1;
      v19 = 1;
      *(_OWORD *)a1 = *(_OWORD *)&a1[5 * ((unsigned __int64)v2 >> 1)];
      a1[4] = a1[5 * ((unsigned __int64)v2 >> 1) + 4];
      *(_OWORD *)&a1[5 * ((unsigned __int64)v2 >> 1)] = v18;
      a1[5 * ((unsigned __int64)v2 >> 1) + 4] = v16;
      while ( 1 )
      {
        v20 = a1[1];
        v21 = v19 + 4 * v19 + 1;
        v31 = v20 <= a1[v21];
        v22 = &a1[v21];
        if ( !v31 )
        {
          do
          {
            ++v17;
            v22 += 5;
            ++v19;
          }
          while ( v20 > *v22 );
        }
        v23 = v8 + 4 * v8 + 1;
        v24 = v20 < a1[v23];
        v25 = &a1[v23];
        if ( v24 )
        {
          do
          {
            --v5;
            v25 -= 5;
            --v8;
          }
          while ( v20 < *v25 );
        }
        if ( v19 >= v8 )
          break;
        v26 = 5 * v8;
        ++v17;
        v27 = 5 * v19;
        --v5;
        v28 = *(_OWORD *)&a1[5 * v19];
        v29 = a1[5 * v19++ + 4];
        *(_OWORD *)&a1[v27] = *(_OWORD *)&a1[5 * v8];
        v30 = a1[5 * v8-- + 4];
        a1[v27 + 4] = v30;
        *(_OWORD *)&a1[v26] = v28;
        a1[v26 + 4] = v29;
      }
      v2 -= v17;
      v31 = v5 < (int)v2;
      v32 = v2;
      v33 = (unsigned int)v5;
      if ( v5 >= (int)v2 )
      {
        v33 = v2;
        v2 = v5;
      }
      a1 += 5 * v17;
      if ( !v31 )
        v7 = a1;
      sub_140183BF0(v7, v33);
      if ( v5 >= v32 )
        a1 = v6;
    }
    while ( (int)v2 > 12 );
  }
}

