/* Address: 0x140046f80 | Name: sub_140046F80 | Size: 133 bytes */
unsigned __int64 __fastcall sub_140046F80(int a1, char *a2, int a3, int a4, int a5)
{
  __int64 v5; // rdi
  char *v6; // r10
  __int64 v7; // rcx
  int v8; // ebx
  unsigned __int64 result; // rax
  char *v10; // rcx

  v5 = 65548LL * a1;
  v6 = a2;
  if ( *(int *)((char *)&unk_1962BCCE0 + v5 + 4) > 0 )
  {
    ++*(_DWORD *)((char *)&unk_1962BCCE0 + v5);
    *(_DWORD *)((char *)&unk_1962BCCE0 + v5 + 4) = 0;
  }
  v7 = *(int *)((char *)&unk_1962BCCE0 + v5);
  v8 = a4 * a3;
  result = (unsigned int)(v7 + a4 * a3);
  if ( (int)result < 0x10000 )
  {
    if ( a5 )
    {
      v10 = (char *)&unk_1962BCCEC + v5 + v7;
    }
    else
    {
      a2 = (char *)&unk_1962BCCEC + v5 + v7;
      v10 = v6;
    }
    result = (unsigned __int64)memcpy(v10, a2, v8);
    *(_DWORD *)((char *)&unk_1962BCCE0 + v5) += v8;
  }
  return result;
}

