/* Address: 0x14025a004 | Name: sub_14025A004 | Size: 150 bytes */
__int64 __fastcall sub_14025A004(
        struct __crt_locale_pointers *a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        int a5,
        __int64 a6,
        int a7,
        unsigned int a8,
        int a9)
{
  __int64 result; // rax
  __int64 v13; // [rsp+50h] [rbp-28h] BYREF
  _BYTE v14[24]; // [rsp+58h] [rbp-20h] BYREF

  sub_140213644((_LocaleUpdate *)&v13, a1);
  result = sub_140259CC8((__int64)v14, a2, a3, a4, a5, a6, a7, a8, a9);
  if ( v14[16] )
    *(_DWORD *)(v13 + 936) &= ~2u;
  return result;
}

