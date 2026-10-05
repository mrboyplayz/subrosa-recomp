/* Address: 0x1401fdcac | Name: sub_1401FDCAC | Size: 64 bytes */
__int64 __fastcall sub_1401FDCAC(__int64 a1, _BYTE *a2)
{
  _BYTE *v3; // rax
  int v4; // r8d

  *(_QWORD *)a1 = 0;
  *(_DWORD *)(a1 + 8) = 0;
  if ( a2 )
  {
    v3 = a2;
    v4 = 0;
    if ( *a2 )
    {
      do
      {
        ++v3;
        ++v4;
      }
      while ( *v3 );
      if ( v4 )
        sub_1401FE0C0(a1);
    }
  }
  return a1;
}

