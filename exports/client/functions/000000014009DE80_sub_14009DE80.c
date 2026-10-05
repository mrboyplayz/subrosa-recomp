/* Address: 0x14009de80 | Name: sub_14009DE80 | Size: 292 bytes */
__int64 sub_14009DE80()
{
  int v0; // edx
  unsigned int *v1; // r8
  unsigned int *v2; // rdx

  v0 = dword_14030186C;
  if ( dword_14030186C >= 624 )
  {
    if ( dword_14030186C == 625 )
      sub_1400C2D50(5489);
    v1 = &dword_140404A6C[18600733];
    v2 = &dword_140404A6C[18600960];
    do
    {
      *v1 = v1[397] ^ ((*v1 ^ (*v1 ^ v1[1]) & 0x7FFFFFFF) >> 1) ^ dword_140301E08[v1[1] & 1];
      ++v1;
    }
    while ( (__int64)v1 < (__int64)&dword_140404A6C[18600960] );
    do
    {
      *v2 = *(v2 - 227) ^ ((*v2 ^ (*v2 ^ v2[1]) & 0x7FFFFFFF) >> 1) ^ dword_140301E08[v2[1] & 1];
      ++v2;
    }
    while ( (__int64)v2 < (__int64)&dword_140404A6C[18601356] );
    dword_140404A6C[18601356] = dword_140404A6C[18601129]
                              ^ ((dword_140404A6C[18601356]
                                ^ (dword_140404A6C[18601356]
                                 ^ dword_140404A6C[18600733])
                                & 0x7FFFFFFF) >> 1)
                              ^ dword_140301E08[dword_140404A6C[18600733] & 1];
    v0 = 0;
  }
  dword_14030186C = v0 + 1;
  return (((((((dword_140404A6C[v0 + 18600733] >> 11) ^ dword_140404A6C[v0 + 18600733]) & 0xFF3A58AD) << 7)
          ^ (dword_140404A6C[v0 + 18600733] >> 11)
          ^ dword_140404A6C[v0 + 18600733])
         & 0xFFFFDF8C) << 15)
       ^ ((((dword_140404A6C[v0 + 18600733] >> 11) ^ dword_140404A6C[v0 + 18600733]) & 0xFF3A58AD) << 7)
       ^ (dword_140404A6C[v0 + 18600733] >> 11)
       ^ dword_140404A6C[v0 + 18600733]
       ^ (((((((((dword_140404A6C[v0 + 18600733] >> 11) ^ dword_140404A6C[v0 + 18600733]) & 0xFF3A58AD) << 7)
            ^ (dword_140404A6C[v0 + 18600733] >> 11)
            ^ dword_140404A6C[v0 + 18600733])
           & 0xFFFFDF8C) << 15)
         ^ ((((dword_140404A6C[v0 + 18600733] >> 11) ^ dword_140404A6C[v0 + 18600733]) & 0xFF3A58AD) << 7)
         ^ (dword_140404A6C[v0 + 18600733] >> 11)
         ^ dword_140404A6C[v0 + 18600733]) >> 18);
}

