/* Address: 0x1401aa790 | Name: sub_1401AA790 | Size: 3005 bytes */
BOOL *__fastcall sub_1401AA790(
        int *a1,
        BOOL *a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int *a6,
        char a7,
        int a8,
        int a9,
        int a10,
        _DWORD *a11)
{
  int v11; // eax
  int v13; // [rsp+30h] [rbp-D8h]
  int v14; // [rsp+34h] [rbp-D4h]
  int v15; // [rsp+38h] [rbp-D0h]
  int v16; // [rsp+3Ch] [rbp-CCh]
  int v17; // [rsp+44h] [rbp-C4h]
  BOOL v18; // [rsp+48h] [rbp-C0h]
  int v19; // [rsp+4Ch] [rbp-BCh]
  unsigned int v20; // [rsp+50h] [rbp-B8h]
  unsigned int v21; // [rsp+50h] [rbp-B8h]
  unsigned int v22; // [rsp+54h] [rbp-B4h]
  unsigned int v23; // [rsp+54h] [rbp-B4h]
  int v24; // [rsp+58h] [rbp-B0h]
  int v25; // [rsp+58h] [rbp-B0h]
  unsigned int *v26; // [rsp+60h] [rbp-A8h]
  int i; // [rsp+6Ch] [rbp-9Ch]
  int v28; // [rsp+74h] [rbp-94h]
  int v29; // [rsp+78h] [rbp-90h]
  int v30; // [rsp+7Ch] [rbp-8Ch]
  int v31; // [rsp+80h] [rbp-88h]
  int v32; // [rsp+84h] [rbp-84h]
  int v33; // [rsp+88h] [rbp-80h]
  __int16 v34; // [rsp+8Ch] [rbp-7Ch]
  int v35; // [rsp+90h] [rbp-78h]
  int v36; // [rsp+94h] [rbp-74h]
  int v37; // [rsp+98h] [rbp-70h]
  int v38; // [rsp+9Ch] [rbp-6Ch]
  int v39; // [rsp+A4h] [rbp-64h]
  int v40; // [rsp+ACh] [rbp-5Ch]
  int v41; // [rsp+B4h] [rbp-54h]
  BOOL v42; // [rsp+C0h] [rbp-48h]
  int v43; // [rsp+C4h] [rbp-44h]
  int v44; // [rsp+C8h] [rbp-40h]
  int v45; // [rsp+CCh] [rbp-3Ch]
  int v46; // [rsp+D8h] [rbp-30h]
  __int64 v47; // [rsp+F0h] [rbp-18h]
  __int64 v48; // [rsp+F8h] [rbp-10h]

  v13 = 0;
  v18 = 0;
  v17 = *a1;
  v47 = *((_QWORD *)a1 + 1);
  v29 = a1[4];
  v45 = a1[5];
  v26 = *((unsigned int **)a1 + 4);
  v48 = *((_QWORD *)a1 + 6);
  if ( a10 && a5 == 2 )
    v44 = 16;
  else
    v44 = 4;
  v33 = *(__int16 *)(*(_QWORD *)(v47 + 64) + 2LL * v29) + 8 * a9;
  v14 = sub_1401AA680(a5, *a6, (v33 >> 1) - v44, v33, a10);
  if ( a10 && v29 >= v45 )
    v14 = 1;
  if ( v17 )
    v13 = sub_1401A68E0(a3, a4, a10, a5);
  v46 = sub_14019A0E0((__int64)v26);
  if ( v14 == 1 )
  {
    if ( a10 )
    {
      if ( v17 )
      {
        v42 = v13 > 0x2000 && !a1[17];
        v18 = v42;
        if ( v42 )
        {
          for ( i = 0; i < a5; ++i )
            *(float *)(a4 + 4LL * i) = -*(float *)(a4 + 4LL * i);
        }
        sub_1401A9EE0(v47, a3, a4, v48, v29, a5);
      }
      if ( *a6 <= 16 || a1[10] <= 16 )
      {
        v18 = 0;
      }
      else if ( v17 )
      {
        sub_14019A450((__int64)v26, v18, 2);
      }
      else
      {
        v18 = sub_14019AF20((__int64)v26, 2);
      }
      if ( a1[17] )
        v18 = 0;
      v13 = 0;
    }
  }
  else
  {
    if ( v17 )
    {
      if ( a10 && a1[16] )
      {
        if ( v13 <= 0x2000 )
          v35 = -32767 / v14;
        else
          v35 = 0x7FFF / v14;
        if ( (v35 + v14 * v13) >> 14 >= 0 )
          v36 = (v35 + v14 * v13) >> 14;
        else
          v36 = 0;
        if ( v14 - 1 >= v36 )
        {
          if ( (v35 + v14 * v13) >> 14 >= 0 )
            v37 = (v35 + v14 * v13) >> 14;
          else
            v37 = 0;
          v38 = v37;
        }
        else
        {
          v38 = v14 - 1;
        }
        if ( a1[16] >= 0 )
          v13 = v38 + 1;
        else
          v13 = v38;
      }
      else
      {
        v13 = (v14 * v13 + 0x2000) >> 14;
        if ( !a10 && a1[18] && v13 > 0 && v13 < v14 )
        {
          v34 = sub_14019A1A0((unsigned int)(v13 << 14), (unsigned int)v14);
          v20 = (__int16)sub_1401A32C0(v34);
          v22 = (__int16)sub_1401A32C0(0x4000 - v34);
          v24 = ((__int16)sub_1401A3360(v22, v20) * (__int16)(((_WORD)a5 - 1) << 7) + 0x4000) >> 15;
          if ( v24 <= *a6 )
          {
            if ( v24 < -*a6 )
              v13 = 0;
          }
          else
          {
            v13 = v14;
          }
        }
      }
    }
    if ( a10 && a5 > 2 )
    {
      v15 = v14 / 2;
      v31 = v14 / 2 + 3 * (v14 / 2 + 1);
      if ( v17 )
      {
        if ( v13 > v15 )
          v39 = 3 * (v15 + 1) + v13 - v15;
        else
          v39 = 3 * (v13 + 1);
        if ( v13 > v15 )
          sub_14019A290((__int64)v26, 3 * (v15 + 1) + v13 - 1 - v15, v39, v31);
        else
          sub_14019A290((__int64)v26, 3 * v13, v39, v31);
      }
      else
      {
        v30 = sub_14019AD20(v26, v31);
        if ( v30 >= 3 * (v15 + 1) )
          v16 = v15 + v30 - 3 * (v15 + 1) + 1;
        else
          v16 = v30 / 3;
        if ( v16 > v15 )
          v40 = 3 * (v15 + 1) + v16 - v15;
        else
          v40 = 3 * (v16 + 1);
        if ( v16 > v15 )
          sub_14019AE70(v26, 3 * (v15 + 1) + v16 - 1 - v15, v40, v31);
        else
          sub_14019AE70(v26, 3 * v16, v40, v31);
        v13 = v16;
      }
    }
    else if ( a8 > 1 || a10 )
    {
      if ( v17 )
        sub_14019A5E0((__int64)v26, v13, v14 + 1);
      else
        v13 = sub_14019B0A0(v26, v14 + 1);
    }
    else
    {
      v19 = ((v14 >> 1) + 1) * ((v14 >> 1) + 1);
      if ( v17 )
      {
        if ( v13 > v14 >> 1 )
          v41 = v14 + 1 - v13;
        else
          v41 = v13 + 1;
        if ( v13 > v14 >> 1 )
          v11 = v19 - (((v14 + 2 - v13) * (v14 + 1 - v13)) >> 1);
        else
          v11 = ((v13 + 1) * v13) >> 1;
        sub_14019A290((__int64)v26, v11, v41 + v11, v19);
      }
      else
      {
        v32 = sub_14019AD20(v26, v19);
        if ( v32 >= (((v14 >> 1) + 1) * (v14 >> 1)) >> 1 )
        {
          v13 = (2 * v14 + 2 - (unsigned int)sub_1401A6AE0(8 * (v19 - v32) - 7)) >> 1;
          v28 = v19 - (((v14 + 2 - v13) * (v14 + 1 - v13)) >> 1);
          sub_14019AE70(v26, v28, v14 + 1 - v13 + v28, v19);
        }
        else
        {
          v13 = ((unsigned int)sub_1401A6AE0(8 * v32 + 1) - 1) >> 1;
          sub_14019AE70(v26, ((v13 + 1) * v13) >> 1, v13 + 1 + (((v13 + 1) * v13) >> 1), v19);
        }
      }
    }
    v13 = sub_14019A1A0((unsigned int)(v13 << 14), (unsigned int)v14);
    if ( v17 && a10 )
    {
      if ( v13 )
        sub_1401AA030(a3, a4, a5);
      else
        sub_1401A9EE0(v47, a3, a4, v48, v29, a5);
    }
  }
  v43 = sub_14019A0E0((__int64)v26) - v46;
  *a6 -= v43;
  if ( v13 )
  {
    if ( v13 == 0x4000 )
    {
      v21 = 0;
      v23 = 0x7FFF;
      *a11 &= ((1 << a7) - 1) << a7;
      v25 = 0x4000;
    }
    else
    {
      v21 = (__int16)sub_1401A32C0(v13);
      v23 = (__int16)sub_1401A32C0(0x4000 - (unsigned __int16)v13);
      v25 = ((__int16)sub_1401A3360(v23, v21) * (__int16)(((_WORD)a5 - 1) << 7) + 0x4000) >> 15;
    }
  }
  else
  {
    v21 = 0x7FFF;
    v23 = 0;
    *a11 &= (1 << a7) - 1;
    v25 = -16384;
  }
  *a2 = v18;
  a2[1] = v21;
  a2[2] = v23;
  a2[3] = v25;
  a2[4] = v13;
  a2[5] = v43;
  return a2;
}

