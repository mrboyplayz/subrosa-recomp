/* Address: 0x1400fb4d0 | Name: sub_1400FB4D0 | Size: 606 bytes */
__int64 sub_1400FB4D0()
{
  unsigned int *v0; // rbx
  __int64 v1; // rax
  __int64 v2; // rsi
  __int64 v3; // r15
  __int64 v4; // r14
  unsigned int v5; // edi
  __int64 v7; // [rsp+0h] [rbp-60h] BYREF
  _BYTE v8[4]; // [rsp+40h] [rbp-20h] BYREF
  _WORD v9[2]; // [rsp+44h] [rbp-1Ch] BYREF
  char FileName[13]; // [rsp+48h] [rbp-18h] BYREF
  __int16 v11; // [rsp+55h] [rbp-Bh]
  char v12; // [rsp+57h] [rbp-9h]
  __int64 v13; // [rsp+58h] [rbp-8h]

  v11 = 0;
  v12 = 0;
  strcpy(FileName, "scsht000.tga");
  qword_140302F70(1029);
  v0 = &dword_140404A6C[282491301];
  qword_140302F78(0, 0, 512, 512, 6408, 5121, &dword_140404A6C[282491301]);
  v1 = MEMORY[0x14020B8D8](FileName, "wb");
  v2 = v1;
  if ( v1 )
  {
    v8[0] = 0;
    sub_14020CE0C(v8, 1, 1, v1);
    v8[0] = 0;
    sub_14020CE0C(v8, 1, 1, v2);
    v8[0] = 2;
    sub_14020CE0C(v8, 1, 1, v2);
    v9[0] = 0;
    sub_14020CE0C(v9, 2, 1, v2);
    v9[0] = 0;
    sub_14020CE0C(v9, 2, 1, v2);
    v8[0] = 0;
    sub_14020CE0C(v8, 1, 1, v2);
    v9[0] = 0;
    sub_14020CE0C(v9, 2, 1, v2);
    v9[0] = 0;
    sub_14020CE0C(v9, 2, 1, v2);
    v9[0] = 512;
    sub_14020CE0C(v9, 2, 1, v2);
    v9[0] = 512;
    sub_14020CE0C(v9, 2, 1, v2);
    v8[0] = 24;
    sub_14020CE0C(v8, 1, 1, v2);
    v8[0] = 0;
    sub_14020CE0C(v8, 1, 1, v2);
    v3 = 512;
    do
    {
      v4 = 512;
      do
      {
        v5 = *v0;
        sub_14020BCA8((unsigned __int8)BYTE2(*v0), v2);
        sub_14020BCA8(BYTE1(v5), v2);
        sub_14020BCA8((unsigned __int8)v5, v2);
        ++v0;
        --v4;
      }
      while ( v4 );
      --v3;
    }
    while ( v3 );
    sub_14020B9E8(v2);
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&v7 ^ v13);
}

