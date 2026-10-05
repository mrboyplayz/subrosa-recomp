/* Address: 0x140247a00 | Name: sub_140247A00 | Size: 100 bytes */
void __cdecl sub_140247A00(#92 *First, #92 *Last)
{
  #92 *v2; // rbx
  __int64 v3; // rsi
  unsigned __int64 v4; // rdi

  v2 = First;
  v3 = 0;
  v4 = (unsigned __int64)(Last - First + 7) >> 3;
  if ( First > Last )
    v4 = 0;
  if ( v4 )
  {
    do
    {
      if ( *(_QWORD *)v2 )
        (*(void (**)(void))v2)();
      v2 = (#92 *)((char *)v2 + 8);
      ++v3;
    }
    while ( v3 != v4 );
  }
}

