/* Address: 0x1401b8330 | Name: sub_1401B8330 | Size: 869 bytes */
__int64 __fastcall sub_1401B8330(__int64 a1, __int64 a2, int a3, unsigned int a4, _DWORD *a5)
{
  __int64 result; // rax
  int j; // [rsp+0h] [rbp-38h]
  float v7; // [rsp+4h] [rbp-34h]
  float v8; // [rsp+4h] [rbp-34h]
  int i; // [rsp+8h] [rbp-30h]
  float v10; // [rsp+Ch] [rbp-2Ch]
  int v11; // [rsp+14h] [rbp-24h]
  float v12; // [rsp+18h] [rbp-20h]
  float v13; // [rsp+1Ch] [rbp-1Ch]
  float v14; // [rsp+20h] [rbp-18h]
  float v15; // [rsp+24h] [rbp-14h]

  v7 = 1.0;
  v12 = -1.0;
  v13 = -1.0;
  v14 = 0.0;
  v15 = 0.0;
  *a5 = 0;
  a5[1] = 1;
  for ( i = 0; i < a3; ++i )
    v7 = v7 + (float)(*(float *)(a2 + 4LL * i) * *(float *)(a2 + 4LL * i));
  for ( j = 0; ; ++j )
  {
    result = a4;
    if ( j >= (int)a4 )
      break;
    if ( *(float *)(a1 + 4LL * j) > 0.0 )
    {
      v10 = *(float *)(a1 + 4LL * j) * 1.0e-12;
      if ( (float)((float)(v10 * v10) * v15) > (float)(v13 * v7) )
      {
        if ( (float)((float)(v10 * v10) * v14) <= (float)(v12 * v7) )
        {
          v13 = v10 * v10;
          v15 = v7;
          a5[1] = j;
        }
        else
        {
          v13 = v12;
          v15 = v14;
          a5[1] = *a5;
          v12 = v10 * v10;
          v14 = v7;
          *a5 = j;
        }
      }
    }
    v8 = v7
       + (float)((float)(*(float *)(a2 + 4LL * (a3 + j)) * *(float *)(a2 + 4LL * (a3 + j)))
               - (float)(*(float *)(a2 + 4LL * j) * *(float *)(a2 + 4LL * j)));
    if ( v8 >= 1.0 )
      v11 = LODWORD(v8);
    else
      v11 = 1065353216;
    v7 = *(float *)&v11;
  }
  return result;
}

