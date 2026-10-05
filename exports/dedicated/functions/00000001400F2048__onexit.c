/* Address: 0x1400f2048 | Name: _onexit | Size: 58 bytes */
_onexit_t __cdecl onexit(_onexit_t Func)
{
  int v2; // eax
  int (__cdecl *v3)(); // rdx

  if ( Table._first == (_PVFV *)-1LL )
    v2 = crt_atexit((_PVFV)Func);
  else
    v2 = register_onexit_function(&Table, Func);
  v3 = nullptr;
  if ( !v2 )
    return Func;
  return v3;
}

