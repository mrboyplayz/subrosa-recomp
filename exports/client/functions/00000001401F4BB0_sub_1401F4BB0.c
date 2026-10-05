/* Address: 0x1401f4bb0 | Name: sub_1401F4BB0 | Size: 2093 bytes */
float __fastcall sub_1401F4BB0(__int64 a1, int a2, int a3, float *a4)
{
  float v4; // xmm0_4
  float v5; // xmm0_4
  float v6; // xmm0_4
  float v7; // xmm0_4
  float v8; // xmm0_4
  float v9; // xmm0_4
  float v11; // [rsp+20h] [rbp-78h]
  float v12; // [rsp+20h] [rbp-78h]
  float v13; // [rsp+20h] [rbp-78h]
  float v14; // [rsp+20h] [rbp-78h]
  float v15; // [rsp+24h] [rbp-74h]
  float v16; // [rsp+24h] [rbp-74h]
  float v17; // [rsp+24h] [rbp-74h]
  float v18; // [rsp+24h] [rbp-74h]
  int i; // [rsp+28h] [rbp-70h]
  float v20; // [rsp+2Ch] [rbp-6Ch]
  float v21; // [rsp+30h] [rbp-68h]
  float v22; // [rsp+30h] [rbp-68h]
  float v23; // [rsp+30h] [rbp-68h]
  float v24; // [rsp+34h] [rbp-64h]
  float v25; // [rsp+34h] [rbp-64h]
  float v26; // [rsp+34h] [rbp-64h]
  float v27; // [rsp+38h] [rbp-60h]
  float v28; // [rsp+38h] [rbp-60h]
  float v29; // [rsp+38h] [rbp-60h]
  float v30; // [rsp+3Ch] [rbp-5Ch]
  float v31; // [rsp+40h] [rbp-58h]
  int v32; // [rsp+44h] [rbp-54h]
  float v33; // [rsp+48h] [rbp-50h]
  float v34; // [rsp+4Ch] [rbp-4Ch]
  float v35; // [rsp+50h] [rbp-48h]
  int v36; // [rsp+54h] [rbp-44h]
  float v37; // [rsp+58h] [rbp-40h]
  int v38; // [rsp+5Ch] [rbp-3Ch]
  int v39; // [rsp+60h] [rbp-38h]
  float v40; // [rsp+64h] [rbp-34h]
  float v41; // [rsp+68h] [rbp-30h]
  float v42; // [rsp+6Ch] [rbp-2Ch]
  float v43; // [rsp+70h] [rbp-28h]
  float v44; // [rsp+74h] [rbp-24h]
  float v45; // [rsp+78h] [rbp-20h]
  float v47; // [rsp+80h] [rbp-18h]

  v32 = a3 / a2;
  if ( a3 / a2 >= 50 )
    v36 = a3 / a2;
  else
    v36 = 50;
  v35 = 1.0 - (float)(25.0 / (float)v36);
  v20 = 0.0;
  v31 = 0.0;
  v30 = 0.0;
  for ( i = 0; i < a2 - 3; i += 4 )
  {
    v11 = *(float *)(a1 + 8LL * i);
    v15 = *(float *)(a1 + 4LL * (2 * i + 1));
    v21 = v11 * v11;
    v24 = v11 * v15;
    v27 = v15 * v15;
    v12 = *(float *)(a1 + 4LL * (2 * i + 2));
    v16 = *(float *)(a1 + 4LL * (2 * i + 3));
    v22 = v21 + (float)(v12 * v12);
    v25 = v24 + (float)(v12 * v16);
    v28 = v27 + (float)(v16 * v16);
    v13 = *(float *)(a1 + 4LL * (2 * i + 4));
    v17 = *(float *)(a1 + 4LL * (2 * i + 5));
    v23 = v22 + (float)(v13 * v13);
    v26 = v25 + (float)(v13 * v17);
    v29 = v28 + (float)(v17 * v17);
    v14 = *(float *)(a1 + 4LL * (2 * i + 6));
    v18 = *(float *)(a1 + 4LL * (2 * i + 7));
    v30 = v30 + (float)(v23 + (float)(v14 * v14));
    v31 = v31 + (float)(v26 + (float)(v14 * v18));
    v20 = v20 + (float)(v29 + (float)(v18 * v18));
  }
  if ( v30 >= 1000000000.0 || v20 >= 1000000000.0 )
  {
    v20 = 0.0;
    v30 = 0.0;
    v31 = 0.0;
  }
  *a4 = *a4 + (float)(v35 * (float)(v30 - *a4));
  a4[1] = a4[1] + (float)(v35 * (float)(v31 - a4[1]));
  a4[2] = a4[2] + (float)(v35 * (float)(v20 - a4[2]));
  if ( *a4 >= 0.0 )
    v37 = *a4;
  else
    v37 = 0.0;
  *a4 = v37;
  if ( a4[1] >= 0.0 )
    v38 = *((_DWORD *)a4 + 1);
  else
    v38 = 0;
  *((_DWORD *)a4 + 1) = v38;
  if ( a4[2] >= 0.0 )
    v39 = *((_DWORD *)a4 + 2);
  else
    v39 = 0;
  *((_DWORD *)a4 + 2) = v39;
  if ( *a4 <= a4[2] )
    v40 = a4[2];
  else
    v40 = *a4;
  if ( v40 > 0.00079999998 )
  {
    v4 = sqrt(*a4);
    v33 = v4;
    v5 = sqrt(a4[2]);
    v34 = v5;
    v6 = sqrt(v33);
    v42 = v6;
    v7 = sqrt(v34);
    v43 = v7;
    if ( (float)(v33 * v34) <= a4[1] )
      v41 = v33 * v34;
    else
      v41 = a4[1];
    a4[1] = v41;
    v44 = a4[1] / (float)((float)(v33 * v34) + 1.0e-15);
    v8 = sub_140244390();
    v47 = (float)(1.0 * v8) / (float)((float)(v42 + 1.0e-15) + v43);
    v9 = sqrt((float)(1.0 - (float)(v44 * v44)));
    a4[3] = a4[3] + (float)((float)((float)(v9 * v47) - a4[3]) / (float)v32);
    if ( (float)(a4[4] - (float)(0.02 / (float)v32)) <= a4[3] )
      v45 = a4[3];
    else
      v45 = a4[4] - (float)(0.02 / (float)v32);
    a4[4] = v45;
  }
  if ( (float)(20.0 * a4[4]) <= 1.0 )
    return 20.0 * a4[4];
  else
    return 1.0;
}

