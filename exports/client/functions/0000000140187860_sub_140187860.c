/* Address: 0x140187860 | Name: sub_140187860 | Size: 467 bytes */
void __fastcall sub_140187860(int a1, __int64 a2, __int64 a3, float a4)
{
  __int128 v4; // xmm1
  __int128 v5; // xmm2
  int v6; // ebx
  __int128 v8; // xmm10
  __int128 v9; // xmm14
  __int128 v10; // xmm11
  unsigned int v11; // xmm8_4
  unsigned int v12; // xmm9_4
  __int128 v13; // xmm12
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // rcx
  float v21; // [rsp+20h] [rbp-B8h] BYREF
  float v22; // [rsp+24h] [rbp-B4h]

  v6 = 0;
  v8 = v4;
  v9 = v5;
  dword_140404A6C[456217205] = 1;
  dword_140404A6C[456217207] = 0;
  dword_140404A6C[456217208] = 9;
  do
  {
    v21 = *(float *)&v8;
    v10 = v9;
    *(_OWORD *)&dword_140404A6C[456807033] = xmmword_140279700;
    *(float *)&v11 = (float)((v6 + a1) >> 4) * 0.0625;
    v22 = *(float *)&v9 + a4;
    *(float *)&v12 = (float)(((_BYTE)v6 + (_BYTE)a1) & 0xF) * 0.0625;
    dword_140404A6C[456807037] = v12;
    *(float *)&dword_140404A6C[456807038] = *(float *)&v11 + 0.0625;
    sub_14007D320((unsigned int *)&v21, a2, a3);
    v13 = v8;
    *(float *)&dword_140404A6C[456807038] = *(float *)&v11 + 0.0625;
    v21 = *(float *)&v8 + a4;
    *(float *)&dword_140404A6C[456807037] = *(float *)&v12 + 0.0625;
    sub_14007D320((unsigned int *)&v21, v14, v15);
    v22 = *(float *)&v9;
    *(float *)&dword_140404A6C[456807037] = *(float *)&v12 + 0.0625;
    dword_140404A6C[456807038] = v11;
    sub_14007D320((unsigned int *)&v21, v16, v17);
    v21 = *(float *)&v8;
    dword_140404A6C[456807037] = v12;
    dword_140404A6C[456807038] = v11;
    sub_14007D320((unsigned int *)&v21, v18, v19);
    if ( (v6 & 0xFFFFFFFD) != 0 )
    {
      *(float *)&v8 = *(float *)&v8 - a4;
      *(float *)&v10 = *(float *)&v9 + a4;
      v9 = v10;
    }
    else
    {
      *(float *)&v13 = *(float *)&v8 + a4;
      v8 = v13;
    }
    ++v6;
  }
  while ( v6 < 4 );
  sub_14006E0D0(v20, a2, a3);
}

