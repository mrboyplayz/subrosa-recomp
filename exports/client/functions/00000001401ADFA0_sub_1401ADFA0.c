/* Address: 0x1401adfa0 | Name: sub_1401ADFA0 | Size: 551 bytes */
__int64 __fastcall sub_1401ADFA0(float *a1, __int64 a2, __int64 a3, int a4, int a5, int a6)
{
  void *v6; // rsp
  int i; // [rsp+30h] [rbp+0h] BYREF
  int j; // [rsp+34h] [rbp+4h]
  float v10; // [rsp+38h] [rbp+8h]
  signed int v11; // [rsp+3Ch] [rbp+Ch]
  float *v12; // [rsp+40h] [rbp+10h]
  float *v13; // [rsp+48h] [rbp+18h]
  int v14; // [rsp+50h] [rbp+20h]
  __int64 v15; // [rsp+58h] [rbp+28h]

  v11 = a6 - a5;
  v6 = alloca(sub_1401F89D0());
  v13 = (float *)&i;
  if ( a4 )
  {
    for ( i = 0; i < a6; ++i )
      v13[i] = a1[i];
    for ( i = 0; i < a4; ++i )
    {
      v13[i] = a1[i] * *(float *)(a3 + 4LL * i);
      v13[a6 - i - 1] = a1[a6 - i - 1] * *(float *)(a3 + 4LL * i);
    }
    v12 = v13;
  }
  else
  {
    v12 = a1;
  }
  v14 = 0;
  sub_1401A9C80(v12, (__int64)v12, a2, v11, a5 + 1);
  for ( j = 0; j <= a5; ++j )
  {
    i = v11 + j;
    v10 = 0.0;
    while ( i < a6 )
    {
      v10 = v10 + (float)(v12[i] * v12[i - j]);
      ++i;
    }
    *(float *)(a2 + 4LL * j) = *(float *)(a2 + 4LL * j) + v10;
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&i ^ v15);
}

