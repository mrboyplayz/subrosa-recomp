/* Address: 0x1401f8db4 | Name: sub_1401F8DB4 | Size: 57 bytes */
char sub_1401F8DB4()
{
  signed __int64 v0; // rcx
  signed __int64 v1; // rax

  if ( (unsigned int)_acrt_locale_changed() )
  {
    v0 = *(_QWORD *)(__readgsqword(0x30u) + 8);
    while ( 1 )
    {
      v1 = _InterlockedCompareExchange64((volatile signed __int64 *)&dword_140404A6C[19064473], v0, 0);
      if ( !v1 )
        break;
      if ( v0 == v1 )
        return 1;
    }
  }
  return 0;
}

