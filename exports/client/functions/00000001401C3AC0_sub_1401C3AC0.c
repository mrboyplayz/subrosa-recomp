/* Address: 0x1401c3ac0 | Name: sub_1401C3AC0 | Size: 1621 bytes */
__int64 __fastcall sub_1401C3AC0(
        _DWORD *a1,
        _DWORD *a2,
        char *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        int a14,
        __int16 a15)
{
  void *v15; // rsp
  void *v16; // rsp
  void *v17; // rsp
  int v18; // eax
  int v19; // ecx
  char *v20; // rcx
  __int64 v21; // rcx
  int i; // [rsp+A0h] [rbp+0h] BYREF
  BOOL v24; // [rsp+A4h] [rbp+4h]
  int v25; // [rsp+A8h] [rbp+8h]
  int v26; // [rsp+ACh] [rbp+Ch]
  int v27; // [rsp+B0h] [rbp+10h]
  int v28; // [rsp+B4h] [rbp+14h]
  int v29; // [rsp+B8h] [rbp+18h]
  __int64 v30; // [rsp+C0h] [rbp+20h]
  int *v31; // [rsp+C8h] [rbp+28h]
  __int16 *v32; // [rsp+D0h] [rbp+30h]
  int *v33; // [rsp+D8h] [rbp+38h]
  int *v34; // [rsp+E0h] [rbp+40h]
  __int64 v35; // [rsp+E8h] [rbp+48h]
  __int64 v36; // [rsp+F0h] [rbp+50h]
  __int64 v37; // [rsp+F8h] [rbp+58h]
  void *v38; // [rsp+100h] [rbp+60h]
  void *v39; // [rsp+108h] [rbp+68h]
  __int64 v40; // [rsp+110h] [rbp+70h]

  a2[1085] = a3[34];
  v27 = a2[1082];
  v28 = word_1402827F8[2 * (a3[29] >> 1) + a3[30]];
  v24 = a3[31] != 4;
  v15 = alloca(sub_1401F89D0());
  v33 = &i;
  v16 = alloca(sub_1401F89D0());
  v31 = &i;
  v17 = alloca(sub_1401F89D0());
  v34 = &i;
  a2[1084] = a1[1148];
  a2[1083] = a1[1148];
  v30 = (__int64)a2 + 2 * a1[1148];
  for ( i = 0; i < a1[1145]; ++i )
  {
    v32 = (__int16 *)(a6 + 32LL * ((1 - v24) | (i >> 1)));
    v37 = a7 + 10LL * i;
    v36 = a8 + 48LL * i;
    v26 = *(int *)(a9 + 4LL * i) >> 2;
    v26 |= *(int *)(a9 + 4LL * i) >> 1 << 16;
    a2[1087] = 0;
    if ( a3[29] == 2 )
    {
      v27 = *(_DWORD *)(a13 + 4LL * i);
      if ( ((3 - 2 * v24) & i) == 0 )
      {
        v25 = a1[1148] - v27 - a1[1160] - 2;
        v18 = a1[1148] - v25;
        v19 = a1[1147] * i;
        v35 = (__int64)v31 + 2 * v25;
        sub_1401BBB40(v35, (__int64)a2 + 2 * v19 + 2 * v25, v32, v18, a1[1160]);
        a2[1087] = 1;
        a2[1083] = a1[1148];
      }
    }
    sub_1401D7560((_DWORD)a1, (_DWORD)a2, a4, (_DWORD)v34, (__int64)v31, (__int64)v33, i, a15, a12, a13, a3[29]);
    v29 = a3[29];
    sub_1401D7910(
      (_DWORD)a2,
      v29,
      (_DWORD)v34,
      a5,
      v30,
      (__int64)v33,
      (__int64)v32,
      v37,
      v36,
      v27,
      v26,
      *(_DWORD *)(a10 + 4LL * i),
      *(_DWORD *)(a11 + 4LL * i),
      *(_DWORD *)(a12 + 4LL * i),
      a14,
      v28,
      a1[1147],
      a1[1159],
      a1[1160]);
    a4 += 2LL * (int)a1[1147];
    LODWORD(a5) = a1[1147] + a5;
    v30 += 2LL * (int)a1[1147];
  }
  a2[1082] = *(_DWORD *)(a13 + 4LL * (a1[1145] - 1));
  v20 = (char *)a2 + 2 * a1[1146];
  v38 = a2;
  MEMORY[0x1401FC920](a2, v20);
  v21 = (__int64)&a2[a1[1146] + 320];
  v39 = a2 + 320;
  MEMORY[0x1401FC920](a2 + 320, v21);
  return MEMORY[0x1401F8B20]((unsigned __int64)&i ^ v40);
}

