/* Address: 0x1401c5da0 | Name: sub_1401C5DA0 | Size: 1268 bytes */
__int64 __fastcall sub_1401C5DA0(_BYTE *a1, __int16 *a2, __int16 *a3, __int64 a4, int a5, int a6, int a7)
{
  void *v7; // rsp
  void *v8; // rsp
  void *v9; // rsp
  void *v10; // rsp
  int v11; // eax
  unsigned int v12; // eax
  int v13; // eax
  int j; // [rsp+50h] [rbp+0h] BYREF
  int i; // [rsp+54h] [rbp+4h]
  unsigned int v17; // [rsp+58h] [rbp+8h]
  int v18; // [rsp+5Ch] [rbp+Ch]
  unsigned int v19; // [rsp+60h] [rbp+10h]
  int v20; // [rsp+64h] [rbp+14h] BYREF
  int *v21; // [rsp+68h] [rbp+18h]
  int v22; // [rsp+70h] [rbp+20h]
  int v23; // [rsp+74h] [rbp+24h]
  unsigned __int8 *v24; // [rsp+78h] [rbp+28h]
  int *v25; // [rsp+80h] [rbp+30h]
  int *v26; // [rsp+88h] [rbp+38h]
  int *v27; // [rsp+90h] [rbp+40h]
  __int64 v28; // [rsp+98h] [rbp+48h]
  __int64 v29; // [rsp+A0h] [rbp+50h]
  void *v30; // [rsp+A8h] [rbp+58h]
  _BYTE v31[48]; // [rsp+B0h] [rbp+60h] BYREF
  _BYTE v32[32]; // [rsp+E0h] [rbp+90h] BYREF
  _WORD v33[16]; // [rsp+100h] [rbp+B0h] BYREF
  _WORD v34[16]; // [rsp+120h] [rbp+D0h] BYREF
  __int64 v35; // [rsp+140h] [rbp+F0h]

  sub_1401BD8C0(a2, *((__int16 **)a3 + 8), a3[1]);
  v7 = alloca(sub_1401F89D0());
  v26 = &j;
  sub_1401C62A0((unsigned int)&j, (_DWORD)a2, *((_QWORD *)a3 + 1), *((_QWORD *)a3 + 2), *a3, a3[1]);
  v8 = alloca(sub_1401F89D0());
  v25 = &j;
  sub_1401BD610((__int64)v26, (__int64)&j, *a3, a6);
  v9 = alloca(sub_1401F89D0());
  v21 = &j;
  v10 = alloca(sub_1401F89D0());
  v27 = &j;
  for ( i = 0; i < a6; ++i )
  {
    v17 = v25[i];
    v28 = (int)(a3[1] * v17) + *((_QWORD *)a3 + 1);
    v29 = *((_QWORD *)a3 + 2) + 2LL * (int)(a3[1] * v17);
    for ( j = 0; j < a3[1]; ++j )
    {
      *(_WORD *)&v31[2 * j + 16] = *(unsigned __int8 *)(v28 + j) << 7;
      v18 = *(__int16 *)(v29 + 2LL * j);
      v34[j] = ((__int16)v18 * (__int16)(a2[j] - *(_WORD *)&v31[2 * j + 16])) >> 14;
      v33[j] = sub_1401BE550(*(__int16 *)(a4 + 2LL * j), (__int16)v18 * (__int16)v18, 21);
    }
    sub_1401C6E20(v32, v31, a3, v17);
    v11 = sub_1401C64A0(
            16 * i + (int)v27,
            (unsigned int)v34,
            (unsigned int)v33,
            (unsigned int)v31,
            (__int64)v32,
            *((_QWORD *)a3 + 7),
            a3[2],
            a3[3],
            a5,
            a3[1]);
    v21[i] = v11;
    v24 = (unsigned __int8 *)(*a3 * (a7 >> 1) + *((_QWORD *)a3 + 3));
    if ( v17 )
      v12 = v24[v17 - 1] - v24[v17];
    else
      v12 = 256 - *v24;
    v19 = v12;
    v13 = sub_1401BC2A0(v12);
    v22 = 1024 - v13;
    v21[i] += (__int16)(a5 >> 2) * (__int16)(1024 - v13);
  }
  sub_1401BD610((__int64)v21, (__int64)&v20, a6, 1);
  *a1 = v25[v20];
  v30 = a1 + 1;
  MEMORY[0x1401FC920](a1 + 1, &v27[4 * v20]);
  sub_1401C6F70(a2, a1, a3);
  v23 = *v21;
  return MEMORY[0x1401F8B20]((unsigned __int64)&j ^ v35);
}

