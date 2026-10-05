/* Address: 0x1401663e0 | Name: sub_1401663E0 | Stack analysis corrected in export snapshot. */
__int64 __fastcall sub_1401663E0(const __m128i *a1, __int64 *a2, _DWORD *a3, int *a4)
{
  _DWORD *v5; // r14
  unsigned int v7; // esi
  int v8; // eax
  __int64 v9; // rcx
  int v10; // ebx
  __int64 v11; // r15
  char *v12; // rbp
  int v13; // r12d
  const __m128i *v14; // rax
  const __m128i *v15; // r14
  int v16; // edx
  int v17; // esi
  int v18; // esi
  int v19; // eax
  __int64 v20; // rax
  __int64 v22; // [rsp-20h] [rbp-11230h] BYREF
  unsigned int v23; // [rsp+10h] [rbp-11200h]
  _DWORD *v24; // [rsp+18h] [rbp-111F8h]
  _DWORD *v25; // [rsp+20h] [rbp-111F0h]
  int *v26; // [rsp+28h] [rbp-111E8h]
  int *v27; // [rsp+30h] [rbp-111E0h]
  int v28; // [rsp+40h] [rbp-111D0h] BYREF
  int v29; // [rsp+44h] [rbp-111CCh]
  void *Block; // [rsp+48h] [rbp-111C8h]
  void *v31; // [rsp+50h] [rbp-111C0h]
  void *v32; // [rsp+58h] [rbp-111B8h]
  int v33; // [rsp+88A8h] [rbp-8968h]
  __int64 v34; // [rsp+88B0h] [rbp-8960h]
  int *v35; // [rsp+8930h] [rbp-88E0h]
  _DWORD *v36; // [rsp+8938h] [rbp-88D8h]
  unsigned int v37; // [rsp+8940h] [rbp-88D0h]

  v5 = v36;
  v7 = v37;
  v27 = v35;
  v24 = v36;
  v26 = a4;
  v25 = a3;
  v23 = v37;
  v8 = sub_140161BB0((__int64)a1);
  v9 = a1[13].m128i_i64[1];
  a1[12].m128i_i64[0] = a1[13].m128i_i64[0];
  a1[12].m128i_i64[1] = v9;
  if ( !v8 )
  {
    *(_QWORD *)(*(_QWORD *)(__readgsqword(0x58u) + 8LL * dword_140404A6C[19064470]) + 16LL) = "not GIF";
    return MEMORY[0x1401F8B20]((unsigned __int64)&v22 ^ v34);
  }
  v10 = 0;
  v11 = 0;
  v12 = nullptr;
  MEMORY[0x1401FCD30](&v28, 0, 0x8870u);
  if ( a2 )
    *a2 = 0;
  while ( 1 )
  {
    v13 = v10;
    v14 = (const __m128i *)sub_140160EF0((__int64)a1, &v28, v5, v7, v11);
    v15 = v14;
    if ( v14 == a1 || !v14 )
      break;
    ++v10;
    v16 = v28;
    v17 = v29;
    *v25 = v28;
    *v26 = v17;
    v18 = 4 * v16 * v17;
    v19 = v10 * v18;
    if ( !v12 )
    {
      v12 = (char *)j__malloc_base(v19);
      if ( !a2 )
        goto LABEL_13;
      v20 = j__malloc_base(4LL * v10);
      goto LABEL_12;
    }
    v12 = (char *)j__realloc_base(v12, v19);
    if ( !v12 )
    {
      free(Block);
      free(v32);
      free(v31);
      *(_QWORD *)(*(_QWORD *)(__readgsqword(0x58u) + 8LL * dword_140404A6C[19064470]) + 16LL) = "outofmem";
      return MEMORY[0x1401F8B20]((unsigned __int64)&v22 ^ v34);
    }
    if ( a2 )
    {
      v20 = j__realloc_base(*a2, 4LL * v10);
LABEL_12:
      *a2 = v20;
    }
LABEL_13:
    MEMORY[0x1401FC920]((__m128i *)&v12[v18 * v13], v15, v18);
    if ( v10 >= 2 )
      v11 = (__int64)&v12[-2 * v18];
    v7 = v23;
    v5 = v24;
    if ( a2 )
      *(_DWORD *)(*a2 + 4LL * (unsigned int)(v10 - 1)) = v33;
  }
  free(Block);
  free(v32);
  free(v31);
  if ( (v7 & 0xFFFFFFFB) != 0 )
    sub_14015D7E0(v12, 4, v7, v10 * v28, v29);
  *v27 = v10;
  return MEMORY[0x1401F8B20]((unsigned __int64)&v22 ^ v34);
}

