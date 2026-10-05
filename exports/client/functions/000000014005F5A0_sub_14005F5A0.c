/* Address: 0x14005f5a0 | Name: sub_14005F5A0 | Size: 312 bytes */
__int64 __fastcall sub_14005F5A0(unsigned int a1, float a2, float a3, float a4)
{
  int v5; // ebx
  float v6; // xmm0_4
  float v7; // xmm0_4
  int v8; // ecx
  unsigned int *v9; // rax
  float v11; // [rsp+20h] [rbp-58h] BYREF
  float v12; // [rsp+24h] [rbp-54h]
  float v13; // [rsp+28h] [rbp-50h]

  dword_140404A6C[177167565] = 0;
  dword_140404A6C[177495247] = 0;
  v12 = a3 - 0.0625;
  dword_140404A6C[178322641] = 0;
  dword_140404A6C[178519250] = 0;
  v11 = 0.0;
  v13 = 0.0;
  sub_140002D00(&v11, a2, 0.0625, a4);
  v5 = 0;
  v12 = -0.0625;
  do
  {
    if ( !v5 || v5 == 3 )
      v6 = 0.0625 - a2;
    else
      v6 = a2 - 0.0625;
    v11 = v6;
    if ( (unsigned int)v5 >= 2 )
      v7 = a4 - 0.0625;
    else
      v7 = 0.0625 - a4;
    v13 = v7;
    sub_140002D00(&v11, 0.0625, a3, 0.0625);
    ++v5;
  }
  while ( v5 < 4 );
  v8 = 0;
  if ( (int)dword_140404A6C[177495247] > 0 )
  {
    v9 = &dword_140404A6C[178011346];
    do
    {
      *(_QWORD *)(v9 - 1) = 0;
      ++v8;
      *(_QWORD *)(v9 + 1) = 0;
      *(_QWORD *)(v9 + 3) = 0;
      v9 += 6;
    }
    while ( v8 < (int)dword_140404A6C[177495247] );
  }
  return sub_1401449C0(a1, 0);
}

