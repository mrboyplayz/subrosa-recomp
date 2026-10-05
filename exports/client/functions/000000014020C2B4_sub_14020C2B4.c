/* Address: 0x14020c2b4 | Name: sub_14020C2B4 | Size: 226 bytes */
char __fastcall sub_14020C2B4(__int64 a1, signed __int64 a2, int a3)
{
  __int64 v5; // r10
  __int64 v6; // rcx
  __int64 v7; // r9
  __int64 v8; // rcx
  __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // rdx

  if ( a3 == 2 )
    return 0;
  if ( (*(_DWORD *)(a1 + 20) & 0x4C0) == 0 )
    return 0;
  if ( (*(_DWORD *)(a1 + 20) & 6) != 0 )
    return 0;
  if ( *(int *)(a1 + 16) <= 0 )
    return 0;
  v5 = *(int *)(a1 + 24);
  v6 = *(_DWORD *)(a1 + 24) & 0x3F;
  v7 = *(_QWORD *)&dword_140404A6C[2 * (v5 >> 6) + 19065401];
  if ( *(char *)(v7 + 72 * v6 + 56) < 0 || *(_BYTE *)(v7 + 72 * v6 + 57) )
    return 0;
  if ( !a3 )
  {
    v8 = lseeki64_nolock((unsigned int)v5, 0, 1);
    if ( v8 < 0 )
      return 0;
    v9 = a2;
    v10 = v8 - *(int *)(a1 + 16);
    v11 = (unsigned __int64)a2 >> 63;
    v12 = v9 - v10;
    if ( (_DWORD)v11 != v10 >> 63 && (_DWORD)v11 != v12 >> 63 )
      return 0;
    a2 = v12;
  }
  if ( *(_QWORD *)(a1 + 8) - *(_QWORD *)a1 <= a2 && a2 <= *(int *)(a1 + 16) )
  {
    *(_QWORD *)a1 += a2;
    *(_DWORD *)(a1 + 16) -= a2;
    return 1;
  }
  return 0;
}

