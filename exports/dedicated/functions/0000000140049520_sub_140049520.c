/* Address: 0x140049520 | Name: sub_140049520 | Size: 115 bytes */
__int64 __fastcall sub_140049520(void *a1, int a2, int a3)
{
  int v3; // r9d
  int v4; // ebx

  v3 = qword_197BD727C;
  if ( (int)qword_197BD727C >= 0x10000 )
    return 0;
  v4 = a3 * a2;
  if ( a3 * a2 + (int)qword_197BD727C > dword_197BD7278 )
    return 0;
  if ( SHIDWORD(qword_197BD727C) > 0 )
  {
    v3 = qword_197BD727C + 1;
    LODWORD(qword_197BD727C) = qword_197BD727C + 1;
    qword_197BD727C = (unsigned int)qword_197BD727C;
  }
  memcpy(a1, &Src + v3, v4);
  LODWORD(qword_197BD727C) = v4 + qword_197BD727C;
  return 1;
}

