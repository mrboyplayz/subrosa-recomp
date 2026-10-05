/* Address: 0x1400f2686 | Name: UnhandledExceptionFilter | Size: 6 bytes */
// attributes: thunk
LONG __stdcall UnhandledExceptionFilter(struct _EXCEPTION_POINTERS *ExceptionInfo)
{
  return __imp_UnhandledExceptionFilter(ExceptionInfo);
}

