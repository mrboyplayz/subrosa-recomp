/* Address: 0x1400e2d20 | Name: sub_1400E2D20 | Size: 634 bytes */
__int64 __fastcall sub_1400E2D20(int *a1, float *a2, float *a3, char a4)
{
  float *v4; // rbp
  int *v5; // r13
  int v6; // ebx
  char v8; // r15
  int v9; // r12d
  float v10; // xmm1_4
  int v11; // edx
  int v12; // ecx
  __int64 result; // rax
  unsigned __int64 v14; // r15
  __int64 v15; // r8
  __int64 v16; // rsi
  __int64 v17; // r13
  unsigned __int64 v18; // r11
  __int64 v19; // rdi
  __int64 v20; // rdx
  __int64 v21; // r10
  __int64 v22; // rsi
  __int64 v23; // rbx
  __int64 v24; // rdi
  __int64 v25; // rcx
  int v26; // [rsp+30h] [rbp-158h]
  _DWORD v29[64]; // [rsp+50h] [rbp-138h]

  v4 = a2;
  v5 = a1;
  v6 = 0;
  v8 = a4;
  v9 = (int)(float)(*a2 * 0.015625);
  v10 = a2[2] * 0.015625;
  v11 = (int)(float)(*a3 * 0.015625);
  v26 = v11;
  v12 = (int)v10;
  result = (unsigned int)(int)(float)(a3[2] * 0.015625);
  if ( (int)v10 <= (int)result )
  {
    v14 = v12;
    v15 = 0;
    v16 = (__int64)v12 << 6;
    result = (unsigned int)(result - v12);
    v17 = (unsigned int)(result + 1);
    do
    {
      if ( v14 <= 0x3F && v9 <= v11 )
      {
        v18 = v9;
        v19 = (unsigned int)(v11 - v9 + 1);
        do
        {
          if ( v18 <= 0x3F )
          {
            v20 = 0;
            result = 9 * (v16 + v18);
            v21 = dword_18A804078[9 * v16 + 9 * v18];
            if ( v21 > 0 )
            {
              do
              {
                if ( v15 < 64 )
                {
                  ++v6;
                  result = (unsigned int)dword_18A80407C[8 * v16 + 8 * v18 + v16 + v18 + v20];
                  v29[v15++] = result;
                }
                ++v20;
              }
              while ( v20 < v21 );
            }
          }
          ++v18;
          --v19;
        }
        while ( v19 );
        v11 = v26;
      }
      ++v14;
      v16 += 64;
      --v17;
    }
    while ( v17 );
    v4 = a2;
    v8 = a4;
    v5 = a1;
  }
  v22 = v6;
  if ( v6 > 0 )
  {
    v23 = 0;
    do
    {
      v24 = (int)v29[v23];
      v25 = 15432 * v24;
      if ( *(float *)&dword_14BC62464[15432 * v24] <= *a3
        && *(float *)&dword_14BC62468[v25] <= a3[1]
        && *(float *)&dword_14BC6246C[v25] <= a3[2]
        && *(float *)&dword_14BC62470[v25] >= *v4
        && *(float *)&dword_14BC62474[v25] >= v4[1]
        && *(float *)&dword_14BC62478[v25] >= v4[2] )
      {
        if ( (v8 & 1) != 0 )
          result = sub_1400E2B40(v5, v4, a3, v24, 0);
        if ( (v8 & 2) != 0 )
          result = sub_1400E2B40(v5, v4, a3, v24, 1);
        if ( (v8 & 4) != 0 )
          result = sub_1400E2B40(v5, v4, a3, v24, 2);
      }
      ++v23;
    }
    while ( v23 < v22 );
  }
  return result;
}

