/* Address: 0x1400ca1c0 | Name: sub_1400CA1C0 | Size: 612 bytes */
__int64 __fastcall sub_1400CA1C0(int a1)
{
  __int64 v2; // rbx
  char *v3; // rsi
  __int64 v4; // r14
  __int64 v5; // rcx
  __int64 v6; // rdi
  __int64 v8; // [rsp+0h] [rbp-888h] BYREF
  unsigned int v9; // [rsp+40h] [rbp-848h] BYREF
  char v10; // [rsp+48h] [rbp-840h] BYREF
  __int64 v11; // [rsp+850h] [rbp-38h]

  v2 = 1760LL * a1;
  if ( dword_140404A6C[1268 * dword_140404A6C[v2 + 278845898] + 278521288] )
  {
    sub_140038230((int *)&v9, (int *)&dword_140404A6C[v2 + 278845964], (int *)&dword_140404A6C[v2 + 278845967]);
    if ( (int)v9 > 0 )
    {
      v3 = &v10;
      v4 = v9;
      do
      {
        if ( *(_DWORD *)v3 != a1 )
        {
          v5 = *(int *)v3;
          if ( *(_DWORD *)v3 > a1 || dword_140404A6C[1760 * v5 + 278845895] )
          {
            v6 = 1760 * v5;
            if ( *(float *)&dword_140404A6C[1760 * v5 + 278845958] <= *(float *)&dword_140404A6C[v2 + 278845961]
              && *(float *)&dword_140404A6C[v6 + 278845961] >= *(float *)&dword_140404A6C[v2 + 278845958]
              && *(float *)&dword_140404A6C[v6 + 278845960] <= *(float *)&dword_140404A6C[v2 + 278845963]
              && *(float *)&dword_140404A6C[v6 + 278845963] >= *(float *)&dword_140404A6C[v2 + 278845960]
              && *(float *)&dword_140404A6C[v6 + 278845959] <= *(float *)&dword_140404A6C[v2 + 278845962]
              && *(float *)&dword_140404A6C[v6 + 278845962] >= *(float *)&dword_140404A6C[v2 + 278845959]
              && (unsigned int)sub_14004A7A0(
                                 dword_140404A6C[v2 + 278845915],
                                 dword_140404A6C[v6 + 278845915],
                                 &dword_140404A6C[1268 * dword_140404A6C[v2 + 278845898] + 278522247],
                                 &dword_140404A6C[1268 * dword_140404A6C[v6 + 278845898] + 278522247],
                                 &dword_140404A6C[v2 + 278845916],
                                 &dword_140404A6C[v2 + 278845934],
                                 &dword_140404A6C[v6 + 278845916],
                                 &dword_140404A6C[v6 + 278845934])
              && ((int)dword_140404A6C[v6 + 278845896] < 60 || (int)dword_140404A6C[v2 + 278845896] < 60) )
            {
              dword_140404A6C[v2 + 278845895] = 0;
              dword_140404A6C[v6 + 278845895] = 0;
            }
          }
        }
        v3 += 8;
        --v4;
      }
      while ( v4 );
    }
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&v8 ^ v11);
}

