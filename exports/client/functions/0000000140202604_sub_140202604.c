/* Address: 0x140202604 | Name: sub_140202604 | Size: 41 bytes */
__int64 __fastcall sub_140202604(pDNameNode *this)
{
  __int64 *v1; // rcx
  __int64 result; // rax
  __int64 v3; // rcx

  v1 = *((__int64 **)this + 1);
  result = 0;
  if ( v1 )
  {
    v3 = *v1;
    if ( v3 )
      return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  return result;
}

