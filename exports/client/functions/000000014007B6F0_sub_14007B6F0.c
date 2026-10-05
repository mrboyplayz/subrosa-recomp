/* Address: 0x14007b6f0 | Name: sub_14007B6F0 | Size: 187 bytes */
__int64 __fastcall sub_14007B6F0(float a1, float a2, float a3)
{
  __int64 v4; // [rsp+0h] [rbp-78h] BYREF
  float v5; // [rsp+20h] [rbp-58h] BYREF
  __int64 v6; // [rsp+24h] [rbp-54h]
  __int64 v7; // [rsp+2Ch] [rbp-4Ch]
  float v8; // [rsp+34h] [rbp-44h]
  __int64 v9; // [rsp+38h] [rbp-40h]
  __int64 v10; // [rsp+40h] [rbp-38h]
  float v11; // [rsp+48h] [rbp-30h]
  int v12; // [rsp+4Ch] [rbp-2Ch]
  __int128 v13; // [rsp+50h] [rbp-28h]
  __int64 v14; // [rsp+60h] [rbp-18h]

  v13 = xmmword_140279490;
  v5 = a1;
  v8 = a2;
  v11 = a3;
  v6 = 0;
  v7 = 0;
  v9 = 0;
  v10 = 0;
  v12 = 0;
  sub_14007A0E0(&dword_140404A6C[431564517], (__int64)&v5, (__int64)&dword_140404A6C[431564517]);
  sub_14007A0E0(&dword_140404A6C[431564533], (__int64)&dword_140404A6C[431564517], (__int64)&dword_140404A6C[431564501]);
  sub_14007A0E0(&dword_140404A6C[431564565], (__int64)&dword_140404A6C[431564533], (__int64)&dword_140404A6C[431564485]);
  return MEMORY[0x1401F8B20]((unsigned __int64)&v4 ^ v14);
}

