/* Address: 0x14001a590 | Name: sub_14001A590 | Size: 1017 bytes */
__int64 __fastcall sub_14001A590(unsigned int a1, int a2, int a3)
{
  __int64 v3; // r9
  unsigned int v4; // xmm13_4
  __int64 result; // rax
  __int64 v6; // r10
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rbx
  unsigned int v10; // r11d
  float *v11; // r9
  signed int v12; // r8d
  unsigned int v13; // xmm1_4
  float v14; // xmm2_4
  unsigned int v15; // xmm4_4
  unsigned int v16; // xmm2_4
  unsigned int v17; // xmm0_4
  unsigned int v18; // xmm5_4
  unsigned int v19; // xmm7_4
  unsigned int v20; // xmm8_4
  unsigned int v21; // xmm6_4
  unsigned int v22; // xmm9_4
  unsigned int v23; // xmm10_4
  unsigned int v24; // xmm11_4
  unsigned int v25; // xmm12_4
  __int64 v26; // rdx
  unsigned int *v27; // rax
  float v28; // xmm0_4
  unsigned int v29; // xmm2_4
  unsigned int v30; // xmm1_4
  float v31; // xmm0_4
  unsigned int v32; // xmm2_4
  float v33; // xmm0_4
  float v34; // xmm0_4
  __int64 v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // rcx
  __int64 v38; // rcx

  v3 = 3088LL * a2;
  v4 = 1015021568;
  result = a3;
  v6 = a1;
  v7 = 192LL * a3;
  v8 = v7 * 4 + v3 * 4;
  if ( dword_140404A6C[v7 + 451023989 + v3] == 1 )
    v4 = 998244352;
  v9 = *(int *)((char *)&dword_140404A6C[451024002] + v8);
  if ( v9 > 0 )
  {
    v10 = dword_140404A6C[v7 + 451023989 + v3];
    v11 = (float *)((char *)&dword_140404A6C[451024005] + v8);
    v12 = dword_140404A6C[71655762];
    do
    {
      if ( v10 == 1 && (int)v6 >= 2 )
      {
        v13 = *((unsigned int *)v11 - 1);
        v14 = *v11;
      }
      else
      {
        v14 = *v11;
        *(float *)&v13 = 1.0 - (float)(*v11 + *(v11 - 1));
      }
      v15 = *((unsigned int *)v11 + 1);
      *(float *)&v16 = v14 + *(float *)&v13;
      dword_140404A6C[19928789] = v13;
      *(float *)&v17 = *(float *)&v15 + v11[2];
      dword_140404A6C[19928835] = v15;
      dword_140404A6C[19928836] = v4;
      v18 = v4;
      dword_140404A6C[19928791] = v4;
      v19 = v4;
      dword_140404A6C[19928798] = v16;
      v20 = v16;
      dword_140404A6C[19928790] = v17;
      v21 = v17;
      dword_140404A6C[19928799] = v17;
      v22 = v4;
      dword_140404A6C[19928800] = v4;
      v23 = v13;
      dword_140404A6C[19928834] = v16;
      v24 = v15;
      dword_140404A6C[19928825] = v13;
      v25 = v4;
      dword_140404A6C[19928826] = v15;
      dword_140404A6C[19928827] = v4;
      if ( (int)v6 > 0 )
      {
        v26 = v6;
        do
        {
          v27 = &dword_140404A6C[19928791];
          do
          {
            v28 = 1.0 - *(float *)v27;
            v29 = v27[1];
            *v27 = *(v27 - 2);
            v30 = v27[4];
            *((float *)v27 - 2) = v28;
            v31 = 1.0 - *((float *)v27 + 3);
            v27[3] = v29;
            v32 = v27[7];
            *((float *)v27 + 1) = v31;
            v33 = 1.0 - *((float *)v27 + 6);
            v27[6] = v30;
            *((float *)v27 + 4) = v33;
            v34 = 1.0 - *((float *)v27 + 9);
            v27[9] = v32;
            *((float *)v27 + 7) = v34;
            v27 += 12;
          }
          while ( (__int64)v27 < (__int64)&dword_140404A6C[19928839] );
          --v26;
        }
        while ( v26 );
        v22 = dword_140404A6C[19928836];
        v15 = dword_140404A6C[19928835];
        v20 = dword_140404A6C[19928834];
        v25 = dword_140404A6C[19928827];
        v24 = dword_140404A6C[19928826];
        v23 = dword_140404A6C[19928825];
        v19 = dword_140404A6C[19928800];
        v21 = dword_140404A6C[19928799];
        v16 = dword_140404A6C[19928798];
        v18 = dword_140404A6C[19928791];
        v17 = dword_140404A6C[19928790];
        v13 = dword_140404A6C[19928789];
      }
      v11 += 5;
      v35 = 10LL * v12;
      dword_140404A6C[2 * v35 + 71655768] = v13;
      dword_140404A6C[2 * v35 + 71655769] = v17;
      dword_140404A6C[2 * v35 + 71655770] = v18;
      v36 = 10LL * (int)dword_140404A6C[71655762];
      dword_140404A6C[2 * v36 + 71655771] = v16;
      dword_140404A6C[2 * v36 + 71655772] = v21;
      dword_140404A6C[2 * v36 + 71655773] = v19;
      v37 = 10LL * (int)dword_140404A6C[71655762];
      dword_140404A6C[2 * v37 + 71655774] = v20;
      dword_140404A6C[2 * v37 + 71655775] = v15;
      dword_140404A6C[2 * v37 + 71655776] = v22;
      result = (int)dword_140404A6C[71655762];
      v38 = 10LL * (int)dword_140404A6C[71655762];
      dword_140404A6C[2 * v38 + 71655777] = v23;
      dword_140404A6C[2 * v38 + 71655778] = v24;
      dword_140404A6C[2 * v38 + 71655779] = v25;
      v12 = ++dword_140404A6C[71655762];
      --v9;
    }
    while ( v9 );
  }
  return result;
}

