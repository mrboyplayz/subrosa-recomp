/* Address: 0x14024ebe8 | Name: sub_14024EBE8 | Size: 115 bytes */
__int64 __fastcall sub_14024EBE8(__int64 a1)
{
  __int64 result; // rax

  result = ((__int64 (__fastcall *)(__int64, _QWORD, __int64))LoadLibraryExW)(a1, 0, 2048);
  if ( !result )
  {
    if ( (unsigned int)((__int64 (*)(void))GetLastError)() != 87
      || !(unsigned int)wcsncmp(a1, L"api-ms-", 7)
      || !(unsigned int)wcsncmp(a1, L"ext-ms-", 7) )
    {
      return 0;
    }
    else
    {
      return ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD))LoadLibraryExW)(a1, 0, 0);
    }
  }
  return result;
}

