/* Address: 0x14022389c | Name: sub_14022389C | Size: 154 bytes */
char __fastcall sub_14022389C(__int64 a1)
{
  int v1; // eax
  _BYTE *v2; // r10
  _BYTE *v3; // rdx
  __int64 v4; // rcx

  if ( (*(_DWORD *)(a1 + 20) & 0x1000) != 0 )
    return 1;
  v1 = fileno((FILE *)a1);
  v2 = &unk_1403022C0;
  v3 = (unsigned int)(v1 + 2) <= 1
     ? &unk_1403022C0
     : (_BYTE *)(*(_QWORD *)&dword_140404A6C[2 * ((__int64)v1 >> 6) + 19065401] + 72LL * (v1 & 0x3F));
  if ( !v3[57] )
  {
    if ( (unsigned int)(v1 + 2) > 1 )
      v2 = (_BYTE *)(*(_QWORD *)&dword_140404A6C[2 * ((__int64)v1 >> 6) + 19065401] + 72LL * (v1 & 0x3F));
    if ( (v2[61] & 1) == 0 )
      return 1;
  }
  *errno() = 22;
  sub_14024CF6C(v4);
  return 0;
}

