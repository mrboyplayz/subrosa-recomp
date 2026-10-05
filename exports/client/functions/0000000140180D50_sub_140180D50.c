/* Address: 0x140180d50 | Name: sub_140180D50 | Size: 182 bytes */
__int64 __fastcall sub_140180D50(__int64 a1, unsigned int a2, char *a3)
{
  __int64 v3; // rax
  unsigned int v4; // edi
  int v5; // edx
  int v6; // r10d
  __int64 v7; // r9

  v3 = a2;
  v4 = a2 + 12;
  v5 = 0;
  v6 = *(unsigned __int8 *)(v3 + a1 + 5) + (*(unsigned __int8 *)(v3 + a1 + 4) << 8);
  if ( !v6 )
    return 0;
  while ( 1 )
  {
    v7 = v4 + 16 * v5;
    if ( *(unsigned __int8 *)(v7 + a1) == *a3
      && *(unsigned __int8 *)(v7 + a1 + 1) == a3[1]
      && *(unsigned __int8 *)(v7 + a1 + 2) == a3[2]
      && *(unsigned __int8 *)(v7 + a1 + 3) == a3[3] )
    {
      break;
    }
    if ( ++v5 >= v6 )
      return 0;
  }
  return *(unsigned __int8 *)(v7 + a1 + 11)
       + ((*(unsigned __int8 *)(v7 + a1 + 10)
         + ((*(unsigned __int8 *)(v7 + a1 + 9) + (*(unsigned __int8 *)(v7 + a1 + 8) << 8)) << 8)) << 8);
}

