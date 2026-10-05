/* Address: 0x1401af4f0 | Name: sub_1401AF4F0 | Size: 3089 bytes */
__int64 __fastcall sub_1401AF4F0(
        __int64 a1,
        int a2,
        int a3,
        __int64 a4,
        int a5,
        __int64 a6,
        int a7,
        int a8,
        float a9,
        int a10,
        __int64 a11)
{
  void *v11; // rsp
  void *v12; // rsp
  void *v13; // rsp
  void *v14; // rsp
  void *v15; // rsp
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // eax
  int v24; // eax
  int v25; // eax
  int i; // [rsp+20h] [rbp+0h] BYREF
  int v28; // [rsp+24h] [rbp+4h]
  int v29; // [rsp+28h] [rbp+8h]
  int j; // [rsp+2Ch] [rbp+Ch]
  int k; // [rsp+30h] [rbp+10h]
  int v32; // [rsp+34h] [rbp+14h]
  float v33; // [rsp+38h] [rbp+18h]
  int v34; // [rsp+3Ch] [rbp+1Ch]
  int *v35; // [rsp+40h] [rbp+20h]
  int v36; // [rsp+48h] [rbp+28h]
  int v37; // [rsp+4Ch] [rbp+2Ch]
  float v38; // [rsp+50h] [rbp+30h]
  int v39; // [rsp+54h] [rbp+34h]
  float v40; // [rsp+58h] [rbp+38h]
  BOOL v41; // [rsp+5Ch] [rbp+3Ch]
  int *v42; // [rsp+60h] [rbp+40h]
  int v43; // [rsp+68h] [rbp+48h]
  BOOL v44; // [rsp+6Ch] [rbp+4Ch]
  int v45; // [rsp+70h] [rbp+50h]
  int v46; // [rsp+74h] [rbp+54h]
  int v47; // [rsp+78h] [rbp+58h]
  int v48; // [rsp+7Ch] [rbp+5Ch]
  int v49; // [rsp+80h] [rbp+60h]
  int v50; // [rsp+84h] [rbp+64h]
  int v51; // [rsp+88h] [rbp+68h]
  int v52; // [rsp+8Ch] [rbp+6Ch]
  BOOL v53; // [rsp+90h] [rbp+70h]
  float v54; // [rsp+94h] [rbp+74h]
  BOOL v55; // [rsp+98h] [rbp+78h]
  int *v56; // [rsp+A0h] [rbp+80h]
  int v57; // [rsp+A8h] [rbp+88h]
  int v58; // [rsp+ACh] [rbp+8Ch]
  int v59; // [rsp+B0h] [rbp+90h]
  int v60; // [rsp+B4h] [rbp+94h]
  int v61; // [rsp+B8h] [rbp+98h]
  int v62; // [rsp+BCh] [rbp+9Ch]
  int *v63; // [rsp+C0h] [rbp+A0h]
  int *v64; // [rsp+C8h] [rbp+A8h]
  _DWORD v65[2]; // [rsp+D0h] [rbp+B0h]
  __int64 v66; // [rsp+D8h] [rbp+B8h]
  __int64 v67; // [rsp+E0h] [rbp+C0h]
  __int64 v68; // [rsp+E8h] [rbp+C8h]
  __int64 v69; // [rsp+F0h] [rbp+D0h]
  __int64 v70; // [rsp+F8h] [rbp+D8h]
  __int64 v71; // [rsp+100h] [rbp+E0h]
  __int64 v72; // [rsp+108h] [rbp+E8h]
  __int64 v73; // [rsp+110h] [rbp+F0h]
  __int64 v74; // [rsp+118h] [rbp+F8h]

  v34 = 0;
  if ( (float)(0.5 - a9) >= -0.25 )
    v54 = 0.5 - a9;
  else
    v54 = -0.25;
  v40 = 0.039999999 * v54;
  v11 = alloca(sub_1401F89D0());
  v35 = &i;
  v12 = alloca(sub_1401F89D0());
  v42 = &i;
  v13 = alloca(sub_1401F89D0());
  v56 = &i;
  v14 = alloca(sub_1401F89D0());
  v64 = &i;
  v15 = alloca(sub_1401F89D0());
  v63 = &i;
  for ( i = 0; i < a2; ++i )
  {
    v39 = 0;
    v32 = (*(__int16 *)(*(_QWORD *)(a1 + 32) + 2LL * (i + 1)) - *(__int16 *)(*(_QWORD *)(a1 + 32) + 2LL * i)) << a8;
    v55 = *(__int16 *)(*(_QWORD *)(a1 + 32) + 2LL * (i + 1)) - *(__int16 *)(*(_QWORD *)(a1 + 32) + 2LL * i) == 1;
    v41 = v55;
    v61 = a7 * a10;
    v62 = a7 * a10;
    MEMORY[0x1401FC920](v42, a6 + 4LL * ((*(__int16 *)(*(_QWORD *)(a1 + 32) + 2LL * i) << a8) + a7 * a10));
    if ( a3 )
      v43 = a8;
    else
      v43 = 0;
    v33 = sub_1401AF440((__int64)v42, v32, v43, v40);
    v38 = v33;
    if ( a3 )
    {
      if ( !v41 )
      {
        MEMORY[0x1401FC920](v56, v42);
        v57 = 1;
        sub_1401A3F20((__int64)v56, v32 >> a8, 1 << a8);
        v33 = sub_1401AF440((__int64)v56, v32, a8 + 1, v40);
        if ( v38 > v33 )
        {
          v38 = v33;
          v39 = -1;
        }
      }
    }
    for ( j = 0; ; ++j )
    {
      v44 = !a3 && !v41;
      if ( j >= v44 + a8 )
        break;
      if ( a3 )
        v45 = a8 - j - 1;
      else
        v45 = j + 1;
      v58 = 1;
      sub_1401A3F20((__int64)v42, v32 >> j, 1 << j);
      v33 = sub_1401AF440((__int64)v42, v32, v45, v40);
      if ( v38 > v33 )
      {
        v38 = v33;
        v39 = j + 1;
      }
    }
    if ( a3 )
      v16 = 2 * v39;
    else
      v16 = -2 * v39;
    v35[i] = v16;
    if ( v41 && (!v35[i] || v35[i] == -2 * a8) )
      --v35[i];
  }
  v34 = 0;
  for ( k = 0; k < 2; ++k )
  {
    v66 = 0;
    v17 = abs(*v35 - 2 * byte_14027BB98[8 * a8 + 4 * a3 + 2 * k]);
    v28 = v17 * *(_DWORD *)(a11 + v66);
    if ( a3 )
      v46 = 0;
    else
      v46 = a5;
    v67 = 0;
    v18 = abs(*v35 - 2 * byte_14027BB98[8 * a8 + 1 + 4 * a3 + 2 * k]);
    v29 = v46 + v18 * *(_DWORD *)(a11 + v67);
    for ( i = 1; i < a2; ++i )
    {
      if ( v28 >= a5 + v29 )
        v47 = a5 + v29;
      else
        v47 = v28;
      v59 = v47;
      if ( a5 + v28 >= v29 )
        v48 = v29;
      else
        v48 = a5 + v28;
      v60 = v48;
      v68 = i;
      v19 = abs(v35[i] - 2 * byte_14027BB98[8 * a8 + 4 * a3 + 2 * k]);
      v28 = v19 * *(_DWORD *)(a11 + 4 * v68) + v59;
      v69 = i;
      v20 = abs(v35[i] - 2 * byte_14027BB98[8 * a8 + 1 + 4 * a3 + 2 * k]);
      v29 = v20 * *(_DWORD *)(a11 + 4 * v69) + v60;
    }
    if ( v28 >= v29 )
      v49 = v29;
    else
      v49 = v28;
    v28 = v49;
    v65[k] = v49;
  }
  if ( v65[1] < v65[0] && a3 )
    v34 = 1;
  v70 = 0;
  v21 = abs(*v35 - 2 * byte_14027BB98[8 * a8 + 4 * a3 + 2 * v34]);
  v28 = v21 * *(_DWORD *)(a11 + v70);
  if ( a3 )
    v50 = 0;
  else
    v50 = a5;
  v71 = 0;
  v22 = abs(*v35 - 2 * byte_14027BB98[8 * a8 + 1 + 4 * a3 + 2 * v34]);
  v29 = v50 + v22 * *(_DWORD *)(a11 + v71);
  for ( i = 1; i < a2; ++i )
  {
    v36 = v28;
    v37 = a5 + v29;
    if ( v28 >= a5 + v29 )
    {
      v51 = v37;
      v64[i] = 1;
    }
    else
    {
      v51 = v36;
      v64[i] = 0;
    }
    v36 = a5 + v28;
    v37 = v29;
    if ( a5 + v28 >= v29 )
    {
      v52 = v37;
      v63[i] = 1;
    }
    else
    {
      v52 = v36;
      v63[i] = 0;
    }
    v72 = i;
    v23 = abs(v35[i] - 2 * byte_14027BB98[8 * a8 + 4 * a3 + 2 * v34]);
    v28 = v23 * *(_DWORD *)(a11 + 4 * v72) + v51;
    v73 = i;
    v24 = abs(v35[i] - 2 * byte_14027BB98[8 * a8 + 1 + 4 * a3 + 2 * v34]);
    v29 = v24 * *(_DWORD *)(a11 + 4 * v73) + v52;
  }
  v53 = v28 >= v29;
  *(_DWORD *)(a4 + 4LL * (a2 - 1)) = v53;
  for ( i = a2 - 2; i >= 0; --i )
  {
    if ( *(_DWORD *)(a4 + 4LL * (i + 1)) == 1 )
      v25 = v63[i + 1];
    else
      v25 = v64[i + 1];
    *(_DWORD *)(a4 + 4LL * i) = v25;
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&i ^ v74);
}

