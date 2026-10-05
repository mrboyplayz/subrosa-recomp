/* Address: 0x140079d60 | Name: sub_140079D60 | Size: 155 bytes */
__int64 __fastcall sub_140079D60(_OWORD *a1, __int64 a2, float *a3)
{
  float v3; // xmm3_4
  float *v4; // rax
  float v5; // xmm4_4
  float *v6; // rdx
  float v7; // xmm5_4
  float v8; // xmm6_4
  __int64 v9; // r8
  float v10; // xmm1_4
  float v11; // xmm2_4
  float v12; // xmm0_4
  __int128 v14; // [rsp+0h] [rbp-38h] BYREF
  __int64 v15; // [rsp+10h] [rbp-28h]

  v3 = *a3;
  v4 = (float *)&v14;
  v5 = a3[1];
  v6 = (float *)(a2 + 8);
  v7 = a3[2];
  v8 = a3[3];
  v9 = 4;
  do
  {
    v10 = v7 * *v6;
    v11 = (float)(v3 * *(v6 - 2)) + (float)(v5 * *(v6 - 1));
    v12 = v8 * v6[1];
    v6 += 4;
    *v4++ = (float)(v11 + v10) + v12;
    --v9;
  }
  while ( v9 );
  *a1 = v14;
  return MEMORY[0x1401F8B20]((unsigned __int64)&v14 ^ v15);
}

