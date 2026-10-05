/* Address: 0x14009fbb0 | Name: sub_14009FBB0 | Size: 196 bytes */
float *__fastcall sub_14009FBB0(__int64 a1, __int64 a2, __int64 a3)
{
  float *result; // rax
  __int64 v5; // r10
  __int64 v6; // r8
  float *v7; // rdx
  __int64 v8; // r9
  float v9; // xmm3_4
  __int64 v10; // rcx
  float v11; // xmm4_4
  float v12; // xmm5_4
  _OWORD v13[2]; // [rsp+0h] [rbp-38h] BYREF
  int v14; // [rsp+20h] [rbp-18h]

  result = (float *)v13;
  v5 = 3;
  v6 = a3 - (_QWORD)v13;
  v7 = (float *)(a2 + 8);
  v8 = v6 + 24;
  do
  {
    v9 = *(v7 - 2);
    v10 = 3;
    v11 = *(v7 - 1);
    v12 = *v7;
    do
    {
      *result = (float)((float)(v9 * *(float *)((char *)result + v6))
                      + (float)(v11 * *(float *)((char *)result + v6 + 12)))
              + (float)(v12 * *(float *)((char *)result + v8));
      ++result;
      --v10;
    }
    while ( v10 );
    v7 += 3;
    v8 -= 12;
    v6 -= 12;
    --v5;
  }
  while ( v5 );
  *(_OWORD *)a1 = v13[0];
  *(_OWORD *)(a1 + 16) = v13[1];
  *(_DWORD *)(a1 + 32) = v14;
  return result;
}

