/* Address: 0x14018ef40 | Name: sub_14018EF40 | Size: 622 bytes */
__int64 __fastcall sub_14018EF40(int a1, int a2)
{
  __int64 v2; // rbx
  __int64 v3; // rsi
  __int64 v4; // rdi
  __int64 v5; // rbx
  unsigned int v6; // eax
  __int64 v7; // rbp
  __int64 v8; // rbx
  __int64 v9; // rdi
  _DWORD *v10; // rbx
  __int64 v11; // rbp
  int *v12; // rdi
  __int64 v13; // rsi
  __int64 v14; // r14
  unsigned int v15; // r15d
  __int64 result; // rax
  unsigned int v17; // [rsp+50h] [rbp+8h] BYREF
  int v18; // [rsp+58h] [rbp+10h] BYREF

  v2 = a2;
  v3 = a1;
  sub_140115AE0(&v18, 8);
  v4 = v2;
  v5 = 7166 * v2;
  sub_140115AE0(&v17, 8);
  v6 = v17;
  if ( v17 == 255 )
    v6 = -1;
  dword_140404A6C[v5 + 280651313] = v6;
  sub_140115AE0(&dword_140404A6C[v5 + 280651314], 4);
  sub_140115AE0(&dword_140404A6C[v5 + 280651318], 1);
  sub_140115AE0(&dword_140404A6C[v5 + 280658301], 1);
  v7 = v18;
  v8 = 484 * v4 + 318464LL * v18;
  v9 = 484 * v4 + 318464 * v3;
  sub_14018D510(
    (unsigned int *)((char *)&dword_140404A6C[137297855] + v9),
    *(unsigned int *)((char *)&dword_140404A6C[137297855] + v8),
    28);
  sub_14018D510(
    (unsigned int *)((char *)&dword_140404A6C[137297856] + v9),
    *(unsigned int *)((char *)&dword_140404A6C[137297856] + v8),
    28);
  sub_14018D510(
    (unsigned int *)((char *)&dword_140404A6C[137297857] + v9),
    *(unsigned int *)((char *)&dword_140404A6C[137297857] + v8),
    28);
  sub_140115AE0((unsigned int *)((char *)&dword_140404A6C[137297858] + v9), 2);
  sub_14018D5E0(
    (int *)((char *)&dword_140404A6C[137297859] + v9),
    *(unsigned int *)((char *)&dword_140404A6C[137297859] + v8),
    14);
  sub_14018D5E0(
    (int *)((char *)&dword_140404A6C[137297860] + v9),
    *(unsigned int *)((char *)&dword_140404A6C[137297860] + v8),
    14);
  sub_14018D5E0(
    (int *)((char *)&dword_140404A6C[137297861] + v9),
    *(unsigned int *)((char *)&dword_140404A6C[137297861] + v8),
    14);
  v10 = (unsigned int *)((char *)&dword_140404A6C[137297914] + v9);
  v11 = v7 - v3;
  v12 = (int *)(0x140000000LL + v9 + 553405016);
  v13 = 15;
  v14 = 79616 * v11;
  v15 = dword_140404A6C[289317485] + 8 * dword_140404A6C[289317484];
  do
  {
    sub_140115AE0(&v17, 1);
    if ( v17 )
    {
      sub_140115AE0(v12 - 1, 2);
      sub_14018D5E0(v12, v10[v14 + 1], 12);
      sub_14018D5E0(v12 + 1, v10[v14 + 2], 12);
      sub_14018D5E0(v12 + 2, v10[v14 + 3], 12);
    }
    else
    {
      *v10 = v10[v14];
      v10[1] = v10[v14 + 1];
      v10[2] = v10[v14 + 2];
      v10[3] = v10[v14 + 3];
    }
    v12 += 4;
    v10 += 4;
    --v13;
  }
  while ( v13 );
  result = dword_140404A6C[289317485] + 8 * dword_140404A6C[289317484] - v15;
  dword_140404A6C[179992571] += result;
  return result;
}

