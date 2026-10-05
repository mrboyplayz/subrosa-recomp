/* Address: 0x14026afc8 | Name: fegetexceptflag | Size: 65 bytes */
int __cdecl fegetexceptflag(fexcept_t *Except, int TestFlags)
{
  unsigned int v3; // edi
  int status; // ebx

  v3 = TestFlags & 0x1F;
  if ( (TestFlags & 0x1F) != 0 )
  {
    status = _acrt_fenv_get_status();
    *(_DWORD *)Except = status & _acrt_fenv_get_fp_status_word_from_exception_mask(v3);
  }
  else
  {
    *(_DWORD *)Except &= v3;
  }
  return 0;
}

