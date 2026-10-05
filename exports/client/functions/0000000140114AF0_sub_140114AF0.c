/* Address: 0x140114af0 | Name: sub_140114AF0 | Size: 582 bytes */
__int64 __fastcall sub_140114AF0(__int64 a1)
{
  float v1; // xmm7_4
  float v2; // xmm5_4
  double v3; // xmm2_8
  double v4; // xmm1_8
  double v5; // xmm6_8
  float v6; // xmm3_4
  int v7; // ebx
  signed int v8; // r8d
  double v9; // xmm0_8
  __int64 v10; // rax
  float v11; // xmm6_4
  unsigned int v12; // esi
  signed int v13; // eax
  char v14; // r9
  unsigned int v15; // r10d
  unsigned int v16; // ecx
  unsigned int *v17; // rdi
  __int64 v19; // [rsp+0h] [rbp-68h] BYREF
  __m128 v20; // [rsp+20h] [rbp-48h] BYREF
  __int64 v21; // [rsp+38h] [rbp-30h]

  sub_14010E370(&v20, a1);
  v1 = v20.m128_f32[1];
  v2 = v20.m128_f32[0];
  v3 = fabs(v20.m128_f32[0]);
  v4 = fabs(v20.m128_f32[1]);
  v5 = v3;
  if ( v3 < v4 )
    v3 = v4;
  v6 = v20.m128_f32[2];
  v7 = 0;
  v8 = 2;
  v9 = fabs(v20.m128_f32[2]);
  v10 = v4 > v5;
  if ( v3 < v9 )
  {
    v10 = 2;
    v3 = v9;
  }
  v11 = v20.m128_f32[3];
  if ( fabs(v20.m128_f32[3]) > v3 )
    v10 = 3;
  v12 = v10;
  if ( v20.m128_f32[v10] < 0.0 )
  {
    v20 = _mm_xor_ps(v20, (__m128)xmmword_140279870);
    v6 = v20.m128_f32[2];
    v1 = v20.m128_f32[1];
    v2 = v20.m128_f32[0];
    v11 = _mm_shuffle_ps(v20, v20, 255).m128_f32[0];
  }
  dword_140404A6C[349900621] = v10;
  if ( (!(_DWORD)v10 || (dword_140404A6C[349900622] = (int)(v2 * 5791.911644699011), (unsigned int)v10 != 1))
    && (dword_140404A6C[349900623] = (int)(v1 * 5791.911644699011), (unsigned int)v10 == 2)
    || (dword_140404A6C[349900624] = (int)(v6 * 5791.911644699011), (unsigned int)v10 != 3) )
  {
    dword_140404A6C[349900625] = (int)(v11 * 5791.911644699011);
  }
  v13 = dword_140404A6C[289301092];
  if ( (int)dword_140404A6C[289301092] < 0x10000 )
  {
    v14 = dword_140404A6C[289301093];
    v15 = v12;
    while ( 1 )
    {
      *((_BYTE *)&dword_140404A6C[289301094] + v13) &= ~(((1 << v8) - 1) << v14);
      *((_BYTE *)&dword_140404A6C[289301094] + (int)dword_140404A6C[289301092]) |= (_BYTE)v15 << SLOBYTE(dword_140404A6C[289301093]);
      v16 = 8 - dword_140404A6C[289301093];
      if ( v8 < 8 - dword_140404A6C[289301093] )
        break;
      dword_140404A6C[289301093] = 0;
      if ( v8 == v16 )
      {
        ++dword_140404A6C[289301092];
        goto LABEL_22;
      }
      v8 -= v16;
      v13 = dword_140404A6C[289301092] + 1;
      v15 >>= v16;
      ++dword_140404A6C[289301092];
      v14 = 0;
      if ( v8 <= 0 )
        goto LABEL_22;
    }
    dword_140404A6C[289301093] += v8;
  }
LABEL_22:
  v17 = &dword_140404A6C[349900622];
  do
  {
    if ( v7 != v12 )
      sub_140115D90(v17, 14);
    ++v7;
    ++v17;
  }
  while ( v7 < 4 );
  return MEMORY[0x1401F8B20]((unsigned __int64)&v19 ^ v21);
}

