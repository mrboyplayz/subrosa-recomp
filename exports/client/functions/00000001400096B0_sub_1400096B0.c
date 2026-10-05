/* Address: 0x1400096b0 | Name: sub_1400096B0 | Stack analysis corrected in export snapshot. */
__int64 __fastcall sub_1400096B0(int a1, int a2, int a3, unsigned int a4)
{
  __int64 v4; // rdi
  __int64 v5; // rbp
  __int64 v6; // rbx
  __int64 v8; // r14
  __int64 v9; // rcx
  signed int v10; // ecx
  signed int v11; // ebx
  signed int v12; // esi
  signed int v13; // r12d
  signed int v14; // r15d
  __int64 v15; // r11
  __int64 v16; // rcx
  signed int v17; // eax
  signed int v18; // edx
  int v19; // ebp
  __m128i v20; // xmm0
  int v21; // edx
  __int64 v22; // rax
  __int64 v23; // r10
  __int64 v24; // r9
  __int64 v25; // rdx
  int v26; // ecx
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v30; // [rsp-20h] [rbp-80C0h] BYREF
  __m128i si128; // [rsp+0h] [rbp-80A0h]
  _DWORD v32[4096]; // [rsp+10h] [rbp-8090h] BYREF
  __int64 v33; // [rsp+4010h] [rbp-4090h]
  signed int v34; // [rsp+4080h] [rbp-4020h]
  signed int v35; // [rsp+4088h] [rbp-4018h]

  LODWORD(v4) = a3;
  v5 = a2;
  v6 = a1;
  MEMORY[0x1401FCD30](v32, 0, 0x4000u);
  v8 = 3597 * v6;
  v9 = 396 * v5;
  *(_QWORD *)&dword_140404A6C[3597 * v6 + 71859146] = 0;
  if ( a4 )
    v10 = dword_140404A6C[v9 + 225426056];
  else
    v10 = dword_140404A6C[v9 + 225426057];
  dword_140404A6C[v8 + 71859663] = v10;
  dword_140404A6C[v8 + 71859151] = v5;
  dword_140404A6C[8 * (int)dword_140404A6C[v8 + 71859147] + 71859152 + v8] = v4;
  dword_140404A6C[8 * (int)dword_140404A6C[v8 + 71859147] + 71859153 + v8] = a4;
  v11 = dword_140404A6C[v8 + 71859147] + 1;
  dword_140404A6C[v8 + 71859147] = v11;
  if ( v11 < 32 )
  {
    v12 = v35;
    v13 = dword_140404A6C[225395140];
    v14 = v34;
    do
    {
      v15 = v10;
      v16 = 34LL * v10;
      v17 = dword_140404A6C[v16 + 225391230];
      if ( v17 == v14 && dword_140404A6C[v16 + 225391232] == v12 )
        break;
      v18 = dword_140404A6C[v16 + 225391232];
      v19 = v4;
      if ( v12 == v18 )
      {
        if ( v14 <= v17 )
        {
          si128.m128i_i32[0] = 2;
          si128.m128i_i32[3] = 0;
        }
        else
        {
          si128.m128i_i32[0] = 0;
          si128.m128i_i32[3] = 2;
        }
        *(__int64 *)((char *)si128.m128i_i64 + 4) = 0x300000001LL;
      }
      else if ( v17 >= v13 )
      {
        if ( v17 <= v13 )
        {
          v20 = v12 <= v18
              ? _mm_load_si128((const __m128i *)&xmmword_140278EF0)
              : _mm_load_si128((const __m128i *)&xmmword_140278F40);
          si128 = v20;
        }
        else
        {
          si128 = _mm_load_si128((const __m128i *)&xmmword_140278DF0);
        }
      }
      else
      {
        si128 = _mm_load_si128((const __m128i *)&xmmword_140278F20);
      }
      v21 = 0;
      v22 = 0;
      v23 = 34 * v15;
      do
      {
        v24 = si128.m128i_i32[v22];
        if ( dword_140404A6C[v24 + 225391236 + v23] != -1 && !v32[4 * v15 + v24] && (_DWORD)v24 != (((_BYTE)v4 - 2) & 3) )
          break;
        ++v21;
        ++v22;
      }
      while ( v21 < 3 );
      v4 = si128.m128i_i32[v22];
      v25 = (int)dword_140404A6C[v4 + 225391236 + v23];
      if ( (_DWORD)v25 == -1 )
        break;
      v32[4 * v15 + v4] = 1;
      v26 = v4 - v19;
      dword_140404A6C[8 * v11 + 71859151 + v8] = v25;
      dword_140404A6C[8 * (int)dword_140404A6C[v8 + 71859147] + 71859152 + v8] = v4;
      if ( (int)v4 - v19 >= -1 )
      {
        if ( v26 > 1 )
          v26 -= 4;
      }
      else
      {
        v26 += 4;
      }
      dword_140404A6C[8 * (int)dword_140404A6C[v8 + 71859147] + 71859155 + v8] = 0;
      v27 = (int)dword_140404A6C[v8 + 71859147];
      if ( (int)v27 > 0 )
      {
        if ( v26 == -1 )
        {
          dword_140404A6C[8 * v27 + 71859147 + v8] = -1;
        }
        else if ( v26 == 1 )
        {
          dword_140404A6C[8 * v27 + 71859147 + v8] = 1;
        }
      }
      v28 = v8 * 4 + 32LL * (int)dword_140404A6C[v8 + 71859147];
      if ( (int)v4 >= 2 )
      {
        *(unsigned int *)((char *)&dword_140404A6C[71859153] + v28) = 1;
        v11 = dword_140404A6C[v8 + 71859147] + 1;
        v10 = dword_140404A6C[396 * v25 + 225426056];
      }
      else
      {
        *(unsigned int *)((char *)&dword_140404A6C[71859153] + v28) = 0;
        v11 = dword_140404A6C[v8 + 71859147] + 1;
        v10 = dword_140404A6C[396 * v25 + 225426057];
      }
      dword_140404A6C[v8 + 71859147] = v11;
    }
    while ( v11 < 32 );
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&v30 ^ v33);
}

