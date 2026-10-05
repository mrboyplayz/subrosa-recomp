/* Address: 0x14009fc80 | Name: sub_14009FC80 | Size: 230 bytes */
float *__fastcall sub_14009FC80(_OWORD *a1, __int64 a2, __int64 a3)
{
  float *v4; // r11
  char *v5; // r9
  __int64 v6; // r8
  float *v7; // rdx
  float v8; // xmm3_4
  float *result; // rax
  float v10; // xmm4_4
  __int64 v11; // rcx
  float v12; // xmm5_4
  float v13; // xmm6_4
  _OWORD v14[4]; // [rsp+0h] [rbp-68h] BYREF

  v4 = (float *)(a3 + 32);
  v5 = (char *)&v14[-2] - a3;
  v6 = 4;
  v7 = (float *)(a2 + 8);
  do
  {
    v8 = *(v7 - 2);
    result = v4;
    v10 = *(v7 - 1);
    v11 = 4;
    v12 = *v7;
    v13 = v7[1];
    do
    {
      *(float *)&v5[(_QWORD)result] = (float)((float)((float)(v8 * *(result - 8)) + (float)(v10 * *(result - 4)))
                                            + (float)(v12 * *result))
                                    + (float)(v13 * result[4]);
      ++result;
      --v11;
    }
    while ( v11 );
    v5 += 16;
    v7 += 4;
    --v6;
  }
  while ( v6 );
  *a1 = v14[0];
  a1[1] = v14[1];
  a1[2] = v14[2];
  a1[3] = v14[3];
  return result;
}

