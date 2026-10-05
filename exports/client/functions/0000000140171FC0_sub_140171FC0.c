/* Address: 0x140171fc0 | Name: sub_140171FC0 | Size: 191 bytes */
__int64 __fastcall sub_140171FC0(__int64 a1, unsigned int a2, unsigned int a3, unsigned int a4, __int64 a5, int a6)
{
  int v9; // eax
  __int64 v10; // rcx
  unsigned int v11; // ebx
  __int64 v13; // [rsp+30h] [rbp-78h] BYREF
  __int64 (__fastcall *v14)(); // [rsp+40h] [rbp-68h] BYREF
  __int64 v15; // [rsp+48h] [rbp-60h]
  __int128 v16; // [rsp+50h] [rbp-58h]
  __int128 v17; // [rsp+60h] [rbp-48h]
  __int128 v18; // [rsp+70h] [rbp-38h]
  __int128 v19; // [rsp+80h] [rbp-28h]
  __int64 v20; // [rsp+90h] [rbp-18h]

  v16 = 0;
  v17 = 0;
  v18 = 0;
  v20 = 0;
  v19 = 0;
  v9 = sub_14020B8E4(&v13, a1, "wb");
  v10 = v13;
  v14 = sub_14016E2F0;
  if ( v9 )
    v10 = 0;
  v15 = v10;
  if ( !v10 )
    return 0;
  v11 = sub_140172080(&v14, a2, a3, a4, a5, a6);
  sub_14020B9E8(v15);
  return v11;
}

