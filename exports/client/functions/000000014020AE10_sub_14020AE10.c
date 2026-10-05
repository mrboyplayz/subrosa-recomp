/* Address: 0x14020ae10 | Name: sub_14020AE10 | Size: 57 bytes */
void __fastcall sub_14020AE10(FH4::HandlerMap4 *this, unsigned int a2)
{
  __int64 v3; // rdi

  *((_QWORD *)this + 1) = *((_QWORD *)this + 2);
  v3 = a2;
  MEMORY[0x14020A084](this);
  if ( (_DWORD)v3 )
  {
    do
    {
      MEMORY[0x14020A084](this);
      --v3;
    }
    while ( v3 );
  }
}

