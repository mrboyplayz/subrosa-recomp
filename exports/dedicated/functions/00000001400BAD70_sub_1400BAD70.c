/* Address: 0x1400bad70 | Name: sub_1400BAD70 | Size: 501 bytes */
__int64 __fastcall sub_1400BAD70(int a1)
{
  __int64 result; // rax
  __int64 v2; // r14
  int v3; // ebp
  int v4; // ebx
  int v5; // esi
  unsigned __int64 v6; // r8
  unsigned int v7; // eax
  int v8; // edi
  float v9; // xmm6_4
  int v10; // eax
  _UNKNOWN *retaddr; // [rsp+78h] [rbp+0h] BYREF

  result = (__int64)&retaddr;
  if ( dword_1839ABEE4 && a1 > 0 )
  {
    v2 = (unsigned int)a1;
    do
    {
      v3 = rand() & 1;
      v4 = rand() % dword_1839ABEE4;
      if ( dword_1915FDF00 )
      {
        while ( v4 == 67 || v4 == 23 )
          v4 = rand() % dword_1839ABEE4;
      }
      v5 = rand() & 1;
      if ( dword_19154118C == 5 )
      {
        v6 = 1584LL * v4;
        if ( *((_DWORD *)&unk_183989EE8 + 34 * dword_1839ABF0C[v6 / 4]) == *((_DWORD *)&unk_183989EE8
                                                                           + 34 * *(int *)((char *)&unk_1839ABF10 + v6))
          && *(_DWORD *)((char *)&unk_1839ABF18 + v6) == 3 )
        {
          v5 = rand() % 3;
        }
      }
      v7 = rand() & 0xF;
      if ( v7 >= 3 )
      {
        if ( v7 >= 9 )
        {
          if ( v7 >= 0xD )
          {
            v8 = 15;
            if ( v7 < 0xE )
              v8 = 7;
          }
          else
          {
            v8 = 9;
          }
        }
        else
        {
          v8 = 0;
        }
      }
      else
      {
        v8 = 7;
      }
      v9 = (float)(unsigned __int8)rand() * 0.00390625;
      v10 = rand();
      result = sub_1400B92B0(v8, v10 % 6, v4, v3, v5, v9);
      if ( v5 == 2 )
      {
        result = (int)result;
        *((_DWORD *)&unk_16D4FD5FC + 383 * (int)result) = 0;
      }
      --v2;
    }
    while ( v2 );
  }
  return result;
}

