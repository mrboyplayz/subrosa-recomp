/* Address: 0x14020ead8 | Name: sub_14020EAD8 | Size: 166 bytes */
char __fastcall sub_14020EAD8(__int64 a1, unsigned __int64 a2)
{
  char v4; // si
  unsigned __int64 v5; // rbp
  __int64 v6; // rbx

  if ( a2 <= 0x7FFFFFFFFFFFFFFFLL )
  {
    v4 = 0;
    v5 = 2 * a2;
    if ( (*(_QWORD *)(a1 + 1032) || v5 > 0x400) && v5 > *(_QWORD *)(a1 + 1024) )
    {
      v6 = malloc_base(2 * a2);
      if ( v6 )
      {
        free_base(*(void **)(a1 + 1032));
        *(_QWORD *)(a1 + 1032) = v6;
        v4 = 1;
        *(_QWORD *)(a1 + 1024) = v5;
      }
      free_base(nullptr);
      return v4;
    }
    else
    {
      return 1;
    }
  }
  else
  {
    *errno() = 12;
    return 0;
  }
}

