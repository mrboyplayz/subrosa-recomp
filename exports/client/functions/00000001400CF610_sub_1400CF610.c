/* Address: 0x1400cf610 | Name: sub_1400CF610 | Size: 81 bytes */
void __fastcall sub_1400CF610(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  signed int v4; // edi
  unsigned int *v5; // rbx
  int v6; // ecx

  v4 = 0;
  v5 = &dword_140404A6C[278845900];
  do
  {
    if ( *(v5 - 7) )
    {
      v6 = *v5;
      if ( (int)*v5 < 0xFFFF )
        *v5 = --v6;
      if ( v6 <= 0 )
        sub_14007F970(v4, a2, a3, a4);
    }
    ++v4;
    v5 += 1760;
  }
  while ( v4 < 1024 );
}

