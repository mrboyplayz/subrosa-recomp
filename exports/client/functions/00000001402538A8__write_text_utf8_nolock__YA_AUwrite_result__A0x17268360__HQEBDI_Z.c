/* Address: 0x1402538a8 | Name: ?write_text_utf8_nolock@@YA?AUwrite_result@?A0x17268360@@HQEBDI@Z | Stack analysis corrected in export snapshot. */
__int64 __fastcall write_text_utf8_nolock(__int64 a1, int a2, __int16 *a3, unsigned int a4)
{
  __int16 *v5; // r14
  int v6; // r15d
  __int16 *v7; // rdi
  __int64 v8; // r12
  bool v9; // cf
  char *v10; // rax
  __int16 v11; // cx
  unsigned int v12; // ebp
  unsigned int v13; // esi
  __int64 v15; // [rsp-20h] [rbp-2908h] BYREF
  __int64 v16; // [rsp+8h] [rbp-28E0h]
  _DWORD v17[4]; // [rsp+20h] [rbp-28C8h] BYREF
  _BYTE v18[1704]; // [rsp+30h] [rbp-28B8h] BYREF
  char v19; // [rsp+6D8h] [rbp-2210h] BYREF
  _BYTE v20[3424]; // [rsp+6E0h] [rbp-2208h] BYREF
  __int64 v21; // [rsp+1440h] [rbp-14A8h]

  v5 = (__int16 *)((char *)a3 + a4);
  v6 = (int)a3;
  v7 = a3;
  v8 = *(_QWORD *)(*(_QWORD *)&dword_140404A6C[2 * ((__int64)a2 >> 6) + 19065401] + 72LL * (a2 & 0x3F) + 40);
  *(_QWORD *)a1 = 0;
  v9 = a3 < v5;
  *(_DWORD *)(a1 + 8) = 0;
LABEL_2:
  if ( v9 )
  {
    v10 = v18;
    do
    {
      if ( v7 >= v5 )
        break;
      v11 = *v7++;
      if ( v11 == 10 )
      {
        *(_WORD *)v10 = 13;
        v10 += 2;
      }
      *(_WORD *)v10 = v11;
      v10 += 2;
    }
    while ( v10 < &v19 );
    LODWORD(v16) = 3413;
    v12 = sub_140258A84(0xFDE9u, 0, (__int64)v18, (unsigned int)((v10 - v18) >> 1), (__int64)v20, v16, 0, 0);
    if ( v12 )
    {
      v13 = 0;
      while ( (unsigned int)((__int64 (__fastcall *)(__int64, _BYTE *, _QWORD, _DWORD *, _QWORD))WriteFile)(
                              v8,
                              &v20[v13],
                              v12 - v13,
                              v17,
                              0) )
      {
        v13 += v17[0];
        if ( v13 >= v12 )
        {
          *(_DWORD *)(a1 + 4) = (_DWORD)v7 - v6;
          v9 = v7 < v5;
          goto LABEL_2;
        }
      }
    }
    *(_DWORD *)a1 = ((__int64 (*)(void))GetLastError)();
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&v15 ^ v21);
}

