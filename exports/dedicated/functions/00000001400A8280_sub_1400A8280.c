/* Address: 0x1400a8280 | Name: sub_1400A8280 | Size: 78 bytes */
int __fastcall sub_1400A8280(int *a1, char *a2, FILE *a3, int a4)
{
  int result; // eax

  if ( a4 )
    return sub_14004F330(a3, "%s%d\r\n", a2, *a1);
  result = sub_14004F030(a2);
  if ( result )
  {
    result = sub_14004FCF0();
    *a1 = result;
  }
  dword_1406A6780 = 0;
  return result;
}

