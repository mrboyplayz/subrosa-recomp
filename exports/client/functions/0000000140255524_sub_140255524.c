/* Address: 0x140255524 | Name: sub_140255524 | Size: 205 bytes */
__int64 __fastcall sub_140255524(struct __acrt_ptd *const a1)
{
  unsigned int v2; // [rsp+20h] [rbp-30h] BYREF
  unsigned int v3; // [rsp+24h] [rbp-2Ch] BYREF
  struct __acrt_ptd *v4; // [rsp+28h] [rbp-28h] BYREF
  unsigned int *v5; // [rsp+30h] [rbp-20h] BYREF
  struct __acrt_ptd **v6; // [rsp+38h] [rbp-18h] BYREF
  _QWORD v7[2]; // [rsp+40h] [rbp-10h] BYREF
  char v8; // [rsp+68h] [rbp+18h] BYREF
  unsigned int v9; // [rsp+70h] [rbp+20h] BYREF
  unsigned int v10; // [rsp+78h] [rbp+28h] BYREF

  v4 = a1;
  v6 = &v4;
  v9 = 5;
  v10 = 5;
  v7[0] = &v4;
  v7[1] = &v5;
  v2 = 4;
  v3 = 4;
  v5 = &dword_140404A6C[19065667];
  *((_DWORD *)a1 + 10) = 1;
  *(_QWORD *)v4 = &unk_140289E60;
  *((_DWORD *)v4 + 234) = 1;
  *((_QWORD *)v4 + 17) = &unk_1403025A0;
  *((_WORD *)v4 + 94) = 67;
  *((_WORD *)v4 + 225) = 67;
  *((_QWORD *)v4 + 116) = 0;
  sub_140255128((__int64)&v8, &v10, (__int64)&v6, &v9);
  return sub_1402551A8((__int64)&v8, &v3, (__int64)v7, &v2);
}

