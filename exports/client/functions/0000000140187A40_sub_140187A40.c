/* Address: 0x140187a40 | Name: sub_140187A40 | Size: 551 bytes */
void __fastcall sub_140187A40(_BYTE *a1, __int64 a2, __int64 a3, float a4, float a5)
{
  float v5; // xmm2_4
  float v7; // xmm13_4
  _BYTE *v8; // rbx
  float v9; // xmm12_4
  int v10; // ecx
  __int64 v11; // rdx
  unsigned int v12; // xmm9_4
  unsigned int v13; // xmm10_4
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // rdx
  __int64 v19; // r8
  float v20; // [rsp+D0h] [rbp+8h] BYREF
  float v21; // [rsp+D4h] [rbp+Ch]

  v7 = 0.0;
  dword_140404A6C[456217205] = 1;
  dword_140404A6C[456217207] = 0;
  dword_140404A6C[456217208] = 9;
  if ( *a1 )
  {
    v8 = a1;
    v9 = a5;
    do
    {
      if ( v8 - a1 >= 1000 )
        break;
      v10 = 39;
      *(_OWORD *)&dword_140404A6C[456807033] = xmmword_140279700;
      v11 = (unsigned __int8)*v8;
      if ( (unsigned __int8)(v11 - 65) <= 0x19u )
        v10 = v11 - 52;
      *(float *)&v12 = (float)(v10 >> 4) * 0.0625;
      v20 = v7 + v5;
      *(float *)&v13 = (float)(v10 & 0xF) * 0.0625;
      v21 = a4 + v9;
      dword_140404A6C[456807037] = v13;
      *(float *)&dword_140404A6C[456807038] = *(float *)&v12 + 0.0625;
      sub_14007D320((unsigned int *)&v20, v11, a3);
      *(float *)&dword_140404A6C[456807038] = *(float *)&v12 + 0.0625;
      v20 = (float)(v7 + v5) + v9;
      *(float *)&dword_140404A6C[456807037] = *(float *)&v13 + 0.0625;
      sub_14007D320((unsigned int *)&v20, v14, v15);
      v21 = a4;
      *(float *)&dword_140404A6C[456807037] = *(float *)&v13 + 0.0625;
      dword_140404A6C[456807038] = v12;
      sub_14007D320((unsigned int *)&v20, v16, v17);
      v20 = v7 + v5;
      dword_140404A6C[456807037] = v13;
      dword_140404A6C[456807038] = v12;
      sub_14007D320((unsigned int *)&v20, v18, v19);
      ++v8;
      v7 = v7 + v9;
    }
    while ( *v8 );
  }
  sub_14006E0D0((__int64)a1, a2, a3);
}

