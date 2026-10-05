/* Address: 0x1401f858c | Name: sub_1401F858C | Size: 52 bytes */
__int64 __fastcall sub_1401F858C(struct _EXCEPTION_POINTERS *ExceptionInfo)
{
  __int64 v2; // rax

  ((void (__fastcall *)(_QWORD))SetUnhandledExceptionFilter)(0);
  ((void (__fastcall *)(struct _EXCEPTION_POINTERS *))UnhandledExceptionFilter)(ExceptionInfo);
  v2 = ((__int64 (*)(void))GetCurrentProcess)();
  return ((__int64 (__fastcall *)(__int64, __int64))TerminateProcess)(v2, 3221226505LL);
}

