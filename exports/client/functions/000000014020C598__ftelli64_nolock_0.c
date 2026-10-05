/* Address: 0x14020c598 | Name: _ftelli64_nolock_0 | Size: 303 bytes */
__int64 __fastcall ftelli64_nolock_0(FILE *a1)
{
  __int64 v2; // rcx
  int v4; // eax
  __int64 v5; // rsi
  __int64 v6; // rdi
  unsigned int *v7; // r8
  __int64 v8; // rcx
  unsigned __int64 v9; // r11
  __int64 v10; // rdx
  char v11; // si
  __int64 v12; // rax
  __int64 v13; // r11

  if ( !a1 )
  {
    *errno() = 22;
    sub_14024CF6C(v2);
    return -1;
  }
  v4 = fileno(a1);
  v5 = v4;
  if ( *((int *)a1 + 4) < 0 )
    *((_DWORD *)a1 + 4) = 0;
  v6 = lseeki64(v4, 0, 1);
  if ( v6 < 0 )
    return -1;
  if ( (*((_DWORD *)a1 + 5) & 0xC0) == 0 )
    return v6 - *((int *)a1 + 4);
  v7 = &dword_140404A6C[19065401];
  v8 = v5 >> 6;
  v9 = *(_QWORD *)a1 - *((_QWORD *)a1 + 1);
  v10 = 9 * (v5 & 0x3F);
  v11 = *(_BYTE *)(*(_QWORD *)&dword_140404A6C[2 * (v5 >> 6) + 19065401] + 72 * (v5 & 0x3F) + 57);
  if ( (*((_DWORD *)a1 + 5) & 3) != 0 )
  {
    if ( v11 == 1 && (*(_BYTE *)(*(_QWORD *)&dword_140404A6C[2 * v8 + 19065401] + 8 * v10 + 61) & 2) != 0 )
      return sub_14020C8A8(a1, v6);
    if ( *(char *)(*(_QWORD *)&dword_140404A6C[2 * v8 + 19065401] + 8 * v10 + 56) < 0 )
    {
      LOBYTE(v7) = v11;
      v12 = MEMORY[0x14020CA24](*((_QWORD *)a1 + 1), *(_QWORD *)a1, v7);
      v9 = v12 + v13;
    }
  }
  else if ( (*((_DWORD *)a1 + 5) & 4) == 0 )
  {
    *errno() = 22;
    return -1;
  }
  if ( !v6 )
    return v9;
  if ( (*((_DWORD *)a1 + 5) & 1) != 0 )
    return sub_14020C75C(a1, v6, v9);
  if ( v11 == 1 )
    v9 >>= 1;
  return v9 + v6;
}

