/* Address: 0x14006fcf0 | Name: sub_14006FCF0 | Size: 296 bytes */
__int64 __fastcall sub_14006FCF0(signed int a1)
{
  __int64 v2; // rbp
  __int64 v3; // rbx
  __int64 result; // rax
  int v5; // edi
  int v6; // r8d
  __int64 v7; // rbx
  __int64 v8; // rax

  v2 = 7040LL * a1;
  v3 = a1;
  result = *(unsigned int *)((char *)&unk_19025F0C0 + v2 + 6764);
  if ( (int)result > 0 )
  {
    result = (unsigned int)(result - 1);
    *(_DWORD *)((char *)&unk_19025F0C0 + v2 + 6764) = result;
    if ( !(_DWORD)result )
    {
      v5 = 0;
      v6 = rand() % 26;
      v7 = 1760 * v3;
      do
      {
        v8 = v7 + *((int *)&unk_19025F0C0 + v7 + v6 + 1562);
        if ( *((_DWORD *)&unk_19025F0C0 + v8 + 1626) && *((_DWORD *)&unk_19025F0C0 + v8 + 1658) == -1 )
          break;
        ++v5;
        v6 = rand() % 26;
      }
      while ( v5 < 1000 );
      *((_DWORD *)&unk_19025F0C0 + v7 + *((int *)&unk_19025F0C0 + v7 + v6 + 1562) + 1658) = v6;
      sub_14006EA80(a1);
      *((_BYTE *)&unk_19025F0C0 + v2 + 948) = 0;
      return sub_1400395A0(a1, 1u);
    }
  }
  return result;
}

