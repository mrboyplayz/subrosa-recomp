/* Address: 0x1400f27f4 | Name: _seh_filter_exe | Size: 6 bytes */
// attributes: thunk
int __cdecl seh_filter_exe(unsigned int ExceptionNum, struct _EXCEPTION_POINTERS *ExceptionPtr)
{
  return _seh_filter_exe(ExceptionNum, ExceptionPtr);
}

