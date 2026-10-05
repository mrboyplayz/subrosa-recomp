/* Address: 0x1401ba120 | Name: sub_1401BA120 | Size: 457 bytes */
__int64 __fastcall sub_1401BA120(float *a1, int a2, int a3, float a4, float a5)
{
  __int64 result; // rax
  int i; // [rsp+0h] [rbp-28h]
  int j; // [rsp+0h] [rbp-28h]
  float v8; // [rsp+4h] [rbp-24h]
  float v9; // [rsp+8h] [rbp-20h]
  float v10; // [rsp+Ch] [rbp-1Ch]
  float v11; // [rsp+10h] [rbp-18h]
  float v12; // [rsp+14h] [rbp-14h]
  float *v13; // [rsp+18h] [rbp-10h]
  float *v14; // [rsp+18h] [rbp-10h]

  v13 = a1;
  v11 = -a5;
  for ( i = 0; i < a2 - a3; ++i )
  {
    v8 = *v13;
    v9 = v13[a3];
    v13[a3] = (float)(a4 * v9) + (float)(a5 * *v13);
    *v13++ = (float)(a4 * v8) + (float)(v11 * v9);
  }
  v14 = &a1[a2 - 2 * a3 - 1];
  result = (unsigned int)(a2 - 2 * a3 - 1);
  for ( j = a2 - 2 * a3 - 1; j >= 0; --j )
  {
    v10 = *v14;
    v12 = v14[a3];
    v14[a3] = (float)(a4 * v12) + (float)(a5 * *v14);
    *v14-- = (float)(a4 * v10) + (float)(v11 * v12);
    result = (unsigned int)(j - 1);
  }
  return result;
}

