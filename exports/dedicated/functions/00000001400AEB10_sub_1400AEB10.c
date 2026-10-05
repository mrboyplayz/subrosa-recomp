/* Address: 0x1400aeb10 | Name: sub_1400AEB10 | Size: 582 bytes */
void __fastcall sub_1400AEB10(float *a1)
{
  float v1; // xmm7_4
  float v2; // xmm5_4
  double v3; // xmm2_8
  double v4; // xmm1_8
  double v5; // xmm6_8
  float v6; // xmm3_4
  int v7; // ebx
  int v8; // r8d
  double v9; // xmm0_8
  __int64 v10; // rax
  float v11; // xmm6_4
  unsigned int v12; // esi
  int v13; // eax
  char v14; // r9
  unsigned int v15; // r10d
  int v16; // ecx
  int *v17; // rdi
  __m128 v18; // [rsp+20h] [rbp-48h] BYREF

  sub_1400A8390(v18.m128_f32, a1);
  v1 = v18.m128_f32[1];
  v2 = v18.m128_f32[0];
  v3 = fabs(v18.m128_f32[0]);
  v4 = fabs(v18.m128_f32[1]);
  v5 = v3;
  if ( v3 < v4 )
    v3 = v4;
  v6 = v18.m128_f32[2];
  v7 = 0;
  v8 = 2;
  v9 = fabs(v18.m128_f32[2]);
  v10 = v4 > v5;
  if ( v3 < v9 )
  {
    v10 = 2;
    v3 = v9;
  }
  v11 = v18.m128_f32[3];
  if ( fabs(v18.m128_f32[3]) > v3 )
    v10 = 3;
  v12 = v10;
  if ( v18.m128_f32[v10] < 0.0 )
  {
    v18 = _mm_xor_ps(v18, (__m128)xmmword_1400F7F50);
    v6 = v18.m128_f32[2];
    v1 = v18.m128_f32[1];
    v2 = v18.m128_f32[0];
    v11 = _mm_shuffle_ps(v18, v18, 255).m128_f32[0];
  }
  dword_196ABD2E0 = v10;
  if ( (!(_DWORD)v10 || (dword_196ABD2E4 = (int)(v2 * 5791.911644699011), (unsigned int)v10 != 1))
    && (dword_196ABD2E8 = (int)(v1 * 5791.911644699011), (unsigned int)v10 == 2)
    || (dword_196ABD2EC = (int)(v6 * 5791.911644699011), (unsigned int)v10 != 3) )
  {
    dword_196ABD2F0 = (int)(v11 * 5791.911644699011);
  }
  v13 = qword_197BC725C;
  if ( qword_197BC725C < 0x10000 )
  {
    v14 = *((_BYTE *)&qword_197BC725C + 4);
    v15 = v12;
    while ( 1 )
    {
      *((_BYTE *)&dword_197BC7200[25] + v13) &= ~(((1 << v8) - 1) << v14);
      *((_BYTE *)&dword_197BC7200[25] + qword_197BC725C) |= (_BYTE)v15 << *((char *)&qword_197BC725C + 4);
      v16 = 8 - *(&qword_197BC725C + 1);
      if ( v8 < (unsigned int)(8 - *(&qword_197BC725C + 1)) )
        break;
      *(&qword_197BC725C + 1) = 0;
      if ( v8 == v16 )
      {
        ++qword_197BC725C;
        goto LABEL_22;
      }
      v8 -= v16;
      v13 = qword_197BC725C + 1;
      v15 >>= v16;
      ++qword_197BC725C;
      v14 = 0;
      if ( v8 <= 0 )
        goto LABEL_22;
    }
    *(&qword_197BC725C + 1) += v8;
  }
LABEL_22:
  v17 = &dword_196ABD2E4;
  do
  {
    if ( v7 != v12 )
      sub_1400AFDB0(v17, 14);
    ++v7;
    ++v17;
  }
  while ( v7 < 4 );
}

