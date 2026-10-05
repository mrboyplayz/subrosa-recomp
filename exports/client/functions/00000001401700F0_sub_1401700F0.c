/* Address: 0x1401700f0 | Name: sub_1401700F0 | Size: 135 bytes */
__int64 __fastcall sub_1401700F0(__int64 a1, int a2, char *a3, char *a4, int *a5)
{
  __int64 v6; // [rsp+0h] [rbp-118h] BYREF
  _BYTE v7[16]; // [rsp+20h] [rbp-F8h] BYREF
  __int64 v8; // [rsp+30h] [rbp-E8h]
  int v9; // [rsp+50h] [rbp-C8h]
  int v10; // [rsp+D8h] [rbp-40h]
  __int64 v11; // [rsp+E0h] [rbp-38h]
  __int64 v12; // [rsp+E8h] [rbp-30h]
  __int64 v13; // [rsp+F0h] [rbp-28h]
  __int64 v14; // [rsp+F8h] [rbp-20h]
  __int64 v15; // [rsp+100h] [rbp-18h]

  v13 = a1;
  v11 = a1;
  v8 = 0;
  v9 = 0;
  v10 = 0;
  v14 = a2 + a1;
  v12 = v14;
  sub_140163E70((__int64)v7, a3, a4, a5);
  return MEMORY[0x1401F8B20]((unsigned __int64)&v6 ^ v15);
}

