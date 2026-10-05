/* Address: 0x1401ab360 | Name: sub_1401AB360 | Size: 418 bytes */
__int64 __fastcall sub_1401AB360(int *a1, float *a2, float *a3, int a4, _DWORD *a5)
{
  int v6; // [rsp+20h] [rbp-38h]
  int v7; // [rsp+24h] [rbp-34h]
  int v8; // [rsp+30h] [rbp-28h]
  int v9; // [rsp+34h] [rbp-24h]
  BOOL v10; // [rsp+38h] [rbp-20h]
  float *v11; // [rsp+40h] [rbp-18h]
  _DWORD *v12; // [rsp+48h] [rbp-10h]

  v11 = a2;
  v9 = *a1;
  v12 = *((_DWORD **)a1 + 4);
  v10 = a3 != nullptr;
  v7 = 0;
  do
  {
    v6 = 0;
    if ( a1[10] >= 8 )
    {
      if ( v9 )
      {
        v6 = *v11 < 0.0;
        sub_14019A6D0(v12, v6, 1);
      }
      else
      {
        v6 = sub_14019B1C0(v12, 1u);
      }
      a1[10] -= 8;
      a4 -= 8;
    }
    if ( a1[1] )
    {
      if ( v6 )
        v8 = -1082130432;
      else
        v8 = 1065353216;
      *(_DWORD *)v11 = v8;
    }
    v11 = a3;
    ++v7;
  }
  while ( v7 < v10 + 1 );
  if ( a5 )
    *a5 = *(_DWORD *)a2;
  return 1;
}

