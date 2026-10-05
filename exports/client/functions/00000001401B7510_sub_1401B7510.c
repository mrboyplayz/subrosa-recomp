/* Address: 0x1401b7510 | Name: sub_1401B7510 | Size: 2665 bytes */
__int64 __fastcall sub_1401B7510(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, int a6)
{
  int j; // [rsp+0h] [rbp-E8h] BYREF
  __int64 v8; // [rsp+8h] [rbp-E0h]
  float *v9; // [rsp+10h] [rbp-D8h]
  int i; // [rsp+18h] [rbp-D0h]
  __int64 v11; // [rsp+20h] [rbp-C8h]
  __int64 v12; // [rsp+28h] [rbp-C0h]
  float *v13; // [rsp+30h] [rbp-B8h]
  float *v14; // [rsp+38h] [rbp-B0h]
  float *v15; // [rsp+40h] [rbp-A8h]
  float *v16; // [rsp+48h] [rbp-A0h]
  __int64 v17; // [rsp+50h] [rbp-98h]
  __int64 v18; // [rsp+60h] [rbp-88h]
  float v19; // [rsp+68h] [rbp-80h]
  float v20; // [rsp+6Ch] [rbp-7Ch]
  float v21; // [rsp+70h] [rbp-78h]
  float v22; // [rsp+74h] [rbp-74h]
  float v23; // [rsp+78h] [rbp-70h]
  float v24; // [rsp+7Ch] [rbp-6Ch]
  float v25; // [rsp+80h] [rbp-68h]
  float v26; // [rsp+84h] [rbp-64h]
  float v27; // [rsp+88h] [rbp-60h]
  float v28; // [rsp+8Ch] [rbp-5Ch]
  float v29; // [rsp+90h] [rbp-58h]
  float v30; // [rsp+94h] [rbp-54h]
  float v31; // [rsp+98h] [rbp-50h]
  float v32; // [rsp+9Ch] [rbp-4Ch]
  float v33; // [rsp+A0h] [rbp-48h]
  float v34; // [rsp+A4h] [rbp-44h]
  float v35; // [rsp+A8h] [rbp-40h]
  float v36; // [rsp+ACh] [rbp-3Ch]
  float v37; // [rsp+B0h] [rbp-38h]
  float v38; // [rsp+B4h] [rbp-34h]
  float v39; // [rsp+B8h] [rbp-30h]
  float v40; // [rsp+BCh] [rbp-2Ch]
  float v41; // [rsp+C0h] [rbp-28h]
  float v42; // [rsp+C4h] [rbp-24h]
  __int64 v43; // [rsp+D0h] [rbp-18h]

  v17 = a1;
  v12 = *(_QWORD *)(*(_QWORD *)(a3 + 56) + 8 * a4 * a2);
  v11 = *(_QWORD *)(*(_QWORD *)(a3 + 56) + 8 * a4 * 2 * a2);
  v8 = *(_QWORD *)(a3 + 56);
  for ( i = 0; i < a5; ++i )
  {
    v9 = (float *)(v17 + 8LL * a6 * i);
    v13 = &v9[2 * a4];
    v14 = &v9[4 * a4];
    v15 = &v9[6 * a4];
    v16 = &v9[8 * a4];
    for ( j = 0; j < a4; ++j )
    {
      v18 = *(_QWORD *)v9;
      v19 = (float)(*v13 * *(float *)(v8 + 8 * a2 * j)) - (float)(v13[1] * *(float *)(v8 + 8 * a2 * j + 4));
      v20 = (float)(*v13 * *(float *)(v8 + 8 * a2 * j + 4)) + (float)(v13[1] * *(float *)(v8 + 8 * a2 * j));
      v21 = (float)(*v14 * *(float *)(v8 + 8 * a2 * 2 * j)) - (float)(v14[1] * *(float *)(v8 + 8 * a2 * 2 * j + 4));
      v22 = (float)(*v14 * *(float *)(v8 + 8 * a2 * 2 * j + 4)) + (float)(v14[1] * *(float *)(v8 + 8 * a2 * 2 * j));
      v23 = (float)(*v15 * *(float *)(v8 + 8 * a2 * 3 * j)) - (float)(v15[1] * *(float *)(v8 + 8 * a2 * 3 * j + 4));
      v24 = (float)(*v15 * *(float *)(v8 + 8 * a2 * 3 * j + 4)) + (float)(v15[1] * *(float *)(v8 + 8 * a2 * 3 * j));
      v25 = (float)(*v16 * *(float *)(v8 + 8 * a2 * 4 * j)) - (float)(v16[1] * *(float *)(v8 + 8 * a2 * 4 * j + 4));
      v26 = (float)(*v16 * *(float *)(v8 + 8 * a2 * 4 * j + 4)) + (float)(v16[1] * *(float *)(v8 + 8 * a2 * 4 * j));
      v31 = v19 + v25;
      v32 = v20 + v26;
      v37 = v19 - v25;
      v38 = v20 - v26;
      v33 = v21 + v23;
      v34 = v22 + v24;
      v35 = v21 - v23;
      v36 = v22 - v24;
      *v9 = *v9 + (float)((float)(v19 + v25) + (float)(v21 + v23));
      v9[1] = v9[1] + (float)(v32 + v34);
      v27 = *(float *)&v18 + (float)((float)(v31 * *(float *)&v12) + (float)(v33 * *(float *)&v11));
      v28 = *((float *)&v18 + 1) + (float)((float)(v32 * *(float *)&v12) + (float)(v34 * *(float *)&v11));
      v29 = (float)(v38 * *((float *)&v12 + 1)) + (float)(v36 * *((float *)&v11 + 1));
      v30 = -(float)((float)(v37 * *((float *)&v12 + 1)) + (float)(v35 * *((float *)&v11 + 1)));
      *v13 = v27 - v29;
      v13[1] = v28 - v30;
      *v16 = v27 + v29;
      v16[1] = v28 + v30;
      v39 = *(float *)&v18 + (float)((float)(v31 * *(float *)&v11) + (float)(v33 * *(float *)&v12));
      v40 = *((float *)&v18 + 1) + (float)((float)(v32 * *(float *)&v11) + (float)(v34 * *(float *)&v12));
      v41 = (float)(v36 * *((float *)&v12 + 1)) - (float)(v38 * *((float *)&v11 + 1));
      v42 = (float)(v37 * *((float *)&v11 + 1)) - (float)(v35 * *((float *)&v12 + 1));
      *v14 = v39 + v41;
      v14[1] = v40 + v42;
      *v15 = v39 - v41;
      v15[1] = v40 - v42;
      v9 += 2;
      v13 += 2;
      v14 += 2;
      v15 += 2;
      v16 += 2;
    }
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&j ^ v43);
}

