/* Address: 0x140171470 | Name: sub_140171470 | Size: 151 bytes */
__int64 __fastcall sub_140171470(__int64 a1, int a2, _DWORD *a3, _DWORD *a4, unsigned int *a5, unsigned int a6)
{
  __int64 v7; // [rsp+0h] [rbp-128h] BYREF
  char v8; // [rsp+30h] [rbp-F8h] BYREF
  __int64 v9; // [rsp+40h] [rbp-E8h]
  int v10; // [rsp+60h] [rbp-C8h]
  int v11; // [rsp+E8h] [rbp-40h]
  __int64 v12; // [rsp+F0h] [rbp-38h]
  __int64 v13; // [rsp+F8h] [rbp-30h]
  __int64 v14; // [rsp+100h] [rbp-28h]
  __int64 v15; // [rsp+108h] [rbp-20h]
  __int64 v16; // [rsp+110h] [rbp-18h]

  v14 = a1;
  v12 = a1;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  v15 = a2 + a1;
  v13 = v15;
  sub_140166160((int)&v8, a3, a4, a5, a6);
  return MEMORY[0x1401F8B20]((unsigned __int64)&v7 ^ v16);
}

