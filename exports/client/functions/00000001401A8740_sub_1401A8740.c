/* Address: 0x1401a8740 | Name: sub_1401A8740 | Size: 1002 bytes */
__int64 __fastcall sub_1401A8740(__int64 a1, __int64 a2, int a3, int a4, _DWORD *a5)
{
  void *v5; // rsp
  void *v6; // rsp
  void *v7; // rsp
  int i; // [rsp+30h] [rbp+0h] BYREF
  int j; // [rsp+34h] [rbp+4h]
  int v11; // [rsp+38h] [rbp+8h] BYREF
  int v12; // [rsp+3Ch] [rbp+Ch]
  int v13; // [rsp+40h] [rbp+10h]
  int *v14; // [rsp+48h] [rbp+18h]
  float v15; // [rsp+50h] [rbp+20h]
  float v16; // [rsp+54h] [rbp+24h]
  int v17; // [rsp+58h] [rbp+28h]
  float v18; // [rsp+5Ch] [rbp+2Ch]
  int v19; // [rsp+60h] [rbp+30h]
  float v20; // [rsp+64h] [rbp+34h]
  int *v21; // [rsp+68h] [rbp+38h]
  int *v22; // [rsp+70h] [rbp+40h]
  __int64 v23; // [rsp+78h] [rbp+48h]

  v11 = 0;
  v12 = 0;
  v17 = a4 + a3;
  v5 = alloca(sub_1401F89D0());
  v22 = &i;
  v6 = alloca(sub_1401F89D0());
  v21 = &i;
  v7 = alloca(sub_1401F89D0());
  v14 = &i;
  for ( i = 0; i < a3 >> 2; ++i )
    v22[i] = *(_DWORD *)(a1 + 8LL * i);
  for ( i = 0; i < v17 >> 2; ++i )
    v21[i] = *(_DWORD *)(a2 + 8LL * i);
  sub_1401A9C80((_DWORD)v22, (_DWORD)v21, (_DWORD)v14, a3 >> 2, a4 >> 2);
  sub_1401B8330((_DWORD)v14, (_DWORD)v21, a3 >> 2, a4 >> 2, (__int64)&v11);
  for ( j = 0; j < a4 >> 1; ++j )
  {
    v14[j] = 0;
    if ( abs(j - 2 * v11) <= 2 || abs(j - 2 * v12) <= 2 )
    {
      v18 = sub_1401A9C00(a1, a2 + 4LL * j, (unsigned int)(a3 >> 1));
      if ( v18 >= -1.0 )
        v19 = LODWORD(v18);
      else
        v19 = -1082130432;
      v14[j] = v19;
    }
  }
  sub_1401B8330((_DWORD)v14, a2, a3 >> 1, a4 >> 1, (__int64)&v11);
  if ( v11 <= 0 || v11 >= (a4 >> 1) - 1 )
  {
    v13 = 0;
  }
  else
  {
    v15 = *(float *)&v14[v11 - 1];
    v20 = *(float *)&v14[v11];
    v16 = *(float *)&v14[v11 + 1];
    if ( (float)(v16 - v15) <= (float)(0.69999999 * (float)(v20 - v15)) )
    {
      if ( (float)(v15 - v16) <= (float)(0.69999999 * (float)(v20 - v16)) )
        v13 = 0;
      else
        v13 = -1;
    }
    else
    {
      v13 = 1;
    }
  }
  *a5 = 2 * v11 - v13;
  return MEMORY[0x1401F8B20]((unsigned __int64)&i ^ v23);
}

