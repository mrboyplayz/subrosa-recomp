/* Address: 0x14026bf4c | Name: __acrt_CompareStringA | Size: 137 bytes */
__int64 __fastcall _acrt_CompareStringA(
        struct __crt_locale_pointers *a1,
        __int64 a2,
        unsigned int a3,
        unsigned __int8 *a4,
        int a5,
        char *a6,
        int a7,
        unsigned int a8)
{
  __int64 result; // rax
  __int64 v12; // [rsp+40h] [rbp-28h] BYREF
  _BYTE v13[32]; // [rsp+48h] [rbp-20h] BYREF

  sub_140213644((_LocaleUpdate *)&v12, a1);
  result = InternalCompareStringA((__int64)v13, a2, a3, a4, a5, a6, a7, a8);
  if ( v13[16] )
    *(_DWORD *)(v12 + 936) &= ~2u;
  return result;
}

