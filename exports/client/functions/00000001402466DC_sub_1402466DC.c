/* Address: 0x1402466dc | Name: sub_1402466DC | Size: 209 bytes */
__int64 sub_1402466DC()
{
  __int64 *v0; // rdi
  __int64 result; // rax
  int v2; // eax
  int v3; // esi
  __int64 v4; // rax
  void *v5; // rbx

  v0 = *(__int64 **)&dword_140404A6C[19064863];
  if ( !*(_QWORD *)&dword_140404A6C[19064863] )
    return 0xFFFFFFFFLL;
  while ( 1 )
  {
    result = *v0;
    if ( !*v0 )
      break;
    v2 = sub_140258A84(0, 0, result, -1, 0, 0, 0, 0);
    v3 = v2;
    if ( !v2 )
      return 0xFFFFFFFFLL;
    v4 = calloc_base(v2, 1);
    v5 = (void *)v4;
    if ( !v4 || !(unsigned int)sub_140258A84(0, 0, *v0, -1, v4, v3, 0, 0) )
    {
      free_base(v5);
      return 0xFFFFFFFFLL;
    }
    _dcrt_set_variable_in_narrow_environment_nolock(v5, 0);
    free_base(nullptr);
    ++v0;
  }
  return result;
}

