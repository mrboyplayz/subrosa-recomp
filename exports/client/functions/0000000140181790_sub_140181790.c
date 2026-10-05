/* Address: 0x140181790 | Name: sub_140181790 | Size: 327 bytes */
_BOOL8 __fastcall sub_140181790(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  unsigned int v5; // ebp
  int v6; // edi
  __int64 v8; // rbx
  int v9; // eax
  int v10; // ebp
  int v11; // eax

  v5 = a2;
  v6 = a3;
  v8 = -1;
  do
    ++v8;
  while ( *(_BYTE *)(a3 + v8) );
  if ( !(unsigned int)sub_140181710((unsigned int)a2 + a1, a2, a3)
    || a4 && (((unsigned __int8)a4 ^ *(_BYTE *)((unsigned int)sub_140180D50(a1, v5, "head") + a1 + 45)) & 7) != 0 )
  {
    return 0;
  }
  v9 = sub_140180D50(a1, v5, "name");
  v10 = v9;
  if ( !v9 )
    return 0;
  if ( !a4 )
  {
    if ( !(unsigned int)sub_1401818E0(a1, v9, v6, v8, 16, 17) )
    {
      v11 = sub_1401818E0(a1, v10, v6, v8, 1, 2);
      return v11 || (unsigned int)sub_1401818E0(a1, v10, v6, v8, 3, -1);
    }
    return 1;
  }
  if ( (unsigned int)sub_1401818E0(a1, v9, v6, v8, 16, -1) )
    return 1;
  v11 = sub_1401818E0(a1, v10, v6, v8, 1, -1);
  return v11 || (unsigned int)sub_1401818E0(a1, v10, v6, v8, 3, -1);
}

