/* Address: 0x1400735a0 | Name: sub_1400735A0 | Size: 612 bytes */
__int64 __fastcall sub_1400735A0(int a1)
{
  unsigned __int64 v2; // rbx
  __int64 result; // rax
  char *v4; // rsi
  __int64 v5; // r14
  __int64 v6; // rcx
  unsigned __int64 v7; // rdi
  unsigned int v8; // [rsp+40h] [rbp-848h] BYREF
  char v9; // [rsp+48h] [rbp-840h] BYREF

  v2 = 7040LL * a1;
  result = dword_19025F0D4[v2 / 4];
  if ( dword_1901220CC[1268 * result] )
  {
    sub_1400288C0((int *)&v8, (int *)((char *)&unk_19025F1DC + v2), (int *)((char *)&unk_19025F1E8 + v2));
    result = v8;
    if ( (int)v8 > 0 )
    {
      v4 = &v9;
      v5 = v8;
      do
      {
        result = *(int *)v4;
        if ( (_DWORD)result != a1 )
        {
          v6 = *(int *)v4;
          if ( (int)result > a1 || (result *= 7040, dword_19025F0C8[1760 * v6]) )
          {
            v7 = 7040 * v6;
            if ( *((float *)&unk_19025F1C4 + 1760 * v6) <= *(float *)((char *)&unk_19025F1D0 + v2)
              && *(float *)((char *)&unk_19025F1D0 + v7) >= *(float *)((char *)&unk_19025F1C4 + v2)
              && *(float *)((char *)&unk_19025F1CC + v7) <= *(float *)((char *)&unk_19025F1D8 + v2)
              && *(float *)((char *)&unk_19025F1D8 + v7) >= *(float *)((char *)&unk_19025F1CC + v2)
              && *(float *)((char *)&unk_19025F1C8 + v7) <= *(float *)((char *)&unk_19025F1D4 + v2)
              && *(float *)((char *)&unk_19025F1D4 + v7) >= *(float *)((char *)&unk_19025F1C8 + v2) )
            {
              result = sub_140035840(
                         dword_19025F118[v2 / 4],
                         dword_19025F118[v7 / 4],
                         &dword_190122FC8[1268 * dword_19025F0D4[v2 / 4]],
                         &dword_190122FC8[1268 * dword_19025F0D4[v7 / 4]],
                         (float *)&dword_19025F11C[v2 / 4],
                         (float *)&dword_19025F164[v2 / 4],
                         (float *)&dword_19025F11C[v7 / 4],
                         (float *)&dword_19025F164[v7 / 4]);
              if ( (_DWORD)result )
              {
                if ( *(int *)((char *)&unk_19025F0CC + v7) < 60 || *(int *)((char *)&unk_19025F0CC + v2) < 60 )
                {
                  dword_19025F0C8[v2 / 4] = 0;
                  dword_19025F0C8[v7 / 4] = 0;
                }
              }
            }
          }
        }
        v4 += 8;
        --v5;
      }
      while ( v5 );
    }
  }
  return result;
}

