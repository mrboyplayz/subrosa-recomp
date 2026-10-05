/* Address: 0x140253688 | Name: ?write_text_ansi_nolock@@YA?AUwrite_result@?A0x17268360@@HQEBDI@Z | Stack analysis corrected in export snapshot. */
__int64 write_text_ansi_nolock(__int64 a1, int a2, char *a3, int a4, ...)
{
  char *v5; // rbp
  char *v6; // rsi
  __int64 v7; // r14
  char *v8; // rbx
  char v9; // al
  unsigned int v10; // ebx
  unsigned int v11; // eax
  __int64 v13; // [rsp-20h] [rbp-28B8h] BYREF
  unsigned int v14[4]; // [rsp+10h] [rbp-2888h] BYREF
  _BYTE v15[5119]; // [rsp+20h] [rbp-2878h] BYREF
  char v16; // [rsp+141Fh] [rbp-1479h] BYREF
  __int64 v17; // [rsp+1420h] [rbp-1478h]

  v5 = &a3[a4];
  v6 = a3;
  v7 = *(_QWORD *)(*(_QWORD *)&dword_140404A6C[2 * ((__int64)a2 >> 6) + 19065401] + 72LL * (a2 & 0x3F) + 40);
  *(_QWORD *)a1 = 0;
  *(_DWORD *)(a1 + 8) = 0;
  if ( a3 < v5 )
  {
    while ( 1 )
    {
      v8 = v15;
      do
      {
        if ( v6 >= v5 )
          break;
        v9 = *v6++;
        if ( v9 == 10 )
        {
          ++*(_DWORD *)(a1 + 8);
          *v8++ = 13;
        }
        *v8++ = v9;
      }
      while ( v8 < &v16 );
      v10 = (_DWORD)v8 - (unsigned int)v15;
      if ( !(unsigned int)((__int64 (__fastcall *)(__int64, _BYTE *, _QWORD, unsigned int *, _QWORD))WriteFile)(
                            v7,
                            v15,
                            v10,
                            v14,
                            0) )
        break;
      v11 = v14[0];
      *(_DWORD *)(a1 + 4) += v14[0];
      if ( v11 < v10 || v6 >= v5 )
        return MEMORY[0x1401F8B20]((unsigned __int64)&v13 ^ v17);
    }
    *(_DWORD *)a1 = ((__int64 (*)(void))GetLastError)();
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&v13 ^ v17);
}

