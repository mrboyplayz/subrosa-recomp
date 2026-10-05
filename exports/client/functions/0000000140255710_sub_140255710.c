/* Address: 0x140255710 | Name: sub_140255710 | Size: 245 bytes */
__int64 __fastcall sub_140255710(void **a1)
{
  unsigned int v2; // [rsp+20h] [rbp-20h] BYREF
  unsigned int v3; // [rsp+24h] [rbp-1Ch] BYREF
  void **v4; // [rsp+28h] [rbp-18h] BYREF
  void ***v5; // [rsp+30h] [rbp-10h] BYREF
  void ***v6; // [rsp+38h] [rbp-8h] BYREF
  char v7; // [rsp+58h] [rbp+18h] BYREF
  unsigned int v8; // [rsp+60h] [rbp+20h] BYREF
  unsigned int v9; // [rsp+68h] [rbp+28h] BYREF

  v4 = a1;
  v5 = &v4;
  v8 = 5;
  v9 = 5;
  v6 = &v4;
  v2 = 4;
  v3 = 4;
  if ( *a1 != &unk_140289E60 )
  {
    free_base(*a1);
    a1 = v4;
  }
  free_base(a1[14]);
  free_base(v4[11]);
  free_base(v4[12]);
  free_base(v4[13]);
  free_base(v4[9]);
  free_base(v4[10]);
  free_base(v4[15]);
  free_base(v4[16]);
  free_base(v4[120]);
  sub_1402551F0((__int64)&v7, &v9, (__int64)&v5, &v8);
  return sub_140255168((__int64)&v7, &v3, (struct __acrt_ptd *const **)&v6, &v2);
}

