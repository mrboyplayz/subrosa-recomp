/* Address: 0x140214114 | Name: ??R_lambda_7e489fec146d5348dbc86d3cce37c1b5_@@QEBAHXZ | Size: 305 bytes */
__int64 __fastcall _lambda_7e489fec146d5348dbc86d3cce37c1b5_::operator()(__int64 **a1)
{
  __int64 v2; // rdi
  char v3; // si
  __int64 v4; // r10
  __int64 v5; // r9
  __int64 v6; // r8
  __int64 v7; // rcx
  __int64 v9; // [rsp+0h] [rbp-100h] BYREF
  __int64 v10; // [rsp+20h] [rbp-E0h] BYREF
  _BYTE v11[24]; // [rsp+28h] [rbp-D8h] BYREF
  _QWORD v12[7]; // [rsp+40h] [rbp-C0h] BYREF
  int v13; // [rsp+78h] [rbp-88h]
  char v14; // [rsp+80h] [rbp-80h]
  __int16 v15; // [rsp+82h] [rbp-7Eh]
  int v16; // [rsp+90h] [rbp-70h]
  char v17; // [rsp+94h] [rbp-6Ch]
  __int64 v18; // [rsp+498h] [rbp+398h]
  void *Block; // [rsp+4A0h] [rbp+3A0h]
  __int64 v20; // [rsp+4A8h] [rbp+3A8h]
  int v21; // [rsp+4B0h] [rbp+3B0h]
  __int64 v22; // [rsp+4C0h] [rbp+3C0h]

  v2 = **a1;
  v3 = sub_140253DEC(v2);
  sub_140213644((_LocaleUpdate *)&v10, (struct __crt_locale_pointers *const)*a1[1]);
  v4 = *a1[4];
  v5 = *a1[3];
  v6 = *a1[2];
  v20 = **a1;
  v12[2] = 0;
  v12[5] = 0;
  v12[6] = 0;
  v13 = 0;
  v14 = 0;
  v15 = 0;
  v16 = 0;
  v17 = 0;
  v18 = 0;
  Block = nullptr;
  v12[0] = v6;
  v12[1] = v11;
  v12[3] = v5;
  v12[4] = v4;
  v21 = 0;
  sub_140216878(v12);
  free_base(Block);
  Block = nullptr;
  if ( v11[16] )
  {
    v7 = v10;
    *(_DWORD *)(v10 + 936) &= ~2u;
  }
  LOBYTE(v7) = v3;
  sub_140253EBC(v7, v2);
  return MEMORY[0x1401F8B20]((unsigned __int64)&v9 ^ v22);
}

