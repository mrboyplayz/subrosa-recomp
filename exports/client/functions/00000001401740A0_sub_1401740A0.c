/* Address: 0x1401740a0 | Name: sub_1401740A0 | Size: 201 bytes */
__int64 __fastcall sub_1401740A0(__int64 a1, int a2, int a3, int a4, __int64 a5)
{
  int v8; // eax
  FILE *v9; // rcx
  __int64 v11; // [rsp+0h] [rbp-D8h] BYREF
  FILE *Stream; // [rsp+30h] [rbp-A8h] BYREF
  __int64 (__fastcall *v13)(); // [rsp+40h] [rbp-98h] BYREF
  FILE *v14; // [rsp+48h] [rbp-90h]
  __int128 v15; // [rsp+50h] [rbp-88h]
  __int128 v16; // [rsp+60h] [rbp-78h]
  __int128 v17; // [rsp+70h] [rbp-68h]
  __int128 v18; // [rsp+80h] [rbp-58h]
  __int64 v19; // [rsp+90h] [rbp-48h]
  __int64 v20; // [rsp+A0h] [rbp-38h]

  v15 = 0;
  v16 = 0;
  v17 = 0;
  v19 = 0;
  v18 = 0;
  v8 = sub_14020B8E4(&Stream, a1, "wb");
  v9 = Stream;
  v13 = sub_14016E2F0;
  if ( v8 )
    v9 = nullptr;
  v14 = v9;
  if ( v9 )
  {
    sub_140174170((unsigned int)&v13, a2, a3, a4, a5);
    sub_14020B9E8(v14);
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&v11 ^ v20);
}

