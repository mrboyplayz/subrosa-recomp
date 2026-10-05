/* Address: 0x14015b140 | Name: sub_14015B140 | Size: 292 bytes */
void __fastcall sub_14015B140(__int64 a1, __int64 a2, __int64 a3, unsigned __int8 *a4, int a5, int a6)
{
  __int64 v6; // rdi
  unsigned __int8 *v7; // rbx
  _BYTE *v8; // rax
  __int64 v9; // r14
  __int64 v10; // rbp
  int v11; // r8d
  int v12; // r9d
  int v13; // r10d
  int v14; // r11d
  int v15; // r8d
  int v16; // edx
  char v17; // cl
  char v18; // cl
  char v19; // cl

  v6 = a5;
  v7 = a4;
  if ( a5 > 0 )
  {
    v8 = (_BYTE *)(a1 + 2);
    v9 = a2 - (_QWORD)a4;
    v10 = a3 - (_QWORD)a4;
    do
    {
      v11 = *v7;
      v12 = v7[v10];
      v13 = (v7[v9] << 20) + 0x80000;
      v14 = (v13 + 1470208 * (v11 - 128)) >> 20;
      v15 = (int)(v13 + ((360960 * (128 - v12)) & 0xFFFF0000) + 748800 * (128 - v11)) >> 20;
      v16 = (v13 + 1858048 * (v12 - 128)) >> 20;
      if ( (unsigned int)v14 > 0xFF )
      {
        v17 = -1;
        if ( v14 < 0 )
          v17 = 0;
        LOBYTE(v14) = v17;
      }
      if ( (unsigned int)v15 > 0xFF )
      {
        v18 = -1;
        if ( v15 < 0 )
          v18 = 0;
        LOBYTE(v15) = v18;
      }
      if ( (unsigned int)v16 > 0xFF )
      {
        v19 = -1;
        if ( v16 < 0 )
          v19 = 0;
        LOBYTE(v16) = v19;
      }
      *(v8 - 2) = v14;
      ++v7;
      *(v8 - 1) = v15;
      *v8 = v16;
      v8[1] = -1;
      v8 += a6;
      --v6;
    }
    while ( v6 );
  }
}

