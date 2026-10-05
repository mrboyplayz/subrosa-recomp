/* Address: 0x1400f23a8 | Name: __scrt_get_show_window_mode | Size: 58 bytes */
WORD _scrt_get_show_window_mode()
{
  WORD result; // ax
  struct _STARTUPINFOW StartupInfo; // [rsp+20h] [rbp-78h] BYREF

  memset(&StartupInfo, 0, sizeof(StartupInfo));
  GetStartupInfoW(&StartupInfo);
  result = 10;
  if ( (StartupInfo.dwFlags & 1) != 0 )
    return StartupInfo.wShowWindow;
  return result;
}

