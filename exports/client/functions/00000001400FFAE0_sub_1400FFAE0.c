/* Address: 0x1400ffae0 | Name: sub_1400FFAE0 | Size: 259 bytes */
__int64 __fastcall sub_1400FFAE0(unsigned int a1, float a2, float a3, float a4)
{
  int v5; // ecx
  unsigned int *v6; // rax
  __int64 v8; // [rsp+20h] [rbp-18h] BYREF
  int v9; // [rsp+28h] [rbp-10h]

  dword_140404A6C[177167565] = 0;
  dword_140404A6C[177495247] = 0;
  dword_140404A6C[178322641] = 0;
  dword_140404A6C[178519250] = 0;
  v8 = 0;
  v9 = 0;
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
  *(_OWORD *)&dword_140404A6C[178011405] = xmmword_1402794B0;
  *(_OWORD *)&dword_140404A6C[178011409] = xmmword_140279410;
  *(_OWORD *)&dword_140404A6C[178011413] = xmmword_140279430;
  *(_OWORD *)&dword_140404A6C[178011345] = xmmword_140279400;
  *(_OWORD *)&dword_140404A6C[178011349] = xmmword_140278D70;
  *(_OWORD *)&dword_140404A6C[178011353] = xmmword_140278E50;
  if ( a1 == dword_140404A6C[283827003] )
  {
    *(_OWORD *)&dword_140404A6C[178011357] = xmmword_1402796F0;
    *(_OWORD *)&dword_140404A6C[178011365] = xmmword_140278D90;
    *(_OWORD *)&dword_140404A6C[178011361] = xmmword_1402794A0;
  }
  return sub_1401449C0(a1, 0);
}

