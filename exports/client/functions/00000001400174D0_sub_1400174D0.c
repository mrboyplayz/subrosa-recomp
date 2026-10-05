/* Address: 0x1400174d0 | Name: sub_1400174D0 | Size: 958 bytes */
char __fastcall sub_1400174D0(int *a1, int a2, int *a3, int a4, float a5)
{
  float v6; // xmm8_4
  __int64 v7; // rdx
  float v8; // xmm7_4
  float v9; // xmm9_4
  __int64 v10; // r8
  __int64 v11; // r11
  float v12; // xmm7_4
  float v13; // xmm8_4
  float v14; // xmm9_4
  __int64 v15; // rax
  float v16; // xmm2_4
  float v17; // xmm4_4
  float v18; // xmm3_4
  float v19; // xmm5_4
  float v20; // xmm6_4
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rax
  float v24; // xmm2_4
  float v25; // xmm4_4
  float v26; // xmm3_4
  float v27; // xmm5_4
  float v28; // xmm6_4
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rax
  float v32; // xmm2_4
  float v33; // xmm4_4
  float v34; // xmm3_4
  float v35; // xmm5_4
  float v36; // xmm6_4
  __int64 v37; // rcx
  __int64 v38; // rcx

  v6 = (float)a3[1];
  v7 = 263004LL * a2;
  v8 = (float)*a3 * a5;
  v9 = (float)a3[2];
  v10 = 0;
  v11 = 4;
  v12 = v8 + *(float *)&dword_140404A6C[v7 + 111579638];
  v13 = (float)(v6 * a5) + *(float *)&dword_140404A6C[v7 + 111579639];
  v14 = (float)(v9 * a5) + *(float *)&dword_140404A6C[v7 + 111579640];
  do
  {
    if ( (_bittest(&a4, *(_DWORD *)((char *)&unk_1402B37B0 + v10 * 4))
        & ((a4 & (64 << *(_DWORD *)((char *)&unk_1402B37B0 + v10 * 4))) != 0)) != 0
      && (_bittest(&a4, *(_DWORD *)((char *)&unk_1402B37B4 + v10 * 4))
        & ((a4 & (64 << *(_DWORD *)((char *)&unk_1402B37B4 + v10 * 4))) != 0)) != 0 )
    {
      v15 = *a1;
      v16 = (float)(a5 * *(float *)&dword_1402B34F4[3 * dword_1402B3750[v10]]) + v13;
      v17 = (float)(a5 * *(float *)&dword_1402B34F0[3 * dword_1402B3754[v10]]) + v12;
      v18 = (float)(a5 * *(float *)&dword_1402B34F8[3 * dword_1402B3750[v10]]) + v14;
      v19 = (float)(a5 * *(float *)&dword_1402B34F4[3 * dword_1402B3754[v10]]) + v13;
      v20 = (float)(a5 * *(float *)&dword_1402B34F8[3 * dword_1402B3754[v10]]) + v14;
      if ( (int)v15 < 256 )
      {
        v21 = 3 * v15;
        *(float *)&a1[2 * v21 + 1] = (float)(a5 * *(float *)&dword_1402B34F0[3 * dword_1402B3750[v10]]) + v12;
        *(float *)&a1[2 * v21 + 2] = v16;
        *(float *)&a1[2 * v21 + 3] = v18;
        v22 = 3LL * *a1;
        *(float *)&a1[2 * v22 + 4] = v17;
        *(float *)&a1[2 * v22 + 5] = v19;
        *(float *)&a1[2 * v22 + 6] = v20;
        ++*a1;
      }
    }
    if ( (_bittest(&a4, *(_DWORD *)((char *)&unk_1402B37B8 + v10 * 4))
        & ((a4 & (64 << *(_DWORD *)((char *)&unk_1402B37B8 + v10 * 4))) != 0)) != 0
      && (_bittest(&a4, *(_DWORD *)((char *)&unk_1402B37BC + v10 * 4))
        & ((a4 & (64 << *(_DWORD *)((char *)&unk_1402B37BC + v10 * 4))) != 0)) != 0 )
    {
      v23 = *a1;
      v24 = (float)(a5 * *(float *)&dword_1402B34F4[3 * dword_1402B3758[v10]]) + v13;
      v25 = (float)(a5 * *(float *)&dword_1402B34F0[3 * dword_1402B375C[v10]]) + v12;
      v26 = (float)(a5 * *(float *)&dword_1402B34F8[3 * dword_1402B3758[v10]]) + v14;
      v27 = (float)(a5 * *(float *)&dword_1402B34F4[3 * dword_1402B375C[v10]]) + v13;
      v28 = (float)(a5 * *(float *)&dword_1402B34F8[3 * dword_1402B375C[v10]]) + v14;
      if ( (int)v23 < 256 )
      {
        v29 = 3 * v23;
        *(float *)&a1[2 * v29 + 1] = (float)(a5 * *(float *)&dword_1402B34F0[3 * dword_1402B3758[v10]]) + v12;
        *(float *)&a1[2 * v29 + 2] = v24;
        *(float *)&a1[2 * v29 + 3] = v26;
        v30 = 3LL * *a1;
        *(float *)&a1[2 * v30 + 4] = v25;
        *(float *)&a1[2 * v30 + 5] = v27;
        *(float *)&a1[2 * v30 + 6] = v28;
        ++*a1;
      }
    }
    LOBYTE(v31) = _bittest(&a4, *(_DWORD *)((char *)&unk_1402B37C0 + v10 * 4))
                & ((a4 & (64 << *(_DWORD *)((char *)&unk_1402B37C0 + v10 * 4))) != 0);
    if ( (_BYTE)v31 )
    {
      LOBYTE(v31) = _bittest(&a4, *(_DWORD *)((char *)&unk_1402B37C4 + v10 * 4))
                  & ((a4 & (64 << *(_DWORD *)((char *)&unk_1402B37C4 + v10 * 4))) != 0);
      if ( (_BYTE)v31 )
      {
        v31 = *a1;
        v32 = (float)(a5 * *(float *)&dword_1402B34F4[3 * dword_1402B3760[v10]]) + v13;
        v33 = (float)(a5 * *(float *)&dword_1402B34F0[3 * dword_1402B3764[v10]]) + v12;
        v34 = (float)(a5 * *(float *)&dword_1402B34F8[3 * dword_1402B3760[v10]]) + v14;
        v35 = (float)(a5 * *(float *)&dword_1402B34F4[3 * dword_1402B3764[v10]]) + v13;
        v36 = (float)(a5 * *(float *)&dword_1402B34F8[3 * dword_1402B3764[v10]]) + v14;
        if ( (int)v31 < 256 )
        {
          v37 = 3 * v31;
          *(float *)&a1[2 * v37 + 1] = (float)(a5 * *(float *)&dword_1402B34F0[3 * dword_1402B3760[v10]]) + v12;
          *(float *)&a1[2 * v37 + 2] = v32;
          *(float *)&a1[2 * v37 + 3] = v34;
          v31 = *a1;
          v38 = 3 * v31;
          *(float *)&a1[2 * v38 + 4] = v33;
          *(float *)&a1[2 * v38 + 5] = v35;
          *(float *)&a1[2 * v38 + 6] = v36;
          ++*a1;
        }
      }
    }
    v10 += 6;
    --v11;
  }
  while ( v11 );
  return v31;
}

