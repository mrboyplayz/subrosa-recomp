/* Address: 0x1401fd968 | Name: sub_1401FD968 | Size: 71 bytes */
char sub_1401FD968()
{
  unsigned int v0; // eax

  v0 = sub_1402065DC(sub_1401FD7CC);
  LODWORD(dwTlsIndex.m256d_f64[0]) = v0;
  if ( v0 != -1 )
  {
    if ( (unsigned int)sub_1402066B4(v0, &dword_140404A6C[19064505]) )
    {
      dword_140404A6C[19064535] = -2;
      return 1;
    }
    _acrt_uninitialize_ptd();
  }
  return 0;
}

