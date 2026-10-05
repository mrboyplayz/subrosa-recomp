/* Address: 0x1402371c8 | Name: sub_1402371C8 | Size: 157 bytes */
__int64 __fastcall sub_1402371C8(unsigned __int64 *a1, _BYTE *a2, unsigned __int64 a3, signed int a4)
{
  __int64 v4; // rax
  unsigned __int64 v5; // rax
  __int64 v7; // rcx

  if ( a2 )
  {
    if ( a3 )
      goto LABEL_3;
LABEL_12:
    *errno() = 22;
    sub_14024CF6C(v7);
    return 22;
  }
  if ( a3 )
    goto LABEL_12;
LABEL_3:
  if ( a2 )
    *a2 = 0;
  if ( !a1 || (unsigned int)a4 > 1 )
    goto LABEL_12;
  v4 = -1;
  do
    ++v4;
  while ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)&dword_140404A6C[19064601] + 8LL * a4) + v4) );
  v5 = v4 + 1;
  *a1 = v5;
  if ( !a2 )
    return 0;
  if ( v5 <= a3 )
    return strcpy_s(a2, a3, *(_QWORD *)(*(_QWORD *)&dword_140404A6C[19064601] + 8LL * a4));
  return 34;
}

