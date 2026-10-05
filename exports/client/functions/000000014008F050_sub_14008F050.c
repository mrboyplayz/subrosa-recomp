/* Address: 0x14008f050 | Name: sub_14008F050 | Size: 329 bytes */
void sub_14008F050()
{
  unsigned int *v0; // rbx
  unsigned int *v1; // r14
  __int64 v2; // r15
  int v3; // eax
  __int64 v4; // rdi
  int v5; // eax
  __int64 v6; // rbp
  __int64 v7; // rsi
  __int64 v8; // rdi

  v0 = &dword_140404A6C[290382649];
  v1 = &dword_140404A6C[290382652];
  v2 = 0x4000;
  do
  {
    if ( *(v0 - 4) && !*(v0 - 3) )
    {
      v3 = *(v0 - 2);
      if ( v3 )
      {
        if ( v3 == 1 )
        {
          v5 = v0[2];
          if ( v5 > 63 )
          {
            v5 = 63;
            v0[2] = 63;
          }
          v6 = (int)*v0;
          v7 = v5;
          v8 = (110 * v6 + (int)v0[1]) << 6;
          MEMORY[0x1401FC920]((char *)&dword_140404A6C[278846114] + v8, v1);
          *((_BYTE *)&dword_140404A6C[278846114] + v8 + v7) = 0;
          MEMORY[0x1401FC920]((char *)&dword_140404A6C[278846626] + v8, v1 + 16);
          dword_140404A6C[1760 * v6 + 278846101] = 0;
        }
      }
      else
      {
        v4 = 1760LL * (int)*v0;
        MEMORY[0x1401FC920]((char *)&dword_140404A6C[v4 + 278846111] + (int)(v0[1] << 6), v1);
        HIBYTE(dword_140404A6C[v4 + 278846366]) = 0;
        dword_140404A6C[v4 + 278846101] = 0;
      }
      *(v0 - 3) = 1;
    }
    v1 += 39;
    v0 += 39;
    --v2;
  }
  while ( v2 );
}

