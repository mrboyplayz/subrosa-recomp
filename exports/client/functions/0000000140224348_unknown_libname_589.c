/* Address: 0x140224348 | Name: unknown_libname_589 | Size: 262 bytes */
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
char __fastcall unknown_libname_589(__int64 a1)
{
  #49 *v2; // rsi
  int v3; // edi
  __int64 v4; // r9
  int v5; // eax
  __int64 v6; // rbp
  int v7; // r8d
  __int64 v8; // r10
  _DWORD *v9; // r9
  unsigned __int16 v11; // [rsp+50h] [rbp+8h] BYREF

  if ( *(_BYTE *)(a1 + 84) || *(int *)(a1 + 80) <= 0 )
  {
    v7 = *(_DWORD *)(a1 + 80);
    v8 = a1 + 1128;
    v9 = (_DWORD *)(a1 + 40);
    if ( (*(_DWORD *)(*(_QWORD *)(a1 + 1128) + 20LL) & 0x1000) == 0 || *(_QWORD *)(*(_QWORD *)v8 + 8LL) )
      sub_1402249A0(v8, *(_QWORD *)(a1 + 72), v7, (_DWORD)v9, a1 + 16);
    else
      *v9 += v7;
  }
  else
  {
    v2 = *(#49 **)(a1 + 72);
    v3 = 0;
    while ( 1 )
    {
      v4 = *(_QWORD *)(a1 + 8);
      v11 = 0;
      v5 = mbtowc_l((#115 *)&v11, v2, (char *)*(int *)(*(_QWORD *)v4 + 8LL));
      v6 = v5;
      if ( v5 <= 0 )
        break;
      if ( ((*(_DWORD *)(*(_QWORD *)(a1 + 1128) + 20LL) & 0x1000) == 0 || *(_QWORD *)(*(_QWORD *)(a1 + 1128) + 8LL))
        && (unsigned __int16)sub_140256B38(v11, *(_QWORD *)(a1 + 1128)) == 0xFFFF )
      {
        *(_DWORD *)(a1 + 40) = -1;
      }
      else
      {
        ++*(_DWORD *)(a1 + 40);
      }
      v2 = (#49 *)((char *)v2 + v6);
      if ( ++v3 == *(_DWORD *)(a1 + 80) )
        return 1;
    }
    *(_DWORD *)(a1 + 40) = -1;
  }
  return 1;
}

