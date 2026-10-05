/* Address: 0x140039290 | Name: sub_140039290 | Size: 610 bytes */
__int64 __fastcall sub_140039290(_DWORD *a1, _DWORD *a2, int a3)
{
  __int64 result; // rax
  int *v6; // r9
  int v7; // ecx
  int i; // r8d
  __int64 v9; // rax
  int v10; // edx
  int *v11; // r8
  unsigned int *v12; // rax

  result = 0;
  if ( dword_16DD4B9C0 <= 0 )
  {
LABEL_5:
    if ( dword_16DD4B9C0 < 0x7FFF )
    {
      v7 = dword_140147C7C;
      dword_16DD4B9C4[4 * dword_16DD4B9C0] = a3;
      if ( v7 >= 624 )
      {
        if ( v7 == 625 )
        {
          dword_1403C1600[0] = 5489;
          for ( i = 1; i < 624; ++i )
          {
            v9 = i;
            v10 = i + 1812433253 * (dword_1403C1600[i - 1] ^ ((unsigned int)dword_1403C1600[i - 1] >> 30));
            dword_1403C1600[v9] = v10;
          }
        }
        v11 = dword_1403C1600;
        v12 = (unsigned int *)dword_1403C198C;
        do
        {
          *v11 = v11[397] ^ ((*v11 ^ (*v11 ^ v11[1]) & 0x7FFFFFFFu) >> 1) ^ dword_140148170[v11[1] & 1];
          ++v11;
        }
        while ( (__int64)v11 < (__int64)dword_1403C198C );
        do
        {
          *v12 = *(v12 - 227) ^ ((*v12 ^ (*v12 ^ v12[1]) & 0x7FFFFFFF) >> 1) ^ dword_140148170[v12[1] & 1];
          ++v12;
        }
        while ( (__int64)v12 < (__int64)&dword_1403C1FBC );
        dword_1403C1FBC = dword_1403C1C30
                        ^ ((dword_1403C1FBC ^ (dword_1403C1600[0] ^ dword_1403C1FBC) & 0x7FFFFFFFu) >> 1)
                        ^ dword_140148170[dword_1403C1600[0] & 1];
        v7 = 0;
      }
      dword_140147C7C = v7 + 1;
      dword_16DD4B9C8[4 * dword_16DD4B9C0] = ((((((((unsigned int)dword_1403C1600[v7] >> 11)
                                                 ^ dword_1403C1600[v7])
                                                & 0xFF3A58AD) << 7)
                                              ^ ((unsigned int)dword_1403C1600[v7] >> 11)
                                              ^ dword_1403C1600[v7])
                                             & 0xFFFFDF8C) << 15)
                                           ^ (((((unsigned int)dword_1403C1600[v7] >> 11)
                                              ^ dword_1403C1600[v7])
                                             & 0xFF3A58AD) << 7)
                                           ^ ((unsigned int)dword_1403C1600[v7] >> 11)
                                           ^ dword_1403C1600[v7]
                                           ^ ((((((((((unsigned int)dword_1403C1600[v7] >> 11)
                                                   ^ dword_1403C1600[v7])
                                                  & 0xFF3A58AD) << 7)
                                                ^ ((unsigned int)dword_1403C1600[v7] >> 11)
                                                ^ dword_1403C1600[v7])
                                               & 0xFFFFDF8C) << 15)
                                             ^ (((((unsigned int)dword_1403C1600[v7] >> 11)
                                                ^ dword_1403C1600[v7])
                                               & 0xFF3A58AD) << 7)
                                             ^ ((unsigned int)dword_1403C1600[v7] >> 11)
                                             ^ dword_1403C1600[v7]) >> 18);
      dword_16DD4B9CC[4 * dword_16DD4B9C0] = sub_14004F640();
      *a1 = dword_16DD4B9C8[4 * dword_16DD4B9C0];
      *a2 = dword_16DD4B9CC[4 * dword_16DD4B9C0++];
      return (unsigned int)(dword_16DD4B9C0 - 1);
    }
    else
    {
      return 0xFFFFFFFFLL;
    }
  }
  else
  {
    v6 = dword_16DD4B9C4;
    while ( a3 != *v6 )
    {
      result = (unsigned int)(result + 1);
      v6 += 4;
      if ( (int)result >= dword_16DD4B9C0 )
        goto LABEL_5;
    }
    *a1 = dword_16DD4B9C8[4 * (int)result];
    *a2 = dword_16DD4B9CC[4 * (int)result];
  }
  return result;
}

