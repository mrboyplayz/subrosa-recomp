/* Address: 0x14012e960 | Name: sub_14012E960 | Size: 493 bytes */
__int64 __fastcall sub_14012E960(int a1)
{
  __int64 result; // rax
  __int64 v2; // r14
  int v3; // ebp
  signed int v4; // ebx
  int v5; // esi
  __int64 v6; // r8
  unsigned int v7; // eax
  int v8; // edi
  float v9; // xmm6_4
  int v10; // eax
  _UNKNOWN *retaddr; // [rsp+78h] [rbp+0h] BYREF

  result = (__int64)&retaddr;
  if ( dword_140404A6C[225426046] && a1 > 0 )
  {
    v2 = (unsigned int)a1;
    do
    {
      v3 = rand() & 1;
      v4 = rand() % (signed int)dword_140404A6C[225426046];
      if ( dword_140404A6C[284024893] )
      {
        while ( v4 == 67 || v4 == 23 )
          v4 = rand() % (signed int)dword_140404A6C[225426046];
      }
      v5 = rand() & 1;
      if ( dword_140404A6C[283831312] == 5 )
      {
        v6 = 396LL * v4;
        if ( dword_140404A6C[34 * dword_140404A6C[v6 + 225426056] + 225391231] == dword_140404A6C[34
                                                                                                * dword_140404A6C[v6 + 225426057]
                                                                                                + 225391231]
          && dword_140404A6C[v6 + 225426059] == 3 )
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
      result = sub_14012CEB0(v8, v10 % 6, v4, v3, v5, v9);
      if ( v5 == 2 )
      {
        result = (int)result;
        dword_140404A6C[383 * (int)result + 132400668] = 0;
      }
      --v2;
    }
    while ( v2 );
  }
  return result;
}

