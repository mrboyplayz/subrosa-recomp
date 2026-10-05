/* Address: 0x140212c2c | Name: unknown_libname_371 | Size: 117 bytes */
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64 __fastcall unknown_libname_371(__int64 *a1, char a2, int a3, int *a4)
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
        **(_BYTE **)*a1 = a2;
        result = *a1;
        ++*(_QWORD *)*a1;
        v4 = *a4;
      }
      if ( v4 == -1 )
        break;
    }
  }
  return result;
}

