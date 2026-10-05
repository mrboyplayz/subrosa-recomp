/* Address: 0x14005d550 | Name: sub_14005D550 | Size: 963 bytes */
__int64 __fastcall sub_14005D550(int a1)
{
  __int64 v1; // r13
  int v2; // r12d
  signed int v3; // r14d
  int v4; // r15d
  __int64 v5; // rdx
  char v6; // cl
  __int64 v7; // rax
  __int64 v8; // rsi
  int v9; // edi
  __int64 v10; // rbx
  __int64 v11; // rsi
  unsigned int *v12; // r15
  unsigned int v13; // xmm1_4
  unsigned int v14; // xmm0_4
  __int64 v15; // rbx
  __int64 v16; // rdi
  unsigned int v17; // eax
  unsigned int v18; // xmm0_4
  unsigned int v19; // eax
  unsigned int v20; // eax
  unsigned int v21; // eax
  unsigned int v22; // eax
  __int64 v24; // [rsp+0h] [rbp-100h] BYREF
  unsigned int v25[4]; // [rsp+20h] [rbp-E0h] BYREF
  int Buffer; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v27; // [rsp+38h] [rbp-C8h] BYREF
  __int128 v28; // [rsp+48h] [rbp-B8h]
  int v29; // [rsp+58h] [rbp-A8h]
  _BYTE v30[512]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v31; // [rsp+260h] [rbp+160h]

  v1 = a1;
  v2 = sub_14024C22C("data");
  v3 = 0;
  v4 = sub_14024C22C("mission");
  v5 = 0;
  do
  {
    v6 = aTestSrm[v5];
    v30[v5++] = v6;
  }
  while ( v6 );
  v7 = MEMORY[0x14020B8D8](v30, "rb");
  v8 = v7;
  if ( v7 )
  {
    fread(&Buffer, 4, 1, v7);
    if ( Buffer != 1 )
    {
      sub_14020B9E8(v8);
      goto LABEL_14;
    }
    fread(&dword_140404A6C[486132853], 4, 1, v8);
    v9 = 0;
    if ( (int)dword_140404A6C[486132853] > 0 )
    {
      do
      {
        v10 = 4LL * v9;
        fread(&dword_140404A6C[v10 + 486132854], 4, 3, v8);
        fread(&dword_140404A6C[v10 + 486132857], 4, 1, v8);
        ++v9;
      }
      while ( v9 < (int)dword_140404A6C[486132853] );
      v3 = 0;
    }
    sub_14020B9E8(v8);
  }
  if ( !v4 )
    sub_14024C22C("..");
  if ( !v2 )
    sub_14024C22C("..");
LABEL_14:
  v11 = 1025 * v1;
  if ( (int)dword_140404A6C[1025 * v1 + 486132853] > 0 )
  {
    v12 = &dword_140404A6C[v11 + 486132856];
    do
    {
      v13 = *(v12 - 1);
      v25[0] = *(v12 - 2);
      v14 = *v12;
      v25[1] = v13;
      v25[2] = v14;
      v27 = xmmword_140278D30;
      v29 = 1065353216;
      v28 = xmmword_140278D30;
      sub_14007B2A0(&v27, (char *)&v27 + 12);
      v15 = (int)sub_14005CCF0();
      v16 = 3597 * v15;
      dword_140404A6C[v16 + 71856286] = 7;
      sub_140158AB0(&dword_140404A6C[3597 * v15 + 71856254], Parameters);
      dword_140404A6C[v16 + 71859139] = 1;
      dword_140404A6C[v16 + 71859816] = 1;
      dword_140404A6C[v16 + 71859821] = 3;
      dword_140404A6C[v16 + 71859822] = 1;
      v27 = xmmword_140278D30;
      v29 = 1065353216;
      v28 = xmmword_140278D30;
      v17 = sub_140053840((float *)v25, (float *)&v27, v15);
      v18 = v12[1];
      dword_140404A6C[v16 + 71856292] = v17;
      dword_140404A6C[v16 + 71859143] = v18;
      dword_140404A6C[7166 * v17 + 280651341] = v18;
      sub_140051DC0(v15);
      v19 = sub_140054130(1, v25, nullptr, (unsigned int *)&v27);
      sub_1400E35D0(v19, 0xFFFFFFFFLL, dword_140404A6C[3597 * v15 + 71856292], 0);
      v20 = sub_140054130(2, v25, nullptr, (unsigned int *)&v27);
      sub_1400E35D0(v20, 0xFFFFFFFFLL, dword_140404A6C[3597 * v15 + 71856292], 1);
      v21 = sub_140054130(2, v25, nullptr, (unsigned int *)&v27);
      sub_1400E35D0(v21, 0xFFFFFFFFLL, dword_140404A6C[3597 * v15 + 71856292], 3);
      v22 = sub_140054130(2, v25, nullptr, (unsigned int *)&v27);
      sub_1400E35D0(v22, 0xFFFFFFFFLL, dword_140404A6C[3597 * v15 + 71856292], 3);
      ++v3;
      v12 += 4;
    }
    while ( v3 < (int)dword_140404A6C[v11 + 486132853] );
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&v24 ^ v31);
}

