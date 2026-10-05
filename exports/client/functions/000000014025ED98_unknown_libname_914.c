/* Address: 0x14025ed98 | Name: unknown_libname_914 | Size: 416 bytes */
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
volatile signed __int32 *__fastcall unknown_libname_914(volatile signed __int32 ****a1)
{
  volatile signed __int32 ***v1; // rax
  __int64 v2; // rdi
  _OWORD *v4; // rcx
  _OWORD *v5; // rax
  __int64 v6; // rdx
  __int128 v7; // xmm1
  _OWORD *v8; // rcx
  _OWORD *v9; // rax
  __int128 v10; // xmm1
  void **v11; // rcx
  volatile signed __int32 *result; // rax

  v1 = *a1;
  v2 = 2;
  v4 = *(_OWORD **)&dword_140404A6C[19065825];
  v5 = (*v1)[17] + 6;
  if ( !*(_QWORD *)&dword_140404A6C[19065825] )
    goto LABEL_7;
  if ( !v5 )
  {
    MEMORY[0x1401FCD30](*(_WORD **)&dword_140404A6C[19065825], 0, 0x101u);
LABEL_7:
    *errno() = 22;
    sub_14024CF6C();
    goto LABEL_8;
  }
  v6 = 2;
  do
  {
    *v4 = *v5;
    v4[1] = v5[1];
    v4[2] = v5[2];
    v4[3] = v5[3];
    v4[4] = v5[4];
    v4[5] = v5[5];
    v4[6] = v5[6];
    v4 += 8;
    v7 = v5[7];
    v5 += 8;
    *(v4 - 1) = v7;
    --v6;
  }
  while ( v6 );
  *(_BYTE *)v4 = *(_BYTE *)v5;
LABEL_8:
  v8 = *(_OWORD **)&dword_140404A6C[19065827];
  v9 = (_OWORD *)((char *)(**a1)[17] + 281);
  if ( !*(_QWORD *)&dword_140404A6C[19065827] )
  {
LABEL_13:
    *errno() = 22;
    sub_14024CF6C();
    goto LABEL_14;
  }
  if ( (**a1)[17] == (volatile signed __int32 *)-281LL )
  {
    MEMORY[0x1401FCD30](*(_WORD **)&dword_140404A6C[19065827], 0, 0x100u);
    goto LABEL_13;
  }
  do
  {
    *v8 = *v9;
    v8[1] = v9[1];
    v8[2] = v9[2];
    v8[3] = v9[3];
    v8[4] = v9[4];
    v8[5] = v9[5];
    v8[6] = v9[6];
    v8 += 8;
    v10 = v9[7];
    v9 += 8;
    *(v8 - 1) = v10;
    --v2;
  }
  while ( v2 );
LABEL_14:
  if ( _InterlockedExchangeAdd(**a1[1], 0xFFFFFFFF) == 1 )
  {
    v11 = (void **)*a1[1];
    if ( *v11 != &unk_1403025A0 )
      free_base(*v11);
  }
  **a1[1] = (**a1)[17];
  result = (**a1)[17];
  _InterlockedIncrement(result);
  return result;
}

