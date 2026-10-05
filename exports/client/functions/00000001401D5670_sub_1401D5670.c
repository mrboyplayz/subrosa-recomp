/* Address: 0x1401d5670 | Name: sub_1401D5670 | Size: 1234 bytes */
__int64 __fastcall sub_1401D5670(__int64 a1, __int64 a2, int a3)
{
  float v3; // xmm0_4
  float v4; // xmm0_4
  __int64 v6; // [rsp+0h] [rbp-78h] BYREF
  int i; // [rsp+30h] [rbp-48h]
  float v8; // [rsp+34h] [rbp-44h]
  int v9; // [rsp+38h] [rbp-40h]
  BOOL v10; // [rsp+3Ch] [rbp-3Ch]
  float v11; // [rsp+40h] [rbp-38h]
  float v12; // [rsp+44h] [rbp-34h]
  float v13; // [rsp+48h] [rbp-30h]
  char *v14; // [rsp+50h] [rbp-28h]
  _DWORD v15[4]; // [rsp+58h] [rbp-20h] BYREF
  __int64 v16; // [rsp+68h] [rbp-10h]

  v14 = (char *)(a1 + 7192);
  if ( *(_BYTE *)(a1 + 4781) == 2 )
  {
    v11 = 1.0 - (float)(0.5 * sub_1401D11A0(0.25 * (float)(*(float *)(a2 + 708) - 12.0)));
    for ( i = 0; i < *(_DWORD *)(a1 + 4580); ++i )
      *(float *)(a2 + 4LL * i) = *(float *)(a2 + 4LL * i) * v11;
  }
  v3 = pow(2.0, (float)(0.33000001 * (float)(21.0 - (float)((float)*(int *)(a1 + 4732) * 0.0078125))))
     / (double)*(int *)(a1 + 4588);
  v12 = v3;
  for ( i = 0; i < *(_DWORD *)(a1 + 4580); ++i )
  {
    v4 = sqrt((float)((float)(*(float *)(a2 + 4LL * i) * *(float *)(a2 + 4LL * i))
                    + (float)(*(float *)(a2 + 4LL * i + 712) * v12)));
    v8 = v4;
    if ( v4 >= 32767.0 )
      v9 = 1191181824;
    else
      v9 = LODWORD(v8);
    *(_DWORD *)(a2 + 4LL * i) = v9;
  }
  for ( i = 0; i < *(_DWORD *)(a1 + 4580); ++i )
    v15[i] = (int)(float)(*(float *)(a2 + 4LL * i) * 65536.0);
  MEMORY[0x1401FC920](a2 + 728, v15);
  *(_BYTE *)(a2 + 744) = *v14;
  v10 = a3 == 2;
  sub_1401C2970((char *)(a1 + 4752), (__int64)v15, v14, v10, *(_DWORD *)(a1 + 4580));
  for ( i = 0; i < *(_DWORD *)(a1 + 4580); ++i )
    *(float *)(a2 + 4LL * i) = (float)(int)v15[i] / 65536.0;
  if ( *(_BYTE *)(a1 + 4781) == 2 )
    *(_BYTE *)(a1 + 4782) = (float)(*(float *)(a2 + 708) + (float)((float)*(int *)(a1 + 4728) * 0.000030517578)) <= 1.0;
  v13 = (float)word_1402827F8[2 * (*(char *)(a1 + 4781) >> 1) + *(char *)(a1 + 4782)] / 1024.0;
  *(float *)(a2 + 692) = (float)((float)((float)((float)((float)(-0.050000001 * (float)*(int *)(a1 + 4628)) + 1.2)
                                               + (float)((float)(-0.2 * (float)*(int *)(a1 + 4532)) * 0.00390625))
                                       + (float)(-0.1 * *(float *)(a2 + 696)))
                               + (float)(-0.2 * *(float *)(a2 + 700)))
                       + (float)(0.80000001 * v13);
  return MEMORY[0x1401F8B20]((unsigned __int64)&v6 ^ v16);
}

