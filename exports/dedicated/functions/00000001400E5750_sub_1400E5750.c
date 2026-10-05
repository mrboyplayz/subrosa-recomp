/* Address: 0x1400e5750 | Name: sub_1400E5750 | Size: 792 bytes */
__int64 __fastcall sub_1400E5750(int a1, int a2)
{
  __int64 v2; // rbx
  unsigned __int64 v3; // rbp
  __int64 v4; // rdi
  __int64 v5; // r15
  __int64 v6; // r14
  int v7; // xmm4_4
  int v8; // xmm0_4
  int v9; // xmm1_4
  __int64 result; // rax
  unsigned int v11; // [rsp+50h] [rbp+8h] BYREF

  v2 = a2;
  v3 = 7040LL * a2;
  v4 = a1;
  dword_19025F418[v3 / 4] = dword_19025F404[v3 / 4];
  dword_19025F41C[v3 / 4] = dword_19025F408[v3 / 4];
  dword_19025F420[v3 / 4] = dword_19025F40C[v3 / 4];
  dword_19025F424[v3 / 4] = dword_19025F410[v3 / 4];
  dword_19025F404[v3 / 4] = dword_191541414;
  sub_1400AFB00(&v11, 8);
  v5 = 318464LL * (int)v11 + 36 * v2;
  v6 = 318464 * v4 + 36 * v2;
  sub_1400E5590((char *)&unk_16F11A7C8 + v6, *(_DWORD *)((char *)&unk_16F11A7C8 + v5), 28);
  sub_1400E5590((char *)&unk_16F11A7CC + v6, *(_DWORD *)((char *)&unk_16F11A7CC + v5), 28);
  sub_1400E5590((char *)&unk_16F11A7D0 + v6, *(_DWORD *)((char *)&unk_16F11A7D0 + v5), 28);
  *(float *)&v7 = (float)((float)*(int *)((char *)&unk_16F11A7C8 + v6) * 0.00024414062) - 4096.0;
  *(float *)&v8 = (float)*(int *)((char *)&unk_16F11A7CC + v6) * 0.00024414062;
  *(float *)&v9 = (float)((float)*(int *)((char *)&unk_16F11A7D0 + v6) * 0.00024414062) - 4096.0;
  dword_19025F11C[v3 / 4] = v7;
  dword_19025F120[v3 / 4] = v8;
  dword_19025F124[v3 / 4] = v9;
  dword_19025F408[v3 / 4] = v7;
  dword_19025F40C[v3 / 4] = dword_19025F120[v3 / 4];
  dword_19025F410[v3 / 4] = dword_19025F124[v3 / 4];
  if ( !dword_19025F414[v3 / 4] )
  {
    dword_19025F41C[v3 / 4] = dword_19025F11C[v3 / 4];
    dword_19025F420[v3 / 4] = dword_19025F120[v3 / 4];
    dword_19025F424[v3 / 4] = dword_19025F124[v3 / 4];
    dword_19025F418[v3 / 4] = dword_191541414;
  }
  dword_19025F414[v3 / 4] = 1;
  sub_1400AFB00((char *)&unk_16F11A7D4 + v6, 2);
  sub_1400E5660((int *)((char *)&unk_16F11A7D8 + v6), *(_DWORD *)((char *)&unk_16F11A7D8 + v5), 14);
  sub_1400E5660((int *)((char *)&unk_16F11A7DC + v6), *(_DWORD *)((char *)&unk_16F11A7DC + v5), 14);
  sub_1400E5660((int *)((char *)&unk_16F11A7E0 + v6), *(_DWORD *)((char *)&unk_16F11A7E0 + v5), 14);
  sub_1400E9FD0(&dword_19025F164[v3 / 4], (char *)&unk_16F11A7D4 + v6);
  result = (unsigned int)dword_19025F0D4[v3 / 4];
  if ( (_DWORD)result == 18 )
  {
    sub_1400AFB00((char *)&unk_19025F364 + v3, 4);
    sub_1400AFB00((char *)&unk_19025F360 + v3, 4);
    sub_1400AFB00((char *)&unk_19025F368 + v3, 30);
    result = (unsigned int)dword_19025F0D4[v3 / 4];
  }
  if ( (_DWORD)result == 26 )
  {
    sub_1400AFB00((_DWORD *)&qword_19025F428[v3 / 8] + 1, 1);
    result = (unsigned int)dword_19025F0D4[v3 / 4];
  }
  if ( (_DWORD)result == 39 )
  {
    sub_1400AFB00(&v11, 12);
    result = v11;
    if ( v11 == 4095 )
      result = 0xFFFFFFFFLL;
    dword_19025F430[v3 / 4] = result;
  }
  return result;
}

