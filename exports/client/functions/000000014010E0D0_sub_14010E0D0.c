/* Address: 0x14010e0d0 | Name: sub_14010E0D0 | Size: 179 bytes */
__int64 __fastcall sub_14010E0D0(const char *a1, char *a2, int a3, int a4, int a5)
{
  __int64 result; // rax
  signed int v8; // eax
  int v9; // edx
  char *v10; // r8
  char v11; // cl

  if ( a5 )
    return sub_1400920F0(a4, "%s%s\r\n", a2, a1);
  result = sub_140091DF0(a2);
  if ( (_DWORD)result )
  {
    v8 = dword_140404A6C[293250413];
    v9 = 0;
    if ( (int)dword_140404A6C[293250413] < (int)dword_140404A6C[293250414] )
    {
      v10 = (char *)a1;
      do
      {
        if ( v9 >= a3 - 1 )
          break;
        v11 = *((_BYTE *)&dword_140404A6C[293250415] + v8);
        if ( v11 == 13 )
          break;
        if ( v11 == 10 )
          break;
        *v10 = v11;
        ++v9;
        ++v10;
        v8 = ++dword_140404A6C[293250413];
      }
      while ( (int)dword_140404A6C[293250413] < (int)dword_140404A6C[293250414] );
    }
    result = v9;
    a1[v9] = 0;
  }
  dword_140404A6C[293250413] = 0;
  return result;
}

