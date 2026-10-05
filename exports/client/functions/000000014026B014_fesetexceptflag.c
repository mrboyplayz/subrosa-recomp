/* Address: 0x14026b014 | Name: fesetexceptflag | Size: 109 bytes */
int __cdecl fesetexceptflag(const #69 *Except, int SetFlags)
{
  unsigned int v3; // edx
  int fp_status_word_from_exception_mask; // edi
  int v5; // ebx
  __int64 v6; // rsi
  int result; // eax

  v3 = SetFlags & 0x1F;
  result = false;
  if ( v3 )
  {
    fp_status_word_from_exception_mask = _acrt_fenv_get_fp_status_word_from_exception_mask(v3);
    v5 = _acrt_fenv_get_fp_status_word_from_exception_mask(63) & *(_DWORD *)Except;
    v6 = fp_status_word_from_exception_mask & v5
       | ~fp_status_word_from_exception_mask & (unsigned int)_acrt_fenv_get_status();
    _acrt_fenv_set_status(v6);
    if ( fetestexcept(v6 & 0x1F) != (v6 & 0x1F) )
      return true;
  }
  return result;
}

