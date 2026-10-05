/* Address: 0x14025535c | Name: ??0__crt_scoped_get_last_error_reset@@QEAA@XZ | Size: 26 bytes */
__crt_scoped_get_last_error_reset *__fastcall __crt_scoped_get_last_error_reset::__crt_scoped_get_last_error_reset(
        __crt_scoped_get_last_error_reset *this)
{
  *(_DWORD *)this = ((__int64 (*)(void))GetLastError)();
  return this;
}

