/* Address: 0x14020ea10 | Name: unknown_libname_222 | Size: 110 bytes */
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64 __fastcall unknown_libname_222(
        __int64 a1,
        _WORD *a2,
        __int64 a3,
        __int64 a4,
        struct __crt_locale_pointers *a5,
        __int64 a6)
{
  __int64 result; // rax
  __int64 v8; // rcx

  if ( !a4 || !a2 || !a3 )
  {
    *errno() = 22;
    goto LABEL_9;
  }
  result = sub_14020E060(a1, a2, a3, a4, a5, a6);
  if ( (int)result < 0 )
    *a2 = 0;
  if ( (_DWORD)result == -2 )
  {
    *errno() = 34;
LABEL_9:
    sub_14024CF6C(v8);
    return 0xFFFFFFFFLL;
  }
  return result;
}

