/* Address: 0x14015f960 | Name: sub_14015F960 | Size: 355 bytes */
_BOOL8 __fastcall sub_14015F960(__int64 *a1, unsigned int a2)
{
  int v2; // ebp
  unsigned int v6; // ecx
  __int64 v7; // rbx

  v2 = 0;
  *((_DWORD *)a1 + 4627) = -1;
  *((_DWORD *)a1 + 4626) = 0;
  *((_BYTE *)a1 + 18472) = -1;
  if ( (unsigned __int8)((__int64 (*)(void))sub_140160790)() != 0xD8 )
  {
    *(_QWORD *)(*(_QWORD *)(__readgsqword(0x58u) + 8LL * dword_140404A6C[19064470]) + 16LL) = "no SOI";
    return 0;
  }
  if ( a2 == 1 )
    return 1;
  v6 = (unsigned __int8)sub_140160790(a1);
  if ( v6 == 192 )
  {
LABEL_14:
    LOBYTE(v2) = v6 == 194;
    *((_DWORD *)a1 + 4620) = v2;
    return (unsigned int)sub_14016AEA0(a1, a2) != 0;
  }
  while ( 1 )
  {
    if ( v6 - 193 <= 1 )
      goto LABEL_14;
    if ( !(unsigned int)sub_14016BB40(a1, v6) )
      return 0;
    v6 = (unsigned __int8)sub_140160790(a1);
    if ( v6 == 255 )
      break;
LABEL_13:
    if ( v6 == 192 )
      goto LABEL_14;
  }
  while ( 1 )
  {
    v7 = *a1;
    if ( !*(_QWORD *)(*a1 + 16) )
      break;
    if ( (*(unsigned int (__fastcall **)(_QWORD))(v7 + 32))(*(_QWORD *)(v7 + 40)) )
    {
      if ( !*(_DWORD *)(v7 + 48) )
        goto LABEL_17;
      break;
    }
LABEL_12:
    v6 = (unsigned __int8)sub_140160790(a1);
    if ( v6 != 255 )
      goto LABEL_13;
  }
  if ( *(_QWORD *)(v7 + 192) < *(_QWORD *)(v7 + 200) )
    goto LABEL_12;
LABEL_17:
  *(_QWORD *)(*(_QWORD *)(__readgsqword(0x58u) + 8LL * dword_140404A6C[19064470]) + 16LL) = "no SOF";
  return 0;
}

