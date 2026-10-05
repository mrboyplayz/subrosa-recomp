/* Address: 0x1401e3d80 | Name: sub_1401E3D80 | Size: 514 bytes */
__int64 __fastcall sub_1401E3D80(__int64 a1, int a2, int a3)
{
  __int64 v4; // [rsp+0h] [rbp-2D8h] BYREF
  int v5; // [rsp+40h] [rbp-298h]
  int i; // [rsp+44h] [rbp-294h]
  char v7; // [rsp+48h] [rbp-290h] BYREF
  unsigned int v8; // [rsp+4Ch] [rbp-28Ch]
  unsigned int v9; // [rsp+50h] [rbp-288h] BYREF
  int v10; // [rsp+54h] [rbp-284h]
  BOOL v11; // [rsp+58h] [rbp-280h]
  __int64 v12; // [rsp+60h] [rbp-278h]
  _BYTE v13[4]; // [rsp+70h] [rbp-268h] BYREF
  int v14; // [rsp+74h] [rbp-264h]
  _BYTE v15[96]; // [rsp+260h] [rbp-78h] BYREF
  __int64 v16; // [rsp+2C0h] [rbp-18h]
  __int64 v17; // [rsp+2E0h] [rbp+8h]
  int v18; // [rsp+2E8h] [rbp+10h]

  v18 = a2;
  v17 = a1;
  if ( a2 >= 1 )
  {
    v12 = a1;
    v10 = 0;
    for ( i = 0; i < a3; ++i )
    {
      v11 = i != a3 - 1;
      v8 = v11;
      if ( v18 <= 0 )
        break;
      sub_1401E37F0(v13);
      v5 = sub_1401E99E0(v17, v18, v8, (unsigned int)&v7, 0, (__int64)v15, 0, (__int64)&v9);
      if ( v5 < 0 )
        break;
      v5 = sub_1401F8310(v13, v17, v9, v8);
      if ( v5 < 0 )
        break;
      v5 = sub_1401EA090((unsigned int)v13, 0, v14, v12, v18, v8, 0);
      if ( v5 < 0 )
        break;
      v10 += v5;
      v12 += v5;
      v17 += (int)v9;
      v18 -= v9;
    }
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&v4 ^ v16);
}

