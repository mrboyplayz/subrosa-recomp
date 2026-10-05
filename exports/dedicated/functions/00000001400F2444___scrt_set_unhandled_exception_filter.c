/* Address: 0x1400f2444 | Name: __scrt_set_unhandled_exception_filter | Size: 14 bytes */
LPTOP_LEVEL_EXCEPTION_FILTER _scrt_set_unhandled_exception_filter()
{
  return SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)_scrt_unhandled_exception_filter);
}

