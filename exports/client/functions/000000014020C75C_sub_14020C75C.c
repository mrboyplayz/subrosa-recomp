/* Address: 0x14020c75c | Name: sub_14020C75C | Size: 329 bytes */
__int64 __fastcall sub_14020C75C(__int64 a1, __int64 a2, __int64 a3)
{
  int v5; // r12d
  __int64 v6; // rdi
  __int64 v7; // rcx
  __int64 v8; // r13
  __int64 v9; // rax
  char v10; // si
  __int64 result; // rax
  __int64 v12; // rbp
  __int64 v13; // rax
  __int64 v14; // r8
  __int64 v15; // rdx
  bool v16; // zf
  __int64 v17; // [rsp+60h] [rbp+8h]

  v5 = fileno((FILE *)a1);
  v6 = 0;
  v7 = v5 & 0x3F;
  v17 = (__int64)v5 >> 6;
  v8 = 9 * v7;
  v9 = *(_QWORD *)&dword_140404A6C[2 * v17 + 19065401];
  v10 = *(_BYTE *)(v9 + 72 * v7 + 57);
  if ( !*(_DWORD *)(a1 + 16) )
    return a2;
  v12 = *(_QWORD *)a1 + *(int *)(a1 + 16) - *(_QWORD *)(a1 + 8);
  if ( *(char *)(v9 + 72 * v7 + 56) < 0 )
  {
    if ( lseeki64(v5, 0, 2) == a2 )
    {
      LOBYTE(v14) = v10;
      v15 = MEMORY[0x14020CA24](*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 8) + v12, v14) + v12;
      v16 = (*(_DWORD *)(a1 + 20) & 0x20) == 0;
    }
    else
    {
      result = lseeki64(v5, a2, 0);
      if ( result == -1 )
        return result;
      v15 = 512;
      if ( v12 > 512 || (*(_DWORD *)(a1 + 20) & 0x40) == 0 || (*(_DWORD *)(a1 + 20) & 0x100) != 0 )
        v15 = *(int *)(a1 + 32);
      v16 = (*(_BYTE *)(*(_QWORD *)&dword_140404A6C[2 * v17 + 19065401] + 8 * v8 + 56) & 4) == 0;
    }
    if ( !v16 )
    {
      LOBYTE(v6) = (unsigned __int8)(v10 - 1) <= 1u;
      v15 += v6 + 1;
    }
    v13 = v15;
  }
  else
  {
    v13 = *(_QWORD *)a1 + *(int *)(a1 + 16) - *(_QWORD *)(a1 + 8);
  }
  return a2 + a3 / ((v10 == 1) + 1LL) - v13 / ((v10 == 1) + 1LL);
}

