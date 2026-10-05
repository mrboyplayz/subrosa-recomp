/* Address: 0x14026b9cc | Name: fesetenv | Size: 76 bytes */
int __cdecl fesetenv(const #70 *Env)
{
  __int64 Enva; // [rsp+30h] [rbp+8h] BYREF

  _acrt_fenv_set_control(*(_DWORD *)Env);
  _acrt_fenv_set_status(*((unsigned int *)Env + 1));
  Enva = 0;
  return fegetenv((fenv_t *)&Enva) || *(_QWORD *)Env != Enva;
}

