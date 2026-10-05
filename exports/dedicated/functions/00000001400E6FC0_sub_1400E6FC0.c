/* Address: 0x1400e6fc0 | Name: sub_1400E6FC0 | Size: 622 bytes */
__int64 __fastcall sub_1400E6FC0(int a1, int a2)
{
  __int64 v2; // rbx
  __int64 v3; // rsi
  __int64 v4; // rdi
  __int64 v5; // rbx
  int v6; // eax
  __int64 v7; // rbp
  __int64 v8; // rbx
  __int64 v9; // rdi
  _DWORD *v10; // rbx
  __int64 v11; // rbp
  int *v12; // rdi
  __int64 v13; // rsi
  __int64 v14; // r14
  int v15; // r15d
  __int64 result; // rax
  int v17; // [rsp+50h] [rbp+8h] BYREF
  int v18; // [rsp+58h] [rbp+10h] BYREF

  v2 = a2;
  v3 = a1;
  sub_1400AFB00(&v18, 8);
  v4 = v2;
  v5 = 7166 * v2;
  sub_1400AFB00(&v17, 8);
  v6 = v17;
  if ( v17 == 255 )
    v6 = -1;
  dword_1909419F0[v5] = v6;
  sub_1400AFB00(&dword_1909419F4[v5], 4);
  sub_1400AFB00(&dword_190941A04[v5], 1);
  sub_1400AFB00((char *)&unk_190948720 + v5 * 4, 1);
  v7 = v18;
  v8 = 484 * v4 + 318464LL * v18;
  v9 = 484 * v4 + 318464 * v3;
  sub_1400E5590((char *)&unk_16F0DFBC8 + v9, *(_DWORD *)((char *)&unk_16F0DFBC8 + v8), 28);
  sub_1400E5590((char *)&unk_16F0DFBCC + v9, *(_DWORD *)((char *)&unk_16F0DFBCC + v8), 28);
  sub_1400E5590((char *)&unk_16F0DFBD0 + v9, *(_DWORD *)((char *)&unk_16F0DFBD0 + v8), 28);
  sub_1400AFB00((char *)&unk_16F0DFBD4 + v9, 2);
  sub_1400E5660((int *)((char *)&unk_16F0DFBD8 + v9), *(_DWORD *)((char *)&unk_16F0DFBD8 + v8), 14);
  sub_1400E5660((int *)((char *)&unk_16F0DFBDC + v9), *(_DWORD *)((char *)&unk_16F0DFBDC + v8), 14);
  sub_1400E5660((int *)((char *)&unk_16F0DFBE0 + v9), *(_DWORD *)((char *)&unk_16F0DFBE0 + v8), 14);
  v10 = (_DWORD *)((char *)&unk_16F0DFCB4 + v9);
  v11 = v7 - v3;
  v12 = (int *)(0x140000000LL + v9 + 789445816);
  v13 = 15;
  v14 = 79616 * v11;
  v15 = HIDWORD(qword_197BD727C) + 8 * qword_197BD727C;
  do
  {
    sub_1400AFB00(&v17, 1);
    if ( v17 )
    {
      sub_1400AFB00(v12 - 1, 2);
      sub_1400E5660(v12, v10[v14 + 1], 12);
      sub_1400E5660(v12 + 1, v10[v14 + 2], 12);
      sub_1400E5660(v12 + 2, v10[v14 + 3], 12);
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
  result = (unsigned int)(HIDWORD(qword_197BD727C) + 8 * qword_197BD727C - v15);
  dword_16E6A3C58 += result;
  return result;
}

