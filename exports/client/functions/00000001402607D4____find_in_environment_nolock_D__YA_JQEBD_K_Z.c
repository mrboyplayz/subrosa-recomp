/* Address: 0x1402607d4 | Name: ??$find_in_environment_nolock@D@@YA_JQEBD_K@Z | Size: 129 bytes */
__int64 __fastcall find_in_environment_nolock<char>(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 *v5; // rbx
  __int64 i; // rax

  v2 = *(_QWORD *)&dword_140404A6C[19064861];
  v5 = *(__int64 **)&dword_140404A6C[19064861];
  for ( i = **(_QWORD **)&dword_140404A6C[19064861]; i; i = *v5 )
  {
    if ( !(unsigned int)strnicoll(a1, i, a2) && (*(_BYTE *)(a2 + *v5) == 61 || !*(_BYTE *)(a2 + *v5)) )
      return ((__int64)v5 - v2) >> 3;
    ++v5;
  }
  return -(((__int64)v5 - v2) >> 3);
}

