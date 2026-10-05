/* Address: 0x140232538 | Name: sub_140232538 | Size: 60 bytes */
char __fastcall sub_140232538(__int64 a1)
{
  unsigned __int64 v1; // rax
  bool v2; // zf
  FILE **v3; // rbx
  int v4; // eax

  v1 = *(_QWORD *)(a1 + 16) + 1LL;
  v2 = *(_QWORD *)(a1 + 8) == 0;
  *(_QWORD *)(a1 + 16) = v1;
  if ( !v2 && v1 > *(_QWORD *)(a1 + 8) || (v3 = *(FILE ***)a1, v4 = getc_nolock(**(FILE ***)a1), v4 == -1) )
    LOBYTE(v4) = 0;
  else
    v3[1] = (FILE *)((char *)v3[1] + 1);
  return v4;
}

