/* Address: 0x140212ca4 | Name: sub_140212CA4 | Size: 122 bytes */
__int64 __fastcall sub_140212CA4(__int64 *a1, char a2, int a3, int *a4)
{
  int v4; // r10d
  int i; // r11d
  __int64 result; // rax

  if ( a3 > 0 )
  {
    v4 = *a4;
    for ( i = 0; i < a3; ++i )
    {
      result = *(_QWORD *)(*a1 + 8);
      if ( *(_QWORD *)(*a1 + 16) == result )
      {
        if ( *(_BYTE *)(*a1 + 24) )
          ++v4;
        else
          v4 = -1;
        *a4 = v4;
      }
      else
      {
        *a4 = v4 + 1;
        ++*(_QWORD *)(*a1 + 16);
        **(_WORD **)*a1 = a2;
        result = *a1;
        *(_QWORD *)*a1 += 2LL;
        v4 = *a4;
      }
      if ( v4 == -1 )
        break;
    }
  }
  return result;
}

