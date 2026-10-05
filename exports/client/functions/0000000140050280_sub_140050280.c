/* Address: 0x140050280 | Name: sub_140050280 | Size: 562 bytes */
__int64 __fastcall sub_140050280(unsigned int a1, float a2, float a3, float a4)
{
  int v4; // ebx
  float v5; // xmm6_4
  int v7; // r8d
  unsigned int *v8; // rax
  int v9; // edx
  unsigned int *v10; // rcx
  unsigned int v11; // ecx
  __int64 v13; // [rsp+20h] [rbp-48h] BYREF
  float v14; // [rsp+28h] [rbp-40h]

  v4 = 0;
  v5 = a4;
  dword_140404A6C[177167565] = 0;
  dword_140404A6C[177495247] = 0;
  dword_140404A6C[178322641] = 0;
  dword_140404A6C[178519250] = 0;
  v13 = 0;
  if ( a4 <= 0.0 )
  {
    v5 = -a4;
    v14 = a4;
  }
  else
  {
    v14 = 0.0;
  }
  sub_140002D00((float *)&v13, a2, a3, v5);
  v7 = dword_140404A6C[177495247];
  v8 = &dword_140404A6C[178011346];
  v9 = 0;
  if ( (int)dword_140404A6C[177495247] > 0 )
  {
    v10 = &dword_140404A6C[178011346];
    do
    {
      *(_QWORD *)(v10 - 1) = 0;
      ++v9;
      *(_QWORD *)(v10 + 1) = 0;
      *(_QWORD *)(v10 + 3) = 0;
      v10 += 6;
      v7 = dword_140404A6C[177495247];
    }
    while ( v9 < (int)dword_140404A6C[177495247] );
  }
  if ( a1 != dword_140404A6C[283826994] )
  {
    v11 = dword_140404A6C[283827004];
    if ( a1 == dword_140404A6C[283827003] || a1 == dword_140404A6C[283827004] )
    {
      if ( v7 > 0 )
      {
        do
        {
          *(v8 - 1) = 1035993088;
          *v8 = 1063780352;
          v8[1] = 1035993088;
          v8[2] = 1063780352;
          v8[3] = 1035993088;
          v8[4] = 1063780352;
          if ( a1 == v11 )
          {
            *v8 = 1064828928;
            v8[2] = 1064828928;
            v8[4] = 1064828928;
          }
          ++v4;
          v8 += 6;
        }
        while ( v4 < (int)dword_140404A6C[177495247] );
      }
    }
    else if ( a1 == dword_140404A6C[283827005] )
    {
      v14 = 0.015625;
      sub_140002D00((float *)&v13, a2 * 0.875, a3 * 0.875, v5);
      *(_OWORD *)&dword_140404A6C[178011429] = xmmword_1402796F0;
      *(_OWORD *)&dword_140404A6C[178011437] = xmmword_140278D30;
      *(_OWORD *)&dword_140404A6C[178011433] = xmmword_1402794A0;
    }
    else
    {
      *(_OWORD *)&dword_140404A6C[178011381] = xmmword_140279550;
      *(_OWORD *)&dword_140404A6C[178011385] = xmmword_1402796F0;
      *(_OWORD *)&dword_140404A6C[178011389] = xmmword_1402796F0;
      *(_OWORD *)&dword_140404A6C[178011409] = xmmword_1402794A0;
      *(_OWORD *)&dword_140404A6C[178011405] = xmmword_1402796F0;
      *(_OWORD *)&dword_140404A6C[178011345] = xmmword_140278E20;
      *(_OWORD *)&dword_140404A6C[178011413] = xmmword_140278D30;
      *(_OWORD *)&dword_140404A6C[178011353] = xmmword_140279550;
      *(_OWORD *)&dword_140404A6C[178011349] = xmmword_140278D90;
    }
  }
  return sub_1401449C0(a1, 0);
}

