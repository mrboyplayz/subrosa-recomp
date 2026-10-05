/* Address: 0x140179650 | Name: sub_140179650 | Size: 308 bytes */
unsigned __int64 __fastcall sub_140179650(__int64 a1, _DWORD *a2, int a3, int a4, int a5, int a6)
{
  __int64 v6; // rbx
  unsigned int v10; // eax
  int v11; // edx
  int v12; // r14d
  int v13; // r8d
  __int64 v14; // r9

  v6 = *(_QWORD *)(a1 + 8);
  v10 = sub_140180D50(v6, *(unsigned int *)(a1 + 16), "name");
  if ( !v10 )
    return 0;
  v11 = 0;
  v12 = v10 + (*(unsigned __int8 *)(v6 + v10 + 4) << 8) + *(unsigned __int8 *)(v6 + v10 + 5);
  v13 = *(unsigned __int8 *)(v6 + v10 + 3) + (*(unsigned __int8 *)(v6 + v10 + 2) << 8);
  if ( !v13 )
    return 0;
  while ( 1 )
  {
    v14 = v10 + 6 + 12 * v11;
    if ( a3 == *(unsigned __int8 *)(v14 + v6 + 1) + (*(unsigned __int8 *)(v14 + v6) << 8)
      && a4 == *(unsigned __int8 *)(v14 + v6 + 3) + (*(unsigned __int8 *)(v14 + v6 + 2) << 8)
      && a5 == *(unsigned __int8 *)(v14 + v6 + 5) + (*(unsigned __int8 *)(v14 + v6 + 4) << 8)
      && a6 == *(unsigned __int8 *)(v14 + v6 + 7) + (*(unsigned __int8 *)(v14 + v6 + 6) << 8) )
    {
      break;
    }
    if ( ++v11 >= v13 )
      return 0;
  }
  *a2 = *(unsigned __int8 *)(v14 + v6 + 9) + (*(unsigned __int8 *)(v14 + v6 + 8) << 8);
  return ((unsigned __int64)*(unsigned __int8 *)(v14 + v6 + 10) << 8) + v6 + *(unsigned __int8 *)(v14 + v6 + 11) + v12;
}

