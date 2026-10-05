/* Address: 0x1401fd7a0 | Name: sub_1401FD7A0 | Size: 42 bytes */
char __fastcall sub_1401FD7A0(__int64 a1)
{
  int v2; // eax

  v2 = sub_1402066B4(LODWORD(dwTlsIndex.m256d_f64[0]), a1);
  if ( v2 )
  {
    *(_DWORD *)(a1 + 120) = -2;
    LOBYTE(v2) = 1;
  }
  return v2;
}

