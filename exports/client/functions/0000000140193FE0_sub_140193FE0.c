/* Address: 0x140193fe0 | Name: sub_140193FE0 | Size: 516 bytes */
__int64 __fastcall sub_140193FE0(unsigned int a1, unsigned int a2, __int64 a3, int a4)
{
  __int64 v4; // rsi
  __int64 v6; // rdi
  __int64 v8; // r12
  __int64 v10; // rbp
  int v11; // ebx
  __int64 v12; // r8
  _DWORD *v13; // rax
  __int64 v14; // r8
  unsigned int *v15; // r10
  int *v16; // r9

  v4 = a4;
  v6 = 3246088LL * (int)a1;
  v8 = (int)a1;
  if ( dword_140404A6C[v6 + 312324428] )
    return 0;
  v10 = v6 * 4 + 24LL * (int)a2;
  if ( *(unsigned int *)((char *)&dword_140404A6C[312226123] + v10) != -1 )
    sub_1401941F0(a1, a2);
  if ( !(_DWORD)v4 || (int)v4 >= (int)dword_140404A6C[v6 + 309078344] )
    goto LABEL_16;
  v11 = 0;
  v12 = dword_140404A6C[v6 + 309078343] - 1;
  if ( (int)(dword_140404A6C[v6 + 309078343] - 1) > 0 )
  {
    v13 = (_DWORD *)(0x140000000LL + v6 * 4 + 1240526744);
    do
    {
      if ( (int)v4 + *(v13 - 1) < (int)dword_140404A6C[v6 + 309078344]
        && *v13 < (signed int)dword_140404A6C[v6 + 309078345] )
      {
        break;
      }
      ++v11;
      v13 += 3074;
    }
    while ( v11 < (int)v12 );
  }
  if ( v11 < (int)v12 )
  {
    if ( !dword_140404A6C[v6 + 312324428] )
    {
      unk_140404170(
        dword_140404A6C[v6 + 309078341],
        dword_140404A6C[2 * dword_140404A6C[v8 + 283791462] + 283793813],
        v12);
      unk_140404198(
        dword_140404A6C[v6 + 309078341],
        (int)(v11 * dword_140404A6C[v6 + 309078344] + dword_140404A6C[3074 * v11 + 309078346 + v6]),
        v4,
        a3);
    }
    v14 = 3074LL * v11;
    v15 = &dword_140404A6C[v6 + 309078346 + v14];
    v16 = (int *)(0x140000000LL + v6 * 4 + v14 * 4 + 1240526744);
    dword_140404A6C[3 * *v16 + 309078348 + v14 + v6] = *v15;
    dword_140404A6C[3 * *v16 + 309078349 + v14 + v6] = v4;
    dword_140404A6C[3 * *v16 + 309078350 + v14 + v6] = a2;
    *(unsigned int *)((char *)&dword_140404A6C[312226123] + v10) = v11;
    *(unsigned int *)((char *)&dword_140404A6C[312226124] + v10) = (*v16)++;
    *v15 += v4;
    dword_140404A6C[v6 + 312324427] += v4;
    return 1;
  }
  else
  {
LABEL_16:
    *(_QWORD *)((char *)&dword_140404A6C[312226123] + v10) = -1;
    return 0;
  }
}

