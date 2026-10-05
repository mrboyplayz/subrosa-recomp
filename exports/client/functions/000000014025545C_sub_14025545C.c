/* Address: 0x14025545c | Name: sub_14025545C | Size: 197 bytes */
__int64 __fastcall sub_14025545C(struct __acrt_ptd *const a1, struct __crt_locale_data **const a2)
{
  unsigned int v3; // [rsp+20h] [rbp-20h] BYREF
  _QWORD v4[3]; // [rsp+28h] [rbp-18h] BYREF
  struct __acrt_ptd *v5; // [rsp+50h] [rbp+10h] BYREF
  struct __crt_locale_data **v6; // [rsp+58h] [rbp+18h] BYREF
  char v7; // [rsp+60h] [rbp+20h] BYREF
  unsigned int v8; // [rsp+68h] [rbp+28h] BYREF

  v6 = a2;
  v5 = a1;
  *((_DWORD *)a1 + 10) = 1;
  *(_QWORD *)v5 = &unk_140289E60;
  *((_DWORD *)v5 + 234) = 1;
  *((_QWORD *)v5 + 17) = &unk_1403025A0;
  *((_WORD *)v5 + 94) = 67;
  *((_WORD *)v5 + 225) = 67;
  *((_QWORD *)v5 + 116) = 0;
  v4[0] = &v5;
  v8 = 5;
  v3 = 5;
  sub_140255128((__int64)&v7, &v3, (__int64)v4, &v8);
  v4[0] = &v5;
  v4[1] = &v6;
  v8 = 4;
  v3 = 4;
  return sub_1402551A8((__int64)&v7, &v3, (__int64)v4, &v8);
}

