/* Address: 0x140207b94 | Name: sub_140207B94 | Size: 513 bytes */
__int64 __fastcall sub_140207B94(__int64 a1, __m128i *a2, __int64 a3, __int64 a4)
{
  unsigned int v8; // edi
  __int64 v9; // r15
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rcx
  const __m128i *v14; // rdx
  __int64 v15; // rbx
  __int64 v16; // rcx
  unsigned __int64 v17; // rbx
  const __m128i *v18; // rax
  __int64 v19; // rcx

  v8 = 0;
  if ( *(_DWORD *)(a3 + 8) )
  {
    v9 = *(int *)(a3 + 8);
    v10 = v9 + sub_1402075CC();
  }
  else
  {
    v10 = 0;
    LODWORD(v9) = 0;
  }
  if ( v10 )
  {
    v11 = (_DWORD)v9 ? *(int *)(a3 + 8) + sub_1402075CC() : 0LL;
    if ( *(_BYTE *)(v11 + 16) && (*(_DWORD *)(a3 + 12) || *(int *)(a3 + 4) < 0) )
    {
      if ( *(int *)(a3 + 4) >= 0 )
        a2 = (__m128i *)(a2->m128i_i64[0] + *(unsigned int *)(a3 + 12));
      if ( *(char *)(a3 + 4) < 0 && (*(_BYTE *)a4 & 0x10) != 0 && *(_QWORD *)&dword_140404A6C[19064501] )
      {
        v12 = (*(__int64 (**)(void))&dword_140404A6C[19064501])();
        if ( !v12 || !a2 )
          abort();
        a2->m128i_i64[0] = v12;
        v13 = v12;
      }
      else if ( (*(_BYTE *)(a3 + 4) & 8) != 0 )
      {
        v13 = *(_QWORD *)(a1 + 40);
        if ( !v13 || !a2 )
          abort();
        a2->m128i_i64[0] = v13;
      }
      else
      {
        if ( (*(_BYTE *)a4 & 1) == 0 )
        {
          if ( *(_DWORD *)(a4 + 24) )
          {
            v15 = *(int *)(a4 + 24);
            v16 = v15 + sub_1402075E0();
          }
          else
          {
            v16 = 0;
            LODWORD(v15) = 0;
          }
          if ( v16 )
          {
            if ( !*(_QWORD *)(a1 + 40)
              || !a2
              || (!(_DWORD)v15 ? (v19 = 0) : (v19 = *(int *)(a4 + 24) + sub_1402075E0()), !v19) )
            {
              abort();
            }
            return (unsigned int)((*(_BYTE *)a4 & 4) != 0) + 1;
          }
          else
          {
            if ( !*(_QWORD *)(a1 + 40) || !a2 )
              abort();
            v17 = *(int *)(a4 + 20);
            v18 = (const __m128i *)MEMORY[0x1401FD298](*(_QWORD *)(a1 + 40), a4 + 8);
            MEMORY[0x1401FC920](a2, v18, v17);
          }
          return v8;
        }
        v14 = *(const __m128i **)(a1 + 40);
        if ( !v14 || !a2 )
          abort();
        MEMORY[0x1401FC920](a2, v14, *(int *)(a4 + 20));
        if ( *(_DWORD *)(a4 + 20) != 8 || !a2->m128i_i64[0] )
          return v8;
        v13 = a2->m128i_i64[0];
      }
      a2->m128i_i64[0] = MEMORY[0x1401FD298](v13, a4 + 8);
      return v8;
    }
  }
  return 0;
}

