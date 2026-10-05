/* Address: 0x1401fd724 | Name: ??0scoped_get_last_error_reset@?A0x1e1681a6@@QEAA@XZ | Size: 26 bytes */
_anonymous_namespace_::scoped_get_last_error_reset *__fastcall `anonymous namespace'::scoped_get_last_error_reset::scoped_get_last_error_reset(
        _anonymous_namespace_::scoped_get_last_error_reset *this)
{
  *(_DWORD *)this = ((__int64 (*)(void))GetLastError)();
  return this;
}

