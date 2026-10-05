/* Address: 0x14017be60 | Name: sub_14017BE60 | Size: 369 bytes */
float *__fastcall sub_14017BE60(
        __int64 a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        float *a12,
        float *a13,
        int a14)
{
  int v17; // ebx
  int v18; // eax
  float v19; // xmm1_4
  float *result; // rax

  v17 = a1;
  v18 = sub_140178410(a1, a14);
  sub_14017C040(v17, a2, a3 - a10 + 1, a4 - a11 + 1, a5, a6, a7, a8, a9, v18);
  if ( a10 > 1 )
    sub_140181080(a2, a3, a4, a5, a10);
  if ( a11 > 1 )
    sub_1401843E0(a2, a3, a4, a5, a11);
  if ( a10 )
    v19 = (float)(0.5 / (float)a10) * (float)(1 - a10);
  else
    v19 = 0.0;
  *a12 = v19;
  result = a13;
  if ( a11 )
    *a13 = (float)(0.5 / (float)a11) * (float)(1 - a11);
  else
    *a13 = 0.0;
  return result;
}

