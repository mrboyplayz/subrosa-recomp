/* Address: 0x140260858 | Name: ??$find_in_environment_nolock@_W@@YA_JQEB_W_K@Z | Size: 145 bytes */
__int64 __fastcall find_in_environment_nolock<wchar_t>(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 *v5; // rbx
  __int64 i; // rax

  v2 = *(_QWORD *)&dword_140404A6C[19064863];
  v5 = *(__int64 **)&dword_140404A6C[19064863];
  for ( i = **(_QWORD **)&dword_140404A6C[19064863]; i; i = *v5 )
  {
    if ( !(unsigned int)wcsnicoll(a1, i, a2) && (*(_WORD *)(*v5 + 2 * a2) == 61 || !*(_WORD *)(*v5 + 2 * a2)) )
      return ((__int64)v5 - v2) >> 3;
    ++v5;
  }
  return -(((__int64)v5 - v2) >> 3);
}

