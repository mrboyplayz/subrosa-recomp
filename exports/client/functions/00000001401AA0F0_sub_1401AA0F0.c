/* Address: 0x1401aa0f0 | Name: sub_1401AA0F0 | Size: 581 bytes */
__int64 __fastcall sub_1401AA0F0(__int64 a1, __int64 a2, float a3, int a4)
{
  __int64 result; // rax
  float v5; // xmm0_4
  float v6; // xmm0_4
  int i; // [rsp+30h] [rbp-38h]
  float v8; // [rsp+34h] [rbp-34h] BYREF
  float v9; // [rsp+38h] [rbp-30h]
  float v10; // [rsp+3Ch] [rbp-2Ch] BYREF
  float v11; // [rsp+40h] [rbp-28h]
  float v12; // [rsp+44h] [rbp-24h]
  float v13; // [rsp+48h] [rbp-20h]
  float v14; // [rsp+4Ch] [rbp-1Ch]
  float v15; // [rsp+50h] [rbp-18h]
  float v16; // [rsp+54h] [rbp-14h]
  float v17; // [rsp+58h] [rbp-10h]

  v8 = 0.0;
  v10 = 0.0;
  sub_1401A9B20(a2, a1, a2, a4, &v8, &v10);
  v8 = a3 * v8;
  v9 = a3;
  v12 = (float)((float)(v9 * v9) + v10) - (float)(2.0 * v8);
  v13 = (float)((float)(v9 * v9) + v10) + (float)(2.0 * v8);
  if ( v13 < 0.00060000003 || v12 < 0.00060000003 )
    return MEMORY[0x1401FC920](a2, a1);
  v11 = v12;
  v5 = sqrt(v12);
  v16 = 1.0 / v5;
  v11 = v13;
  v6 = sqrt(v13);
  v17 = 1.0 / v6;
  for ( i = 0; ; ++i )
  {
    result = (unsigned int)a4;
    if ( i >= a4 )
      break;
    v14 = a3 * *(float *)(a1 + 4LL * i);
    v15 = *(float *)(a2 + 4LL * i);
    *(float *)(a1 + 4LL * i) = v16 * (float)(v14 - v15);
    *(float *)(a2 + 4LL * i) = v17 * (float)(v14 + v15);
  }
  return result;
}

