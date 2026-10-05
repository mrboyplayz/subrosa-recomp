/* Address: 0x1401f3f90 | Name: sub_1401F3F90 | Size: 578 bytes */
__int64 __fastcall sub_1401F3F90(__int64 a1, int *a2, int *a3, float *a4, __int64 a5, int a6, int a7)
{
  int i; // [rsp+0h] [rbp-38h] BYREF
  float v9; // [rsp+4h] [rbp-34h]
  float v10; // [rsp+8h] [rbp-30h]
  float v11; // [rsp+10h] [rbp-28h]
  float v12; // [rsp+14h] [rbp-24h]
  float v13; // [rsp+18h] [rbp-20h]
  float v14; // [rsp+1Ch] [rbp-1Ch]
  float v15; // [rsp+20h] [rbp-18h]
  __int64 v16; // [rsp+28h] [rbp-10h]

  v11 = (float)*a3 * 0.0000000037252903;
  v12 = (float)a3[1] * 0.0000000037252903;
  v13 = (float)*a2 * 0.0000000037252903;
  v14 = (float)a2[1] * 0.0000000037252903;
  v15 = (float)a2[2] * 0.0000000037252903;
  for ( i = 0; i < a6; ++i )
  {
    v9 = *(float *)(a1 + 4LL * a7 * i);
    v10 = *a4 + (float)(v13 * v9);
    *a4 = (float)(a4[1] - (float)(v10 * v11)) + (float)(v14 * v9);
    a4[1] = (float)((float)((float)-v10 * v12) + (float)(v15 * v9)) + 1.0e-30;
    *(float *)(a5 + 4LL * a7 * i) = v10;
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&i ^ v16);
}

