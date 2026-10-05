/* Address: 0x1401b6fa0 | Name: sub_1401B6FA0 | Size: 1382 bytes */
__int64 __fastcall sub_1401B6FA0(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, int a6)
{
  int i; // [rsp+0h] [rbp-78h] BYREF
  float *v8; // [rsp+8h] [rbp-70h]
  float *v9; // [rsp+10h] [rbp-68h]
  __int64 v10; // [rsp+18h] [rbp-60h]
  __int64 v11; // [rsp+20h] [rbp-58h]
  __int64 v12; // [rsp+28h] [rbp-50h]
  __int64 v13; // [rsp+30h] [rbp-48h]
  float v14; // [rsp+38h] [rbp-40h]
  float v15; // [rsp+3Ch] [rbp-3Ch]
  float v16; // [rsp+40h] [rbp-38h]
  float v17; // [rsp+44h] [rbp-34h]
  float v18; // [rsp+48h] [rbp-30h]
  float v19; // [rsp+4Ch] [rbp-2Ch]
  float v20; // [rsp+50h] [rbp-28h]
  float v21; // [rsp+54h] [rbp-24h]
  __int64 v22; // [rsp+60h] [rbp-18h]
  float *v23; // [rsp+80h] [rbp+8h]

  v10 = 2 * a4;
  v13 = a1;
  v12 = *(_QWORD *)(*(_QWORD *)(a3 + 56) + 8 * a4 * a2);
  for ( i = 0; i < a5; ++i )
  {
    v23 = (float *)(v13 + 8LL * a6 * i);
    v8 = *(float **)(a3 + 56);
    v9 = v8;
    v11 = a4;
    do
    {
      v16 = (float)(v23[2 * a4] * *v9) - (float)(v23[2 * a4 + 1] * v9[1]);
      v17 = (float)(v23[2 * a4] * v9[1]) + (float)(v23[2 * a4 + 1] * *v9);
      v18 = (float)(v23[2 * v10] * *v8) - (float)(v23[2 * v10 + 1] * v8[1]);
      v19 = (float)(v23[2 * v10] * v8[1]) + (float)(v23[2 * v10 + 1] * *v8);
      v20 = v16 + v18;
      v21 = v17 + v19;
      v14 = v16 - v18;
      v15 = v17 - v19;
      v9 += 2 * a2;
      v8 += 4 * a2;
      v23[2 * a4] = *v23 - (float)((float)(v16 + v18) * 0.5);
      v23[2 * a4 + 1] = v23[1] - (float)(v21 * 0.5);
      v14 = v14 * *((float *)&v12 + 1);
      v15 = v15 * *((float *)&v12 + 1);
      *v23 = *v23 + v20;
      v23[1] = v23[1] + v21;
      v23[2 * v10] = v23[2 * a4] + v15;
      v23[2 * v10 + 1] = v23[2 * a4 + 1] - v14;
      v23[2 * a4] = v23[2 * a4] - v15;
      v23[2 * a4 + 1] = v23[2 * a4 + 1] + v14;
      v23 += 2;
      --v11;
    }
    while ( v11 );
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&i ^ v22);
}

