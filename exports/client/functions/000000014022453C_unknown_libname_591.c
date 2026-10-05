/* Address: 0x14022453c | Name: unknown_libname_591 | Size: 235 bytes */
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
char __fastcall unknown_libname_591(__int64 a1)
{
  #49 *v2; // rsi
  int v3; // edi
  __int64 v4; // r9
  int v5; // eax
  __int64 v6; // rcx
  __int16 v7; // dx
  __int16 v9; // [rsp+40h] [rbp+8h] BYREF

  if ( *(_BYTE *)(a1 + 84) || *(int *)(a1 + 80) <= 0 )
  {
    unknown_libname_594(a1 + 1128, *(_QWORD *)(a1 + 72), *(unsigned int *)(a1 + 80), a1 + 40, a1 + 16);
  }
  else
  {
    v2 = *(#49 **)(a1 + 72);
    v3 = 0;
    while ( 1 )
    {
      v4 = *(_QWORD *)(a1 + 8);
      v9 = 0;
      v5 = mbtowc_l((#115 *)&v9, v2, (char *)*(int *)(*(_QWORD *)v4 + 8LL));
      if ( v5 <= 0 )
        break;
      v6 = *(_QWORD *)(a1 + 1128);
      v7 = v9;
      if ( *(_QWORD *)(v6 + 16) == *(_QWORD *)(v6 + 8) )
      {
        if ( *(_BYTE *)(v6 + 24) )
          ++*(_DWORD *)(a1 + 40);
        else
          *(_DWORD *)(a1 + 40) = -1;
      }
      else
      {
        ++*(_DWORD *)(a1 + 40);
        ++*(_QWORD *)(v6 + 16);
        ***(_WORD ***)(a1 + 1128) = v7;
        **(_QWORD **)(a1 + 1128) += 2LL;
      }
      v2 = (#49 *)((char *)v2 + v5);
      if ( ++v3 == *(_DWORD *)(a1 + 80) )
        return 1;
    }
    *(_DWORD *)(a1 + 40) = -1;
  }
  return 1;
}

