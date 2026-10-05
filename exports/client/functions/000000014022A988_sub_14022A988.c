/* Address: 0x14022a988 | Name: sub_14022A988 | Size: 119 bytes */
char __fastcall sub_14022A988(char *a1, _QWORD *a2)
{
  char v2; // r9
  char v3; // r8
  __int64 v4; // r10
  unsigned __int64 v5; // rax
  char *v6; // rax

  v2 = *a1;
  v3 = 0;
  v4 = 0;
  while ( v2 == byte_140285934[v4 + 100] || v2 == byte_140285934[v4 + 104] )
  {
    v5 = a2[2] + 1LL;
    a2[2] = v5;
    if ( a2[1] && v5 > a2[1] || (v6 = *(char **)(*a2 + 16LL), v6 == *(char **)(*a2 + 8LL)) )
    {
      v2 = 0;
    }
    else
    {
      v2 = *v6;
      *(_QWORD *)(*a2 + 16LL) = v6 + 1;
    }
    ++v4;
    *a1 = v2;
    if ( v4 == 4 )
      return 1;
  }
  return v3;
}

