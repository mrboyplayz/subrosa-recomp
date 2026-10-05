/* Address: 0x140117020 | Name: sub_140117020 | Size: 799 bytes */
__int64 __fastcall sub_140117020(int a1)
{
  __int64 result; // rax
  __int64 v2; // rdx
  __int64 v3; // r15
  unsigned int v4; // r12d
  int v5; // ebp
  unsigned int *v6; // r13
  unsigned int v7; // xmm1_4
  signed int v8; // esi
  int *v9; // r14
  unsigned int *v10; // rbx
  __int64 v11; // rdi
  __int64 v12; // rax
  signed int v13; // eax
  unsigned int v14; // edi
  signed int v15; // eax
  signed int v16; // eax
  __int64 v17; // rdi
  int v18; // r9d
  unsigned int *v19; // rdx
  __int64 v20; // r8
  signed int v21; // eax
  __int64 v22; // rdx
  unsigned int v23[4]; // [rsp+20h] [rbp-68h] BYREF
  _OWORD v24[2]; // [rsp+30h] [rbp-58h] BYREF
  int v25; // [rsp+50h] [rbp-38h]
  unsigned int v26; // [rsp+90h] [rbp+8h]

  result = a1;
  v2 = 3597LL * a1;
  v3 = (int)dword_140404A6C[v2 + 71856292];
  v4 = dword_140404A6C[v2 + 71856286];
  v26 = v4;
  if ( (_DWORD)v3 != -1 )
  {
    result = (__int64)&dword_140404A6C[280651440];
    v5 = 0;
    v6 = &dword_140404A6C[v2 + 71857786];
    v7 = dword_140404A6C[7166 * v3 + 280651441];
    v23[0] = dword_140404A6C[7166 * v3 + 280651440];
    v23[2] = dword_140404A6C[7166 * v3 + 280651442];
    v23[1] = v7;
    v25 = 1065353216;
    v24[0] = xmmword_140278D30;
    v24[1] = xmmword_140278D30;
    do
    {
      v8 = 0;
      if ( (int)*v6 > 0 )
      {
        v9 = (int *)(v6 + 2);
        v10 = v6 + 2;
        do
        {
          result = *(v10 - 1);
          if ( (int)result > 14 )
          {
            if ( (_DWORD)result == 27 )
            {
              if ( dword_140404A6C[283831312] == 4 )
              {
                v16 = sub_140054130(27, v23, nullptr, (unsigned int *)v24);
                v17 = v16;
                sub_1400E35D0(v16, -1, v3, v5);
                result = dword_140404A6C[179992861];
                if ( (int)dword_140404A6C[179992861] > 0 )
                {
                  v18 = *v9;
                  v19 = &dword_140404A6C[179992864];
                  v20 = dword_140404A6C[179992861];
                  do
                  {
                    if ( v19[1] == v18 )
                    {
                      result = *v19;
                      dword_140404A6C[1760 * v17 + 278846053] = result;
                    }
                    v19 += 16;
                    --v20;
                  }
                  while ( v20 );
                  v4 = v26;
                }
              }
              else if ( v4 <= 2 )
              {
                result = sub_1400F00D0(*v10, v4, v10[1]);
                v14 = result;
                if ( (_DWORD)result != -1 )
                {
                  v15 = sub_140054130(27, v23, nullptr, (unsigned int *)v24);
                  dword_140404A6C[1760 * v15 + 278846053] = v14;
                  result = sub_1400E35D0(v15, -1, v3, v5);
                }
              }
            }
            else if ( (_DWORD)result == 18 )
            {
              v21 = sub_140054130(18, v23, nullptr, (unsigned int *)v24);
              v22 = 1760LL * v21;
              dword_140404A6C[v22 + 278846062] = *v10;
              dword_140404A6C[v22 + 278846063] = v10[1];
              result = sub_1400E35D0(v21, -1, v3, v5);
            }
          }
          else
          {
            v11 = (int)sub_140054130(result, v23, nullptr, (unsigned int *)v24);
            v12 = (int)*(v10 - 1);
            if ( dword_140404A6C[1268 * v12 + 278521289] )
            {
              if ( (int)*v10 > 0 )
              {
                v13 = sub_140054130((int)v12 + 1, v23, nullptr, (unsigned int *)v24);
                dword_140404A6C[1760 * v13 + 278845974] = v10[1];
                sub_1400E35D0(v11, v13, -1, 0);
              }
            }
            else
            {
              dword_140404A6C[1760 * v11 + 278845974] = v10[1];
            }
            result = sub_1400E35D0(v11, -1, v3, v5);
          }
          ++v8;
          v9 += 3;
          v10 += 3;
        }
        while ( v8 < (int)*v6 );
      }
      ++v5;
      v6 += 25;
    }
    while ( v5 < 7 );
  }
  return result;
}

