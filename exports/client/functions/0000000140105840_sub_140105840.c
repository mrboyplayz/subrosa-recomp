/* Address: 0x140105840 | Name: sub_140105840 | Size: 230 bytes */
__int64 __fastcall sub_140105840(_OWORD *a1, __int64 a2, __int64 a3)
{
  float *v4; // r11
  char *v5; // r9
  __int64 v6; // r8
  float *v7; // rdx
  float v8; // xmm3_4
  float *v9; // rax
  float v10; // xmm4_4
  __int64 v11; // rcx
  float v12; // xmm5_4
  float v13; // xmm6_4
  _OWORD v15[4]; // [rsp+0h] [rbp-68h] BYREF
  __int64 v16; // [rsp+40h] [rbp-28h]

  v4 = (float *)(a3 + 32);
  v5 = (char *)&v15[-2] - a3;
  v6 = 4;
  v7 = (float *)(a2 + 8);
  do
  {
    v8 = *(v7 - 2);
    v9 = v4;
    v10 = *(v7 - 1);
    v11 = 4;
    v12 = *v7;
    v13 = v7[1];
    do
    {
      *(float *)&v5[(_QWORD)v9] = (float)((float)((float)(v8 * *(v9 - 8)) + (float)(v10 * *(v9 - 4)))
                                        + (float)(v12 * *v9))
                                + (float)(v13 * v9[4]);
      ++v9;
      --v11;
    }
    while ( v11 );
    v5 += 16;
    v7 += 4;
    --v6;
  }
  while ( v6 );
  *a1 = v15[0];
  a1[1] = v15[1];
  a1[2] = v15[2];
  a1[3] = v15[3];
  return MEMORY[0x1401F8B20]((unsigned __int64)v15 ^ v16);
}

