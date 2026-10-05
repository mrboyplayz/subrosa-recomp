/* Address: 0x14004ce30 | Name: sub_14004CE30 | Size: 786 bytes */
__int64 __fastcall sub_14004CE30(int a1)
{
  __int64 v1; // rdi
  __int64 v2; // rbx
  void *v3; // rcx
  __int64 v4; // rax
  unsigned int v5; // eax
  void *v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  void *v12; // rcx
  __int64 v13; // rax
  __int64 v14; // r8
  __int64 v15; // r8
  __int64 v16; // r8
  __int64 v17; // r8

  v1 = a1;
  v2 = 908LL * a1;
  v3 = *(void **)&dword_140404A6C[v2 + 178527463];
  dword_140404A6C[v2 + 178527461] = dword_140404A6C[177167565];
  dword_140404A6C[v2 + 178527462] = dword_140404A6C[177167566];
  free(v3);
  v4 = j__malloc_base(12 * dword_140404A6C[177167566] * dword_140404A6C[177495247]);
  *(_QWORD *)&dword_140404A6C[v2 + 178527463] = v4;
  MEMORY[0x1401FC920](v4, &dword_140404A6C[177347791]);
  v5 = dword_140404A6C[177495247];
  v6 = *(void **)&dword_140404A6C[v2 + 178527467];
  dword_140404A6C[v2 + 178527465] = dword_140404A6C[177495247];
  dword_140404A6C[v2 + 178527475] = v5;
  free(v6);
  v7 = j__malloc_base(12 * dword_140404A6C[177495247]);
  *(_QWORD *)&dword_140404A6C[v2 + 178527467] = v7;
  MEMORY[0x1401FC920](v7, &dword_140404A6C[177495248]);
  free(*(void **)&dword_140404A6C[v2 + 178527469]);
  v8 = j__malloc_base(12 * dword_140404A6C[177495247]);
  *(_QWORD *)&dword_140404A6C[v2 + 178527469] = v8;
  MEMORY[0x1401FC920](v8, &dword_140404A6C[178109649]);
  free(*(void **)&dword_140404A6C[v2 + 178527471]);
  v9 = j__malloc_base(12 * dword_140404A6C[177495247]);
  *(_QWORD *)&dword_140404A6C[v2 + 178527471] = v9;
  MEMORY[0x1401FC920](v9, &dword_140404A6C[177814737]);
  free(*(void **)&dword_140404A6C[v2 + 178527473]);
  v10 = j__malloc_base(12 * dword_140404A6C[177495247]);
  *(_QWORD *)&dword_140404A6C[v2 + 178527473] = v10;
  MEMORY[0x1401FC920](v10, &dword_140404A6C[178158801]);
  free(*(void **)&dword_140404A6C[v2 + 178527477]);
  v11 = j__malloc_base(24 * dword_140404A6C[177495247]);
  *(_QWORD *)&dword_140404A6C[v2 + 178527477] = v11;
  MEMORY[0x1401FC920](v11, &dword_140404A6C[178224337]);
  v12 = *(void **)&dword_140404A6C[v2 + 178527481];
  dword_140404A6C[v2 + 178527479] = dword_140404A6C[178519250];
  free(v12);
  v13 = j__malloc_base(8 * dword_140404A6C[178519250]);
  *(_QWORD *)&dword_140404A6C[v2 + 178527481] = v13;
  MEMORY[0x1401FC920](v13, &dword_140404A6C[178519251]);
  unk_140404170(34962, dword_140404A6C[2 * dword_140404A6C[v1 + 283790166] + 283793813], v14);
  unk_140404190(
    34962,
    (int)(12 * dword_140404A6C[v2 + 178527462] * dword_140404A6C[v2 + 178527465]),
    *(_QWORD *)&dword_140404A6C[v2 + 178527463],
    35044);
  unk_140404170(34962, 0, v15);
  unk_140404170(34963, dword_140404A6C[2 * dword_140404A6C[v1 + 283790166] + 283793814], v16);
  unk_140404190(34963, (int)(24 * dword_140404A6C[v2 + 178527465]), *(_QWORD *)&dword_140404A6C[v2 + 178527477], 35044);
  return unk_140404170(34963, 0, v17);
}

