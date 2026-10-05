/* Address: 0x1400517b0 | Name: sub_1400517B0 | Size: 190 bytes */
__int64 __fastcall sub_1400517B0(_DWORD *a1, int *a2)
{
  unsigned __int64 v4; // rcx
  struct _FILETIME SystemTimeAsFileTime; // [rsp+30h] [rbp+8h] BYREF

  if ( a1 )
  {
    GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
    v4 = (*(_QWORD *)&SystemTimeAsFileTime - 11644473600000000LL) / 0xAuLL;
    *a1 = v4 / 0xF4240;
    a1[1] = v4 % 0xF4240;
  }
  if ( a2 )
  {
    if ( !dword_1402495F4 )
    {
      _tzset();
      ++dword_1402495F4;
    }
    *a2 = *__timezone() / 60;
    a2[1] = *__daylight();
  }
  return 0;
}

