/* Address: 0x14003e1a0 | Name: sub_14003E1A0 | Size: 1088 bytes */
_DWORD *__fastcall sub_14003E1A0(unsigned int a1, _BYTE *a2)
{
  __int64 v3; // r10
  int v4; // eax
  int *v5; // r8
  __int64 v6; // r9
  __int64 v7; // r11
  unsigned __int64 v8; // r14
  __int64 v9; // rbx
  int v10; // ebx
  _DWORD *result; // rax
  int v12; // ebx
  int v13; // edi
  int v14; // ebp
  __int64 v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1

  v3 = 1760LL * (int)a1;
  v4 = 1;
  v5 = (int *)((char *)&unk_19025F23C + 7040 * (int)a1);
  v6 = 2;
  v7 = 4;
  do
  {
    if ( (v4 & *((_DWORD *)&unk_19025F0C0 + v3 + ((v6 - 2) >> 5) + 92)) != 0 )
      *((_DWORD *)&unk_195629300 + 39 * *(v5 - 1)) = 0;
    if ( (__ROL4__(v4, 1) & *((_DWORD *)&unk_19025F0C0 + v3 + ((v6 - 1) >> 5) + 92)) != 0 )
      *((_DWORD *)&unk_195629300 + 39 * *v5) = 0;
    if ( (__ROL4__(v4, 2) & *((_DWORD *)&unk_19025F0C0 + v3 + (v6 >> 5) + 92)) != 0 )
      *((_DWORD *)&unk_195629300 + 39 * v5[1]) = 0;
    if ( (__ROL4__(v4, 3) & *((_DWORD *)&unk_19025F0C0 + v3 + ((v6 + 1) >> 5) + 92)) != 0 )
      *((_DWORD *)&unk_195629300 + 39 * v5[2]) = 0;
    if ( (__ROL4__(v4, 4) & *((_DWORD *)&unk_19025F0C0 + v3 + ((v6 + 2) >> 5) + 92)) != 0 )
      *((_DWORD *)&unk_195629300 + 39 * v5[3]) = 0;
    if ( (__ROL4__(v4, 5) & *((_DWORD *)&unk_19025F0C0 + v3 + ((v6 + 3) >> 5) + 92)) != 0 )
      *((_DWORD *)&unk_195629300 + 39 * v5[4]) = 0;
    if ( (__ROL4__(v4, 6) & *((_DWORD *)&unk_19025F0C0 + v3 + ((v6 + 4) >> 5) + 92)) != 0 )
      *((_DWORD *)&unk_195629300 + 39 * v5[5]) = 0;
    if ( (__ROL4__(v4, 7) & *((_DWORD *)&unk_19025F0C0 + v3 + ((v6 + 5) >> 5) + 92)) != 0 )
      *((_DWORD *)&unk_195629300 + 39 * v5[6]) = 0;
    if ( (__ROL4__(v4, 8) & *((_DWORD *)&unk_19025F0C0 + v3 + ((v6 + 6) >> 5) + 92)) != 0 )
      *((_DWORD *)&unk_195629300 + 39 * v5[7]) = 0;
    if ( (__ROL4__(v4, 9) & *((_DWORD *)&unk_19025F0C0 + v3 + ((v6 + 7) >> 5) + 92)) != 0 )
      *((_DWORD *)&unk_195629300 + 39 * v5[8]) = 0;
    if ( (__ROL4__(v4, 10) & *((_DWORD *)&unk_19025F0C0 + v3 + ((v6 + 8) >> 5) + 92)) != 0 )
      *((_DWORD *)&unk_195629300 + 39 * v5[9]) = 0;
    if ( (__ROL4__(v4, 11) & *((_DWORD *)&unk_19025F0C0 + v3 + ((v6 + 9) >> 5) + 92)) != 0 )
      *((_DWORD *)&unk_195629300 + 39 * v5[10]) = 0;
    if ( (__ROL4__(v4, 12) & *((_DWORD *)&unk_19025F0C0 + v3 + ((v6 + 10) >> 5) + 92)) != 0 )
      *((_DWORD *)&unk_195629300 + 39 * v5[11]) = 0;
    if ( (__ROL4__(v4, 13) & *((_DWORD *)&unk_19025F0C0 + v3 + ((v6 + 11) >> 5) + 92)) != 0 )
      *((_DWORD *)&unk_195629300 + 39 * v5[12]) = 0;
    if ( (__ROL4__(v4, 14) & *((_DWORD *)&unk_19025F0C0 + v3 + ((v6 + 12) >> 5) + 92)) != 0 )
      *((_DWORD *)&unk_195629300 + 39 * v5[13]) = 0;
    if ( (__ROL4__(v4, 15) & *((_DWORD *)&unk_19025F0C0 + v3 + ((v6 + 13) >> 5) + 92)) != 0 )
      *((_DWORD *)&unk_195629300 + 39 * v5[14]) = 0;
    v6 += 16;
    v4 = __ROL4__(v4, 16);
    v5 += 16;
    --v7;
  }
  while ( v7 );
  v8 = 7040LL * (int)a1;
  v9 = -1;
  *(_QWORD *)((char *)&unk_19025F0C0 + v8 + 368) = 0;
  do
    ++v9;
  while ( a2[v9] );
  v10 = v9 + 1;
  if ( v10 > 1023 )
    v10 = 1023;
  result = memcpy(&qword_19025F428[v8 / 8], a2, v10);
  v12 = v10 >> 6;
  v13 = 0;
  *((_BYTE *)&unk_19025F0C0 + v8 + 1895) = 0;
  if ( v12 >= 0 )
  {
    v14 = dword_191541414;
    v15 = 0;
    do
    {
      v16 = 0;
      v17 = 0;
      result = &unk_195629300;
      while ( *result )
      {
        v16 = (unsigned int)(v16 + 1);
        ++v17;
        result += 39;
        if ( (__int64)result >= (__int64)&dword_195899300 )
          goto LABEL_47;
      }
      if ( (_DWORD)v16 != -1 )
      {
        v18 = 156 * v17;
        *(_QWORD *)((char *)&unk_195629300 + v18) = 1;
        *(_DWORD *)((char *)&unk_195629300 + v18 + 12) = v14;
        *(_DWORD *)((char *)&unk_195629300 + v18 + 8) = 0;
        *(_DWORD *)((char *)&unk_195629300 + v18 + 16) = a1;
        *(_DWORD *)((char *)&unk_195629300 + v18 + 20) = v13;
        *(_DWORD *)((char *)&unk_195629300 + v18 + 24) = 64;
        v19 = 156LL * (int)v16;
        v20 = *(_OWORD *)((char *)&unk_19025F0C0 + v8 + v15 + 888);
        *(_OWORD *)((char *)&unk_195629300 + v19 + 28) = *(_OWORD *)((char *)&unk_19025F0C0 + v8 + v15 + 872);
        v21 = *(_OWORD *)((char *)&unk_19025F0C0 + v8 + v15 + 904);
        *(_OWORD *)((char *)&unk_195629300 + v19 + 44) = v20;
        v22 = *(_OWORD *)((char *)&unk_19025F0C0 + v8 + v15 + 920);
        *(_OWORD *)((char *)&unk_195629300 + v19 + 60) = v21;
        *(_OWORD *)((char *)&unk_195629300 + v19 + 76) = v22;
        result = (_DWORD *)sub_14006CEC0(a1, v16, 0xFFFFFFFFLL);
      }
LABEL_47:
      ++v13;
      v15 += 64;
    }
    while ( v13 <= v12 );
  }
  return result;
}

