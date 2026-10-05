/* Address: 0x1401f8958 | Name: sub_1401F8958 | Size: 91 bytes */
__int64 __fastcall sub_1401F8958(unsigned __int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // r9
  unsigned __int64 v4; // r10
  __int64 v5; // rcx
  __int64 v6; // rax

  v3 = a1;
  v4 = a1;
  if ( (*(_BYTE *)a3 & 4) != 0 )
    v4 = -*(_DWORD *)(a3 + 8) & (a1 + *(int *)(a3 + 4));
  v5 = *(unsigned int *)(*(_QWORD *)(a2 + 16) + 8LL);
  v6 = *(_QWORD *)(a2 + 8);
  if ( (*(_BYTE *)(v5 + v6 + 3) & 0xF) != 0 )
    v3 += *(_BYTE *)(v5 + v6 + 3) & 0xF0;
  return MEMORY[0x1401F8B20](*(_QWORD *)((int)(*(_DWORD *)a3 & 0xFFFFFFF8) + v4) ^ v3);
}

