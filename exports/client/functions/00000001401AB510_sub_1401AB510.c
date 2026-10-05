/* Address: 0x1401ab510 | Name: sub_1401AB510 | Size: 2881 bytes */
__int64 __fastcall sub_1401AB510(
        __int64 a1,
        float *a2,
        signed int a3,
        int a4,
        int a5,
        __int64 a6,
        int a7,
        int a8,
        int a9)
{
  _DWORD v10[18]; // [rsp+0h] [rbp-128h] BYREF
  unsigned int v11; // [rsp+60h] [rbp-C8h]
  int v12; // [rsp+64h] [rbp-C4h]
  signed int i; // [rsp+68h] [rbp-C0h]
  int v14; // [rsp+6Ch] [rbp-BCh]
  int v15; // [rsp+70h] [rbp-B8h]
  int v16; // [rsp+74h] [rbp-B4h]
  int v17; // [rsp+78h] [rbp-B0h]
  int v18; // [rsp+7Ch] [rbp-ACh]
  int v19; // [rsp+80h] [rbp-A8h]
  int v20; // [rsp+84h] [rbp-A4h]
  int v21; // [rsp+88h] [rbp-A0h]
  float v22; // [rsp+8Ch] [rbp-9Ch]
  float v23; // [rsp+90h] [rbp-98h]
  float v24; // [rsp+94h] [rbp-94h]
  __int64 v25; // [rsp+98h] [rbp-90h]
  int v26; // [rsp+A0h] [rbp-88h]
  int v27; // [rsp+A4h] [rbp-84h]
  int v28; // [rsp+A8h] [rbp-80h]
  int v29; // [rsp+ACh] [rbp-7Ch]
  int v30; // [rsp+B0h] [rbp-78h]
  int v31; // [rsp+B4h] [rbp-74h]
  int v32; // [rsp+B8h] [rbp-70h]
  int v33; // [rsp+BCh] [rbp-6Ch]
  float v34; // [rsp+C0h] [rbp-68h]
  int v35; // [rsp+C4h] [rbp-64h]
  float *v36; // [rsp+C8h] [rbp-60h]
  int v37; // [rsp+D0h] [rbp-58h]
  int v38; // [rsp+D4h] [rbp-54h]
  int v39; // [rsp+D8h] [rbp-50h]
  __int64 v40; // [rsp+E0h] [rbp-48h]
  unsigned __int8 *v41; // [rsp+E8h] [rbp-40h]
  unsigned int *v42; // [rsp+F0h] [rbp-38h]
  BOOL v43; // [rsp+F8h] [rbp-30h] BYREF
  int v44; // [rsp+FCh] [rbp-2Ch]
  int v45; // [rsp+100h] [rbp-28h]
  int v46; // [rsp+104h] [rbp-24h]
  int v47; // [rsp+108h] [rbp-20h]
  int v48; // [rsp+10Ch] [rbp-1Ch]
  __int64 v49; // [rsp+110h] [rbp-18h]
  int v53; // [rsp+140h] [rbp+18h]
  int v54; // [rsp+148h] [rbp+20h] BYREF

  v54 = a4;
  v35 = 0;
  v26 = 0;
  v18 = a5;
  v24 = 0.0;
  v23 = 0.0;
  v11 = 0;
  v36 = nullptr;
  v37 = *(_DWORD *)a1;
  v25 = *(_QWORD *)(a1 + 8);
  v20 = *(_DWORD *)(a1 + 16);
  v31 = *(_DWORD *)(a1 + 24);
  v42 = *(unsigned int **)(a1 + 32);
  v41 = (unsigned __int8 *)(*(_QWORD *)(v25 + 144)
                          + *(__int16 *)(*(_QWORD *)(v25 + 136) + 2LL * (v20 + *(_DWORD *)(v25 + 8) * (a7 + 1))));
  if ( a7 == -1 || v54 <= v41[*v41] + 12 || a3 <= 2 )
  {
    v16 = sub_1401A2830(v25, v20, a7, v54);
    v21 = sub_1401A2960(v25, v20, a7, v16);
    for ( *(_DWORD *)(a1 + 40) -= v21; *(int *)(a1 + 40) < 0 && v16 > 0; *(_DWORD *)(a1 + 40) -= v21 )
    {
      *(_DWORD *)(a1 + 40) += v21;
      v21 = sub_1401A2960(v25, v20, a7, --v16);
    }
    if ( v16 )
    {
      v32 = sub_1401A27F0(v16);
      if ( v37 )
      {
        v10[16] = *(_DWORD *)(a1 + 60);
        v11 = sub_1401A65D0(a2, a3, v32, v31, a5, (__int64)v42, a8, *(_DWORD *)(a1 + 4));
      }
      else
      {
        v11 = sub_1401A6710((int)a2, a3, v32, v31, a5, v42, a8);
      }
    }
    else if ( *(_DWORD *)(a1 + 4) )
    {
      v38 = 1;
      v33 = (1 << a5) - 1;
      a9 &= v33;
      if ( a9 )
      {
        if ( a6 )
        {
          for ( i = 0; i < a3; ++i )
          {
            *(_DWORD *)(a1 + 56) = sub_1401A5C70(*(unsigned int *)(a1 + 56));
            v22 = 0.00390625;
            if ( (*(_DWORD *)(a1 + 56) & 0x8000) != 0 )
              v34 = v22;
            else
              v34 = -v22;
            v22 = v34;
            a2[i] = *(float *)(a6 + 4LL * i) + v34;
          }
          v11 = a9;
        }
        else
        {
          for ( i = 0; i < a3; ++i )
          {
            *(_DWORD *)(a1 + 56) = sub_1401A5C70(*(unsigned int *)(a1 + 56));
            a2[i] = (float)(*(int *)(a1 + 56) >> 20);
          }
          v11 = v33;
        }
        sub_1401A6800(a2, a3, *(float *)&a8);
      }
      else
      {
        MEMORY[0x1401FCD30](a2, 0, 4LL * a3);
      }
    }
  }
  else
  {
    v40 = 0;
    v53 = a3 >> 1;
    v36 = &a2[a3 >> 1];
    --a7;
    if ( a5 == 1 )
      a9 = (2 * a9) | a9 & 1;
    a5 = (a5 + 1) >> 1;
    sub_1401AA790((int *)a1, &v43, (__int64)a2, (__int64)v36, v53, &v54, a5, v18, a7, 0, &a9);
    v35 = v44;
    v26 = v45;
    v12 = v46;
    v19 = v47;
    v39 = v48;
    v24 = 0.000030517578 * (float)v44;
    v23 = 0.000030517578 * (float)v45;
    if ( v18 > 1 && (v19 & 0x3FFF) != 0 )
    {
      if ( v19 <= 0x2000 )
      {
        if ( ((8 * v53) >> (5 - a7)) + v12 <= 0 )
          v27 = ((8 * v53) >> (5 - a7)) + v12;
        else
          v27 = 0;
        v12 = v27;
      }
      else
      {
        v12 -= v12 >> (4 - a7);
      }
    }
    if ( v54 >= (v54 - v12) / 2 )
      v28 = (v54 - v12) / 2;
    else
      v28 = v54;
    if ( v28 >= 0 )
    {
      if ( v54 >= (v54 - v12) / 2 )
        v29 = (v54 - v12) / 2;
      else
        v29 = v54;
      v30 = v29;
    }
    else
    {
      v30 = 0;
    }
    v15 = v30;
    v17 = v54 - v30;
    *(_DWORD *)(a1 + 40) -= v39;
    if ( a6 )
      v40 = a6 + 4LL * v53;
    v14 = *(_DWORD *)(a1 + 40);
    if ( v15 < v17 )
    {
      v11 = (unsigned int)sub_1401AB510(a1, (_DWORD)v36, v53, v17, a5, v40, a7, *(float *)&a8 * v23, a9 >> a5) << (v18 >> 1);
      v14 = v17 - (v14 - *(_DWORD *)(a1 + 40));
      if ( v14 > 24 && v19 != 0x4000 )
        v15 = v15 + v14 - 24;
      v11 |= sub_1401AB510(a1, (_DWORD)a2, v53, v15, a5, a6, a7, *(float *)&a8 * v24, a9);
    }
    else
    {
      v11 = sub_1401AB510(a1, (_DWORD)a2, v53, v15, a5, a6, a7, *(float *)&a8 * v24, a9);
      v14 = v15 - (v14 - *(_DWORD *)(a1 + 40));
      if ( v14 > 24 && v19 )
        v17 = v17 + v14 - 24;
      v11 |= (unsigned int)sub_1401AB510(a1, (_DWORD)v36, v53, v17, a5, v40, a7, *(float *)&a8 * v23, a9 >> a5) << (v18 >> 1);
    }
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)v10 ^ v49);
}

