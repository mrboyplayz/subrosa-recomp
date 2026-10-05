/* Address: 0x1400f2866 | Name: _seh_filter_dll | Size: 6 bytes */
// attributes: thunk
int __cdecl seh_filter_dll(unsigned int ExceptionNum, struct _EXCEPTION_POINTERS *ExceptionPtr)
{
  return _seh_filter_dll(ExceptionNum, ExceptionPtr);
}

