/* Address: 0x14026ba18 | Name: feholdexcept | Size: 80 bytes */
int __cdecl feholdexcept(#70 *Env)
{
  __int64 v2; // rax
  __int64 Enva; // [rsp+38h] [rbp+10h] BYREF

  Enva = 0;
  if ( fegetenv((fenv_t *)&Enva) )
    return 1;
  v2 = Enva;
  LODWORD(Enva) = Enva | 0x1F;
  *(_QWORD *)Env = v2;
  if ( fesetenv((const #70 *)&Enva) )
    return 1;
  clearfp();
  return 0;
}

