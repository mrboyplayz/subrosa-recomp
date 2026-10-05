/* Address: 0x140206580 | Name: sub_140206580 | Size: 90 bytes */
__int64 __fastcall sub_140206580(__int64 a1)
{
  __int64 result; // rax

  result = ((__int64 (__fastcall *)(__int64, _QWORD, __int64))LoadLibraryExW)(a1, 0, 2048);
  if ( !result )
  {
    if ( (unsigned int)((__int64 (*)(void))GetLastError)() != 87 || !(unsigned int)wcsncmp(a1, L"api-ms-", 7) )
      return 0;
    else
      return ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD))LoadLibraryExW)(a1, 0, 0);
  }
  return result;
}

