/* Address: 0x14024fbec | Name: sub_14024FBEC | Size: 65 bytes */
char __fastcall sub_14024FBEC(char a1)
{
  unsigned int *v1; // rbx

  if ( !a1 )
  {
    v1 = &dword_140404A6C[19065289];
    do
    {
      if ( *(_QWORD *)v1 )
      {
        if ( *(_QWORD *)v1 != -1 )
          ((void (*)(void))FreeLibrary)();
        *(_QWORD *)v1 = 0;
      }
      v1 += 2;
    }
    while ( v1 != &dword_140404A6C[19065329] );
  }
  return 1;
}

