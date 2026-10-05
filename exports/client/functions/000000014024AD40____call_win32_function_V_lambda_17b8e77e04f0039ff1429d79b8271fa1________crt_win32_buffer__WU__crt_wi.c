/* Address: 0x14024ad40 | Name: ??$call_win32_function@V_lambda_17b8e77e04f0039ff1429d79b8271fa1_@@@?$__crt_win32_buffer@_WU__crt_win32_buffer_no_resizing@@@@QEAAHAEBV_lambda_17b8e77e04f0039ff1429d79b8271fa1_@@@Z | Size: 113 bytes */
__int64 __fastcall __crt_win32_buffer<wchar_t,__crt_win32_buffer_no_resizing>::call_win32_function<_lambda_17b8e77e04f0039ff1429d79b8271fa1_>(
        __int64 a1,
        _QWORD *a2)
{
  unsigned int v3; // eax
  unsigned int v4; // eax

  v3 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))GetFullPathNameW)(
         *a2,
         *(unsigned int *)(a1 + 24),
         *(_QWORD *)(a1 + 16),
         0);
  if ( v3 )
  {
    if ( (unsigned __int64)v3 > *(_QWORD *)(a1 + 24) )
    {
      if ( *(_BYTE *)(a1 + 40) )
        *(_BYTE *)(a1 + 40) = 0;
      *errno() = 34;
      *(_BYTE *)(a1 + 40) = 0;
      *(_QWORD *)(a1 + 24) = 0;
      return 34;
    }
    else
    {
      *(_QWORD *)(a1 + 32) = v3;
      return 0;
    }
  }
  else
  {
    v4 = ((__int64 (*)(void))GetLastError)();
    sub_14024D14C(v4);
    return (unsigned int)*errno();
  }
}

