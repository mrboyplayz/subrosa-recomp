/* Address: 0x14020c8a8 | Name: sub_14020C8A8 | Stack analysis corrected in export snapshot. */
__int64 __fastcall sub_14020C8A8(__int64 a1, __int64 a2)
{
  __int64 v4; // rdi
  __int64 v5; // r14
  __int64 v6; // rbp
  __int64 v7; // rax
  __int64 v8; // rcx
  unsigned __int8 *v9; // rdx
  unsigned __int8 *v10; // rcx
  __int64 v12; // [rsp-20h] [rbp-20C8h] BYREF
  _DWORD v13[4]; // [rsp+10h] [rbp-2098h] BYREF
  _BYTE v14[4096]; // [rsp+20h] [rbp-2088h] BYREF
  __int64 v15; // [rsp+1020h] [rbp-1088h]

  v4 = 0;
  v5 = fileno((FILE *)a1);
  if ( *(_DWORD *)(a1 + 16) )
  {
    v6 = (*(_QWORD *)a1 - *(_QWORD *)(a1 + 8)) / 2LL;
    v7 = lseeki64(v5, *(_QWORD *)(*(_QWORD *)&dword_140404A6C[2 * (v5 >> 6) + 19065401] + 72 * (v5 & 0x3F) + 48), 0);
    v8 = *(_QWORD *)&dword_140404A6C[2 * (v5 >> 6) + 19065401];
    if ( v7 == *(_QWORD *)(v8 + 72 * (v5 & 0x3F) + 48) )
    {
      if ( (unsigned int)((__int64 (__fastcall *)(_QWORD, _BYTE *, __int64, _DWORD *, _QWORD))ReadFile)(
                           *(_QWORD *)(v8 + 72 * (v5 & 0x3F) + 40),
                           v14,
                           4096,
                           v13,
                           0) )
      {
        if ( lseeki64(v5, a2, 0) >= 0 && v6 <= v13[0] )
        {
          v9 = &v14[v13[0]];
          v10 = v14;
          if ( v6 )
          {
            do
            {
              if ( v10 >= v9 )
                break;
              if ( *v10 == 13 )
              {
                if ( v10 < v9 - 1 && v10[1] == 10 )
                  ++v10;
              }
              else
              {
                v10 += byte_140302310[*v10];
              }
              ++v4;
              ++v10;
            }
            while ( v4 != v6 );
          }
        }
      }
    }
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&v12 ^ v15);
}

