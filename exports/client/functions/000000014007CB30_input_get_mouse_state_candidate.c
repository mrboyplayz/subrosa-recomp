/* Address: 0x14007cb30 | Name: input_get_mouse_state_candidate | Size: 132 bytes */
__int64 __fastcall input_get_mouse_state_candidate(__int64 a1)
{
  unsigned int v2; // eax
  int v3; // ecx
  float v4; // xmm2_4
  __m128i v5; // xmm0
  float v6; // xmm2_4
  __int64 result; // rax
  int v8; // [rsp+30h] [rbp+8h] BYREF
  int v9; // [rsp+38h] [rbp+10h] BYREF

  v2 = MEMORY[0x140198EFF](&v8, &v9);
  v3 = v2 & 1;
  v4 = (float)v9;
  *(float *)a1 = (float)((float)v8 * *(float *)&MEMORY[0x1A8BF79C4]) / (float)(int)MEMORY[0x160FC47D8];
  v5 = _mm_cvtsi32_si128(HIDWORD(MEMORY[0x160FC47D8]));
  v6 = v4 * *(float *)&MEMORY[0x1A8BF79C8];
  *(_DWORD *)(a1 + 152) = v2;
  result = (v2 >> 2) & 1;
  *(float *)(a1 + 4) = v6 / _mm_cvtepi32_ps(v5).m128_f32[0];
  *(_DWORD *)(a1 + 144) = v3;
  *(_DWORD *)(a1 + 148) = result;
  return result;
}

