/* Address: 0x140259a50 | Name: _isleadbyte_l | Size: 75 bytes */
__int64 __fastcall isleadbyte_l(int a1, struct __crt_locale_pointers *a2)
{
  __int64 v2; // rbx
  __int64 result; // rax
  _QWORD v4[3]; // [rsp+20h] [rbp-28h] BYREF
  char v5; // [rsp+38h] [rbp-10h]

  v2 = a1;
  sub_140213644((_LocaleUpdate *)v4, a2);
  if ( (unsigned int)(v2 + 1) > 0x100 )
    result = 0;
  else
    result = *(_WORD *)(*(_QWORD *)v4[1] + 2 * v2) & 0x8000;
  if ( v5 )
    *(_DWORD *)(v4[0] + 936LL) &= ~2u;
  return result;
}

