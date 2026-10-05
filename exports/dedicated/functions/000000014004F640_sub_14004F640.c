/* Address: 0x14004f640 | Name: sub_14004F640 | Size: 292 bytes */
__int64 sub_14004F640()
{
  int v0; // edx
  int *v1; // r8
  int *v2; // rdx

  v0 = dword_140147C7C;
  if ( dword_140147C7C >= 624 )
  {
    if ( dword_140147C7C == 625 )
      sub_14006C400(5489);
    v1 = dword_1403C1600;
    v2 = dword_1403C198C;
    do
    {
      *v1 = v1[397] ^ ((*v1 ^ (*v1 ^ v1[1]) & 0x7FFFFFFFu) >> 1) ^ dword_140148170[v1[1] & 1];
      ++v1;
    }
    while ( (__int64)v1 < (__int64)dword_1403C198C );
    do
    {
      *v2 = *(v2 - 227) ^ ((*v2 ^ (*v2 ^ v2[1]) & 0x7FFFFFFFu) >> 1) ^ dword_140148170[v2[1] & 1];
      ++v2;
    }
    while ( (__int64)v2 < (__int64)&dword_1403C1FBC );
    dword_1403C1FBC = dword_1403C1C30
                    ^ ((dword_1403C1FBC ^ (dword_1403C1FBC ^ dword_1403C1600[0]) & 0x7FFFFFFFu) >> 1)
                    ^ dword_140148170[dword_1403C1600[0] & 1];
    v0 = 0;
  }
  dword_140147C7C = v0 + 1;
  return ((((((((unsigned int)dword_1403C1600[v0] >> 11) ^ dword_1403C1600[v0]) & 0xFF3A58AD) << 7)
          ^ ((unsigned int)dword_1403C1600[v0] >> 11)
          ^ dword_1403C1600[v0])
         & 0xFFFFDF8C) << 15)
       ^ (((((unsigned int)dword_1403C1600[v0] >> 11) ^ dword_1403C1600[v0]) & 0xFF3A58AD) << 7)
       ^ ((unsigned int)dword_1403C1600[v0] >> 11)
       ^ dword_1403C1600[v0]
       ^ ((((((((((unsigned int)dword_1403C1600[v0] >> 11) ^ dword_1403C1600[v0]) & 0xFF3A58AD) << 7)
            ^ ((unsigned int)dword_1403C1600[v0] >> 11)
            ^ dword_1403C1600[v0])
           & 0xFFFFDF8C) << 15)
         ^ (((((unsigned int)dword_1403C1600[v0] >> 11) ^ dword_1403C1600[v0]) & 0xFF3A58AD) << 7)
         ^ ((unsigned int)dword_1403C1600[v0] >> 11)
         ^ dword_1403C1600[v0]) >> 18);
}

