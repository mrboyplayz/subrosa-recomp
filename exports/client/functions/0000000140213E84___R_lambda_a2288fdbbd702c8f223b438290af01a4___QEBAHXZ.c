/* Address: 0x140213e84 | Name: ??R_lambda_a2288fdbbd702c8f223b438290af01a4_@@QEBAHXZ | Size: 330 bytes */
__int64 __fastcall _lambda_a2288fdbbd702c8f223b438290af01a4_::operator()(__int64 **a1)
{
  __int64 v2; // rdi
  char v3; // si
  __int64 v4; // r9
  __int64 v5; // rcx
  __int64 v6; // r10
  __int64 v7; // r8
  __int64 v8; // rcx
  __int64 v10; // [rsp+0h] [rbp-100h] BYREF
  __int64 v11; // [rsp+20h] [rbp-E0h] BYREF
  _BYTE v12[24]; // [rsp+28h] [rbp-D8h] BYREF
  _QWORD v13[7]; // [rsp+40h] [rbp-C0h] BYREF
  int v14; // [rsp+78h] [rbp-88h]
  __int16 v15; // [rsp+80h] [rbp-80h]
  int v16; // [rsp+90h] [rbp-70h]
  char v17; // [rsp+94h] [rbp-6Ch]
  __int64 v18; // [rsp+498h] [rbp+398h]
  void *Block; // [rsp+4A0h] [rbp+3A0h]
  __int64 v20; // [rsp+4A8h] [rbp+3A8h]
  int v21; // [rsp+4B0h] [rbp+3B0h]
  __int64 v22; // [rsp+4B8h] [rbp+3B8h]
  __int64 v23; // [rsp+4C0h] [rbp+3C0h]
  int v24; // [rsp+E28h] [rbp+D28h]
  int v25; // [rsp+E2Ch] [rbp+D2Ch]
  __int64 v26; // [rsp+E30h] [rbp+D30h]

  v2 = **a1;
  v3 = sub_140253DEC(v2);
  sub_140213644((_LocaleUpdate *)&v11, (struct __crt_locale_pointers *const)*a1[1]);
  v4 = *a1[4];
  v5 = **a1;
  v6 = *a1[3];
  v7 = *a1[2];
  v13[1] = v12;
  v20 = v5;
  v24 = -1;
  v25 = -1;
  v13[2] = 0;
  v13[5] = 0;
  v13[6] = 0;
  v14 = 0;
  v15 = 0;
  v16 = 0;
  v17 = 0;
  v18 = 0;
  Block = nullptr;
  v13[0] = v7;
  v13[3] = v6;
  v13[4] = v4;
  v21 = 0;
  v22 = 0;
  v23 = v6;
  sub_140215CFC(v13);
  free_base(Block);
  Block = nullptr;
  if ( v12[16] )
  {
    v8 = v11;
    *(_DWORD *)(v11 + 936) &= ~2u;
  }
  LOBYTE(v8) = v3;
  sub_140253EBC(v8, v2);
  return MEMORY[0x1401F8B20]((unsigned __int64)&v10 ^ v26);
}

