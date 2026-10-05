/* Address: 0x1402184ac | Name: unknown_libname_491 | Size: 88 bytes */
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
char __fastcall unknown_libname_491(__int64 a1)
{
  __int64 v2; // rcx

  *(_BYTE *)(a1 + 84) = 1;
  v2 = *(unsigned __int16 *)(a1 + 66);
  if ( ((*(_DWORD *)(*(_QWORD *)(a1 + 1128) + 20LL) & 0x1000) == 0 || *(_QWORD *)(*(_QWORD *)(a1 + 1128) + 8LL))
    && (unsigned __int16)sub_140256B38(v2, *(_QWORD *)(a1 + 1128)) == 0xFFFF )
  {
    *(_DWORD *)(a1 + 40) = -1;
  }
  else
  {
    ++*(_DWORD *)(a1 + 40);
  }
  return 1;
}

