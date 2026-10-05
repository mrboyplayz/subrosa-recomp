/* Address: 0x1401ad6f0 | Name: sub_1401AD6F0 | Size: 651 bytes */
__int64 __fastcall sub_1401AD6F0(__int64 a1, __int64 a2, __int64 a3, signed int a4, signed int a5)
{
  void *v5; // rsp
  signed int i; // [rsp+20h] [rbp+0h] BYREF
  signed int j; // [rsp+24h] [rbp+4h]
  float v9; // [rsp+28h] [rbp+8h]
  float *v10; // [rsp+30h] [rbp+10h]
  int v11; // [rsp+38h] [rbp+18h] BYREF
  int v12; // [rsp+3Ch] [rbp+1Ch]
  int v13; // [rsp+40h] [rbp+20h]
  int v14; // [rsp+44h] [rbp+24h]
  __int64 v15; // [rsp+48h] [rbp+28h]

  v5 = alloca(sub_1401F89D0());
  v10 = (float *)&i;
  for ( i = 0; i < a5; ++i )
    v10[i] = *(float *)(a2 + 4LL * (a5 - i - 1));
  for ( i = 0; i < a4 - 3; i += 4 )
  {
    v11 = *(_DWORD *)(a1 + 4LL * i);
    v12 = *(_DWORD *)(a1 + 4LL * (i + 1));
    v13 = *(_DWORD *)(a1 + 4LL * (i + 2));
    v14 = *(_DWORD *)(a1 + 4LL * (i + 3));
    sub_1401A92A0(v10, (float *)(a1 + 4LL * i - 4LL * a5), (float *)&v11, a5);
    *(_DWORD *)(a3 + 4LL * i) = v11;
    *(_DWORD *)(a3 + 4LL * (i + 1)) = v12;
    *(_DWORD *)(a3 + 4LL * (i + 2)) = v13;
    *(_DWORD *)(a3 + 4LL * (i + 3)) = v14;
  }
  while ( i < a4 )
  {
    v9 = *(float *)(a1 + 4LL * i);
    for ( j = 0; j < a5; ++j )
      v9 = v9 + (float)(v10[j] * *(float *)(a1 + 4LL * (j + i - a5)));
    *(float *)(a3 + 4LL * i++) = v9;
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&i ^ v15);
}

