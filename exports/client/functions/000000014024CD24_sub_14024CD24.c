/* Address: 0x14024cd24 | Name: sub_14024CD24 | Size: 347 bytes */
__int64 __fastcall sub_14024CD24(__int64 a1, int a2, int a3)
{
  unsigned int v5; // ebx
  __int64 v6; // r14
  __int64 v7; // rax
  BOOL v8; // edi
  __int64 v10; // [rsp+0h] [rbp-100h] BYREF
  unsigned __int64 ImageBase; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD ExceptionInfo[2]; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int64 v13; // [rsp+58h] [rbp-A8h] BYREF
  __int128 v14; // [rsp+60h] [rbp-A0h] BYREF
  _DWORD v15[4]; // [rsp+70h] [rbp-90h] BYREF
  void *v16; // [rsp+80h] [rbp-80h]
  _QWORD ContextRecord[156]; // [rsp+110h] [rbp+10h] BYREF
  void *retaddr; // [rsp+608h] [rbp+508h]
  __int64 v19; // [rsp+610h] [rbp+510h] BYREF

  v5 = a1;
  if ( (_DWORD)a1 != -1 )
    sub_1401FBFB0(a1);
  MEMORY[0x1401FCD30](v15, 0, 0x98u);
  MEMORY[0x1401FCD30](ContextRecord, 0, 0x4D0u);
  ExceptionInfo[0] = v15;
  ExceptionInfo[1] = ContextRecord;
  ((void (__fastcall *)(_QWORD *))RtlCaptureContext)(ContextRecord);
  v6 = ContextRecord[31];
  v7 = ((__int64 (__fastcall *)(_QWORD, unsigned __int64 *, _QWORD))RtlLookupFunctionEntry)(
         ContextRecord[31],
         &ImageBase,
         0);
  if ( v7 )
    ((void (__fastcall *)(_QWORD, unsigned __int64, __int64, __int64, _QWORD *, __int128 *, unsigned __int64 *, _QWORD))RtlVirtualUnwind)(
      0,
      ImageBase,
      v6,
      v7,
      ContextRecord,
      &v14,
      &v13,
      0);
  ContextRecord[31] = retaddr;
  v15[0] = a2;
  ContextRecord[19] = &v19;
  v16 = retaddr;
  v15[1] = a3;
  v8 = IsDebuggerPresent();
  ((void (__fastcall *)(_QWORD))SetUnhandledExceptionFilter)(0);
  if ( !(unsigned int)((__int64 (__fastcall *)(_QWORD *))UnhandledExceptionFilter)(ExceptionInfo) && !v8 && v5 != -1 )
    sub_1401FBFB0(v5);
  return MEMORY[0x1401F8B20]((unsigned __int64)&v10 ^ ContextRecord[154]);
}

