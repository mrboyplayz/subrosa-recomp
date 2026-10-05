/* Address: 0x1400b1040 | Name: sub_1400B1040 | Size: 799 bytes */
__int64 __fastcall sub_1400B1040(int a1)
{
  __int64 result; // rax
  __int64 v2; // rdx
  __int64 v3; // r15
  unsigned int v4; // r12d
  int v5; // ebp
  int *v6; // r13
  int v7; // xmm1_4
  int v8; // esi
  int *v9; // r14
  int *v10; // rbx
  __int64 v11; // rdi
  __int64 v12; // rax
  int v13; // eax
  int v14; // edi
  signed int v15; // eax
  signed int v16; // eax
  __int64 v17; // rdi
  int v18; // r9d
  unsigned int *v19; // rdx
  __int64 v20; // r8
  signed int v21; // eax
  __int64 v22; // rdx
  int v23[4]; // [rsp+20h] [rbp-68h] BYREF
  _OWORD v24[2]; // [rsp+30h] [rbp-58h] BYREF
  int v25; // [rsp+50h] [rbp-38h]
  unsigned int v26; // [rsp+90h] [rbp+8h]

  result = a1;
  v2 = 3597LL * a1;
  v3 = dword_16D67D63C[v2];
  v4 = dword_16D67D624[v2];
  v26 = v4;
  if ( (_DWORD)v3 != -1 )
  {
    result = (__int64)dword_190941BEC;
    v5 = 0;
    v6 = (int *)((char *)&unk_16D67ED94 + v2 * 4);
    v7 = dword_190941BEC[7166 * v3 + 1];
    v23[0] = dword_190941BEC[7166 * v3];
    v23[2] = dword_190941BEC[7166 * v3 + 2];
    v23[1] = v7;
    v25 = 1065353216;
    v24[0] = xmmword_1400F78B0;
    v24[1] = xmmword_1400F78B0;
    do
    {
      v8 = 0;
      if ( *v6 > 0 )
      {
        v9 = v6 + 2;
        v10 = v6 + 2;
        do
        {
          result = (unsigned int)*(v10 - 1);
          if ( (int)result > 14 )
          {
            if ( (_DWORD)result == 27 )
            {
              if ( dword_19154118C == 4 )
              {
                v16 = sub_14003B080(27, v23, nullptr, (int *)v24);
                v17 = v16;
                sub_140089E50(v16, -1, v3, v5);
                result = (unsigned int)dword_178C5B900;
                if ( dword_178C5B900 > 0 )
                {
                  v18 = *v9;
                  v19 = (unsigned int *)&unk_178C5B90C;
                  v20 = (unsigned int)dword_178C5B900;
                  do
                  {
                    if ( v19[1] == v18 )
                    {
                      result = *v19;
                      dword_19025F340[1760 * v17] = result;
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
                result = sub_1400924F0(*v10, v4, v10[1]);
                v14 = result;
                if ( (_DWORD)result != -1 )
                {
                  v15 = sub_14003B080(27, v23, nullptr, (int *)v24);
                  dword_19025F340[1760 * v15] = v14;
                  result = sub_140089E50(v15, -1, v3, v5);
                }
              }
            }
            else if ( (_DWORD)result == 18 )
            {
              v21 = sub_14003B080(18, v23, nullptr, (int *)v24);
              v22 = 7040LL * v21;
              *(_DWORD *)((char *)&unk_19025F364 + v22) = *v10;
              *(_DWORD *)((char *)&unk_19025F368 + v22) = v10[1];
              result = sub_140089E50(v21, -1, v3, v5);
            }
          }
          else
          {
            v11 = (int)sub_14003B080(result, v23, nullptr, (int *)v24);
            v12 = *(v10 - 1);
            if ( dword_1901220D0[1268 * v12] )
            {
              if ( *v10 > 0 )
              {
                v13 = sub_14003B080((int)v12 + 1, v23, nullptr, (int *)v24);
                *((_DWORD *)&unk_19025F204 + 1760 * v13) = v10[1];
                sub_140089E50(v11, v13, -1, 0);
              }
            }
            else
            {
              *((_DWORD *)&unk_19025F204 + 1760 * v11) = v10[1];
            }
            result = sub_140089E50(v11, -1, v3, v5);
          }
          ++v8;
          v9 += 3;
          v10 += 3;
        }
        while ( v8 < *v6 );
      }
      ++v5;
      v6 += 25;
    }
    while ( v5 < 7 );
  }
  return result;
}

