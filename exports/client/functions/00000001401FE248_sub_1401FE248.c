/* Address: 0x1401fe248 | Name: sub_1401FE248 | Size: 43 bytes */
DName *__fastcall sub_1401FE248(DName *this, const struct StringLiteral *a2)
{
  int v3; // r8d

  *(_QWORD *)this = 0;
  *((_DWORD *)this + 2) = 0;
  v3 = *((_DWORD *)a2 + 2);
  if ( v3 > 0 )
    sub_1401FDF84((__int64)this, *(char **)a2, v3);
  return this;
}

