/* Address: 0x1401a92a0 | Name: sub_1401A92A0 | Size: 2160 bytes */
__int64 __fastcall sub_1401A92A0(float *a1, float *a2, float *a3, signed int a4)
{
  __int64 result; // rax
  float v5; // [rsp+0h] [rbp-48h]
  float v6; // [rsp+0h] [rbp-48h]
  float v7; // [rsp+0h] [rbp-48h]
  float v8; // [rsp+0h] [rbp-48h]
  int i; // [rsp+4h] [rbp-44h]
  int v10; // [rsp+4h] [rbp-44h]
  int v11; // [rsp+4h] [rbp-44h]
  float v12; // [rsp+8h] [rbp-40h]
  float v13; // [rsp+Ch] [rbp-3Ch]
  float v14; // [rsp+10h] [rbp-38h]
  float v15; // [rsp+10h] [rbp-38h]
  float v16; // [rsp+14h] [rbp-34h]
  float v17; // [rsp+18h] [rbp-30h]
  float v18; // [rsp+1Ch] [rbp-2Ch]
  float v19; // [rsp+20h] [rbp-28h]
  int v20; // [rsp+28h] [rbp-20h]
  int v21; // [rsp+30h] [rbp-18h]
  float *v23; // [rsp+50h] [rbp+8h]
  float *v24; // [rsp+58h] [rbp+10h]
  float *v25; // [rsp+58h] [rbp+10h]

  v12 = 0.0;
  v13 = *a2;
  v14 = a2[1];
  v16 = a2[2];
  v24 = a2 + 3;
  for ( i = 0; i < a4 - 3; i += 4 )
  {
    v5 = *a1;
    v23 = a1 + 1;
    v12 = *v24;
    v25 = v24 + 1;
    *a3 = *a3 + (float)(v5 * v13);
    a3[1] = a3[1] + (float)(v5 * v14);
    a3[2] = a3[2] + (float)(v5 * v16);
    a3[3] = a3[3] + (float)(v5 * v12);
    v6 = *v23++;
    v13 = *v25++;
    *a3 = *a3 + (float)(v6 * v14);
    a3[1] = a3[1] + (float)(v6 * v16);
    a3[2] = a3[2] + (float)(v6 * v12);
    a3[3] = a3[3] + (float)(v6 * v13);
    v7 = *v23++;
    v14 = *v25++;
    *a3 = *a3 + (float)(v7 * v16);
    a3[1] = a3[1] + (float)(v7 * v12);
    a3[2] = a3[2] + (float)(v7 * v13);
    a3[3] = a3[3] + (float)(v7 * v14);
    v8 = *v23;
    a1 = v23 + 1;
    v16 = *v25;
    v24 = v25 + 1;
    *a3 = *a3 + (float)(v8 * v12);
    a3[1] = a3[1] + (float)(v8 * v13);
    a3[2] = a3[2] + (float)(v8 * v14);
    a3[3] = a3[3] + (float)(v8 * v16);
  }
  v20 = i;
  v10 = i + 1;
  if ( v20 < a4 )
  {
    v17 = *a1++;
    v12 = *v24++;
    *a3 = *a3 + (float)(v17 * v13);
    a3[1] = a3[1] + (float)(v17 * v14);
    a3[2] = a3[2] + (float)(v17 * v16);
    a3[3] = a3[3] + (float)(v17 * v12);
  }
  v21 = v10;
  v11 = v10 + 1;
  if ( v21 < a4 )
  {
    v18 = *a1++;
    v13 = *v24++;
    *a3 = *a3 + (float)(v18 * v14);
    a3[1] = a3[1] + (float)(v18 * v16);
    a3[2] = a3[2] + (float)(v18 * v12);
    a3[3] = a3[3] + (float)(v18 * v13);
  }
  result = (unsigned int)a4;
  if ( v11 < a4 )
  {
    v19 = *a1;
    v15 = *v24;
    *a3 = *a3 + (float)(*a1 * v16);
    a3[1] = a3[1] + (float)(v19 * v12);
    a3[2] = a3[2] + (float)(v19 * v13);
    a3[3] = a3[3] + (float)(v19 * v15);
    return 12;
  }
  return result;
}

