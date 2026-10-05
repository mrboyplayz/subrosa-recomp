/* Address: 0x140269fe4 | Name: __acrt_fenv_get_fp_status_word_from_exception_mask | Size: 11 bytes */
__int64 __fastcall _acrt_fenv_get_fp_status_word_from_exception_mask(int a1)
{
  return a1 | ((unsigned __int8)(a1 & 0x3F) << 24);
}

