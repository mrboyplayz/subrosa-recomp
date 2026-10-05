/* Address: 0x1401ad990 | Name: sub_1401AD990 | Size: 1543 bytes */
__int64 __fastcall sub_1401AD990(__int64 a1, float *a2, __int64 a3, int a4, signed int a5, __int64 a6)
{
  void *v6; // rsp
  void *v7; // rsp
  signed int i; // [rsp+20h] [rbp+0h] BYREF
  signed int *v10; // [rsp+28h] [rbp+8h]
  signed int j; // [rsp+30h] [rbp+10h]
  float v12; // [rsp+34h] [rbp+14h]
  float *v13; // [rsp+38h] [rbp+18h]
  float v14; // [rsp+40h] [rbp+20h] BYREF
  float v15; // [rsp+44h] [rbp+24h]
  float v16; // [rsp+48h] [rbp+28h]
  float v17; // [rsp+4Ch] [rbp+2Ch]
  __int64 v18; // [rsp+50h] [rbp+30h]

  v6 = alloca(sub_1401F89D0());
  v13 = (float *)&i;
  v7 = alloca(sub_1401F89D0());
  v10 = &i;
  for ( i = 0; i < a5; ++i )
    v13[i] = a2[a5 - i - 1];
  for ( i = 0; i < a5; ++i )
    *(float *)&v10[i] = -*(float *)(a6 + 4LL * (a5 - i - 1));
  while ( i < a5 + a4 )
    v10[i++] = 0;
  for ( i = 0; i < a4 - 3; i += 4 )
  {
    v14 = *(float *)(a1 + 4LL * i);
    v15 = *(float *)(a1 + 4LL * (i + 1));
    v16 = *(float *)(a1 + 4LL * (i + 2));
    v17 = *(float *)(a1 + 4LL * (i + 3));
    sub_1401A92A0(v13, (float *)&v10[i], &v14, a5);
    *(float *)&v10[a5 + i] = -v14;
    *(float *)(a3 + 4LL * i) = v14;
    v15 = v15 + (float)(*(float *)&v10[a5 + i] * *a2);
    *(float *)&v10[i + 1 + a5] = -v15;
    *(float *)(a3 + 4LL * (i + 1)) = v15;
    v16 = v16 + (float)(*(float *)&v10[i + 1 + a5] * *a2);
    v16 = v16 + (float)(*(float *)&v10[a5 + i] * a2[1]);
    *(float *)&v10[i + 2 + a5] = -v16;
    *(float *)(a3 + 4LL * (i + 2)) = v16;
    v17 = v17 + (float)(*(float *)&v10[i + 2 + a5] * *a2);
    v17 = v17 + (float)(*(float *)&v10[i + 1 + a5] * a2[1]);
    v17 = v17 + (float)(*(float *)&v10[a5 + i] * a2[2]);
    *(float *)&v10[i + 3 + a5] = -v17;
    *(float *)(a3 + 4LL * (i + 3)) = v17;
  }
  while ( i < a4 )
  {
    v12 = *(float *)(a1 + 4LL * i);
    for ( j = 0; j < a5; ++j )
      v12 = v12 - (float)(v13[j] * *(float *)&v10[j + i]);
    *(float *)&v10[a5 + i] = v12;
    *(float *)(a3 + 4LL * i++) = v12;
  }
  for ( i = 0; i < a5; ++i )
    *(_DWORD *)(a6 + 4LL * i) = *(_DWORD *)(a3 + 4LL * (a4 - i - 1));
  return MEMORY[0x1401F8B20]((unsigned __int64)&i ^ v18);
}

