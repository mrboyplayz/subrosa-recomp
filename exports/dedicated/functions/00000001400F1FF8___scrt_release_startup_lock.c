/* Address: 0x1400f1ff8 | Name: __scrt_release_startup_lock | Size: 36 bytes */
__int64 __fastcall _scrt_release_startup_lock(char a1)
{
  __int64 result; // rax

  result = _scrt_is_ucrt_dll_in_use();
  if ( (_DWORD)result )
  {
    if ( !a1 )
      _InterlockedExchange64(&qword_140585AD0, 0);
  }
  return result;
}

