/* Address: 0x1402040ec | Name: sub_1402040EC | Size: 45 bytes */
char *__fastcall sub_1402040EC(pDNameNode *this, char *a2, char *a3)
{
  __int64 *v3; // rcx
  __int64 v4; // rcx

  v3 = *((__int64 **)this + 1);
  if ( v3 )
  {
    v4 = *v3;
    if ( v4 )
      return (char *)(*(__int64 (__fastcall **)(__int64, char *, char *))(*(_QWORD *)v4 + 24LL))(v4, a2, a3);
  }
  return a2;
}

