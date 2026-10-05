/* Address: 0x140132f90 | Name: sub_140132F90 | Size: 246 bytes */
void sub_140132F90()
{
  unsigned int *v0; // rcx
  __int64 v1; // r9
  int v2; // eax
  __int64 v3; // rdx
  unsigned int *v4; // r8
  signed int v5; // ecx
  signed int v6; // eax

  if ( dword_140404A6C[73991608] && dword_140404A6C[73991609] && (dword_140404A6C[283831474] & 0x3FF) == 0 )
  {
    dword_140404A6C[289301094] = dword_1402B2658;
    *(_QWORD *)&dword_140404A6C[289301092] = 5;
    LOBYTE(dword_140404A6C[289301095]) = 64;
    sub_140130350(dword_140404A6C[280649181], dword_140404A6C[280649182], 0);
  }
  if ( (int)dword_140404A6C[456202445] > 0 )
  {
    v0 = &dword_140404A6C[438887413];
    v1 = dword_140404A6C[456202445];
    v2 = (signed int)dword_140404A6C[73991094] / (signed int)dword_140404A6C[456202445];
    v3 = dword_140404A6C[456202445];
    do
    {
      *v0 = v2;
      v0 += 47224;
      --v3;
    }
    while ( v3 );
    v4 = &dword_140404A6C[438887412];
    do
    {
      v5 = v4[1];
      v4 += 47224;
      *(v4 - 47224) += ((unsigned int)(((unsigned __int64)(2004318071LL * v5) >> 32) - v5) >> 31)
                     + ((int)(((unsigned __int64)(2004318071LL * v5) >> 32) - v5) >> 5);
      v6 = *(v4 - 47224);
      if ( v6 < (int)(((unsigned int)(((unsigned __int64)(2004318071LL * v5) >> 32) - v5) >> 31)
                    + ((int)(((unsigned __int64)(2004318071LL * v5) >> 32) - v5) >> 5)) )
        v6 = ((unsigned int)(((unsigned __int64)(2004318071LL * v5) >> 32) - v5) >> 31)
           + ((int)(((unsigned __int64)(2004318071LL * v5) >> 32) - v5) >> 5);
      *(v4 - 47224) = v6;
      --v1;
    }
    while ( v1 );
  }
}

