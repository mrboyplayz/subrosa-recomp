/* Address: 0x140208fcc | Name: sub_140208FCC | Size: 317 bytes */
__int64 __fastcall sub_140208FCC(__int64 a1, __int64 a2, _BYTE *a3)
{
  unsigned int v3; // ebx
  __int64 v7; // rsi
  __int64 v8; // rsi
  __int64 v9; // rcx
  __int64 v10; // rsi
  __int64 v11; // rsi
  __int64 v12; // r8
  unsigned __int8 *v13; // rax
  __int64 v14; // r8
  int v15; // edx
  int v16; // ecx

  v3 = 0;
  if ( !*(_DWORD *)(a1 + 4) )
    return 1;
  v7 = *(int *)(a1 + 4);
  if ( !(v7 + sub_1402075CC()) )
    return 1;
  if ( (_DWORD)v7 )
  {
    v8 = *(int *)(a1 + 4);
    v9 = v8 + sub_1402075CC();
  }
  else
  {
    v9 = 0;
    LODWORD(v8) = 0;
  }
  if ( !*(_BYTE *)(v9 + 16) || *(char *)a1 < 0 && (*(_BYTE *)a2 & 0x10) != 0 )
    return 1;
  if ( (_DWORD)v8 )
    v10 = *(int *)(a1 + 4) + sub_1402075CC();
  else
    v10 = 0;
  if ( v10 != *(int *)(a2 + 4) + sub_1402075E0() )
  {
    v11 = *(_DWORD *)(a1 + 4) ? *(int *)(a1 + 4) + sub_1402075CC() : 0LL;
    v12 = sub_1402075E0() + *(int *)(a2 + 4) + 16LL;
    v13 = (unsigned __int8 *)(v11 + 16);
    v14 = v12 - (v11 + 16);
    do
    {
      v15 = v13[v14];
      v16 = *v13 - v15;
      if ( v16 )
        break;
      ++v13;
    }
    while ( v15 );
    if ( v16 )
      return 0;
  }
  if ( ((*(_BYTE *)a2 & 2) == 0 || (*(_BYTE *)a1 & 8) != 0)
    && ((*a3 & 1) == 0 || (*(_BYTE *)a1 & 1) != 0)
    && ((*a3 & 4) == 0 || (*(_BYTE *)a1 & 4) != 0)
    && ((*a3 & 2) == 0 || (*(_BYTE *)a1 & 2) != 0) )
  {
    return 1;
  }
  return v3;
}

