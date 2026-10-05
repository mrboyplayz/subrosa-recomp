/* Address: 0x1401fc104 | Name: sub_1401FC104 | Size: 58 bytes */
__int16 sub_1401FC104()
{
  __int16 result; // ax
  _WORD StartupInfo[60]; // [rsp+20h] [rbp-78h] BYREF

  MEMORY[0x1401FCD30](StartupInfo, 0, 104);
  ((void (__fastcall *)(_WORD *))GetStartupInfoW)(StartupInfo);
  result = 10;
  if ( (StartupInfo[30] & 1) != 0 )
    return StartupInfo[32];
  return result;
}

