/* Address: 0x140171c80 | Name: sub_140171C80 | Size: 136 bytes */
__int64 __fastcall sub_140171C80(__int64 a1, __int64 a2, int a3, int a4, int a5, __int64 a6)
{
  __int64 v7; // [rsp+0h] [rbp-A8h] BYREF
  _QWORD v8[2]; // [rsp+30h] [rbp-78h] BYREF
  __int128 v9; // [rsp+40h] [rbp-68h]
  __int128 v10; // [rsp+50h] [rbp-58h]
  __int128 v11; // [rsp+60h] [rbp-48h]
  __int128 v12; // [rsp+70h] [rbp-38h]
  __int64 v13; // [rsp+80h] [rbp-28h]
  __int64 v14; // [rsp+90h] [rbp-18h]

  v8[0] = a1;
  v8[1] = a2;
  v13 = 0;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  v12 = 0;
  sub_140171BB0((int)v8, a3, a4, a5, a6);
  return MEMORY[0x1401F8B20]((unsigned __int64)&v7 ^ v14);
}

