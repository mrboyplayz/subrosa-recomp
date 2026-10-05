/* Address: 0x1400e5390 | Name: sub_1400E5390 | Size: 279 bytes */
void __fastcall sub_1400E5390(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r8
  __int64 v4; // r8
  __int64 v5; // r8
  float v6[2]; // [rsp+20h] [rbp-19h] BYREF
  int v7; // [rsp+28h] [rbp-11h]
  __int128 v8; // [rsp+30h] [rbp-9h] BYREF
  __int128 v9; // [rsp+40h] [rbp+7h]
  int v10; // [rsp+50h] [rbp+17h]
  __int128 v11; // [rsp+58h] [rbp+1Fh] BYREF
  __int128 v12; // [rsp+68h] [rbp+2Fh]
  int v13; // [rsp+78h] [rbp+3Fh]

  v10 = 1065353216;
  v13 = 1065353216;
  v8 = xmmword_1400F78B0;
  dword_1782D6BA0[0] = 0;
  v9 = xmmword_1400F78B0;
  dword_178416BA8 = 0;
  v11 = xmmword_1400F78B0;
  dword_1787FEBB4 = 0;
  v12 = xmmword_1400F78B0;
  v6[0] = 0.24253564;
  v7 = 1064852291;
  v6[1] = 0.0;
  sub_140049C20((__int64)&v8, v6, a3);
  sub_140049C20((__int64)&v11, v6, v3);
  v11 = v8;
  v6[0] = 0.70710677;
  v12 = v9;
  v13 = v10;
  v7 = -1087044365;
  sub_140049C20((__int64)&v8, v6, v4);
  sub_140049C20((__int64)&v11, v6, v5);
}

