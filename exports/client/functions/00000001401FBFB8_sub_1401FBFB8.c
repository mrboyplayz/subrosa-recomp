/* Address: 0x1401fbfb8 | Name: sub_1401FBFB8 | Size: 330 bytes */
__int64 __fastcall sub_1401FBFB8(unsigned int a1)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  bool v4; // bl
  __int64 result; // rax
  _QWORD ExceptionInfo[2]; // [rsp+40h] [rbp-C0h] BYREF
  _DWORD v7[4]; // [rsp+50h] [rbp-B0h] BYREF
  void *v8; // [rsp+60h] [rbp-A0h]
  _QWORD ContextRecord[154]; // [rsp+F0h] [rbp-10h] BYREF
  void *retaddr; // [rsp+5C8h] [rbp+4C8h]
  __int64 v11; // [rsp+5D0h] [rbp+4D0h] BYREF
  unsigned __int64 ImageBase; // [rsp+5D8h] [rbp+4D8h] BYREF
  unsigned __int64 v13; // [rsp+5E0h] [rbp+4E0h] BYREF
  __int64 v14; // [rsp+5E8h] [rbp+4E8h] BYREF

  if ( (unsigned int)MEMORY[0x1401FC5EA](23) )
    __fastfail(a1);
  sub_1401FBFB0(3);
  MEMORY[0x1401FCD30](ContextRecord, 0, 1232);
  ((void (__fastcall *)(_QWORD *))RtlCaptureContext)(ContextRecord);
  v2 = ContextRecord[31];
  v3 = ((__int64 (__fastcall *)(_QWORD, unsigned __int64 *, _QWORD))RtlLookupFunctionEntry)(
         ContextRecord[31],
         &ImageBase,
         0);
  if ( v3 )
    ((void (__fastcall *)(_QWORD, unsigned __int64, __int64, __int64, _QWORD *, __int64 *, unsigned __int64 *, _QWORD))RtlVirtualUnwind)(
      0,
      ImageBase,
      v2,
      v3,
      ContextRecord,
      &v14,
      &v13,
      0);
  ContextRecord[31] = retaddr;
  ContextRecord[19] = &v11;
  MEMORY[0x1401FCD30](v7, 0, 152);
  v8 = retaddr;
  v7[0] = 1073741845;
  v7[1] = 1;
  ExceptionInfo[0] = v7;
  v4 = IsDebuggerPresent();
  ExceptionInfo[1] = ContextRecord;
  ((void (__fastcall *)(_QWORD))SetUnhandledExceptionFilter)(0);
  result = ((__int64 (__fastcall *)(_QWORD *))UnhandledExceptionFilter)(ExceptionInfo);
  if ( !(_DWORD)result && !v4 )
    return sub_1401FBFB0(3);
  return result;
}

