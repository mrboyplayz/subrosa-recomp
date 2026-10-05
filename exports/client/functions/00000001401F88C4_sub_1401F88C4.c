/* Address: 0x1401f88c4 | Name: sub_1401F88C4 | Size: 113 bytes */
__int64 __fastcall sub_1401F88C4(__int64 a1)
{
  __int64 v2; // rsi
  int i; // edi
  __int64 result; // rax
  unsigned __int64 ImageBase; // [rsp+60h] [rbp+8h] BYREF
  unsigned __int64 v6; // [rsp+68h] [rbp+10h] BYREF
  __int64 v7; // [rsp+70h] [rbp+18h] BYREF

  ((void (*)(void))RtlCaptureContext)();
  v2 = *(_QWORD *)(a1 + 248);
  for ( i = 0; i < 2; ++i )
  {
    result = ((__int64 (__fastcall *)(__int64, unsigned __int64 *, _QWORD))RtlLookupFunctionEntry)(v2, &ImageBase, 0);
    if ( !result )
      break;
    result = ((__int64 (__fastcall *)(_QWORD, unsigned __int64, __int64, __int64, __int64, __int64 *, unsigned __int64 *, _QWORD))RtlVirtualUnwind)(
               0,
               ImageBase,
               v2,
               result,
               a1,
               &v7,
               &v6,
               0);
  }
  return result;
}

