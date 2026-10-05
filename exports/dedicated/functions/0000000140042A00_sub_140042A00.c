/* Address: 0x140042a00 | Name: sub_140042A00 | Size: 720 bytes */
__int64 __fastcall sub_140042A00(__int64 a1)
{
  float v1; // xmm6_4
  float v2; // xmm1_4
  int v3; // xmm0_4
  int v4; // r14d
  unsigned __int64 v5; // rdx
  int v6; // ebp
  int v7; // eax
  int v8; // eax
  int v9; // esi
  __int64 v10; // rdi
  __int64 result; // rax
  __int64 v12; // rbx
  int v13; // r14d
  int v14; // r15d
  __int64 v15; // rdi
  __int64 v16; // rbx
  float v17; // [rsp+20h] [rbp-88h] BYREF
  float v18; // [rsp+24h] [rbp-84h]
  int v19; // [rsp+28h] [rbp-80h]
  _OWORD v20[2]; // [rsp+30h] [rbp-78h] BYREF
  int v21; // [rsp+50h] [rbp-58h]

  v1 = *(float *)(a1 + 4);
  v2 = *(float *)a1 - 8.0;
  v20[0] = xmmword_1400F78B0;
  v20[1] = xmmword_1400F78B0;
  v21 = 1065353216;
  v3 = *(_DWORD *)(a1 + 8);
  v18 = v1;
  v19 = v3;
  v17 = v2;
  v4 = sub_14003B080(36, (int *)&v17, nullptr, (int *)v20);
  v5 = 7040LL * v4;
  dword_18ED9E984 = v4;
  v6 = 0;
  v7 = dword_19025F118[v5 / 4];
  *(_DWORD *)((char *)&unk_19025F0D0 + v5) = 1;
  LODWORD(qword_19025F428[v5 / 8]) = v7;
  do
  {
    v1 = v1 + 0.5;
    v18 = v1;
    v8 = sub_14003B080(36, (int *)&v17, nullptr, (int *)v20);
    v9 = v8;
    v10 = v8;
    if ( v6 == 15 )
      *((_DWORD *)&unk_140249624 + 47 * dword_19025F118[1760 * v8]) = 1015580809;
    result = sub_1400503D0();
    if ( (_DWORD)result == -1 )
      break;
    v12 = 244LL * (int)result;
    memset((char *)&unk_14B883324 + v12, 0, 0xF0u);
    *(_DWORD *)((char *)&unk_14B883320 + v12) = 1;
    *(_DWORD *)((char *)&unk_14B883324 + v12) = 7;
    *(_QWORD *)((char *)&unk_14B88332C + v12) = 0x10000;
    *(_DWORD *)((char *)&unk_14B8833C0 + v12) = -1;
    v13 = dword_19025F118[1760 * v4];
    *(_DWORD *)((char *)&unk_14B8833B8 + v12) = v13;
    v14 = dword_19025F118[1760 * v10];
    *(_DWORD *)((char *)&unk_14B8833BC + v12) = v14;
    *(_DWORD *)((char *)&unk_14B883390 + v12) = 1048576000;
    *(_DWORD *)((char *)&unk_14B883394 + v12) = 1052770304;
    *(_DWORD *)((char *)&unk_14B883358 + v12) = 0;
    *(_QWORD *)((char *)&unk_14B88335C + v12) = 1048576000;
    *(_DWORD *)((char *)&unk_14B883364 + v12) = 0;
    *(_DWORD *)((char *)&unk_14B883368 + v12) = -1098907648;
    *(_DWORD *)((char *)&unk_14B88336C + v12) = 0;
    result = sub_1400503D0();
    if ( (_DWORD)result == -1 )
      break;
    v15 = (int)result;
    v16 = 244LL * (int)result;
    memset((char *)&unk_14B883324 + v16, 0, 0xF0u);
    *(_DWORD *)((char *)&unk_14B883320 + v16) = 1;
    *(_DWORD *)((char *)&unk_14B883324 + v16) = 8;
    result = 18 * v15;
    *(_QWORD *)((char *)&unk_14B88332C + v16) = 0x10000;
    *(_DWORD *)((char *)&unk_14B8833B8 + v16) = v13;
    ++v6;
    *(_DWORD *)((char *)&unk_14B8833BC + v16) = v14;
    v4 = v9;
    *(_DWORD *)((char *)&unk_14B8833C0 + v16) = -1;
    *((_QWORD *)xmmword_14B6432F0 + result) = 0;
    *((_DWORD *)xmmword_14B6432F0 + 2 * result + 2) = 0;
    *(_DWORD *)((char *)&unk_14B883390 + v16) = 0;
    *(_DWORD *)((char *)&unk_14B883394 + v16) = 998244352;
  }
  while ( v6 < 16 );
  return result;
}

