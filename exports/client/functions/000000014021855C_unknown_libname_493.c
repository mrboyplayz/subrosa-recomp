/* Address: 0x14021855c | Name: unknown_libname_493 | Size: 84 bytes */
// Microsoft VisualC 64bit universal runtime
char __fastcall unknown_libname_493(__int64 a1)
{
  __int16 v1; // r9
  __int64 v3; // rcx

  v1 = *(_WORD *)(a1 + 66);
  *(_BYTE *)(a1 + 84) = 1;
  v3 = *(_QWORD *)(a1 + 1128);
  if ( *(_QWORD *)(v3 + 16) == *(_QWORD *)(v3 + 8) )
  {
    if ( *(_BYTE *)(v3 + 24) )
      ++*(_DWORD *)(a1 + 40);
    else
      *(_DWORD *)(a1 + 40) = -1;
  }
  else
  {
    ++*(_DWORD *)(a1 + 40);
    ++*(_QWORD *)(v3 + 16);
    ***(_WORD ***)(a1 + 1128) = v1;
    **(_QWORD **)(a1 + 1128) += 2LL;
  }
  return 1;
}

