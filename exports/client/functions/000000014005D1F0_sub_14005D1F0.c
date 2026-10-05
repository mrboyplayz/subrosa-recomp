/* Address: 0x14005d1f0 | Name: sub_14005D1F0 | Size: 720 bytes */
__int64 __fastcall sub_14005D1F0(__int64 a1)
{
  float v1; // xmm6_4
  unsigned int v2; // xmm1_4
  int v3; // xmm0_4
  signed int v4; // r14d
  __int64 v5; // rdx
  int v6; // ebp
  unsigned int v7; // eax
  signed int v8; // eax
  signed int v9; // esi
  __int64 v10; // rdi
  __int64 result; // rax
  __int64 v12; // rbx
  unsigned int v13; // r14d
  unsigned int v14; // r15d
  __int64 v15; // rdi
  __int64 v16; // rbx
  unsigned int v17; // [rsp+20h] [rbp-88h] BYREF
  float v18; // [rsp+24h] [rbp-84h]
  int v19; // [rsp+28h] [rbp-80h]
  _OWORD v20[2]; // [rsp+30h] [rbp-78h] BYREF
  int v21; // [rsp+50h] [rbp-58h]

  v1 = *(float *)(a1 + 4);
  *(float *)&v2 = *(float *)a1 - 8.0;
  v20[0] = xmmword_140278D30;
  v20[1] = xmmword_140278D30;
  v21 = 1065353216;
  v3 = *(_DWORD *)(a1 + 8);
  v18 = v1;
  v19 = v3;
  v17 = v2;
  v4 = sub_140054130(36, &v17, nullptr, (unsigned int *)v20);
  v5 = 1760LL * v4;
  dword_140404A6C[273270150] = v4;
  v6 = 0;
  v7 = dword_140404A6C[v5 + 278845915];
  dword_140404A6C[v5 + 278845897] = 1;
  dword_140404A6C[v5 + 278846111] = v7;
  do
  {
    v1 = v1 + 0.5;
    v18 = v1;
    v8 = sub_140054130(36, &v17, nullptr, (unsigned int *)v20);
    v9 = v8;
    v10 = v8;
    if ( v6 == 15 )
      dword_140404A6C[47 * dword_140404A6C[1760 * v8 + 278845915] + 18215718] = 1015580809;
    result = sub_1400A4440();
    if ( (_DWORD)result == -1 )
      break;
    v12 = 61LL * (int)result;
    MEMORY[0x1401FCD30](&dword_140404A6C[v12 + 486149254], 0, 240);
    dword_140404A6C[v12 + 486149253] = 1;
    dword_140404A6C[v12 + 486149254] = 7;
    *(_QWORD *)&dword_140404A6C[v12 + 486149256] = 0x10000;
    dword_140404A6C[v12 + 486149293] = -1;
    v13 = dword_140404A6C[1760 * v4 + 278845915];
    dword_140404A6C[v12 + 486149291] = v13;
    v14 = dword_140404A6C[1760 * v10 + 278845915];
    dword_140404A6C[v12 + 486149292] = v14;
    dword_140404A6C[v12 + 486149281] = 1048576000;
    dword_140404A6C[v12 + 486149282] = 1052770304;
    dword_140404A6C[v12 + 486149267] = 0;
    *(_QWORD *)&dword_140404A6C[v12 + 486149268] = 1048576000;
    dword_140404A6C[v12 + 486149270] = 0;
    dword_140404A6C[v12 + 486149271] = -1098907648;
    dword_140404A6C[v12 + 486149272] = 0;
    result = sub_1400A4440();
    if ( (_DWORD)result == -1 )
      break;
    v15 = (int)result;
    v16 = 61LL * (int)result;
    MEMORY[0x1401FCD30](&dword_140404A6C[v16 + 486149254], 0, 240);
    dword_140404A6C[v16 + 486149253] = 1;
    dword_140404A6C[v16 + 486149254] = 8;
    result = 18 * v15;
    *(_QWORD *)&dword_140404A6C[v16 + 486149256] = 0x10000;
    dword_140404A6C[v16 + 486149291] = v13;
    ++v6;
    dword_140404A6C[v16 + 486149292] = v14;
    v4 = v9;
    dword_140404A6C[v16 + 486149293] = -1;
    *(_QWORD *)&dword_140404A6C[2 * result + 485543033] = 0;
    dword_140404A6C[2 * result + 485543035] = 0;
    dword_140404A6C[v16 + 486149281] = 0;
    dword_140404A6C[v16 + 486149282] = 998244352;
  }
  while ( v6 < 16 );
  return result;
}

