/* Address: 0x140050c80 | Name: sub_140050C80 | Size: 610 bytes */
__int64 __fastcall sub_140050C80(_DWORD *a1, _DWORD *a2, unsigned int a3)
{
  __int64 result; // rax
  unsigned int *v6; // r9
  int v7; // ecx
  int i; // r8d
  __int64 v9; // rax
  unsigned int v10; // edx
  unsigned int *v11; // r8
  unsigned int *v12; // rax

  result = 0;
  if ( (int)dword_140404A6C[133919261] <= 0 )
  {
LABEL_5:
    if ( (int)dword_140404A6C[133919261] < 0x7FFF )
    {
      v7 = dword_14030186C;
      dword_140404A6C[4 * dword_140404A6C[133919261] + 133919262] = a3;
      if ( v7 >= 624 )
      {
        if ( v7 == 625 )
        {
          dword_140404A6C[18600733] = 5489;
          for ( i = 1; i < 624; ++i )
          {
            v9 = i;
            v10 = i + 1812433253 * (dword_140404A6C[i + 18600732] ^ (dword_140404A6C[i + 18600732] >> 30));
            dword_140404A6C[v9 + 18600733] = v10;
          }
        }
        v11 = &dword_140404A6C[18600733];
        v12 = &dword_140404A6C[18600960];
        do
        {
          *v11 = v11[397] ^ ((*v11 ^ (*v11 ^ v11[1]) & 0x7FFFFFFF) >> 1) ^ dword_140301E08[v11[1] & 1];
          ++v11;
        }
        while ( (__int64)v11 < (__int64)&dword_140404A6C[18600960] );
        do
        {
          *v12 = *(v12 - 227) ^ ((*v12 ^ (*v12 ^ v12[1]) & 0x7FFFFFFF) >> 1) ^ dword_140301E08[v12[1] & 1];
          ++v12;
        }
        while ( (__int64)v12 < (__int64)&dword_140404A6C[18601356] );
        dword_140404A6C[18601356] = dword_140404A6C[18601129]
                                  ^ ((dword_140404A6C[18601356]
                                    ^ (dword_140404A6C[18600733]
                                     ^ dword_140404A6C[18601356])
                                    & 0x7FFFFFFF) >> 1)
                                  ^ dword_140301E08[dword_140404A6C[18600733] & 1];
        v7 = 0;
      }
      dword_14030186C = v7 + 1;
      dword_140404A6C[4 * dword_140404A6C[133919261] + 133919263] = (((((((dword_140404A6C[v7 + 18600733] >> 11)
                                                                        ^ dword_140404A6C[v7 + 18600733])
                                                                       & 0xFF3A58AD) << 7)
                                                                     ^ (dword_140404A6C[v7 + 18600733] >> 11)
                                                                     ^ dword_140404A6C[v7 + 18600733])
                                                                    & 0xFFFFDF8C) << 15)
                                                                  ^ ((((dword_140404A6C[v7 + 18600733] >> 11)
                                                                     ^ dword_140404A6C[v7 + 18600733])
                                                                    & 0xFF3A58AD) << 7)
                                                                  ^ (dword_140404A6C[v7 + 18600733] >> 11)
                                                                  ^ dword_140404A6C[v7 + 18600733]
                                                                  ^ (((((((((dword_140404A6C[v7 + 18600733] >> 11)
                                                                          ^ dword_140404A6C[v7 + 18600733])
                                                                         & 0xFF3A58AD) << 7)
                                                                       ^ (dword_140404A6C[v7 + 18600733] >> 11)
                                                                       ^ dword_140404A6C[v7 + 18600733])
                                                                      & 0xFFFFDF8C) << 15)
                                                                    ^ ((((dword_140404A6C[v7 + 18600733] >> 11)
                                                                       ^ dword_140404A6C[v7 + 18600733])
                                                                      & 0xFF3A58AD) << 7)
                                                                    ^ (dword_140404A6C[v7 + 18600733] >> 11)
                                                                    ^ dword_140404A6C[v7 + 18600733]) >> 18);
      dword_140404A6C[4 * dword_140404A6C[133919261] + 133919264] = sub_14009DE80();
      *a1 = dword_140404A6C[4 * dword_140404A6C[133919261] + 133919263];
      *a2 = dword_140404A6C[4 * dword_140404A6C[133919261] + 133919264];
      return dword_140404A6C[133919261]++;
    }
    else
    {
      return 0xFFFFFFFFLL;
    }
  }
  else
  {
    v6 = &dword_140404A6C[133919262];
    while ( a3 != *v6 )
    {
      result = (unsigned int)(result + 1);
      v6 += 4;
      if ( (int)result >= (int)dword_140404A6C[133919261] )
        goto LABEL_5;
    }
    *a1 = dword_140404A6C[4 * (int)result + 133919263];
    *a2 = dword_140404A6C[4 * (int)result + 133919264];
  }
  return result;
}

