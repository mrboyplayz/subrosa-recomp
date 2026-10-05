/* Address: 0x140213644 | Name: sub_140213644 | Size: 155 bytes */
_LocaleUpdate *__fastcall sub_140213644(_LocaleUpdate *this, struct __crt_locale_pointers *const a2)
{
  _OWORD *v3; // rsi
  __int128 v4; // xmm0
  __int64 v5; // rax
  int v6; // eax

  *((_BYTE *)this + 24) = 0;
  v3 = (_OWORD *)((char *)this + 8);
  if ( a2 )
  {
    v4 = *(_OWORD *)a2;
LABEL_5:
    *v3 = v4;
    return this;
  }
  if ( !dword_140404A6C[19065283] )
  {
    v4 = *(_OWORD *)&off_140302578;
    goto LABEL_5;
  }
  v5 = sub_140255A70();
  *(_QWORD *)this = v5;
  *(_QWORD *)v3 = *(_QWORD *)(v5 + 144);
  *((_QWORD *)this + 2) = *(_QWORD *)(v5 + 136);
  sub_140255D2C(v5, v3);
  sub_140255D60(*(_QWORD *)this, (char *)this + 16);
  v6 = *(_DWORD *)(*(_QWORD *)this + 936LL);
  if ( (v6 & 2) == 0 )
  {
    *(_DWORD *)(*(_QWORD *)this + 936LL) = v6 | 2;
    *((_BYTE *)this + 24) = 1;
  }
  return this;
}

