/* Address: 0x14022ac44 | Name: sub_14022AC44 | Size: 164 bytes */
char __fastcall sub_14022AC44(__int16 *a1, __int64 a2)
{
  __int16 v2; // ax
  char v3; // bl
  __int64 v5; // rdi
  unsigned __int64 v7; // rax
  _QWORD *v8; // rsi

  v2 = *a1;
  v3 = 0;
  v5 = 0;
  while ( v2 == *(_WORD *)&byte_140285934[v5 + 108] || v2 == *(_WORD *)&byte_140285934[v5 + 124] )
  {
    v7 = *(_QWORD *)(a2 + 16) + 1LL;
    *(_QWORD *)(a2 + 16) = v7;
    if ( *(_QWORD *)(a2 + 8) && v7 > *(_QWORD *)(a2 + 8) )
    {
      v2 = 0;
    }
    else
    {
      v8 = *(_QWORD **)a2;
      v2 = j__fgetwc_nolock(**(_QWORD **)a2);
      if ( v2 == -1 )
        v2 = 0;
      else
        ++v8[1];
    }
    v5 += 2;
    *a1 = v2;
    if ( v5 == 10 )
      return 1;
  }
  return v3;
}

