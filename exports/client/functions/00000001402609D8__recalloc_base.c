/* Address: 0x1402609d8 | Name: _recalloc_base | Size: 149 bytes */
__int64 __fastcall recalloc_base(void *a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rsi

  if ( a2 && 0xFFFFFFFFFFFFFFE0uLL / a2 < a3 )
  {
    *errno() = 12;
    return 0;
  }
  else
  {
    if ( a1 )
      v7 = msize();
    else
      v7 = 0;
    v8 = a3 * a2;
    v9 = realloc_base(a1, v8);
    v10 = v9;
    if ( v9 )
    {
      if ( v7 < v8 )
        MEMORY[0x1401FCD30]((_WORD *)(v9 + v7), 0, v8 - v7);
    }
    return v10;
  }
}

