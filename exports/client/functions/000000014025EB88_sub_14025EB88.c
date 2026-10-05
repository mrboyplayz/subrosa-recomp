/* Address: 0x14025eb88 | Name: sub_14025EB88 | Size: 442 bytes */
__int64 __fastcall sub_14025EB88(__int64 a1, unsigned int *a2, volatile signed __int32 ****a3, unsigned int *a4)
{
  _OWORD *v6; // rax
  _OWORD *v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  _OWORD *v10; // rax
  _OWORD *v11; // rcx
  void **v12; // rcx

  sub_140258B64(*a2);
  v6 = (**a3)[17] + 6;
  v7 = *(_OWORD **)&dword_140404A6C[19065825];
  if ( !*(_QWORD *)&dword_140404A6C[19065825] )
    goto LABEL_7;
  if ( (**a3)[17] == (volatile signed __int32 *)-24LL )
  {
    MEMORY[0x1401FCD30](*(_WORD **)&dword_140404A6C[19065825], 0, 0x101u);
LABEL_7:
    *errno() = 22;
    sub_14024CF6C();
    v8 = 2;
    goto LABEL_8;
  }
  v8 = 2;
  v9 = 2;
  do
  {
    *v7 = *v6;
    v7[1] = v6[1];
    v7[2] = v6[2];
    v7[3] = v6[3];
    v7[4] = v6[4];
    v7[5] = v6[5];
    v7[6] = v6[6];
    v7 += 8;
    *(v7 - 1) = v6[7];
    v6 += 8;
    --v9;
  }
  while ( v9 );
  *(_BYTE *)v7 = *(_BYTE *)v6;
LABEL_8:
  v10 = (_OWORD *)((char *)(**a3)[17] + 281);
  v11 = *(_OWORD **)&dword_140404A6C[19065827];
  if ( !*(_QWORD *)&dword_140404A6C[19065827] )
  {
LABEL_13:
    *errno() = 22;
    sub_14024CF6C();
    goto LABEL_14;
  }
  if ( (**a3)[17] == (volatile signed __int32 *)-281LL )
  {
    MEMORY[0x1401FCD30](*(_WORD **)&dword_140404A6C[19065827], 0, 0x100u);
    goto LABEL_13;
  }
  do
  {
    *v11 = *v10;
    v11[1] = v10[1];
    v11[2] = v10[2];
    v11[3] = v10[3];
    v11[4] = v10[4];
    v11[5] = v10[5];
    v11[6] = v10[6];
    v11 += 8;
    *(v11 - 1) = v10[7];
    v10 += 8;
    --v8;
  }
  while ( v8 );
LABEL_14:
  if ( _InterlockedExchangeAdd(**a3[1], 0xFFFFFFFF) == 1 )
  {
    v12 = (void **)*a3[1];
    if ( *v12 != &unk_1403025A0 )
      free_base(*v12);
  }
  **a3[1] = (**a3)[17];
  _InterlockedIncrement((**a3)[17]);
  return sub_140258BB8(*a4);
}

