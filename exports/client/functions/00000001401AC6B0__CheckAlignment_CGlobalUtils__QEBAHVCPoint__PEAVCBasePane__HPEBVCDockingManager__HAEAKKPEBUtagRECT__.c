/* Address: 0x1401ac6b0 | Name: ?CheckAlignment@CGlobalUtils@@QEBAHVCPoint@@PEAVCBasePane@@HPEBVCDockingManager@@HAEAKKPEBUtagRECT@@@Z | Size: 2906 bytes */
__int64 __fastcall CGlobalUtils::CheckAlignment(
        __int64 a1,
        float *a2,
        float *a3,
        int a4,
        int a5,
        int a6,
        __int64 a7,
        int a8,
        _DWORD *a9,
        __int64 a10,
        int a11)
{
  _DWORD v12[10]; // [rsp+0h] [rbp-118h] BYREF
  int v13; // [rsp+60h] [rbp-B8h]
  int v14; // [rsp+64h] [rbp-B4h]
  int v15; // [rsp+68h] [rbp-B0h]
  int v16; // [rsp+6Ch] [rbp-ACh]
  int v17; // [rsp+70h] [rbp-A8h]
  float v18; // [rsp+74h] [rbp-A4h]
  float v19; // [rsp+78h] [rbp-A0h]
  int v20; // [rsp+7Ch] [rbp-9Ch]
  int i; // [rsp+80h] [rbp-98h]
  int v22; // [rsp+84h] [rbp-94h]
  float v23; // [rsp+88h] [rbp-90h]
  int v24; // [rsp+8Ch] [rbp-8Ch]
  int v25; // [rsp+90h] [rbp-88h]
  BOOL v26; // [rsp+94h] [rbp-84h]
  BOOL v27; // [rsp+98h] [rbp-80h]
  BOOL v28; // [rsp+9Ch] [rbp-7Ch]
  int v29; // [rsp+A0h] [rbp-78h]
  int v30; // [rsp+A4h] [rbp-74h]
  int v31; // [rsp+A8h] [rbp-70h]
  int v32; // [rsp+ACh] [rbp-6Ch]
  BOOL v33; // [rsp+B0h] [rbp-68h]
  float *v34; // [rsp+B8h] [rbp-60h]
  float *v35; // [rsp+C0h] [rbp-58h]
  int v36; // [rsp+C8h] [rbp-50h]
  int v37; // [rsp+CCh] [rbp-4Ch]
  float *v38; // [rsp+D0h] [rbp-48h]
  float *v39; // [rsp+D8h] [rbp-40h]
  _DWORD *v40; // [rsp+E0h] [rbp-38h]
  BOOL v41; // [rsp+E8h] [rbp-30h] BYREF
  int v42; // [rsp+ECh] [rbp-2Ch]
  int v43; // [rsp+F0h] [rbp-28h]
  int v44; // [rsp+F4h] [rbp-24h]
  int v45; // [rsp+F8h] [rbp-20h]
  int v46; // [rsp+FCh] [rbp-1Ch]
  __int64 v47; // [rsp+100h] [rbp-18h]

  v24 = 0;
  v25 = 0;
  v33 = 0;
  v23 = 0.0;
  v19 = 0.0;
  v16 = 0;
  v36 = *(_DWORD *)a1;
  v40 = *(_DWORD **)(a1 + 32);
  if ( a4 == 1 )
  {
    sub_1401AB360((int *)a1, a2, a3, a5, a9);
  }
  else
  {
    v37 = a11;
    sub_1401AA790((int *)a1, &v41, (__int64)a2, (__int64)a3, a4, &a5, a6, a6, a8, 1, &a11);
    v33 = v41;
    v24 = v42;
    v25 = v43;
    v22 = v44;
    v20 = v45;
    v32 = v46;
    v23 = 0.000030517578 * (float)v42;
    v19 = 0.000030517578 * (float)v43;
    if ( a4 == 2 )
    {
      v17 = 0;
      v14 = a5;
      v13 = 0;
      if ( v20 && v20 != 0x4000 )
        v13 = 8;
      v14 -= v13;
      v26 = v20 > 0x2000;
      v27 = v26;
      *(_DWORD *)(a1 + 40) -= v13 + v32;
      if ( v27 )
        v38 = a3;
      else
        v38 = a2;
      v34 = v38;
      if ( v27 )
        v39 = a2;
      else
        v39 = a3;
      v35 = v39;
      if ( v13 )
      {
        if ( v36 )
        {
          v28 = (float)((float)(*v34 * v35[1]) - (float)(v34[1] * *v35)) < 0.0;
          v17 = v28;
          sub_14019A6D0(v40, v28, 1);
        }
        else
        {
          v17 = sub_14019B1C0(v40, 1u);
        }
      }
      v17 = 1 - 2 * v17;
      v16 = sub_1401AC060((int *)a1, v34, 2, v14, a6, a7, a8, a9, 1065353216, a10, v37);
      *v35 = (float)-v17 * v34[1];
      v35[1] = (float)v17 * *v34;
      if ( *(_DWORD *)(a1 + 4) )
      {
        *a2 = v23 * *a2;
        a2[1] = v23 * a2[1];
        *a3 = v19 * *a3;
        a3[1] = v19 * a3[1];
        v18 = *a2;
        *a2 = v18 - *a3;
        *a3 = v18 + *a3;
        v18 = a2[1];
        a2[1] = v18 - a3[1];
        a3[1] = v18 + a3[1];
      }
    }
    else
    {
      if ( a5 >= (a5 - v22) / 2 )
        v29 = (a5 - v22) / 2;
      else
        v29 = a5;
      if ( v29 >= 0 )
      {
        if ( a5 >= (a5 - v22) / 2 )
          v30 = (a5 - v22) / 2;
        else
          v30 = a5;
        v31 = v30;
      }
      else
      {
        v31 = 0;
      }
      v14 = v31;
      v13 = a5 - v31;
      *(_DWORD *)(a1 + 40) -= v32;
      v15 = *(_DWORD *)(a1 + 40);
      if ( v14 < v13 )
      {
        v16 = sub_1401AC060((int *)a1, a3, a4, v13, a6, 0, a8, nullptr, SLODWORD(v19), 0, a11 >> a6);
        v15 = v13 - (v15 - *(_DWORD *)(a1 + 40));
        if ( v15 > 24 && v20 != 0x4000 )
          v14 = v14 + v15 - 24;
        v16 |= sub_1401AC060((int *)a1, a2, a4, v14, a6, a7, a8, a9, 1065353216, a10, a11);
      }
      else
      {
        v16 = sub_1401AC060((int *)a1, a2, a4, v14, a6, a7, a8, a9, 1065353216, a10, a11);
        v15 = v14 - (v15 - *(_DWORD *)(a1 + 40));
        if ( v15 > 24 && v20 )
          v13 = v13 + v15 - 24;
        v16 |= sub_1401AC060((int *)a1, a3, a4, v13, a6, 0, a8, nullptr, SLODWORD(v19), 0, a11 >> a6);
      }
    }
    if ( *(_DWORD *)(a1 + 4) )
    {
      if ( a4 != 2 )
      {
        v12[8] = *(_DWORD *)(a1 + 60);
        sub_1401AA0F0((__int64)a2, (__int64)a3, v23, a4);
      }
      if ( v33 )
      {
        for ( i = 0; i < a4; ++i )
          a3[i] = -a3[i];
      }
    }
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)v12 ^ v47);
}

