/* Address: 0x14017c2c0 | Name: sub_14017C2C0 | Size: 338 bytes */
float *__fastcall sub_14017C2C0(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4,
        int a5,
        float a6,
        float a7,
        float a8,
        unsigned int a9,
        int a10,
        int a11,
        float *a12,
        float *a13,
        int a14)
{
  int v16; // r14d
  float v17; // xmm1_4
  float *result; // rax

  v16 = a2;
  sub_14017C040(a1, a2, a3 - a10 + 1, a4 - a11 + 1, a5, a6, a7, a8, a9, a14);
  if ( a10 > 1 )
    sub_140181080(v16, a3, a4, a5, a10);
  if ( a11 > 1 )
    sub_1401843E0(v16, a3, a4, a5, a11);
  if ( a10 )
    v17 = (float)(0.5 / (float)a10) * (float)(1 - a10);
  else
    v17 = 0.0;
  *a12 = v17;
  result = a13;
  if ( a11 )
    *a13 = (float)(0.5 / (float)a11) * (float)(1 - a11);
  else
    *a13 = 0.0;
  return result;
}

