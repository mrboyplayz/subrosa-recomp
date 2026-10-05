/* Address: 0x140052e10 | Name: sub_140052E10 | Size: 479 bytes */
__int64 __fastcall sub_140052E10(int a1, unsigned int a2, __int64 a3, int a4)
{
  __int64 result; // rax
  __int64 v5; // rbx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx

  result = a1;
  v5 = 28664LL * a1;
  if ( !*(_DWORD *)((char *)&unk_1909419A0 + v5 + 104) )
  {
    result = (unsigned int)(a4 / -2);
    *(_DWORD *)((char *)&unk_1909419A0 + v5 + 28028) += result;
  }
  if ( a2 <= 2 )
  {
    *(_DWORD *)((char *)&unk_1909419A0 + v5 + 28036) -= a4;
    *(_DWORD *)((char *)&unk_1909419A0 + v5 + 160) += a4;
    v7 = *(_DWORD *)((char *)&unk_1909419A0 + v5 + 28028);
    if ( v7 < 100 )
    {
      result = (unsigned int)(int)(float)((float)*(int *)((char *)&unk_1909419A0 + v5 + 28024)
                                        - (float)(fminf((float)(100 - v7) * 0.039999999, 1.0) * (float)a4));
      *(_DWORD *)((char *)&unk_1909419A0 + v5 + 28024) = result;
    }
  }
  if ( a2 == 3 )
  {
    *(_DWORD *)((char *)&unk_1909419A0 + v5 + 28044) -= a4;
    *(_DWORD *)((char *)&unk_1909419A0 + v5 + 28024) -= a4;
  }
  else
  {
    v8 = 3 * a4;
    if ( a2 - 4 <= 2 )
      *(_DWORD *)((char *)&unk_1909419A0 + v5 + 28052) -= v8;
    if ( a2 - 7 <= 2 )
      *(_DWORD *)((char *)&unk_1909419A0 + v5 + 28060) -= v8;
    if ( a2 - 10 <= 2 )
    {
      *(_DWORD *)((char *)&unk_1909419A0 + v5 + 28068) += -2 * a4;
      v9 = *(_DWORD *)((char *)&unk_1909419A0 + v5 + 28028);
      if ( v9 < 100 )
        *(_DWORD *)((char *)&unk_1909419A0 + v5 + 28024) = (int)(float)((float)*(int *)((char *)&unk_1909419A0
                                                                                      + v5
                                                                                      + 28024)
                                                                      - (float)((float)(a4 * (100 - v9)) * 0.0099999998));
    }
    result = a2 - 13;
    if ( (unsigned int)result <= 2 )
    {
      *(_DWORD *)((char *)&unk_1909419A0 + v5 + 28076) += -2 * a4;
      result = *(unsigned int *)((char *)&unk_1909419A0 + v5 + 28028);
      if ( (int)result < 100 )
      {
        result = (unsigned int)(int)(float)((float)*(int *)((char *)&unk_1909419A0 + v5 + 28024)
                                          - (float)((float)(a4 * (100 - result)) * 0.0099999998));
        *(_DWORD *)((char *)&unk_1909419A0 + v5 + 28024) = result;
      }
    }
  }
  if ( a4 > 0 )
  {
    result = rand() & 0x1F;
    if ( (int)result < a4 )
      *(_DWORD *)((char *)&unk_1909419A0 + v5 + 28032) = 1;
  }
  if ( *(int *)((char *)&unk_1909419A0 + v5 + 160) > 90 )
    *(_DWORD *)((char *)&unk_1909419A0 + v5 + 160) = 90;
  if ( *(int *)((char *)&unk_1909419A0 + v5 + 28024) < 0 )
    *(_DWORD *)((char *)&unk_1909419A0 + v5 + 28024) = 0;
  return result;
}

