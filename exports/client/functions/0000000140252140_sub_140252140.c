/* Address: 0x140252140 | Name: sub_140252140 | Size: 635 bytes */
__int64 __fastcall sub_140252140(int a1, __int16 *a2, __int64 a3)
{
  __int64 v3; // r13
  __int64 v5; // r15
  __int64 v6; // rdi
  __int64 v7; // rax
  __int64 v8; // r10
  __int16 *v9; // rbp
  __int16 *v10; // r14
  __int16 *v11; // rbx
  __int16 v12; // cx
  __int16 *v13; // rax
  __int16 v14; // dx
  __int64 v15; // rax
  __int64 v16; // r8
  __int64 i; // rdx
  __int64 v18; // rcx
  char v19; // al
  __int16 Buffer; // [rsp+80h] [rbp+8h] BYREF
  __int16 v22; // [rsp+88h] [rbp+10h]
  __int64 NumberOfBytesRead; // [rsp+90h] [rbp+18h] BYREF
  __int64 v24; // [rsp+98h] [rbp+20h]

  v3 = a1;
  v5 = (__int64)a1 >> 6;
  v6 = 9LL * (a1 & 0x3F);
  v7 = *(_QWORD *)&dword_140404A6C[2 * v5 + 19065401];
  v8 = *(_QWORD *)(v7 + 72LL * (a1 & 0x3F) + 40);
  v24 = v8;
  if ( a3 && *a2 == 10 )
    *(_BYTE *)(v7 + 72LL * (a1 & 0x3F) + 56) |= 4u;
  else
    *(_BYTE *)(v7 + 72LL * (a1 & 0x3F) + 56) &= ~4u;
  v9 = &a2[a3];
  v10 = a2;
  v11 = a2;
  while ( v10 < v9 )
  {
    v12 = *v10;
    if ( *v10 == 26 )
    {
      v18 = *(_QWORD *)&dword_140404A6C[2 * v5 + 19065401];
      v19 = *(_BYTE *)(v18 + 8 * v6 + 56);
      if ( (v19 & 0x40) != 0 )
        *v11++ = 26;
      else
        *(_BYTE *)(v18 + 8 * v6 + 56) = v19 | 2;
      return 2 * (unsigned int)(v11 - a2);
    }
    v13 = v10 + 1;
    if ( v12 == 13 )
    {
      if ( v13 < v9 )
      {
        v14 = *v13;
        if ( *v13 == 10 )
          v12 = 10;
        *v11 = v12;
        v15 = 4;
        if ( v14 != 10 )
          v15 = 2;
        v10 = (__int16 *)((char *)v10 + v15);
        ++v11;
        continue;
      }
      ++v10;
      if ( !(unsigned int)((__int64 (__fastcall *)(__int64, __int16 *, __int64, __int64 *, _QWORD))ReadFile)(
                            v8,
                            &Buffer,
                            2,
                            &NumberOfBytesRead,
                            0)
        || !(_DWORD)NumberOfBytesRead )
      {
        v8 = v24;
        *v11++ = 13;
        continue;
      }
      v16 = v3 >> 6;
      if ( (*(_BYTE *)(*(_QWORD *)&dword_140404A6C[2 * (v3 >> 6) + 19065401] + 72 * (v3 & 0x3F) + 56) & 0x48) != 0 )
      {
        if ( Buffer == 10 )
        {
          *v11 = 10;
        }
        else
        {
          v22 = Buffer;
          *v11 = 13;
          for ( i = 0; i < 2; ++i )
            *(_BYTE *)(*(_QWORD *)&dword_140404A6C[2 * v16 + 19065401] + 72 * (v3 & 0x3F) + i + 58) = *((_BYTE *)&v22 + i);
          *(_BYTE *)(*(_QWORD *)&dword_140404A6C[2 * v16 + 19065401] + 72 * (v3 & 0x3F) + 60) = 10;
        }
        ++v11;
      }
      else if ( Buffer == 10 && v11 == a2 )
      {
        *v11++ = 10;
      }
      else
      {
        lseeki64_nolock((unsigned int)v3, -2, 1);
        if ( Buffer != 10 )
        {
          v8 = v24;
          *v11++ = 13;
          continue;
        }
      }
      v8 = v24;
    }
    else
    {
      *v11 = v12;
      ++v10;
      ++v11;
    }
  }
  return 2 * (unsigned int)(v11 - a2);
}

