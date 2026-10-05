/* Address: 0x140250448 | Name: ?initialize_stdio_handles_nolock@@YAXXZ | Size: 268 bytes */
__int64 initialize_stdio_handles_nolock()
{
  int v0; // esi
  __int64 v1; // r14
  __int64 v2; // rcx
  __int64 v3; // rbx
  __int64 v4; // rdi
  __int64 v5; // rax
  __int64 result; // rax
  bool v7; // cf
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rbp

  v0 = 0;
  v1 = 0;
  do
  {
    v2 = v0 & 0x3F;
    v3 = 9 * v2;
    v4 = *(_QWORD *)&dword_140404A6C[2 * ((__int64)v0 >> 6) + 19065401];
    v5 = *(_QWORD *)(v4 + 72 * v2 + 40);
    v7 = v5 == -2;
    result = v5 + 2;
    if ( v7 || result == 1 )
    {
      *(_BYTE *)(v4 + 72 * v2 + 56) = -127;
      if ( v0 )
      {
        if ( v0 == 1 )
          v8 = 4294967285LL;
        else
          v8 = 4294967284LL;
      }
      else
      {
        v8 = 4294967286LL;
      }
      v9 = ((__int64 (__fastcall *)(__int64))GetStdHandle)(v8);
      v10 = v9;
      if ( (unsigned __int64)(v9 + 1) <= 1 )
        result = 0;
      else
        result = ((__int64 (__fastcall *)(__int64))GetFileType)(v9);
      if ( (_DWORD)result )
      {
        *(_QWORD *)(v4 + 8 * v3 + 40) = v10;
        if ( (unsigned __int8)result == 2 )
        {
          *(_BYTE *)(v4 + 8 * v3 + 56) |= 0x40u;
        }
        else if ( (unsigned __int8)result == 3 )
        {
          *(_BYTE *)(v4 + 8 * v3 + 56) |= 8u;
        }
      }
      else
      {
        *(_BYTE *)(v4 + 8 * v3 + 56) |= 0x40u;
        *(_QWORD *)(v4 + 8 * v3 + 40) = -2;
        result = *(_QWORD *)&dword_140404A6C[19064593];
        if ( *(_QWORD *)&dword_140404A6C[19064593] )
        {
          result = *(_QWORD *)(v1 + *(_QWORD *)&dword_140404A6C[19064593]);
          *(_DWORD *)(result + 24) = -2;
        }
      }
    }
    else
    {
      *(_BYTE *)(v4 + 72 * v2 + 56) |= 0x80u;
    }
    ++v0;
    v1 += 8;
  }
  while ( v0 != 3 );
  return result;
}

