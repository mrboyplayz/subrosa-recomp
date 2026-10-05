/* Address: 0x1401b3bd0 | Name: sub_1401B3BD0 | Size: 617 bytes */
__int64 __fastcall sub_1401B3BD0(__int64 *a1, __int64 a2, int a3, int a4, int a5, float *a6, float *a7, int a8)
{
  void *v8; // rsp
  int i; // [rsp+30h] [rbp+0h] BYREF
  int v11; // [rsp+34h] [rbp+4h]
  float v12; // [rsp+38h] [rbp+8h]
  float v13; // [rsp+3Ch] [rbp+Ch]
  float v14; // [rsp+40h] [rbp+10h]
  float v15; // [rsp+44h] [rbp+14h]
  int v16; // [rsp+48h] [rbp+18h]
  int v17; // [rsp+4Ch] [rbp+1Ch]
  __int64 v18; // [rsp+50h] [rbp+20h]
  int *v19; // [rsp+58h] [rbp+28h]
  __int64 v20; // [rsp+60h] [rbp+30h]
  __int64 v21; // [rsp+68h] [rbp+38h]

  v16 = 0;
  if ( a5 == 1 && a4 == 2 && !a8 )
  {
    sub_1401B3A40(a1, a2, a3, *a6, a7);
  }
  else
  {
    v8 = alloca(sub_1401F89D0());
    v19 = &i;
    v14 = *a6;
    v17 = a3 / a5;
    v11 = 0;
    do
    {
      v12 = a7[v11];
      v18 = a1[v11];
      v20 = a2 + 4LL * v11;
      if ( a5 <= 1 )
      {
        for ( i = 0; i < a3; ++i )
        {
          v15 = (float)(*(float *)(v18 + 4LL * i) + 1.0e-30) + v12;
          v12 = v14 * v15;
          *(float *)(v20 + 4LL * a4 * i) = v15 * 0.000030517578;
        }
      }
      else
      {
        for ( i = 0; i < a3; ++i )
        {
          v13 = (float)(*(float *)(v18 + 4LL * i) + 1.0e-30) + v12;
          v12 = v14 * v13;
          *(float *)&v19[i] = v13;
        }
        v16 = 1;
      }
      a7[v11] = v12;
      if ( v16 )
      {
        for ( i = 0; i < v17; ++i )
          *(float *)(v20 + 4LL * a4 * i) = *(float *)&v19[a5 * i] * 0.000030517578;
      }
      ++v11;
    }
    while ( v11 < a4 );
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&i ^ v21);
}

