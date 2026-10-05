/* Address: 0x1401fe198 | Name: sub_1401FE198 | Size: 175 bytes */
DName *__fastcall sub_1401FE198(DName *this, char **a2, char a3)
{
  char *v5; // rdx
  unsigned __int8 v7; // al
  int v8; // r8d
  unsigned __int8 *v9; // rcx
  char v10; // cl

  *(_QWORD *)this = 0;
  *((_DWORD *)this + 2) = 0;
  v5 = *a2;
  v7 = *v5;
  if ( *v5 )
  {
    v8 = 0;
    v9 = (unsigned __int8 *)v5;
    do
    {
      if ( v7 == a3 )
        break;
      if ( !byte_1402847B0[v7] && (dword_140404A6C[19064559] & 0x10000) == 0 )
      {
        *((_BYTE *)this + 8) = 2;
        return this;
      }
      ++v8;
      *a2 = (char *)++v9;
      v7 = *v9;
    }
    while ( *v9 );
    sub_1401FDF84((__int64)this, v5, v8);
    v10 = **a2;
    if ( v10 )
    {
      ++*a2;
      if ( v10 != a3 )
      {
        *(_QWORD *)this = 0;
        *((_BYTE *)this + 8) = 3;
      }
    }
    else if ( !*((_BYTE *)this + 8) )
    {
      *((_BYTE *)this + 8) = 1;
    }
  }
  else
  {
    *((_BYTE *)this + 8) = 1;
  }
  return this;
}

