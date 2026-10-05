/* Address: 0x140011570 | Name: sub_140011570 | Size: 550 bytes */
__int64 __fastcall sub_140011570(int a1, int a2, int a3, int a4)
{
  int v4; // r11d
  __int64 v5; // r10
  int v7; // ebp
  int v8; // r8d
  __int64 v9; // r12
  unsigned int v10; // r13d
  int v11; // ecx
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
  int v29; // [rsp+70h] [rbp+18h]

  v4 = a2;
  v5 = a1;
  v7 = a2;
  v8 = 5 - a2;
  v27 = 5 - a2;
  if ( a2 >= 3 )
    v7 = 5 - a2;
  v9 = 232LL * a1;
  v10 = *(_DWORD *)&byte_15AE31760[232 * a1 + 112 + 4 * a2] & a3;
  v11 = 0;
  v29 = 0;
  if ( *(int *)&byte_15AE31760[232 * v5 + 108] > 0 )
  {
    v12 = *(_DWORD **)&byte_15AE31760[v9 + 160];
    v13 = 8;
    v14 = 232LL * a4;
    v26 = v12;
    do
    {
      if ( *v12 == v4 )
      {
        v15 = *(unsigned int *)&byte_15AE31760[v14 + 108];
        if ( (int)v15 > 0 )
        {
          v16 = *(_DWORD **)&byte_15AE31760[v14 + 160];
          v17 = 12;
          v24 = __ROL4__(1, v11);
          v25 = *(unsigned int *)&byte_15AE31760[v14 + 108];
          do
          {
            if ( *v16 == v8 )
            {
              v18 = 0;
              while ( 1 )
              {
                if ( v18 != v7 )
                {
                  v19 = *(_QWORD *)&byte_15AE31760[v9 + 136];
                  v20 = *(_QWORD *)&byte_15AE31760[v14 + 136];
                  v21 = *(_QWORD *)&byte_15AE31760[v9 + 72];
                  v22 = *(_QWORD *)&byte_15AE31760[v14 + 72];
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
    while ( v11 < *(_DWORD *)&byte_15AE31760[v9 + 108] );
  }
  return v10;
}

