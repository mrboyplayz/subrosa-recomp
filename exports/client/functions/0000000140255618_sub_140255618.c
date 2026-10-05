/* Address: 0x140255618 | Name: sub_140255618 | Size: 245 bytes */
__int64 __fastcall sub_140255618(void **a1)
{
  struct __acrt_ptd *const *v2[2]; // [rsp+20h] [rbp-10h] BYREF
  void **v3; // [rsp+40h] [rbp+10h] BYREF
  char v4; // [rsp+48h] [rbp+18h] BYREF
  unsigned int v5; // [rsp+50h] [rbp+20h] BYREF
  unsigned int v6; // [rsp+58h] [rbp+28h] BYREF

  v3 = a1;
  if ( *a1 != &unk_140289E60 )
  {
    free_base(*a1);
    a1 = v3;
  }
  free_base(a1[14]);
  free_base(v3[11]);
  free_base(v3[12]);
  free_base(v3[13]);
  free_base(v3[9]);
  free_base(v3[10]);
  free_base(v3[15]);
  free_base(v3[16]);
  free_base(v3[120]);
  v2[0] = (struct __acrt_ptd *const *)&v3;
  v5 = 5;
  v6 = 5;
  sub_1402551F0((__int64)&v4, &v6, (__int64)v2, &v5);
  v2[0] = (struct __acrt_ptd *const *)&v3;
  v5 = 4;
  v6 = 4;
  return sub_140255168((__int64)&v4, &v6, v2, &v5);
}

