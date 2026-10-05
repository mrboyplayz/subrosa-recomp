/* Address: 0x14020abb0 | Name: sub_14020ABB0 | Size: 78 bytes */
char *__fastcall sub_14020ABB0(FH4::HandlerMap4 *this)
{
  int v2; // edi
  __int64 v3; // rdi

  *((_QWORD *)this + 1) = *((_QWORD *)this + 2);
  MEMORY[0x14020A084](this);
  v2 = *(_DWORD *)this;
  *((_QWORD *)this + 1) = *((_QWORD *)this + 2);
  MEMORY[0x14020A084](this);
  v3 = (unsigned int)(v2 - 1);
  if ( (_DWORD)v3 )
  {
    do
    {
      MEMORY[0x14020A084](this);
      --v3;
    }
    while ( v3 );
  }
  return (char *)this + 24;
}

