/* Address: 0x14024ccac | Name: capture_current_context_0 | Size: 109 bytes */
__int64 __fastcall capture_current_context_0(__m128i *ContextRecord)
{
  __int64 v2; // rdi
  __int64 result; // rax
  unsigned __int64 ImageBase; // [rsp+50h] [rbp+8h] BYREF
  unsigned __int64 v5; // [rsp+58h] [rbp+10h] BYREF
  __int64 v6; // [rsp+60h] [rbp+18h] BYREF

  ((void (*)(void))RtlCaptureContext)();
  v2 = ContextRecord[15].m128i_i64[1];
  result = ((__int64 (__fastcall *)(__int64, unsigned __int64 *, _QWORD))RtlLookupFunctionEntry)(v2, &ImageBase, 0);
  if ( result )
    return ((__int64 (__fastcall *)(_QWORD, unsigned __int64, __int64, __int64, __m128i *, __int64 *, unsigned __int64 *, _QWORD))RtlVirtualUnwind)(
             0,
             ImageBase,
             v2,
             result,
             ContextRecord,
             &v6,
             &v5,
             0);
  return result;
}

