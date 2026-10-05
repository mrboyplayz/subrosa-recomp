/* Address: 0x1400baa30 | Name: sub_1400BAA30 | Size: 818 bytes */
_UNKNOWN **__fastcall sub_1400BAA30(int a1, int a2)
{
  _UNKNOWN **result; // rax
  int v3; // r15d
  __int64 v4; // rsi
  int v5; // r12d
  int v6; // ebx
  int v7; // ebx
  char v8; // al
  int v9; // edi
  int v10; // r14d
  int v11; // ebp
  int v12; // edx
  int i; // ebx
  int v14; // xmm6_4
  __int64 v15; // rcx
  int v16; // eax
  int v17; // xmm7_4
  int *v18; // rax
  int v19; // xmm8_4
  int v20; // xmm9_4
  int v21; // ecx
  __int64 v22; // rbx
  __int64 v23; // rax
  int v24; // xmm1_4
  __int64 v25; // rbx
  int v26[4]; // [rsp+20h] [rbp-E8h] BYREF
  _OWORD v27[2]; // [rsp+30h] [rbp-D8h] BYREF
  int v28; // [rsp+50h] [rbp-B8h]
  _UNKNOWN *retaddr; // [rsp+108h] [rbp+0h] BYREF

  result = &retaddr;
  v3 = a1;
  v4 = 56076LL * a1;
  v5 = a2;
  if ( *(int *)((char *)&unk_183A7E2A8 + v4) > 0 )
  {
    memset(dword_140585440, 0, 0x100u);
    v6 = rand() & 1;
    v7 = (rand() & 1) + v6;
    v8 = rand();
    v9 = *(_DWORD *)((char *)&unk_183A7E2A8 + v4);
    v10 = v9;
    if ( (v8 & 1) + v7 + 2 <= v9 )
      v10 = (v8 & 1) + v7 + 2;
    v11 = 0;
    if ( v10 > 0 )
    {
      do
      {
        v12 = 0;
        if ( v9 > 0 )
        {
          v9 = *(_DWORD *)((char *)&unk_183A7E2A8 + v4);
          v12 = rand() % v9;
          for ( i = 0; i < 512; ++i )
          {
            if ( !dword_140585440[v12] )
              break;
            v9 = *(_DWORD *)((char *)&unk_183A7E2A8 + v4);
            v12 = rand() % v9;
          }
        }
        v14 = 0;
        dword_140585440[v12] = 1;
        v15 = v4 + 788LL * v12;
        v16 = *(_DWORD *)((char *)&unk_183A7E2B8 + v15);
        switch ( v16 )
        {
          case 1:
            v14 = 1070141403;
            break;
          case 2:
            v14 = 1078530011;
            break;
          case 3:
            v14 = -1077342245;
            break;
        }
        v17 = *(_DWORD *)((char *)&unk_183A7E2AC + v15);
        v18 = (int *)&unk_16DC819C0;
        v19 = *(_DWORD *)((char *)&unk_183A7E2B0 + v15);
        v20 = *(_DWORD *)((char *)&unk_183A7E2B4 + v15);
        v21 = 0;
        v22 = 0;
        while ( *v18 )
        {
          ++v21;
          ++v22;
          v18 += 202;
          if ( (__int64)v18 >= (__int64)&dword_16DD4B9C0 )
            goto LABEL_21;
        }
        if ( v21 != -1 )
        {
          memset((char *)&unk_16DC819C0 + 808 * v21, 0, 0x328u);
          v23 = 808 * v22;
          *(_QWORD *)((char *)&unk_16DC819C0 + v23) = 1;
          *(_DWORD *)((char *)&unk_16DC819C0 + v23 + 20) = v17;
          *(_DWORD *)((char *)&unk_16DC819C0 + v23 + 24) = v19;
          *(_DWORD *)((char *)&unk_16DC819C0 + v23 + 28) = v20;
          *(_DWORD *)((char *)&unk_16DC819C0 + v23 + 32) = v14;
          *(_QWORD *)((char *)&unk_16DC819C0 + v23 + 8) = -1;
        }
LABEL_21:
        ++v11;
      }
      while ( v11 < v10 );
      v3 = a1;
      v5 = a2;
    }
    v24 = *(_DWORD *)((char *)&unk_183A8A7B0 + v4);
    v26[0] = *(_DWORD *)((char *)&unk_183A8A7AC + v4);
    v26[2] = *(_DWORD *)((char *)&unk_183A8A7B4 + v4);
    v26[1] = v24;
    v28 = 1065353216;
    v27[0] = xmmword_1400F78B0;
    v27[1] = xmmword_1400F78B0;
    v25 = (int)sub_14003B080(v5, v26, nullptr, (int *)v27);
    result = (_UNKNOWN **)sub_140039500(360);
    dword_163D94B4C[0] = v25;
    dword_163D94B70 = v3;
    *((_DWORD *)&unk_19025F3F4 + 1760 * v25) = (_DWORD)result;
  }
  return result;
}

