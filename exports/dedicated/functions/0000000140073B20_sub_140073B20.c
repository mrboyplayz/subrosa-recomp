/* Address: 0x140073b20 | Name: sub_140073B20 | Size: 124 bytes */
__int64 __fastcall sub_140073B20(int a1, int a2)
{
  __int64 v2; // r10
  int v3; // r8d
  __int64 result; // rax
  int v5; // r9d
  unsigned int v6; // edx
  char v7; // cl
  int v8; // eax

  v2 = 7040LL * a1;
  v3 = a2;
  result = *(unsigned int *)((char *)&unk_19025F0C0 + v2 + 676);
  if ( (_DWORD)result )
  {
    if ( (int)result > 0 )
    {
      result = (unsigned int)(result - 1);
      *(_DWORD *)((char *)&unk_19025F0C0 + v2 + 676) = result;
      if ( a2 <= (int)result )
      {
        LODWORD(result) = *(_DWORD *)((char *)&unk_19025F0C0 + v2 + 680);
        v5 = 3 * a2;
        do
        {
          ++v3;
          v6 = result & ~(7 << v5);
          v7 = v5;
          v8 = (v6 >> (v5 + 3)) & 7;
          v5 += 3;
          result = v6 | (v8 << v7);
          *(_DWORD *)((char *)&unk_19025F0C0 + v2 + 680) = result;
        }
        while ( v3 <= *(_DWORD *)((char *)&unk_19025F0C0 + v2 + 676) );
      }
    }
  }
  else
  {
    *(_DWORD *)((char *)&unk_19025F0C0 + v2 + 28) = 0;
  }
  return result;
}

