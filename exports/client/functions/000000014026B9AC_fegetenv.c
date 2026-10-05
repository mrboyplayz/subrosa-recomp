/* Address: 0x14026b9ac | Name: fegetenv | Size: 32 bytes */
int __cdecl fegetenv(fenv_t *Env)
{
  *(_DWORD *)Env = _acrt_fenv_get_control();
  *((_DWORD *)Env + 1) = _acrt_fenv_get_status();
  return 0;
}

