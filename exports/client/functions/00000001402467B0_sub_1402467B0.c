/* Address: 0x1402467b0 | Name: sub_1402467B0 | Size: 177 bytes */
__int64 sub_1402467B0()
{
  __int64 *v0; // rdi
  __int64 result; // rax
  int v2; // eax
  void *v3; // rbx

  v0 = *(__int64 **)&dword_140404A6C[19064861];
  if ( !*(_QWORD *)&dword_140404A6C[19064861] )
    return 0xFFFFFFFFLL;
  while ( 1 )
  {
    result = *v0;
    if ( !*v0 )
      break;
    v2 = MEMORY[0x140259504](0, 0, result);
    if ( !v2 )
      return 0xFFFFFFFFLL;
    v3 = (void *)calloc_base(v2, 2);
    if ( !v3 || !(unsigned int)MEMORY[0x140259504](0, 0, *v0) )
    {
      free_base(v3);
      return 0xFFFFFFFFLL;
    }
    common_set_variable_in_environment_nolock<wchar_t>(v3, 0);
    free_base(nullptr);
    ++v0;
  }
  return result;
}

