/* Address: 0x14026b754 | Name: ??$console_output_reopen_and_retry@V_lambda_61c1b8a38cedca4df5fdc542e6ccae6d_@@@@YAHAEBV_lambda_61c1b8a38cedca4df5fdc542e6ccae6d_@@@Z | Size: 170 bytes */
__int64 __fastcall console_output_reopen_and_retry<_lambda_61c1b8a38cedca4df5fdc542e6ccae6d_>(__int64 *a1)
{
  unsigned int v2; // edi
  __int64 v3; // rax
  __int64 v4; // r9
  __int64 v5; // r8
  __int64 v6; // rdx

  v2 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, __int64, _QWORD))WriteConsoleW)(
         hObject,
         *a1,
         *((unsigned int *)a1 + 2),
         a1[2],
         0);
  if ( !v2 && (unsigned int)((__int64 (*)(void))GetLastError)() == 6 )
  {
    if ( hObject <= 0xFFFFFFFFFFFFFFFDuLL )
      ((void (*)(void))CloseHandle)();
    v3 = ((__int64 (__fastcall *)(const __int16 *, __int64, __int64, _QWORD, int, _DWORD, _QWORD))CreateFileW)(
           L"CONOUT$",
           0x40000000,
           3,
           0,
           3,
           0,
           0);
    v4 = a1[2];
    v5 = *((unsigned int *)a1 + 2);
    v6 = *a1;
    hObject = v3;
    return (unsigned int)((__int64 (__fastcall *)(__int64, __int64, __int64, __int64, _QWORD))WriteConsoleW)(
                           v3,
                           v6,
                           v5,
                           v4,
                           0);
  }
  return v2;
}

