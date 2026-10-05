/* Address: 0x1402471d8 | Name: sub_1402471D8 | Size: 39 bytes */
int __cdecl MEMORY[0x1402471D8](#91 *Table)
{
  __int64 v2; // rax

  if ( !Table )
    return -1;
  if ( *(_QWORD *)Table == *((_QWORD *)Table + 2) )
  {
    v2 = _security_cookie;
    *(_QWORD *)Table = _security_cookie;
    *((_QWORD *)Table + 1) = v2;
    *((_QWORD *)Table + 2) = v2;
  }
  return 0;
}

