/* Address: 0x14020b0a4 | Name: sub_14020B0A4 | Size: 160 bytes */
void __stdcall __noreturn sub_14020B0A4(void *pExceptionObject, _ThrowInfo *pThrowInfo)
{
  _ThrowInfo *v2; // rbx
  __int64 v4; // rdi
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 BaseOfImage; // [rsp+20h] [rbp-38h] BYREF
  _QWORD Arguments[6]; // [rsp+28h] [rbp-30h] BYREF

  v2 = pThrowInfo;
  v4 = 429065504;
  if ( pThrowInfo && (*(_BYTE *)pThrowInfo & 0x10) != 0 )
  {
    v5 = *(_QWORD *)pExceptionObject - 8LL;
    v2 = *(_ThrowInfo **)(*(_QWORD *)v5 + 48LL);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 64LL))(v5);
  }
  v6 = ((__int64 (__fastcall *)(_ThrowInfo *, __int64 *))RtlPcToFileHeader)(v2, &BaseOfImage);
  BaseOfImage = v6;
  if ( v2 && ((*(_BYTE *)v2 & 8) != 0 || !v6) )
    v4 = 26820608;
  Arguments[0] = v4;
  Arguments[1] = pExceptionObject;
  Arguments[2] = v2;
  Arguments[3] = v6;
  ((void (__fastcall *)(__int64, __int64, __int64, _QWORD *, __int64))RaiseException)(
    3765269347LL,
    1,
    4,
    Arguments,
    BaseOfImage);
}

