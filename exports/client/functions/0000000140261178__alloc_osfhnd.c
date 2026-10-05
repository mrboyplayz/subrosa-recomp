/* Address: 0x140261178 | Name: _alloc_osfhnd | Size: 318 bytes */
__int64 alloc_osfhnd()
{
  unsigned int v0; // r14d
  int i; // ebx
  __int64 v2; // rsi
  __int64 v3; // rax
  unsigned int v4; // ebx
  __int64 j; // rdi
  int v6; // edx
  __int64 v7; // r8
  __int64 v8; // rcx

  sub_140258B64(7);
  v0 = -1;
  for ( i = 0; i < 128; ++i )
  {
    v2 = *(_QWORD *)&dword_140404A6C[2 * i + 19065401];
    if ( !v2 )
    {
      v3 = sub_140260EC8();
      *(_QWORD *)&dword_140404A6C[2 * i + 19065401] = v3;
      if ( v3 )
      {
        dword_140404A6C[19065657] += 64;
        v4 = i << 6;
        sub_140261068(v4);
        *(_BYTE *)(*(_QWORD *)&dword_140404A6C[2 * ((__int64)(int)v4 >> 6) + 19065401] + 56LL) = 1;
        v0 = v4;
      }
      break;
    }
    for ( j = *(_QWORD *)&dword_140404A6C[2 * i + 19065401]; j != v2 + 4608; j += 72 )
    {
      if ( (*(_BYTE *)(j + 56) & 1) == 0 )
      {
        ((void (__fastcall *)(__int64))EnterCriticalSection)(j);
        if ( (*(_BYTE *)(j + 56) & 1) == 0 )
        {
          v6 = (i << 6) + ((int)j - (int)v2) / 72;
          v7 = (__int64)v6 >> 6;
          v8 = 9LL * (v6 & 0x3F);
          *(_BYTE *)(*(_QWORD *)&dword_140404A6C[2 * v7 + 19065401] + 8 * v8 + 56) = 1;
          *(_QWORD *)(*(_QWORD *)&dword_140404A6C[2 * v7 + 19065401] + 8 * v8 + 40) = -1;
          v0 = v6;
          goto LABEL_14;
        }
        ((void (__fastcall *)(__int64))LeaveCriticalSection)(j);
      }
    }
  }
LABEL_14:
  sub_140258BB8(7);
  return v0;
}

