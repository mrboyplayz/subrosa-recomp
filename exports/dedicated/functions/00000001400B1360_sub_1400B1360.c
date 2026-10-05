/* Address: 0x1400b1360 | Name: sub_1400B1360 | Size: 1239 bytes */
__int64 __fastcall sub_1400B1360(int a1)
{
  __int64 v1; // rsi
  __int64 result; // rax
  int *v3; // r11
  __int64 v4; // rcx
  __int64 v5; // r9
  int v6; // r13d
  int *v7; // r12
  __int64 v8; // rbp
  int *v9; // rdi
  int v10; // r12d
  unsigned __int64 v11; // r10
  int v12; // r8d
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  bool v16; // cc
  int v17; // ebx
  __int64 v18; // r10
  __int64 v19; // r8
  __int64 v20; // rbx
  __int64 v21; // rdx
  int v22; // r15d
  int v23; // r14d
  __int64 v24; // rcx
  _DWORD *v25; // rcx
  _DWORD *v26; // rcx
  _DWORD *v27; // rcx
  _DWORD *v28; // rcx
  __int64 v29; // r8
  int v30; // [rsp+40h] [rbp+8h]
  int *v31; // [rsp+48h] [rbp+10h]

  v1 = a1;
  result = 14388LL * a1;
  v3 = (int *)((char *)&unk_16D67ED94 + result);
  *(_DWORD *)((char *)&dword_16D67ED98[24] + result) = 0;
  *(_DWORD *)((char *)&dword_16D67ED98[49] + result) = 0;
  *(_DWORD *)((char *)&dword_16D67ED98[74] + result) = 0;
  *(_DWORD *)((char *)&dword_16D67ED98[99] + result) = 0;
  *(_DWORD *)((char *)&dword_16D67ED98[124] + result) = 0;
  *(_DWORD *)((char *)&dword_16D67ED98[149] + result) = 0;
  *(_DWORD *)((char *)&unk_16D67ED94 + result) = 0;
  v4 = *(int *)((char *)dword_16D67D63C + result);
  if ( (_DWORD)v4 == -1 )
    return result;
  v5 = 0;
  v6 = dword_19154118C;
  v7 = &dword_19094849C[7166 * v4];
  result = (unsigned int)dword_178C5B900;
  v31 = v7;
  v30 = dword_178C5B900;
  do
  {
    v8 = *(v7 - 1);
    if ( v8 <= 0 )
      goto LABEL_22;
    v9 = v7;
    v10 = v30;
    do
    {
      result = *v9;
      v11 = 7040 * result;
      v12 = dword_19025F0D4[1760 * result];
      if ( v12 > 14 )
      {
        if ( v12 == 27 )
        {
          v18 = dword_19025F340[v11 / 4];
          if ( (_DWORD)v18 != -1 )
          {
            v19 = 5210 * v18;
            if ( dword_16E6A3C6C[5210 * v18] > 0 )
            {
              v20 = 1199 * v1;
              v21 = v5 * 4 + 14388 * v1;
              dword_16D67ED98[3597 * v1 + 3 * *(int *)((char *)&unk_16D67ED94 + v21) + v5] = 27;
              v22 = *(_DWORD *)((char *)&unk_16E6A3C78 + v19 * 4);
              v23 = dword_16E6A3C64[v19];
              v24 = v5 * 4 + 12 * (1199 * v1 + *(int *)((char *)&unk_16D67ED94 + v21));
              if ( v6 == 4 )
              {
                *(_DWORD *)((char *)&dword_16D67ED98[1] + v24) = v18;
                ++*(_DWORD *)((char *)&unk_16D67ED94 + v21);
                *((_DWORD *)&unk_178C5B904 + 16 * (__int64)v10) = v23;
                *((_DWORD *)&unk_178C5B908 + 16 * (__int64)dword_178C5B900) = v22;
                *((_DWORD *)&unk_178C5B910 + 16 * (__int64)dword_178C5B900) = v18;
                v25 = (_DWORD *)((char *)&unk_178C5B914 + 64 * (__int64)dword_178C5B900);
                *v25 = dword_16E6A3C8C[v19];
                v25[1] = dword_16E6A3C90[v19];
                v25[2] = dword_16E6A3C94[v19];
                v26 = (_DWORD *)((char *)&unk_178C5B920 + 64 * (__int64)dword_178C5B900);
                *v26 = dword_16E6A3CA4[v19];
                v26[1] = dword_16E6A3CA8[v19];
                v26[2] = dword_16E6A3CAC[v19];
                v27 = (_DWORD *)((char *)&unk_178C5B92C + 64 * (__int64)dword_178C5B900);
                *v27 = dword_16E6A3CB0[v19];
                v27[1] = dword_16E6A3CB4[v19];
                v27[2] = dword_16E6A3CB8[v19];
                v28 = (_DWORD *)((char *)&unk_178C5B938 + 64 * (__int64)dword_178C5B900);
                *v28 = dword_16E6A3CBC[v19];
                v28[1] = dword_16E6A3CC0[v19];
                result = (unsigned int)dword_16E6A3CC4[v19];
                v28[2] = result;
                v10 = ++dword_178C5B900;
              }
              else
              {
                *(_DWORD *)((char *)&dword_16D67ED98[1] + v24) = v23;
                result = 3 * (v20 + *(int *)((char *)&unk_16D67ED94 + v21));
                dword_16D67ED98[3 * v20 + 2 + 3 * (*(_DWORD *)((char *)&unk_16D67ED94 + v21))++ + v5] = v22;
              }
            }
          }
        }
        else if ( v12 == 18 )
        {
          v29 = v5 * 4 + 14388 * v1;
          dword_16D67ED98[3597 * v1 + 3 * *(int *)((char *)&unk_16D67ED94 + v29) + v5] = 18;
          dword_16D67ED98[3597 * v1 + 1 + 3 * *(int *)((char *)&unk_16D67ED94 + v29) + v5] = *(_DWORD *)((char *)&unk_19025F364 + v11);
          result = *(unsigned int *)((char *)&unk_19025F368 + v11);
          dword_16D67ED98[3597 * v1 + 2 + 3 * (*(_DWORD *)((char *)&unk_16D67ED94 + v29))++ + v5] = result;
        }
      }
      else
      {
        v13 = 1199 * v1;
        dword_16D67ED98[3597 * v1 + 3 * *v3 + v5] = v12;
        dword_16D67ED98[3597 * v1 + 1 + 3 * *v3 + v5] = 0;
        dword_16D67ED98[3597 * v1 + 2 + 3 * *v3 + v5] = 0;
        v14 = v5 * 4 + 12 * (1199 * v1 + *v3);
        if ( dword_19025F0F4[v11 / 4] <= 0 )
        {
          result = *(unsigned int *)((char *)&unk_19025F204 + v11);
          *(_DWORD *)((char *)&dword_16D67ED98[2] + v14) = result;
        }
        else
        {
          v15 = 1760LL * dword_19025F0F8[v11 / 4];
          *(_DWORD *)((char *)&dword_16D67ED98[1] + v14) = 1;
          v16 = *(_DWORD *)((char *)&unk_19025F204 + v11) <= 0;
          v17 = *(_DWORD *)((char *)&unk_19025F204 + v15 * 4);
          result = 3 * (v13 + *v3);
          dword_16D67ED98[3 * v13 + 2 + 3 * *v3 + v5] = v17;
          if ( !v16 )
          {
            result = (unsigned int)(dword_1901220E4[1268 * dword_19025F0D4[v15]] + 1);
            if ( v17 < (int)result )
            {
              result = 3 * (v13 + *v3);
              ++dword_16D67ED98[3 * v13 + 2 + 3 * (*v3)++ + v5];
              goto LABEL_20;
            }
          }
        }
        ++*v3;
      }
LABEL_20:
      ++v9;
      --v8;
    }
    while ( v8 );
    v30 = v10;
    v7 = v31;
LABEL_22:
    v7 += 10;
    v5 += 25;
    v3 += 25;
    v31 = v7;
  }
  while ( v5 < 175 );
  return result;
}

