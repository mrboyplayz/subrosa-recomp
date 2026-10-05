/* Address: 0x1401dc4c0 | Name: sub_1401DC4C0 | Size: 2368 bytes */
__int64 __fastcall sub_1401DC4C0(_DWORD *a1, int a2)
{
  int v3; // eax
  int v4; // [rsp+20h] [rbp-98h]
  int v5; // [rsp+24h] [rbp-94h]
  int v6; // [rsp+28h] [rbp-90h]
  int i; // [rsp+2Ch] [rbp-8Ch]
  int j; // [rsp+30h] [rbp-88h]
  int v9; // [rsp+34h] [rbp-84h]
  int v10; // [rsp+38h] [rbp-80h]
  int v11; // [rsp+38h] [rbp-80h]
  int v12; // [rsp+3Ch] [rbp-7Ch]
  int v13; // [rsp+40h] [rbp-78h]
  unsigned int v14; // [rsp+54h] [rbp-64h]
  int v15; // [rsp+58h] [rbp-60h]
  char v16; // [rsp+5Ch] [rbp-5Ch]
  char v17; // [rsp+60h] [rbp-58h]
  signed int v18; // [rsp+64h] [rbp-54h]
  char v19; // [rsp+68h] [rbp-50h]
  unsigned int v20; // [rsp+6Ch] [rbp-4Ch]
  int v21; // [rsp+70h] [rbp-48h]
  signed int v22; // [rsp+74h] [rbp-44h]
  unsigned int v23; // [rsp+78h] [rbp-40h]
  int v24; // [rsp+7Ch] [rbp-3Ch]
  char v25; // [rsp+80h] [rbp-38h]
  char v26; // [rsp+84h] [rbp-34h]
  signed int v27; // [rsp+88h] [rbp-30h]
  char v28; // [rsp+8Ch] [rbp-2Ch]
  unsigned int v29; // [rsp+90h] [rbp-28h]
  int v30; // [rsp+94h] [rbp-24h]
  signed int v31; // [rsp+98h] [rbp-20h]
  __int64 v32; // [rsp+A0h] [rbp-18h]
  __int64 v33; // [rsp+A8h] [rbp-10h]

  v10 = 0x40000000;
  for ( i = a2 - 1; i > 0; --i )
  {
    if ( (int)a1[i] > 16773022 || (int)a1[i] < -16773022 )
      return 0;
    v4 = -128 * a1[i];
    v9 = 0x40000000 - ((unsigned __int64)(v4 * (__int64)v4) >> 32);
    v10 = 4 * ((unsigned __int64)(v9 * (__int64)v10) >> 32);
    if ( v10 < 107374 )
      return 0;
    if ( v9 <= 0 )
      v3 = sub_1401BA490(((unsigned __int64)(v4 * (__int64)v4) >> 32) - 0x40000000);
    else
      v3 = sub_1401BA490(v9);
    v13 = 32 - v3;
    v12 = sub_1401BE820(v9, 32 - v3 + 30);
    for ( j = 0; j < (i + 1) >> 1; ++j )
    {
      v5 = a1[j];
      v6 = a1[i - j - 1];
      if ( v13 == 1 )
      {
        if ( (int)(v5 - ((((v4 * (__int64)v6) >> 30) + 1) >> 1)) < 0 )
        {
          if ( (int)(((((v4 * (__int64)v6) >> 30) + 1) >> 1) & (v5 ^ 0x80000000)) >= 0 )
            v15 = v5 - ((((v4 * (__int64)v6) >> 30) + 1) >> 1);
          else
            v15 = 0x7FFFFFFF;
          v18 = v15;
        }
        else
        {
          if ( (int)((((((v4 * (__int64)v6) >> 30) + 1) >> 1) ^ 0x80000000) & v5) >= 0 )
            v14 = v5 - ((((v4 * (__int64)v6) >> 30) + 1) >> 1);
          else
            v14 = 0x80000000;
          v18 = v14;
        }
        if ( (int)(v5 - ((((v4 * (__int64)v6) >> 30) + 1) >> 1)) < 0 )
        {
          if ( (int)(((((v4 * (__int64)v6) >> 30) + 1) >> 1) & (v5 ^ 0x80000000)) >= 0 )
            v17 = v5 - ((((v4 * (__int64)v6) >> 30) + 1) >> 1);
          else
            v17 = -1;
          v19 = v17;
        }
        else
        {
          if ( (int)((((((v4 * (__int64)v6) >> 30) + 1) >> 1) ^ 0x80000000) & v5) >= 0 )
            v16 = v5 - ((((v4 * (__int64)v6) >> 30) + 1) >> 1);
          else
            v16 = 0;
          v19 = v16;
        }
        v32 = (((_BYTE)v12 * v19) & 1) + ((v12 * (__int64)v18) >> 1);
      }
      else
      {
        if ( (int)(v5 - ((((v4 * (__int64)v6) >> 30) + 1) >> 1)) < 0 )
        {
          if ( (int)(((((v4 * (__int64)v6) >> 30) + 1) >> 1) & (v5 ^ 0x80000000)) >= 0 )
            v21 = v5 - ((((v4 * (__int64)v6) >> 30) + 1) >> 1);
          else
            v21 = 0x7FFFFFFF;
          v22 = v21;
        }
        else
        {
          if ( (int)((((((v4 * (__int64)v6) >> 30) + 1) >> 1) ^ 0x80000000) & v5) >= 0 )
            v20 = v5 - ((((v4 * (__int64)v6) >> 30) + 1) >> 1);
          else
            v20 = 0x80000000;
          v22 = v20;
        }
        v32 = (((v12 * (__int64)v22) >> ((unsigned __int8)v13 - 1)) + 1) >> 1;
      }
      if ( v32 > 0x7FFFFFFF || v32 < (__int64)0xFFFFFFFF80000000uLL )
        return 0;
      a1[j] = v32;
      if ( v13 == 1 )
      {
        if ( (int)(v6 - ((((v4 * (__int64)v5) >> 30) + 1) >> 1)) < 0 )
        {
          if ( (int)(((((v4 * (__int64)v5) >> 30) + 1) >> 1) & (v6 ^ 0x80000000)) >= 0 )
            v24 = v6 - ((((v4 * (__int64)v5) >> 30) + 1) >> 1);
          else
            v24 = 0x7FFFFFFF;
          v27 = v24;
        }
        else
        {
          if ( (int)((((((v4 * (__int64)v5) >> 30) + 1) >> 1) ^ 0x80000000) & v6) >= 0 )
            v23 = v6 - ((((v4 * (__int64)v5) >> 30) + 1) >> 1);
          else
            v23 = 0x80000000;
          v27 = v23;
        }
        if ( (int)(v6 - ((((v4 * (__int64)v5) >> 30) + 1) >> 1)) < 0 )
        {
          if ( (int)(((((v4 * (__int64)v5) >> 30) + 1) >> 1) & (v6 ^ 0x80000000)) >= 0 )
            v26 = v6 - ((((v4 * (__int64)v5) >> 30) + 1) >> 1);
          else
            v26 = -1;
          v28 = v26;
        }
        else
        {
          if ( (int)((((((v4 * (__int64)v5) >> 30) + 1) >> 1) ^ 0x80000000) & v6) >= 0 )
            v25 = v6 - ((((v4 * (__int64)v5) >> 30) + 1) >> 1);
          else
            v25 = 0;
          v28 = v25;
        }
        v33 = (((_BYTE)v12 * v28) & 1) + ((v12 * (__int64)v27) >> 1);
      }
      else
      {
        if ( (int)(v6 - ((((v4 * (__int64)v5) >> 30) + 1) >> 1)) < 0 )
        {
          if ( (int)(((((v4 * (__int64)v5) >> 30) + 1) >> 1) & (v6 ^ 0x80000000)) >= 0 )
            v30 = v6 - ((((v4 * (__int64)v5) >> 30) + 1) >> 1);
          else
            v30 = 0x7FFFFFFF;
          v31 = v30;
        }
        else
        {
          if ( (int)((((((v4 * (__int64)v5) >> 30) + 1) >> 1) ^ 0x80000000) & v6) >= 0 )
            v29 = v6 - ((((v4 * (__int64)v5) >> 30) + 1) >> 1);
          else
            v29 = 0x80000000;
          v31 = v29;
        }
        v33 = (((v12 * (__int64)v31) >> ((unsigned __int8)v13 - 1)) + 1) >> 1;
      }
      if ( v33 > 0x7FFFFFFF || v33 < (__int64)0xFFFFFFFF80000000uLL )
        return 0;
      a1[i - j - 1] = v33;
    }
  }
  if ( (int)a1[i] > 16773022 || (int)a1[i] < -16773022 )
    return 0;
  v11 = 4
      * ((unsigned __int64)((int)(0x40000000 - ((unsigned __int64)(-128 * *a1 * (__int64)(-128 * *a1)) >> 32))
                          * (__int64)v10) >> 32);
  if ( v11 >= 107374 )
    return (unsigned int)v11;
  else
    return 0;
}

