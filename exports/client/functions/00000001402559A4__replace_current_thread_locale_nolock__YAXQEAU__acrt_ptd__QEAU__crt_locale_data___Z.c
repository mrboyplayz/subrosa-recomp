/* Address: 0x1402559a4 | Name: ?replace_current_thread_locale_nolock@@YAXQEAU__acrt_ptd@@QEAU__crt_locale_data@@@Z | Size: 103 bytes */
__int16 **__fastcall replace_current_thread_locale_nolock(
        struct __acrt_ptd *const a1,
        struct __crt_locale_data *const a2)
{
  __int64 v4; // rcx
  __int16 **result; // rax
  __int64 v6; // rcx

  v4 = *((_QWORD *)a1 + 18);
  if ( v4 )
  {
    result = (__int16 **)sub_140262A34(v4);
    v6 = *((_QWORD *)a1 + 18);
    if ( v6 != *(_QWORD *)&dword_140404A6C[19065667] )
    {
      result = &off_140302420;
      if ( (__int16 **)v6 != &off_140302420 && !*(_DWORD *)(v6 + 16) )
        result = (__int16 **)sub_140262834(v6);
    }
  }
  *((_QWORD *)a1 + 18) = a2;
  if ( a2 )
    return (__int16 **)MEMORY[0x1402627A8](a2);
  return result;
}

