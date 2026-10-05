/* Address: 0x14022ace8 | Name: sub_14022ACE8 | Size: 144 bytes */
char __fastcall sub_14022ACE8(__int16 *a1, _QWORD *a2)
{
  __int16 v2; // ax
  char v3; // r8
  __int64 v5; // r9
  unsigned __int64 v6; // rax
  __int16 *v7; // rax
  __int16 v8; // dx

  v2 = *a1;
  v3 = 0;
  v5 = 0;
  while ( v2 == *(_WORD *)&byte_140285934[v5 + 36] || v2 == *(_WORD *)&byte_140285934[v5 + 52] )
  {
    v6 = a2[2] + 1LL;
    a2[2] = v6;
    if ( a2[1] && v6 > a2[1] )
    {
      v2 = 0;
    }
    else
    {
      v7 = *(__int16 **)(*a2 + 16LL);
      if ( v7 == *(__int16 **)(*a2 + 8LL) || (v8 = *v7, *(_QWORD *)(*a2 + 16LL) = v7 + 1, v2 = v8, v8 == -1) )
        v2 = 0;
    }
    v5 += 2;
    *a1 = v2;
    if ( v5 == 10 )
      return 1;
  }
  return v3;
}

