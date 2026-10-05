/* Address: 0x14025e27c | Name: sub_14025E27C | Size: 411 bytes */
__int64 __fastcall sub_14025E27C(__int64 a1, _WORD *a2, __int64 *a3)
{
  __int64 i; // r8
  unsigned __int16 v6; // ax
  unsigned __int16 v7; // cx
  char v8; // al
  __int64 v9; // r15
  __int64 v10; // rbx
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v14; // [rsp+0h] [rbp-2B8h] BYREF
  _BYTE FindFileData[44]; // [rsp+30h] [rbp-288h] BYREF
  __int16 v16; // [rsp+5Ch] [rbp-25Ch] BYREF
  __int16 v17; // [rsp+5Eh] [rbp-25Ah]
  __int16 v18; // [rsp+60h] [rbp-258h]
  __int64 v19; // [rsp+280h] [rbp-38h]

  for ( i = 0x200000000801LL; a2 != (_WORD *)a1; --a2 )
  {
    v6 = *a2 - 47;
    if ( v6 <= 0x2Du && _bittest64(&i, v6) )
      break;
  }
  if ( *a2 != 58 || a2 == (_WORD *)(a1 + 2) )
  {
    v7 = *a2 - 47;
    if ( v7 > 0x2Du || (v8 = 1, !_bittest64(&i, v7)) )
      v8 = 0;
    v9 = ((((__int64)a2 - a1) >> 1) + 1) & -(__int64)(v8 != 0);
    v10 = ((__int64 (__fastcall *)(__int64, _QWORD, _BYTE *, _QWORD, _QWORD, _DWORD))FindFirstFileExW)(
            a1,
            0,
            FindFileData,
            0,
            0,
            0);
    if ( v10 == -1 )
    {
      sub_14025DDE0(a1, 0, 0, a3);
    }
    else
    {
      v11 = (a3[1] - *a3) >> 3;
      while ( v16 == 46 && (!v17 || v17 == 46 && !v18) || !(unsigned int)sub_14025DDE0((__int64)&v16, a1, v9, a3) )
      {
        if ( !(unsigned int)((__int64 (__fastcall *)(__int64, _BYTE *))FindNextFileW)(v10, FindFileData) )
        {
          v12 = (a3[1] - *a3) >> 3;
          if ( v11 != v12 )
            sub_14023AE00(
              *a3 + 8 * v11,
              v12 - v11,
              8u,
              (int (__fastcall *)(unsigned __int64, _BYTE *))unknown_libname_897);
          break;
        }
      }
      ((void (__fastcall *)(__int64))FindClose)(v10);
    }
  }
  else
  {
    sub_14025DDE0(a1, 0, 0, a3);
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&v14 ^ v19);
}

