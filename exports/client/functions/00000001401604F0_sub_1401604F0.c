/* Address: 0x1401604f0 | Name: sub_1401604F0 | Size: 189 bytes */
__int64 __fastcall sub_1401604F0(__int64 a1, __int64 a2)
{
  unsigned __int8 *v2; // rax
  unsigned __int64 v4; // rcx
  unsigned __int8 *v5; // rax
  int v6; // edi
  unsigned __int8 v7; // cl
  unsigned __int8 *v9; // rax
  unsigned __int8 v10; // cl

  v2 = *(unsigned __int8 **)(a1 + 192);
  v4 = *(_QWORD *)(a1 + 200);
  if ( (unsigned __int64)v2 >= v4 )
  {
    if ( !*(_DWORD *)(a1 + 48) )
    {
      v6 = 0;
      goto LABEL_7;
    }
    sub_14016D910(a1, a2);
    v2 = *(unsigned __int8 **)(a1 + 192);
    v4 = *(_QWORD *)(a1 + 200);
  }
  a2 = *v2;
  v5 = v2 + 1;
  *(_QWORD *)(a1 + 192) = v5;
  v6 = (unsigned __int8)a2;
  if ( (unsigned __int64)v5 < v4 )
  {
    v7 = *v5;
    *(_QWORD *)(a1 + 192) = v5 + 1;
    return ((unsigned __int8)a2 << 8) + (unsigned int)v7;
  }
LABEL_7:
  if ( !*(_DWORD *)(a1 + 48) )
    return (unsigned int)(v6 << 8);
  sub_14016D910(a1, a2);
  v9 = *(unsigned __int8 **)(a1 + 192);
  v10 = *v9;
  *(_QWORD *)(a1 + 192) = v9 + 1;
  return (v6 << 8) + (unsigned int)v10;
}

