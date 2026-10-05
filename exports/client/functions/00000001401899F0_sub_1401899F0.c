/* Address: 0x1401899f0 | Name: sub_1401899F0 | Size: 1157 bytes */
__int64 __fastcall sub_1401899F0(int a1)
{
  __int64 v1; // r15
  __int64 v2; // rbp
  __int64 v3; // rax
  signed int v4; // r14d
  signed int v5; // edx
  __int64 v6; // rcx
  float *v7; // rax
  float v8; // xmm6_4
  float v9; // xmm3_4
  float v10; // xmm4_4
  float v11; // xmm1_4
  float v12; // xmm5_4
  float v13; // xmm2_4
  unsigned int v14; // xmm0_4
  unsigned int v15; // xmm0_4
  unsigned int v16; // xmm0_4
  __int64 v17; // rsi
  float *v18; // rdi
  unsigned int *v19; // r12
  unsigned int *v20; // r13
  int *v21; // rbx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rax
  float v25; // xmm1_4
  float v26; // xmm2_4
  float v27; // xmm3_4
  float v28; // xmm4_4
  float v29; // xmm5_4
  float v30; // xmm6_4
  float v31; // xmm0_4
  float v32; // xmm0_4
  float v33; // xmm0_4
  float v34; // xmm0_4
  float v35; // xmm0_4
  float v36; // xmm0_4
  __int64 result; // rax
  int v38; // ebp
  int v39; // ebx
  int v40; // esi
  int v41; // edi
  __int64 v42; // r11
  unsigned int v43; // edx
  __int64 v44; // r9
  __int64 v45; // r10

  v1 = a1;
  v2 = 15432LL * a1;
  v3 = a1;
  v4 = 0;
  v5 = 0;
  dword_140404A6C[v2 + 358312926] = 1266679808;
  dword_140404A6C[v2 + 358312927] = 1266679808;
  dword_140404A6C[v2 + 358312928] = 1266679808;
  dword_140404A6C[v2 + 358312929] = -880803840;
  dword_140404A6C[v2 + 358312930] = -880803840;
  dword_140404A6C[v2 + 358312931] = -880803840;
  if ( (int)dword_140404A6C[v2 + 358297506] > 0 )
  {
    v6 = 15432LL * a1;
    v7 = (float *)&dword_140404A6C[v2 + 358297508];
    v8 = *(float *)&dword_140404A6C[15432 * v1 + 358312926];
    v9 = *(float *)&dword_140404A6C[15432 * v1 + 358312929];
    v10 = *(float *)&dword_140404A6C[15432 * v1 + 358312927];
    v11 = *(float *)&dword_140404A6C[15432 * v1 + 358312930];
    v12 = *(float *)&dword_140404A6C[15432 * v1 + 358312928];
    v13 = *(float *)&dword_140404A6C[15432 * v1 + 358312931];
    do
    {
      v14 = *((unsigned int *)v7 - 1);
      if ( v8 > *(float *)&v14 )
      {
        dword_140404A6C[v6 + 358312926] = v14;
        v8 = *(float *)&v14;
        v14 = *((unsigned int *)v7 - 1);
      }
      if ( v9 < *(float *)&v14 )
      {
        dword_140404A6C[v6 + 358312929] = v14;
        v9 = *(float *)&v14;
      }
      v15 = *(unsigned int *)v7;
      if ( v10 > *v7 )
      {
        dword_140404A6C[v6 + 358312927] = v15;
        v10 = *(float *)&v15;
        v15 = *(unsigned int *)v7;
      }
      if ( v11 < *(float *)&v15 )
      {
        dword_140404A6C[v6 + 358312930] = v15;
        v11 = *(float *)&v15;
      }
      v16 = *((unsigned int *)v7 + 1);
      if ( v12 > *(float *)&v16 )
      {
        dword_140404A6C[v6 + 358312928] = v16;
        v12 = *(float *)&v16;
        v16 = *((unsigned int *)v7 + 1);
      }
      if ( v13 < *(float *)&v16 )
      {
        dword_140404A6C[v6 + 358312931] = v16;
        v13 = *(float *)&v16;
      }
      ++v5;
      v7 += 3;
    }
    while ( v5 < (int)dword_140404A6C[v2 + 358297506] );
    v3 = v1;
  }
  if ( (int)dword_140404A6C[v2 + 358300579] > 0 )
  {
    v17 = 5144 * v3;
    v18 = (float *)&dword_140404A6C[v2 + 358306735];
    v19 = &dword_140404A6C[v2 + 358306734];
    v20 = &dword_140404A6C[15432 * v3 + 358300588];
    do
    {
      v21 = (int *)(v20 + 1);
      sub_14006EC40(
        (float *)(0x140000000LL + 12 * (v17 + v4) + 1437427996),
        (float *)(0x140000000LL + 12 * (v17 + (int)*v20) + 1437403384),
        (float *)(0x140000000LL + 12 * (v17 + (int)v20[1]) + 1437403384),
        (float *)(0x140000000LL + 12 * (v17 + (int)v20[2]) + 1437403384));
      v22 = 2;
      v23 = 3 * (v17 + (int)*v20);
      *(v19 - 2) = dword_140404A6C[3 * v17 + 358297507 + 3 * (int)*v20];
      *(v19 - 1) = dword_140404A6C[v23 + 358297508];
      *v19 = dword_140404A6C[v23 + 358297509];
      v24 = (int)*v20;
      v19[1] = dword_140404A6C[3 * v17 + 358297507 + 3 * v24];
      v19[2] = dword_140404A6C[3 * v17 + 358297508 + 3 * v24];
      v19[3] = dword_140404A6C[3 * v17 + 358297509 + 3 * v24];
      v25 = *(v18 - 3);
      v26 = *v18;
      v27 = *(v18 - 2);
      v28 = v18[1];
      v29 = *(v18 - 1);
      v30 = v18[2];
      do
      {
        v31 = *(float *)&dword_140404A6C[3 * v17 + 358297507 + 3 * *v21];
        if ( v25 > v31 )
        {
          *(v18 - 3) = v31;
          v25 = v31;
        }
        v32 = *(float *)&dword_140404A6C[3 * v17 + 358297507 + 3 * *v21];
        if ( v26 < v32 )
        {
          *v18 = v32;
          v26 = v32;
        }
        v33 = *(float *)&dword_140404A6C[3 * v17 + 358297508 + 3 * *v21];
        if ( v27 > v33 )
        {
          *(v18 - 2) = v33;
          v27 = v33;
        }
        v34 = *(float *)&dword_140404A6C[3 * v17 + 358297508 + 3 * *v21];
        if ( v28 < v34 )
        {
          v18[1] = v34;
          v28 = v34;
        }
        v35 = *(float *)&dword_140404A6C[3 * v17 + 358297509 + 3 * *v21];
        if ( v29 > v35 )
        {
          *(v18 - 1) = v35;
          v29 = v35;
        }
        v36 = *(float *)&dword_140404A6C[3 * v17 + 358297509 + 3 * *v21];
        if ( v30 < v36 )
        {
          v18[2] = v36;
          v30 = v36;
        }
        ++v21;
        --v22;
      }
      while ( v22 );
      ++v4;
      v19 += 6;
      v18 += 6;
      v20 += 3;
    }
    while ( v4 < (int)dword_140404A6C[v2 + 358300579] );
  }
  result = 61728 * v1;
  v38 = (int)(float)(*(float *)&dword_140404A6C[15432 * v1 + 358312926] * 0.015625);
  v39 = (int)(float)(*(float *)&dword_140404A6C[15432 * v1 + 358312929] * 0.015625);
  v40 = (int)(float)(*(float *)&dword_140404A6C[15432 * v1 + 358312931] * 0.015625);
  v41 = (int)(float)(*(float *)&dword_140404A6C[15432 * v1 + 358312928] * 0.015625);
  if ( v41 <= v40 )
  {
    v42 = (__int64)v41 << 6;
    do
    {
      if ( (unsigned int)v41 <= 0x3F )
      {
        v43 = v38;
        if ( v38 <= v39 )
        {
          v44 = v38;
          do
          {
            if ( v43 <= 0x3F )
            {
              result = v42 + v44;
              v45 = (int)dword_140404A6C[9 * v42 + 254352099 + 9 * v44];
              if ( (int)v45 < 8 )
              {
                dword_140404A6C[9 * result + 254352100 + v45] = v1;
                ++dword_140404A6C[9 * v42 + 254352099 + 9 * v44];
              }
            }
            ++v43;
            ++v44;
          }
          while ( (int)v43 <= v39 );
        }
      }
      ++v41;
      v42 += 64;
    }
    while ( v41 <= v40 );
  }
  return result;
}

