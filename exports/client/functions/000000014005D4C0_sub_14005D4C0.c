/* Address: 0x14005d4c0 | Name: sub_14005D4C0 | Size: 141 bytes */
__int64 __fastcall sub_14005D4C0(unsigned int a1, float a2, float a3, float a4)
{
  int v5; // ecx
  unsigned int *v6; // rax
  __int64 v8; // [rsp+20h] [rbp-18h] BYREF
  float v9; // [rsp+28h] [rbp-10h]

  v9 = -a4;
  dword_140404A6C[177167565] = 0;
  dword_140404A6C[177495247] = 0;
  dword_140404A6C[178322641] = 0;
  dword_140404A6C[178519250] = 0;
  v8 = 0;
  sub_140002D00((float *)&v8, a2, a3, a4);
  v5 = 0;
  if ( (int)dword_140404A6C[177495247] > 0 )
  {
    v6 = &dword_140404A6C[178011346];
    do
    {
      *(_QWORD *)(v6 - 1) = 0;
      ++v5;
      *(_QWORD *)(v6 + 1) = 0;
      *(_QWORD *)(v6 + 3) = 0;
      v6 += 6;
    }
    while ( v5 < (int)dword_140404A6C[177495247] );
  }
  return sub_1401449C0(a1, 0);
}

