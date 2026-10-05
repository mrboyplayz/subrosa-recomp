/* Address: 0x1400a82d0 | Name: sub_1400A82D0 | Size: 179 bytes */
int __fastcall sub_1400A82D0(const char *a1, char *a2, int a3, FILE *a4, int a5)
{
  int result; // eax
  int v8; // eax
  int v9; // edx
  char *v10; // r8
  char v11; // cl

  if ( a5 )
    return sub_14004F330(a4, "%s%s\r\n", a2, a1);
  result = sub_14004F030(a2);
  if ( result )
  {
    v8 = dword_1406A6780;
    v9 = 0;
    if ( dword_1406A6780 < dword_1406A6784 )
    {
      v10 = (char *)a1;
      do
      {
        if ( v9 >= a3 - 1 )
          break;
        v11 = byte_1406A6788[v8];
        if ( v11 == 13 )
          break;
        if ( v11 == 10 )
          break;
        *v10 = v11;
        ++v9;
        ++v10;
        v8 = ++dword_1406A6780;
      }
      while ( dword_1406A6780 < dword_1406A6784 );
    }
    result = v9;
    a1[v9] = 0;
  }
  dword_1406A6780 = 0;
  return result;
}

