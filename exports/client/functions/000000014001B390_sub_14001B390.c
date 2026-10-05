/* Address: 0x14001b390 | Name: sub_14001B390 | Size: 550 bytes */
__int64 __fastcall sub_14001B390(int a1, int a2, int a3, int a4)
{
  int v4; // r11d
  __int64 v5; // r10
  int v7; // ebp
  int v8; // r8d
  __int64 v9; // r12
  unsigned int v10; // r13d
  signed int v11; // ecx
  _DWORD *v12; // rdx
  __int64 v13; // rsi
  __int64 v14; // r15
  __int64 v15; // rax
  _DWORD *v16; // r14
  __int64 v17; // rdi
  int v18; // r8d
  __int64 v19; // r9
  __int64 v20; // r11
  __int64 v21; // r10
  __int64 v22; // rbx
  int v24; // [rsp+0h] [rbp-58h]
  __int64 v25; // [rsp+8h] [rbp-50h]
  _DWORD *v26; // [rsp+10h] [rbp-48h]
  int v27; // [rsp+60h] [rbp+8h]
  signed int v29; // [rsp+70h] [rbp+18h]

  v4 = a2;
  v5 = a1;
  v7 = a2;
  v8 = 5 - a2;
  v27 = 5 - a2;
  if ( a2 >= 3 )
    v7 = 5 - a2;
  v9 = 58LL * a1;
  v10 = dword_140404A6C[58 * a1 + 20074625 + a2] & a3;
  v11 = 0;
  v29 = 0;
  if ( (int)dword_140404A6C[58 * v5 + 20074624] > 0 )
  {
    v12 = *(_DWORD **)&dword_140404A6C[v9 + 20074637];
    v13 = 8;
    v14 = 58LL * a4;
    v26 = v12;
    do
    {
      if ( *v12 == v4 )
      {
        v15 = dword_140404A6C[v14 + 20074624];
        if ( (int)v15 > 0 )
        {
          v16 = *(_DWORD **)&dword_140404A6C[v14 + 20074637];
          v17 = 12;
          v24 = __ROL4__(1, v11);
          v25 = dword_140404A6C[v14 + 20074624];
          do
          {
            if ( *v16 == v8 )
            {
              v18 = 0;
              while ( 1 )
              {
                if ( v18 != v7 )
                {
                  v19 = *(_QWORD *)&dword_140404A6C[v9 + 20074631];
                  v20 = *(_QWORD *)&dword_140404A6C[v14 + 20074631];
                  v21 = *(_QWORD *)&dword_140404A6C[v9 + 20074615];
                  v22 = *(_QWORD *)&dword_140404A6C[v14 + 20074615];
                  if ( *(float *)(v22 + 4LL * (*(_DWORD *)(v20 + v17 - 8) + v18 + 2 * *(_DWORD *)(v20 + v17 - 8))) != *(float *)(v21 + 4LL * (v18 + 2 * *(_DWORD *)(v19 + v13 - 8) + *(_DWORD *)(v19 + v13 - 8)))
                    || *(float *)(v22 + 4LL * (*(_DWORD *)(v20 + v17 - 12) + v18 + 2 * *(_DWORD *)(v20 + v17 - 12))) != *(float *)(v21 + 4LL * (v18 + 2 * *(_DWORD *)(v19 + v13 - 4) + *(_DWORD *)(v19 + v13 - 4)))
                    || *(float *)(v22 + 4LL * (*(_DWORD *)(v20 + v17) + v18 + 2 * *(_DWORD *)(v20 + v17))) != *(float *)(v21 + 4LL * (v18 + 2 * *(_DWORD *)(v19 + v13) + *(_DWORD *)(v19 + v13)))
                    || *(float *)(v22 + 4LL * (*(_DWORD *)(v20 + v17 - 4) + v18 + 2 * *(_DWORD *)(v20 + v17 - 4))) != *(float *)(v21 + 4LL * (v18 + 2 * *(_DWORD *)(v19 + v13 + 4) + *(_DWORD *)(v19 + v13 + 4))) )
                  {
                    break;
                  }
                }
                if ( ++v18 >= 3 )
                {
                  v10 |= v24;
                  break;
                }
              }
              v15 = v25;
              v8 = v27;
            }
            ++v16;
            v17 += 16;
            v25 = --v15;
          }
          while ( v15 );
          v11 = v29;
          v12 = v26;
          v4 = a2;
        }
      }
      ++v11;
      ++v12;
      v13 += 16;
      v29 = v11;
      v26 = v12;
    }
    while ( v11 < (int)dword_140404A6C[v9 + 20074624] );
  }
  return v10;
}

