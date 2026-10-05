/* Address: 0x14007c3a0 | Name: sub_14007C3A0 | Size: 692 bytes */
__int64 __fastcall sub_14007C3A0(int a1, int a2)
{
  __int64 v2; // r14
  __int64 v3; // r11
  __int64 v4; // r9
  unsigned int v5; // ecx
  __int64 v6; // rax
  __int16 v7; // r10
  unsigned int v8; // r8d
  __int64 v9; // rax
  unsigned __int8 v10; // cl
  unsigned int v11; // r12d
  unsigned int v12; // edx
  __int64 v13; // rax
  unsigned __int8 v14; // bp
  __int64 v15; // r8
  __int64 v16; // r15
  int v17; // eax
  unsigned int v18; // r11d
  __int64 v19; // rax
  unsigned int v20; // ecx
  int v21; // esi
  __int64 v22; // rbx
  signed int v23; // eax
  __int64 v24; // r9
  signed int v25; // r8d
  __int16 v27; // [rsp+58h] [rbp+10h]

  v2 = 16387LL * a2;
  v3 = a1;
  if ( (int)dword_140404A6C[v2 + 135184966] > 0 )
  {
    ++dword_140404A6C[v2 + 135184965];
    dword_140404A6C[v2 + 135184966] = 0;
  }
  v4 = (int)dword_140404A6C[v2 + 135184965];
  v5 = v4 + 2;
  if ( (int)v4 + 2 >= 0x10000 )
  {
    v7 = v27;
  }
  else
  {
    v6 = v2 * 4 + v4;
    LODWORD(v4) = v4 + 2;
    v7 = *(_WORD *)((char *)&dword_140404A6C[135184968] + v6);
    dword_140404A6C[v2 + 135184965] = v5;
  }
  v8 = v4 + 1;
  if ( (int)v4 + 1 >= 0x10000 )
  {
    v10 = v27;
  }
  else
  {
    v9 = (int)v4;
    LODWORD(v4) = v4 + 1;
    v10 = *((_BYTE *)&dword_140404A6C[v2 + 135184968] + v9);
    dword_140404A6C[v2 + 135184965] = v8;
  }
  v11 = v10;
  v12 = v4 + 1;
  if ( (int)v4 + 1 < 0x10000 )
  {
    v13 = (int)v4;
    LODWORD(v4) = v4 + 1;
    v10 = *((_BYTE *)&dword_140404A6C[v2 + 135184968] + v13);
    dword_140404A6C[v2 + 135184965] = v12;
  }
  v14 = v10;
  if ( v11 >= 0x10 || v10 > 0x10u )
    return 0;
  LODWORD(v15) = -1;
  v16 = 1048782 * v3;
  v17 = dword_140404A6C[1048782 * v3 + 112673953];
  v18 = dword_140404A6C[1048782 * v3 + 112673954];
  while ( v17 != v18 )
  {
    if ( LOWORD(dword_140404A6C[16387 * v17 + 112673955 + v16]) == v7 )
      LODWORD(v15) = v17;
    else
      v17 = ((_BYTE)v17 + 1) & 0x3F;
    if ( (_DWORD)v15 != -1 )
      goto LABEL_22;
  }
  v15 = (int)dword_140404A6C[v16 + 112673954];
  v19 = v16 * 4 + 65548 * v15;
  *(_WORD *)((char *)&dword_140404A6C[112673955] + v19) = v7;
  *(_QWORD *)((char *)&dword_140404A6C[112673956] + v19) = 0;
  v20 = dword_140404A6C[v16 + 112673953];
  LODWORD(v19) = ((unsigned __int8)dword_140404A6C[v16 + 112673954] + 1) & 0x3F;
  dword_140404A6C[v16 + 112673954] = v19;
  if ( v20 == (_DWORD)v19 )
    dword_140404A6C[v16 + 112673953] = ((_BYTE)v20 + 1) & 0x3F;
LABEL_22:
  v21 = dword_140404A6C[v2 + 135184967] - v4;
  v22 = 16387LL * (int)v15;
  MEMORY[0x1401FC920](
    &dword_140404A6C[350 * v11 + 112673958 + v22 + v16],
    (char *)&dword_140404A6C[v2 + 135184968] + (int)v4);
  v23 = 1400 * v11 + v21;
  v24 = v16 * 4 + v22 * 4;
  v25 = dword_140404A6C[v16 + 112673957 + v22];
  if ( v25 < v23 )
  {
    *(unsigned int *)((char *)&dword_140404A6C[112673957] + v24) = v23;
    v25 = 1400 * v11 + v21;
  }
  *(unsigned int *)((char *)&dword_140404A6C[112673956] + v24) |= 1 << v11;
  if ( (*(unsigned int *)((char *)&dword_140404A6C[112673956] + v24) & ((1 << v14) - 1)) != (1 << v14) - 1 )
    return 0;
  dword_140404A6C[v2 + 135184967] = v25;
  *(_QWORD *)&dword_140404A6C[v2 + 135184965] = 4;
  MEMORY[0x1401FC920](&dword_140404A6C[v2 + 135184968], (char *)&dword_140404A6C[112673958] + v24);
  return dword_140404A6C[v2 + 135184967];
}

