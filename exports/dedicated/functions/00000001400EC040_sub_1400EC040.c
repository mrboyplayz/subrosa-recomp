/* Address: 0x1400ec040 | Name: sub_1400EC040 | Size: 219 bytes */
__int64 __fastcall sub_1400EC040(int a1, char *a2, int a3)
{
  __int64 result; // rax
  __int64 v4; // rcx
  __int64 v7; // r10
  int *v8; // r8
  __int64 v9; // r9
  char *v10; // rdx
  char *v11; // rax
  char v12; // cl

  result = a1;
  v4 = 5873LL * a1;
  v7 = *(int *)((char *)&unk_1915414A8 + v4 * 4);
  if ( v7 > 0 )
  {
    v8 = &dword_1915414AC[v4];
    do
    {
      v9 = 10280LL * *v8;
      result = *(int *)((char *)&unk_18F7184CC + v9);
      if ( (int)result < 256 )
      {
        v10 = a2;
        *(_DWORD *)((char *)&unk_18F7184D0 + 24 * result + v9) = a3;
        v11 = (char *)&unk_18F7184D4 + 24 * *(int *)((char *)&unk_18F7184CC + v9) + v9;
        do
        {
          v12 = *v10++;
          *v11++ = v12;
        }
        while ( v12 );
        result = v9 + 24LL * *(int *)((char *)&unk_18F7184CC + v9);
        *(_DWORD *)((char *)dword_18F7184E4 + result) = 0;
        ++*(_DWORD *)((char *)&unk_18F7184CC + v9);
      }
      ++v8;
      --v7;
    }
    while ( v7 );
  }
  return result;
}

