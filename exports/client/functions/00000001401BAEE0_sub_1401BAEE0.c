/* Address: 0x1401baee0 | Name: sub_1401BAEE0 | Size: 984 bytes */
__int64 __fastcall sub_1401BAEE0(__int64 a1, _WORD *a2, int a3, int a4)
{
  void *v4; // rsp
  _BYTE v6[1888]; // [rsp-760h] [rbp-790h] BYREF
  int v7; // [rsp+30h] [rbp+0h] BYREF
  int v8; // [rsp+34h] [rbp+4h]
  int *v9; // [rsp+38h] [rbp+8h]
  int i; // [rsp+40h] [rbp+10h]
  int *v11; // [rsp+48h] [rbp+18h]
  int v12; // [rsp+50h] [rbp+20h]
  int v13; // [rsp+54h] [rbp+24h]
  int v14; // [rsp+58h] [rbp+28h]
  int v15; // [rsp+5Ch] [rbp+2Ch]
  int v16; // [rsp+60h] [rbp+30h]
  __int64 v17; // [rsp+68h] [rbp+38h]
  _WORD *v20; // [rsp+88h] [rbp+58h]

  v4 = alloca(1936);
  v11 = (int *)v6;
  MEMORY[0x1401FC920](v6, a1);
  while ( 1 )
  {
    v12 = a4 >= 480 ? 480 : a4;
    v8 = v12;
    sub_1401DD7A0(a1 + 16, (_DWORD)v11 + 16, a3, (unsigned int)&unk_140282160, v12);
    v9 = v11;
    for ( i = v8; i > 2; i -= 3 )
    {
      v7 = (unk_140282164 * (__int64)*v9) >> 16;
      v7 += (unk_140282166 * (__int64)v9[1]) >> 16;
      v7 += (unk_14028216A * (__int64)v9[2]) >> 16;
      v7 += (unk_140282168 * (__int64)v9[3]) >> 16;
      if ( ((v7 >> 5) + 1) >> 1 <= 0x7FFF )
      {
        if ( ((v7 >> 5) + 1) >> 1 >= -32768 )
          v13 = ((v7 >> 5) + 1) >> 1;
        else
          v13 = -32768;
        v14 = v13;
      }
      else
      {
        v14 = 0x7FFF;
      }
      *a2 = v14;
      v20 = a2 + 1;
      v7 = (unk_140282168 * (__int64)v9[1]) >> 16;
      v7 += (unk_14028216A * (__int64)v9[2]) >> 16;
      v7 += (unk_140282166 * (__int64)v9[3]) >> 16;
      v7 += (unk_140282164 * (__int64)v9[4]) >> 16;
      if ( ((v7 >> 5) + 1) >> 1 <= 0x7FFF )
      {
        if ( ((v7 >> 5) + 1) >> 1 >= -32768 )
          v15 = ((v7 >> 5) + 1) >> 1;
        else
          v15 = -32768;
        v16 = v15;
      }
      else
      {
        v16 = 0x7FFF;
      }
      *v20 = v16;
      a2 = v20 + 1;
      v9 += 3;
    }
    a3 += 2 * v8;
    a4 -= v8;
    if ( a4 <= 0 )
      break;
    MEMORY[0x1401FC920](v11, &v11[v8]);
  }
  MEMORY[0x1401FC920](a1, &v11[v8]);
  return MEMORY[0x1401F8B20]((unsigned __int64)&v7 ^ v17);
}

