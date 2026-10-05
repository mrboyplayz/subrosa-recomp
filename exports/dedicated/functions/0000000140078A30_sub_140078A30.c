/* Address: 0x140078a30 | Name: sub_140078A30 | Size: 81 bytes */
void __fastcall sub_140078A30(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  signed int v4; // edi
  int *v5; // rbx
  int v6; // ecx

  v4 = 0;
  v5 = dword_19025F0DC;
  do
  {
    if ( *(v5 - 7) )
    {
      v6 = *v5;
      if ( *v5 < 0xFFFF )
        *v5 = --v6;
      if ( v6 <= 0 )
        sub_14004BC60(v4, a2, a3, a4);
    }
    ++v4;
    v5 += 1760;
  }
  while ( v4 < 1024 );
}

