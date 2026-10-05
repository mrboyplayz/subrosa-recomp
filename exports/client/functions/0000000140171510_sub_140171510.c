/* Address: 0x140171510 | Name: sub_140171510 | Size: 342 bytes */
__int64 __fastcall sub_140171510(__int64 a1, int a2, __int64 *a3, int *a4, int *a5, int *a6, int *a7, unsigned int a8)
{
  __int64 v9; // r15
  __int64 v10; // rax
  unsigned int v11; // eax
  int v12; // r14d
  int v13; // eax
  int v14; // esi
  __int64 v15; // rbx
  int v16; // ebp
  int v17; // eax
  __int64 v18; // rdi
  __int64 v19; // r12
  __int64 v21; // [rsp+0h] [rbp-158h] BYREF
  _QWORD v22[6]; // [rsp+40h] [rbp-118h] BYREF
  int v23; // [rsp+70h] [rbp-E8h]
  int v24; // [rsp+F8h] [rbp-60h]
  __int64 v25; // [rsp+100h] [rbp-58h]
  __int64 v26; // [rsp+108h] [rbp-50h]
  __int64 v27; // [rsp+110h] [rbp-48h]
  __int64 v28; // [rsp+118h] [rbp-40h]
  __int64 v29; // [rsp+120h] [rbp-38h]

  v22[2] = 0;
  v23 = 0;
  v27 = a1;
  v25 = a1;
  v24 = 0;
  v28 = a2 + a1;
  v26 = v28;
  v9 = sub_1401663E0(v22, a3, a4, a5, a6, a7, a8);
  v10 = *(_QWORD *)(__readgsqword(0x58u) + 8LL * dword_140404A6C[19064470]);
  if ( *(_DWORD *)(v10 + 8) )
    v11 = *(_DWORD *)(v10 + 12);
  else
    v11 = dword_140404A6C[18215120];
  if ( v11 )
  {
    v12 = *a4;
    v13 = *a4;
    v14 = *a7;
    v15 = v9;
    v16 = *a5;
    v17 = *a7 * *a5 * v13;
    if ( *a6 > 0 )
    {
      v18 = (unsigned int)*a6;
      v19 = v17;
      do
      {
        sub_14016F470(v15, v12, v16, v14);
        v15 += v19;
        --v18;
      }
      while ( v18 );
    }
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&v21 ^ v29);
}

