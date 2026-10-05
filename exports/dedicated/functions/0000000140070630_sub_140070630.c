/* Address: 0x140070630 | Name: sub_140070630 | Size: 416 bytes */
__int64 __fastcall sub_140070630(int a1)
{
  __int64 v1; // r15
  signed int v2; // esi
  char *v3; // rdi
  __m128i si128; // xmm0
  __m128i *v5; // rcx
  __int64 result; // rax
  bool v7; // zf
  int v8; // eax
  __int64 v9; // rcx
  unsigned __int64 v10; // [rsp+58h] [rbp+10h]

  v1 = a1;
  v2 = 0;
  v10 = 1760LL * a1;
  qword_19025F428[v10 / 2] = 0;
  memset(&dword_190260720[v10], 0, 0x420u);
  dword_19026072C[v10] = -1;
  v3 = &byte_19025F434[7040 * v1];
  do
  {
    *v3 = 0;
    if ( !v2 )
      strcpy(v3, "CONNECTING...");
    si128 = _mm_load_si128((const __m128i *)&xmmword_1400F7BB0);
    v5 = (__m128i *)((char *)&unk_19025FC34 + 64 * (110 * v1 + (unsigned int)v2));
    *v5 = si128;
    v5[1] = si128;
    v5[2] = si128;
    v5[3].m128i_i64[0] = si128.m128i_i64[0];
    v5[3].m128i_i32[2] = si128.m128i_i32[0];
    v5[3].m128i_i16[6] = si128.m128i_i16[0];
    v5[3].m128i_i8[14] = si128.m128i_i8[0];
    result = sub_1400395A0(v1, v2++);
    v3 += 64;
  }
  while ( v2 < 24 );
  v7 = dword_163D75B60 == 0;
  dword_190260720[v10] = 0;
  dword_190260724[v10] = 256;
  if ( !v7 )
  {
    v8 = dword_191541414;
    v9 = (__int64)dword_196199564++ << 7;
    HIWORD(dword_196199564) = 0;
    *(_DWORD *)((char *)&unk_195999560 + v9) = 19;
    *(_DWORD *)((char *)&unk_195999564 + v9) = v8;
    result = (unsigned int)dword_191536DD0;
    *(int *)((char *)&dword_195999580 + v9) = dword_191536DD0;
    *(int *)((char *)&dword_195999584 + v9) = v1;
    *(int *)((char *)&dword_195999590 + v9) = 1065353216;
    *(int *)((char *)&dword_195999594 + v9) = 1065353216;
  }
  return result;
}

