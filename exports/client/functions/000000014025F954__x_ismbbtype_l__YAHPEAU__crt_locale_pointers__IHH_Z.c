/* Address: 0x14025f954 | Name: ?x_ismbbtype_l@@YAHPEAU__crt_locale_pointers@@IHH@Z | Size: 117 bytes */
__int64 __fastcall x_ismbbtype_l(struct __crt_locale_pointers *a1, unsigned __int8 a2, int a3, unsigned __int8 a4)
{
  __int64 result; // rax
  _QWORD v8[3]; // [rsp+20h] [rbp-28h] BYREF
  char v9; // [rsp+38h] [rbp-10h]

  sub_140213644((_LocaleUpdate *)v8, a1);
  if ( (a4 & *(_BYTE *)(a2 + v8[2] + 25LL)) != 0
    || (!a3 ? (result = 0) : (result = (unsigned __int16)(a3 & *(_WORD *)(*(_QWORD *)v8[1] + 2LL * a2))), (_DWORD)result) )
  {
    result = 1;
  }
  if ( v9 )
    *(_DWORD *)(v8[0] + 936LL) &= ~2u;
  return result;
}

