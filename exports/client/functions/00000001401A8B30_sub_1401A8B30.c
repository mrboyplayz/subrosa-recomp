/* Address: 0x1401a8b30 | Name: sub_1401A8B30 | Size: 1892 bytes */
__int64 __fastcall sub_1401A8B30(__int64 a1, int a2, int a3, int a4, int *a5, int a6, float a7)
{
  void *v7; // rsp
  float v8; // xmm0_4
  int j; // [rsp+30h] [rbp+0h] BYREF
  float v11; // [rsp+34h] [rbp+4h]
  int v12; // [rsp+38h] [rbp+8h]
  int v13; // [rsp+3Ch] [rbp+Ch]
  float v14; // [rsp+40h] [rbp+10h]
  int i; // [rsp+44h] [rbp+14h]
  float v16; // [rsp+48h] [rbp+18h]
  float v17; // [rsp+4Ch] [rbp+1Ch] BYREF
  float v18; // [rsp+50h] [rbp+20h]
  int v19; // [rsp+54h] [rbp+24h]
  float v20; // [rsp+58h] [rbp+28h] BYREF
  float v21; // [rsp+5Ch] [rbp+2Ch]
  float v22; // [rsp+60h] [rbp+30h]
  float v23; // [rsp+64h] [rbp+34h]
  float v24; // [rsp+68h] [rbp+38h]
  int v25; // [rsp+6Ch] [rbp+3Ch]
  int v26; // [rsp+70h] [rbp+40h]
  float v27; // [rsp+74h] [rbp+44h]
  float v28; // [rsp+78h] [rbp+48h]
  float v29; // [rsp+7Ch] [rbp+4Ch]
  float v30; // [rsp+80h] [rbp+50h]
  float v31; // [rsp+84h] [rbp+54h]
  float v32; // [rsp+88h] [rbp+58h]
  int v33; // [rsp+8Ch] [rbp+5Ch]
  int *v34; // [rsp+90h] [rbp+60h]
  float v35; // [rsp+98h] [rbp+68h] BYREF
  _DWORD v36[4]; // [rsp+A0h] [rbp+70h]
  float v37; // [rsp+A4h] [rbp+74h]
  float v38; // [rsp+A8h] [rbp+78h]
  __int64 v39; // [rsp+B0h] [rbp+80h]
  __int64 v40; // [rsp+D0h] [rbp+A0h]
  int v41; // [rsp+D8h] [rbp+A8h]
  int v42; // [rsp+E0h] [rbp+B0h]
  unsigned int v43; // [rsp+E8h] [rbp+B8h]
  int v44; // [rsp+F8h] [rbp+C8h]

  v33 = a3;
  v41 = a2 / 2;
  v42 = a3 / 2;
  *a5 /= 2;
  v44 = a6 / 2;
  v43 = a4 / 2;
  v40 = a1 + 4LL * (a2 / 2);
  if ( *a5 >= a2 / 2 )
    *a5 = v41 - 1;
  v13 = *a5;
  v26 = v13;
  v7 = alloca(sub_1401F89D0());
  v34 = &j;
  sub_1401A9B20(v40, v40, v40 - 4 * v13, v43, (__int64)&v20, (__int64)&v17);
  *(float *)v34 = v20;
  v11 = v20;
  for ( i = 1; i <= v41; ++i )
  {
    v11 = (float)(v11 + (float)(*(float *)(v40 + 4LL * -i) * *(float *)(v40 + 4LL * -i)))
        - (float)(*(float *)(v40 + 4LL * (int)(v43 - i)) * *(float *)(v40 + 4LL * (int)(v43 - i)));
    if ( v11 >= 0.0 )
      v27 = v11;
    else
      v27 = 0.0;
    *(float *)&v34[i] = v27;
  }
  v11 = *(float *)&v34[v13];
  v18 = v17;
  v23 = v11;
  v16 = sub_1401B8890();
  v24 = v16;
  for ( j = 2; j <= 15; ++j )
  {
    v14 = 0.0;
    v12 = sub_14019A1A0((unsigned int)(j + 2 * v13), (unsigned int)(2 * j));
    if ( v12 < v42 )
      break;
    if ( j == 2 )
    {
      if ( v13 + v12 <= v41 )
        v19 = v12 + v13;
      else
        v19 = v13;
    }
    else
    {
      v19 = sub_14019A1A0((unsigned int)(j + v13 * 2 * dword_140281F00[j]), (unsigned int)(2 * j));
    }
    sub_1401A9B20(v40, v40 - 4 * v12, v40 - 4 * v19, v43, (__int64)&v17, (__int64)&v35);
    v17 = 0.5 * (float)(v17 + v35);
    v11 = 0.5 * (float)(*(float *)&v34[v12] + *(float *)&v34[v19]);
    v31 = sub_1401B8890();
    if ( abs(v12 - v44) > 1 )
    {
      if ( abs(v12 - v44) > 2 || j * 5 * j >= v13 )
        v14 = 0.0;
      else
        v14 = 0.5 * a7;
    }
    else
    {
      v14 = a7;
    }
    if ( (float)((float)(0.69999999 * v16) - v14) >= 0.30000001 )
      v28 = (float)(0.69999999 * v16) - v14;
    else
      v28 = 0.30000001;
    v22 = v28;
    if ( v12 >= 3 * v42 )
    {
      if ( v12 < 2 * v42 )
      {
        if ( (float)((float)(0.89999998 * v16) - v14) >= 0.5 )
          v30 = (float)(0.89999998 * v16) - v14;
        else
          v30 = 0.5;
        v22 = v30;
      }
    }
    else
    {
      if ( (float)((float)(0.85000002 * v16) - v14) >= 0.40000001 )
        v29 = (float)(0.85000002 * v16) - v14;
      else
        v29 = 0.40000001;
      v22 = v29;
    }
    if ( v31 > v22 )
    {
      v18 = v17;
      v23 = v11;
      v26 = v12;
      v24 = v31;
    }
  }
  if ( v18 >= 0.0 )
    v32 = v18;
  else
    v32 = 0.0;
  v18 = v32;
  if ( v32 < v23 )
    v21 = v18 / (float)(v23 + 1.0);
  else
    v21 = 1.0;
  for ( j = 0; j < 3; ++j )
  {
    v8 = sub_1401A9C00(v40, v40 - 4LL * (v26 + j - 1), v43);
    *(float *)&v36[j] = v8;
  }
  if ( (float)(v38 - *(float *)v36) <= (float)(0.69999999 * (float)(v37 - *(float *)v36)) )
  {
    if ( (float)(*(float *)v36 - v38) <= (float)(0.69999999 * (float)(v37 - v38)) )
      v25 = 0;
    else
      v25 = -1;
  }
  else
  {
    v25 = 1;
  }
  if ( v21 > v24 )
    v21 = v24;
  *a5 = v25 + 2 * v26;
  if ( *a5 < v33 )
    *a5 = v33;
  return MEMORY[0x1401F8B20]((unsigned __int64)&j ^ v39);
}

