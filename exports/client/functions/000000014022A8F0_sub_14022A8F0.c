/* Address: 0x14022a8f0 | Name: sub_14022A8F0 | Size: 149 bytes */
char __fastcall sub_14022A8F0(_BYTE *a1, __int64 a2)
{
  int v2; // eax
  char v3; // bl
  __int64 v5; // rdi
  unsigned __int64 v7; // rax
  FILE **v8; // rsi

  LOBYTE(v2) = *a1;
  v3 = 0;
  v5 = 0;
  while ( (_BYTE)v2 == byte_140285934[v5 + 172] || (_BYTE)v2 == byte_140285934[v5 + 176] )
  {
    v7 = *(_QWORD *)(a2 + 16) + 1LL;
    *(_QWORD *)(a2 + 16) = v7;
    if ( *(_QWORD *)(a2 + 8) && v7 > *(_QWORD *)(a2 + 8)
      || (v8 = *(FILE ***)a2, v2 = getc_nolock(**(FILE ***)a2), v2 == -1) )
    {
      LOBYTE(v2) = 0;
    }
    else
    {
      v8[1] = (FILE *)((char *)v8[1] + 1);
    }
    ++v5;
    *a1 = v2;
    if ( v5 == 4 )
      return 1;
  }
  return v3;
}

