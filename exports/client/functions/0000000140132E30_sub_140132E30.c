/* Address: 0x140132e30 | Name: sub_140132E30 | Size: 347 bytes */
__int64 sub_140132E30()
{
  __int64 v0; // rcx
  unsigned int *v1; // rax
  __int64 result; // rax
  unsigned int *v4; // rbx
  __int64 v5; // rsi
  __int64 v6; // rbp
  unsigned int v7; // edi
  __int64 v8; // rcx
  __int128 v9; // xmm1
  __int64 v10; // rcx

  v0 = 256;
  v1 = &dword_140404A6C[438881245];
  do
  {
    if ( *v1 )
    {
      if ( (--v1[1] & 0x80000000) != 0 )
        *v1 = 0;
    }
    v1 += 20;
    --v0;
  }
  while ( v0 );
  result = dword_140404A6C[456202445];
  if ( (int)dword_140404A6C[456202445] > 0 )
  {
    v4 = &dword_140404A6C[438934628];
    v5 = dword_140404A6C[456202445];
    do
    {
      result = (int)*(v4 - 47217);
      if ( (_DWORD)result != -1 )
      {
        v6 = 3597 * result;
        v7 = dword_140404A6C[3597 * result + 71856268];
        if ( v7 != -1 )
        {
          LODWORD(v8) = *v4;
          if ( *v4 != -1 )
            goto LABEL_17;
          LODWORD(v8) = 0;
          result = (__int64)&dword_140404A6C[438881247];
          while ( !*(_DWORD *)(result - 8) || *(_DWORD *)result != v7 )
          {
            v8 = (unsigned int)(v8 + 1);
            result += 80;
            if ( result >= (__int64)&dword_140404A6C[438886367] )
            {
              result = sub_140132E00(v8);
              LODWORD(v8) = result;
              *v4 = result;
              goto LABEL_16;
            }
          }
          *v4 = v8;
LABEL_16:
          if ( (_DWORD)v8 != -1 )
          {
LABEL_17:
            v9 = *(_OWORD *)&dword_140404A6C[v6 + 71856258];
            result = dword_140404A6C[v6 + 71856265];
            v10 = 10LL * (int)v8;
            *(_OWORD *)&dword_140404A6C[2 * v10 + 438881248] = *(_OWORD *)&dword_140404A6C[v6 + 71856254];
            dword_140404A6C[2 * v10 + 438881245] = 1;
            *(_OWORD *)&dword_140404A6C[2 * v10 + 438881252] = v9;
            dword_140404A6C[2 * v10 + 438881246] = 3600;
            dword_140404A6C[2 * v10 + 438881247] = v7;
            dword_140404A6C[2 * v10 + 438881264] = result;
          }
        }
      }
      v4 += 47224;
      --v5;
    }
    while ( v5 );
  }
  return result;
}

