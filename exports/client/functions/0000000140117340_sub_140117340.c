/* Address: 0x140117340 | Name: sub_140117340 | Size: 1239 bytes */
__int64 __fastcall sub_140117340(int a1)
{
  __int64 v1; // rsi
  __int64 result; // rax
  int *v3; // r11
  __int64 v4; // rcx
  __int64 v5; // r9
  unsigned int v6; // r13d
  unsigned int *v7; // r12
  __int64 v8; // rbp
  unsigned int *v9; // rdi
  signed int v10; // r12d
  __int64 v11; // r10
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
  unsigned int v22; // r15d
  unsigned int v23; // r14d
  __int64 v24; // rcx
  unsigned int *v25; // rcx
  unsigned int *v26; // rcx
  unsigned int *v27; // rcx
  unsigned int *v28; // rcx
  __int64 v29; // r8
  unsigned int v30; // [rsp+40h] [rbp+8h]
  unsigned int *v31; // [rsp+48h] [rbp+10h]

  v1 = a1;
  result = 14388LL * a1;
  v3 = (int *)((char *)&dword_140404A6C[71857786] + result);
  *(unsigned int *)((char *)&dword_140404A6C[71857811] + result) = 0;
  *(unsigned int *)((char *)&dword_140404A6C[71857836] + result) = 0;
  *(unsigned int *)((char *)&dword_140404A6C[71857861] + result) = 0;
  *(unsigned int *)((char *)&dword_140404A6C[71857886] + result) = 0;
  *(unsigned int *)((char *)&dword_140404A6C[71857911] + result) = 0;
  *(unsigned int *)((char *)&dword_140404A6C[71857936] + result) = 0;
  *(unsigned int *)((char *)&dword_140404A6C[71857786] + result) = 0;
  v4 = *(int *)((char *)&dword_140404A6C[71856292] + result);
  if ( (_DWORD)v4 == -1 )
    return result;
  v5 = 0;
  v6 = dword_140404A6C[283831312];
  v7 = &dword_140404A6C[7166 * v4 + 280658140];
  result = dword_140404A6C[179992861];
  v31 = v7;
  v30 = dword_140404A6C[179992861];
  do
  {
    v8 = (int)*(v7 - 1);
    if ( v8 <= 0 )
      goto LABEL_22;
    v9 = v7;
    v10 = v30;
    do
    {
      result = (int)*v9;
      v11 = 1760 * result;
      v12 = dword_140404A6C[1760 * result + 278845898];
      if ( v12 > 14 )
      {
        if ( v12 == 27 )
        {
          v18 = (int)dword_140404A6C[v11 + 278846053];
          if ( (_DWORD)v18 != -1 )
          {
            v19 = 5210 * v18;
            if ( (int)dword_140404A6C[5210 * v18 + 129716712] > 0 )
            {
              v20 = 1199 * v1;
              v21 = v5 * 4 + 14388 * v1;
              dword_140404A6C[3597 * v1 + 71857787 + 3 * *(int *)((char *)&dword_140404A6C[71857786] + v21) + v5] = 27;
              v22 = dword_140404A6C[v19 + 129716715];
              v23 = dword_140404A6C[v19 + 129716710];
              v24 = v5 * 4 + 12 * (1199 * v1 + *(int *)((char *)&dword_140404A6C[71857786] + v21));
              if ( v6 == 4 )
              {
                *(unsigned int *)((char *)&dword_140404A6C[71857788] + v24) = v18;
                ++*(unsigned int *)((char *)&dword_140404A6C[71857786] + v21);
                dword_140404A6C[16 * (__int64)v10 + 179992862] = v23;
                dword_140404A6C[16 * (__int64)(int)dword_140404A6C[179992861] + 179992863] = v22;
                dword_140404A6C[16 * (__int64)(int)dword_140404A6C[179992861] + 179992865] = v18;
                v25 = &dword_140404A6C[16 * (__int64)(int)dword_140404A6C[179992861] + 179992866];
                *v25 = dword_140404A6C[v19 + 129716720];
                v25[1] = dword_140404A6C[v19 + 129716721];
                v25[2] = dword_140404A6C[v19 + 129716722];
                v26 = &dword_140404A6C[16 * (__int64)(int)dword_140404A6C[179992861] + 179992869];
                *v26 = dword_140404A6C[v19 + 129716726];
                v26[1] = dword_140404A6C[v19 + 129716727];
                v26[2] = dword_140404A6C[v19 + 129716728];
                v27 = &dword_140404A6C[16 * (__int64)(int)dword_140404A6C[179992861] + 179992872];
                *v27 = dword_140404A6C[v19 + 129716729];
                v27[1] = dword_140404A6C[v19 + 129716730];
                v27[2] = dword_140404A6C[v19 + 129716731];
                v28 = &dword_140404A6C[16 * (__int64)(int)dword_140404A6C[179992861] + 179992875];
                *v28 = dword_140404A6C[v19 + 129716732];
                v28[1] = dword_140404A6C[v19 + 129716733];
                result = dword_140404A6C[v19 + 129716734];
                v28[2] = result;
                v10 = ++dword_140404A6C[179992861];
              }
              else
              {
                *(unsigned int *)((char *)&dword_140404A6C[71857788] + v24) = v23;
                result = 3 * (v20 + *(int *)((char *)&dword_140404A6C[71857786] + v21));
                dword_140404A6C[3 * v20
                              + 71857789
                              + 3 * (int)(*(unsigned int *)((char *)&dword_140404A6C[71857786] + v21))++
                              + v5] = v22;
              }
            }
          }
        }
        else if ( v12 == 18 )
        {
          v29 = v5 * 4 + 14388 * v1;
          dword_140404A6C[3597 * v1 + 71857787 + 3 * *(int *)((char *)&dword_140404A6C[71857786] + v29) + v5] = 18;
          dword_140404A6C[3597 * v1 + 71857788 + 3 * *(int *)((char *)&dword_140404A6C[71857786] + v29) + v5] = dword_140404A6C[v11 + 278846062];
          result = dword_140404A6C[v11 + 278846063];
          dword_140404A6C[3597 * v1
                        + 71857789
                        + 3 * (int)(*(unsigned int *)((char *)&dword_140404A6C[71857786] + v29))++
                        + v5] = result;
        }
      }
      else
      {
        v13 = 1199 * v1;
        dword_140404A6C[3597 * v1 + 71857787 + 3 * *v3 + v5] = v12;
        dword_140404A6C[3597 * v1 + 71857788 + 3 * *v3 + v5] = 0;
        dword_140404A6C[3597 * v1 + 71857789 + 3 * *v3 + v5] = 0;
        v14 = v5 * 4 + 12 * (1199 * v1 + *v3);
        if ( (int)dword_140404A6C[v11 + 278845906] <= 0 )
        {
          result = dword_140404A6C[v11 + 278845974];
          *(unsigned int *)((char *)&dword_140404A6C[71857789] + v14) = result;
        }
        else
        {
          v15 = 1760LL * (int)dword_140404A6C[v11 + 278845907];
          *(unsigned int *)((char *)&dword_140404A6C[71857788] + v14) = 1;
          v16 = (int)dword_140404A6C[v11 + 278845974] <= 0;
          v17 = dword_140404A6C[v15 + 278845974];
          result = 3 * (v13 + *v3);
          dword_140404A6C[3 * v13 + 71857789 + 3 * *v3 + v5] = v17;
          if ( !v16 )
          {
            result = dword_140404A6C[1268 * dword_140404A6C[v15 + 278845898] + 278521294] + 1;
            if ( v17 < (int)result )
            {
              result = 3 * (v13 + *v3);
              ++dword_140404A6C[3 * v13 + 71857789 + 3 * (*v3)++ + v5];
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

