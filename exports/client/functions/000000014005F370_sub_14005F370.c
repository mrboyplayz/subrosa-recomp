/* Address: 0x14005f370 | Name: sub_14005F370 | Size: 142 bytes */
__int64 __fastcall sub_14005F370(unsigned int a1, int a2)
{
  int v3; // eax
  int v4; // ecx
  unsigned int *v5; // rax
  __int64 v7; // [rsp+20h] [rbp-18h] BYREF
  int v8; // [rsp+28h] [rbp-10h]

  dword_140404A6C[177167565] = 0;
  v3 = 0;
  dword_140404A6C[177495247] = 0;
  dword_140404A6C[178322641] = 0;
  dword_140404A6C[178519250] = 0;
  if ( a2 == 1 )
  {
    v7 = 0;
    v8 = 0;
    sub_140002D00((float *)&v7, 0.02, 0.02, 0.02);
    v3 = dword_140404A6C[177495247];
  }
  v4 = 0;
  if ( v3 > 0 )
  {
    v5 = &dword_140404A6C[178011346];
    do
    {
      *(_QWORD *)(v5 - 1) = 0;
      ++v4;
      *(_QWORD *)(v5 + 1) = 0;
      *(_QWORD *)(v5 + 3) = 0;
      v5 += 6;
    }
    while ( v4 < (int)dword_140404A6C[177495247] );
  }
  return sub_1401449C0(a1, 0);
}

