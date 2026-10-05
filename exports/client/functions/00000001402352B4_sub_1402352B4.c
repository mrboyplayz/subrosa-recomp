/* Address: 0x1402352b4 | Name: sub_1402352B4 | Size: 166 bytes */
char __fastcall sub_1402352B4(__int64 a1)
{
  _BYTE *v2; // rcx
  unsigned int v3; // eax
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_BYTE **)(a1 + 8);
  if ( (unsigned __int8)(*v2 - 48) > 9u )
  {
    if ( (unsigned __int8)(*v2 - 97) > 0x19u )
    {
      if ( (unsigned __int8)(*v2 - 65) > 0x19u )
        v3 = -1;
      else
        v3 = (char)*v2 - 55;
    }
    else
    {
      v3 = (char)*v2 - 87;
    }
  }
  else
  {
    v3 = (char)*v2 - 48;
  }
  if ( v3 > 9 )
    return 1;
  v7 = 0;
  v5 = sub_14023CD50(v2, &v7, 10);
  if ( v5 )
  {
    v6 = v7;
    if ( v7 != *(_QWORD *)(a1 + 8) )
    {
      *(_QWORD *)(a1 + 32) = v5;
      *(_QWORD *)(a1 + 8) = v6;
      return 1;
    }
  }
  *(_DWORD *)(a1 + 20) = 0;
  *(_WORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 32) = 0;
  *(_DWORD *)(a1 + 40) = 0;
  *(_DWORD *)(a1 + 48) = 0;
  *(_BYTE *)(a1 + 26) = 0;
  *(_BYTE *)(a1 + 44) = 0;
  *(_DWORD *)(a1 + 16) = 22;
  return 0;
}

