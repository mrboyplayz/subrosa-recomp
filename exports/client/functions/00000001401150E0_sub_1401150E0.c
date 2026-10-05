/* Address: 0x1401150e0 | Name: sub_1401150E0 | Size: 213 bytes */
void __fastcall sub_1401150E0(__int64 a1, float *a2, float a3, unsigned int a4)
{
  signed int v5; // ebp
  float *v6; // rbx
  __int64 v7; // r15
  __int64 v8; // rsi
  float v9; // xmm1_4
  unsigned int v10; // eax
  int v11[4]; // [rsp+20h] [rbp-58h] BYREF

  v5 = (unsigned int)(1 << a4) >> 1;
  v6 = a2;
  v7 = a1 - (_QWORD)a2;
  v8 = 3;
  do
  {
    v9 = *(float *)((char *)v6 + v7) - *v6;
    v10 = (int)(float)(fabs(v9) * (float)((float)v5 / a3));
    v11[0] = v10;
    if ( v10 > v5 - 1 )
    {
      v11[0] = v5 - 1;
      v10 = v5 - 1;
    }
    if ( v9 < 0.0 )
      v11[0] = v5 | v10;
    sub_140115D90(v11, a4);
    ++v6;
    --v8;
  }
  while ( v8 );
}

