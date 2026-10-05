/* Address: 0x1401a1860 | Name: sub_1401A1860 | Size: 1769 bytes */
__int64 __fastcall sub_1401A1860(__int64 a1, __int64 a2, float *a3, float *a4, int a5, int a6, int a7)
{
  void *v7; // rsp
  void *v8; // rsp
  int i; // [rsp+20h] [rbp+0h] BYREF
  float *v11; // [rsp+28h] [rbp+8h]
  int v12; // [rsp+30h] [rbp+10h]
  int v13; // [rsp+34h] [rbp+14h]
  int v14; // [rsp+38h] [rbp+18h]
  float *v15; // [rsp+40h] [rbp+20h]
  float *v16; // [rsp+48h] [rbp+28h]
  float *v17; // [rsp+50h] [rbp+30h]
  float *v18; // [rsp+58h] [rbp+38h]
  float *v19; // [rsp+60h] [rbp+40h]
  __int64 v20; // [rsp+68h] [rbp+48h]
  float *v21; // [rsp+70h] [rbp+50h]
  float v22; // [rsp+78h] [rbp+58h]
  float v23; // [rsp+7Ch] [rbp+5Ch]
  float v24; // [rsp+80h] [rbp+60h]
  float v25; // [rsp+84h] [rbp+64h]
  float v26; // [rsp+88h] [rbp+68h]
  __int64 v27; // [rsp+90h] [rbp+70h]
  __int64 v28; // [rsp+98h] [rbp+78h]
  float v29; // [rsp+A0h] [rbp+80h]
  float v30; // [rsp+A4h] [rbp+84h]
  float v31; // [rsp+A8h] [rbp+88h]
  float v32; // [rsp+ACh] [rbp+8Ch]
  __int64 v33; // [rsp+B0h] [rbp+90h]
  CGlobalUtils *v34; // [rsp+B8h] [rbp+98h]
  float *v35; // [rsp+C0h] [rbp+A0h]
  float *v36; // [rsp+C8h] [rbp+A8h]
  int *p_i; // [rsp+D0h] [rbp+B0h]
  __int64 v38; // [rsp+D8h] [rbp+B8h]
  __int64 v39; // [rsp+E0h] [rbp+C0h]

  v33 = *(_QWORD *)(a1 + 8LL * a6 + 8);
  v26 = *(float *)(v33 + 4);
  v14 = *(_DWORD *)a1;
  v27 = *(_QWORD *)(a1 + 40);
  for ( i = 0; i < a6; ++i )
  {
    v14 >>= 1;
    v27 += 4LL * v14;
  }
  v13 = v14 >> 1;
  v12 = v14 >> 2;
  v7 = alloca(sub_1401F89D0());
  p_i = &i;
  v8 = alloca(sub_1401F89D0());
  v34 = (CGlobalUtils *)&i;
  v15 = (float *)(a2 + 4LL * (a5 >> 1));
  v16 = (float *)(a2 + 4LL * v13 + 4LL * (a5 >> 1) - 4);
  v11 = (float *)p_i;
  v17 = &a4[a5 >> 1];
  v18 = v17 - 1;
  for ( i = 0; i < (a5 + 3) >> 2; ++i )
  {
    *v11++ = (float)(*v18 * v15[v13]) + (float)(*v17 * *v16);
    *v11++ = (float)(*v17 * *v15) - (float)(*v18 * v16[-v13]);
    v15 += 2;
    v16 -= 2;
    v17 += 2;
    v18 -= 2;
  }
  v17 = a4;
  v18 = &a4[a5 - 1];
  while ( i < v12 - ((a5 + 3) >> 2) )
  {
    *v11++ = *v16;
    *v11++ = *v15;
    v15 += 2;
    v16 -= 2;
    ++i;
  }
  while ( i < v12 )
  {
    *v11++ = (float)(*v18 * *v16) - (float)(*v17 * v15[-v13]);
    *v11++ = (float)(*v18 * *v15) + (float)(*v17 * v16[v13]);
    v15 += 2;
    v16 -= 2;
    v17 += 2;
    v18 -= 2;
    ++i;
  }
  v19 = (float *)p_i;
  v38 = v27;
  for ( i = 0; i < v12; ++i )
  {
    v23 = *(float *)(v38 + 4LL * i);
    v25 = *(float *)(v38 + 4LL * (i + v12));
    v24 = *v19++;
    v22 = *v19++;
    v29 = (float)(v24 * v23) - (float)(v22 * v25);
    v30 = (float)(v22 * v23) + (float)(v24 * v25);
    *(float *)&v20 = v26 * v29;
    *((float *)&v20 + 1) = v26 * v30;
    *((_QWORD *)v34 + *(__int16 *)(*(_QWORD *)(v33 + 48) + 2LL * i)) = v20;
  }
  sub_1401A15A0(v33, v34);
  v21 = (float *)v34;
  v35 = a3;
  v36 = &a3[(v13 - 1) * a7];
  v28 = v27;
  for ( i = 0; i < v12; ++i )
  {
    v31 = (float)(v21[1] * *(float *)(v28 + 4LL * (i + v12))) - (float)(*v21 * *(float *)(v28 + 4LL * i));
    v32 = (float)(*v21 * *(float *)(v28 + 4LL * (i + v12))) + (float)(v21[1] * *(float *)(v28 + 4LL * i));
    *v35 = v31;
    *v36 = v32;
    v21 += 2;
    v35 += 2 * a7;
    v36 -= 2 * a7;
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&i ^ v39);
}

