/* Address: 0x1402567e0 | Name: ?shift_bytes@@YAXQEAD_K0H@Z | Size: 48 bytes */
void __fastcall shift_bytes(char *const a1, __int64 a2, const __m128i *a3, int a4)
{
  __int64 v5; // r8

  if ( a4 )
  {
    v5 = -1;
    do
      ++v5;
    while ( a3->m128i_i8[v5] );
    MEMORY[0x1401FC920]((__m128i *)((char *)a3 + a4), a3, v5 + 1);
  }
}

