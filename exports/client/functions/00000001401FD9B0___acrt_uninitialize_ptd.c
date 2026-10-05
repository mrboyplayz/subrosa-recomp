/* Address: 0x1401fd9b0 | Name: __acrt_uninitialize_ptd | Size: 34 bytes */
char _acrt_uninitialize_ptd()
{
  if ( LODWORD(dwTlsIndex.m256d_f64[0]) != -1 )
  {
    sub_140206624();
    LODWORD(dwTlsIndex.m256d_f64[0]) = -1;
  }
  return 1;
}

