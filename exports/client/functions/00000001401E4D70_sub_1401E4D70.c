/* Address: 0x1401e4d70 | Name: sub_1401E4D70 | Size: 117 bytes */
__int64 __fastcall sub_1401E4D70(int *a1, int a2, int a3)
{
  int i; // [rsp+0h] [rbp-18h]
  int v5; // [rsp+4h] [rbp-14h]

  if ( a3 >= 0 )
    v5 = a3 + 1;
  else
    v5 = 0;
  for ( i = v5; i < *a1; ++i )
  {
    if ( *((unsigned __int8 *)a1 + i + 12) == 2 * a2 + 1 )
      return (unsigned int)i;
  }
  return 0xFFFFFFFFLL;
}

