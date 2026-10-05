/* Address: 0x14022cc78 | Name: sub_14022CC78 | Size: 165 bytes */
char __fastcall sub_14022CC78(__int64 a1, _WORD *a2, __int64 a3, __int16 *a4, _QWORD *a5)
{
  __int64 v6; // r10
  __int16 v7; // ax
  __int64 v8; // r11
  unsigned __int64 v9; // rax
  __int16 *v10; // rax
  __int16 v11; // r8

  v6 = 0;
  if ( !a3 )
    return 1;
  v7 = *a4;
  v8 = a1 - (_QWORD)a2;
  while ( v7 == *(_WORD *)((char *)a2 + v8) || v7 == *a2 )
  {
    v9 = a5[2] + 1LL;
    a5[2] = v9;
    if ( a5[1] && v9 > a5[1] )
    {
      v7 = 0;
    }
    else
    {
      v10 = *(__int16 **)(*a5 + 16LL);
      if ( v10 == *(__int16 **)(*a5 + 8LL) || (v11 = *v10, *(_QWORD *)(*a5 + 16LL) = v10 + 1, v7 = v11, v11 == -1) )
        v7 = 0;
    }
    ++v6;
    *a4 = v7;
    ++a2;
    if ( v6 == a3 )
      return 1;
  }
  return 0;
}

