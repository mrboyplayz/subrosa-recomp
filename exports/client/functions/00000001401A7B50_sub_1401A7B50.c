/* Address: 0x1401a7b50 | Name: sub_1401A7B50 | Size: 871 bytes */
__int64 __fastcall sub_1401A7B50(__int64 a1, int a2, int a3, __int64 a4, int a5, __int64 a6, int a7, int a8)
{
  __int64 result; // rax
  int v9; // eax
  int v10; // [rsp+20h] [rbp-58h]
  int v12; // [rsp+28h] [rbp-50h]
  int v13; // [rsp+2Ch] [rbp-4Ch]
  int v14; // [rsp+30h] [rbp-48h]
  float v15; // [rsp+34h] [rbp-44h]
  int v16; // [rsp+38h] [rbp-40h]
  int v17; // [rsp+40h] [rbp-38h]
  float v18; // [rsp+44h] [rbp-34h]
  float v19; // [rsp+48h] [rbp-30h]
  _DWORD v20[2]; // [rsp+50h] [rbp-28h]
  float v21; // [rsp+58h] [rbp-20h]
  char *v22; // [rsp+60h] [rbp-18h]

  v22 = (char *)&unk_140281FA0 + 84 * a8 + 42 * a5;
  v20[0] = 0;
  v20[1] = 0;
  if ( a5 )
  {
    v18 = 0.0;
    v19 = 0.1499939;
  }
  else
  {
    v19 = flt_14027E488[a8];
    v18 = flt_14027E378[a8];
  }
  v14 = 8 * *(_DWORD *)(a6 + 8);
  while ( 1 )
  {
    result = (unsigned int)a3;
    if ( a2 >= a3 )
      break;
    v10 = 0;
    do
    {
      v13 = sub_14019A0A0(a6);
      if ( v14 - v13 < 15 )
      {
        if ( v14 - v13 < 2 )
        {
          if ( v14 - v13 < 1 )
            v12 = -1;
          else
            v12 = -sub_14019AF20(a6, 1);
        }
        else
        {
          v9 = sub_14019AFE0(a6, (__int64)&unk_14027E374, 2);
          v12 = -(v9 & 1) ^ (v9 >> 1);
        }
      }
      else
      {
        if ( a2 >= 20 )
          v16 = 20;
        else
          v16 = a2;
        v12 = sub_1401B8170(a6, (unsigned __int8)v22[2 * v16] << 7, (unsigned __int8)v22[2 * v16 + 1] << 6);
      }
      v15 = (float)v12;
      if ( *(float *)(a4 + 4LL * (*(_DWORD *)(a1 + 8) * v10 + a2)) >= -9.0 )
        v17 = *(_DWORD *)(a4 + 4LL * (*(_DWORD *)(a1 + 8) * v10 + a2));
      else
        v17 = -1055916032;
      *(_DWORD *)(a4 + 4LL * (*(_DWORD *)(a1 + 8) * v10 + a2)) = v17;
      v21 = (float)((float)(v18 * *(float *)(a4 + 4LL * (*(_DWORD *)(a1 + 8) * v10 + a2))) + *(float *)&v20[v10]) + v15;
      *(float *)(a4 + 4LL * (*(_DWORD *)(a1 + 8) * v10 + a2)) = v21;
      *(float *)&v20[v10] = (float)(*(float *)&v20[v10] + v15) - (float)(v19 * v15);
      ++v10;
    }
    while ( v10 < a7 );
    ++a2;
  }
  return result;
}

