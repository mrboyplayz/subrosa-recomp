/* Address: 0x140255a0c | Name: ?try_get_ptd_head@@YAPEAU__acrt_ptd@@XZ | Size: 32 bytes */
__int64 try_get_ptd_head()
{
  __int64 result; // rax

  if ( dword_140302410 == -1 )
    return 0;
  result = sub_14024EFE4(dword_140302410);
  if ( !result )
    return 0;
  return result;
}

