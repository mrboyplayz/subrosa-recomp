/* Address: 0x14007cbc0 | Name: input_get_relative_mouse_state_candidate | Size: 100 bytes */
__int64 __fastcall input_get_relative_mouse_state_candidate(_DWORD *a1)
{
  unsigned int v2; // eax
  __m128i v3; // xmm0
  __m128i v4; // xmm1
  int v5; // edx
  __int64 result; // rax
  unsigned int v7; // [rsp+30h] [rbp+8h] BYREF
  unsigned int v8; // [rsp+38h] [rbp+10h] BYREF

  v2 = MEMORY[0x140198F05](&v7, &v8);
  v3 = _mm_cvtsi32_si128(v7);
  v4 = _mm_cvtsi32_si128(v8);
  v5 = v2 & 1;
  a1[38] = v2;
  *a1 = 1140850688;
  a1[1] = 1134559232;
  result = (v2 >> 2) & 1;
  a1[2] = _mm_cvtepi32_ps(v3).m128_u32[0];
  a1[3] = _mm_cvtepi32_ps(v4).m128_u32[0];
  a1[36] = v5;
  a1[37] = result;
  return result;
}

