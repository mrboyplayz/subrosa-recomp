/* Address: 0x140247a64 | Name: sub_140247A64 | Size: 61 bytes */
int __cdecl sub_140247A64(_PIFV *First, _PIFV *Last)
{
  _PIFV *v3; // rbx
  bool i; // zf
  int result; // eax

  v3 = First;
  for ( i = First == Last; !i; i = v3 == Last )
  {
    if ( *(_QWORD *)v3 )
    {
      result = (*(__int64 (**)(void))v3)();
      if ( result )
        return result;
    }
    v3 = (_PIFV *)((char *)v3 + 8);
  }
  return 0;
}

