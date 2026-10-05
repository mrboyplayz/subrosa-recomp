/* Address: 0x1401f77c0 | Name: sub_1401F77C0 | Size: 948 bytes */
__int64 __fastcall sub_1401F77C0(_DWORD *a1, __int64 a2, int a3, int a4)
{
  __int64 result; // rax
  int v5; // [rsp+0h] [rbp-68h]
  int i; // [rsp+4h] [rbp-64h]
  BOOL v7; // [rsp+8h] [rbp-60h]
  int v8; // [rsp+Ch] [rbp-5Ch]
  int v9; // [rsp+10h] [rbp-58h]
  int v10; // [rsp+14h] [rbp-54h]
  int v11; // [rsp+18h] [rbp-50h]
  int v12; // [rsp+1Ch] [rbp-4Ch]
  int v13; // [rsp+20h] [rbp-48h]
  int v14; // [rsp+34h] [rbp-34h]
  int v15; // [rsp+38h] [rbp-30h]
  int v16; // [rsp+3Ch] [rbp-2Ch]
  int v17; // [rsp+40h] [rbp-28h]
  int v18; // [rsp+44h] [rbp-24h]
  int v19; // [rsp+48h] [rbp-20h]
  int v20; // [rsp+4Ch] [rbp-1Ch]
  int v21; // [rsp+50h] [rbp-18h]
  int v22; // [rsp+54h] [rbp-14h]

  v7 = a1[68] != -1;
  v12 = a1[2];
  v10 = a1[1] - v12 - v7 + 2 * v12;
  if ( a4 / a3 >= 50 )
    v14 = a4 / a3;
  else
    v14 = 50;
  v11 = 40 * v14;
  if ( a1[72] == -1000 )
  {
    v8 = 8000 * v7 + (v11 + a4 + 10000) * v10;
  }
  else if ( a1[72] == -1 )
  {
    v8 = 128000 * v7 + 300000 * v10;
  }
  else
  {
    v8 = a1[72];
  }
  if ( v8 / 20 >= 3000 )
    v16 = 3000;
  else
    v16 = v8 / 20;
  if ( a4 / a3 >= 50 )
    v15 = a4 / a3;
  else
    v15 = 50;
  v13 = 15 * v15 + v16;
  v5 = (v8 - v10 * v11 - v7 * v13) / v10 / 2;
  if ( v5 <= 20000 )
    v17 = (v8 - v10 * v11 - v7 * (15 * v15 + v16)) / v10 / 2;
  else
    v17 = 20000;
  if ( v17 >= 0 )
  {
    if ( v5 <= 20000 )
      v18 = (v8 - v10 * v11 - v7 * (15 * v15 + v16)) / v10 / 2;
    else
      v18 = 20000;
    v19 = v18;
  }
  else
  {
    v19 = 0;
  }
  v9 = ((__int64)(v8 - v7 * v13 - (a1[1] - v7) * v19 - v10 * v11) << 8)
     / (32 * v7 + (v12 << 9) + ((a1[1] - v12 - v7) << 8));
  for ( i = 0; ; ++i )
  {
    result = (unsigned int)a1[1];
    if ( i >= (int)result )
      break;
    if ( i >= a1[2] )
    {
      if ( i == a1[68] )
      {
        if ( (char)(v9 >> 3) + v13 >= 0 )
          v22 = (char)(v9 >> 3) + v13;
        else
          v22 = 0;
        *(_DWORD *)(a2 + 4LL * i) = v22;
      }
      else
      {
        if ( v9 + v19 >= 0 )
          v21 = v9 + v19;
        else
          v21 = 0;
        *(_DWORD *)(a2 + 4LL * i) = v21 + v11;
      }
    }
    else
    {
      if ( (v9 << 9 >> 8) + v19 >= 0 )
        v20 = (v9 << 9 >> 8) + v19;
      else
        v20 = 0;
      *(_DWORD *)(a2 + 4LL * i) = v20 + 80 * v14;
    }
  }
  return result;
}

