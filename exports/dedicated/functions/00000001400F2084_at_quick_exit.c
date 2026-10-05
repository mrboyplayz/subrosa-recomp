/* Address: 0x1400f2084 | Name: at_quick_exit | Size: 35 bytes */
int __cdecl at_quick_exit(void (__cdecl *a1)())
{
  if ( stru_140585AF8._first == (_PVFV *)-1LL )
    return crt_at_quick_exit(a1);
  else
    return register_onexit_function(&stru_140585AF8, (_onexit_t)a1);
}

