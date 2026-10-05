/* Address: 0x140253b04 | Name: sub_140253B04 | Size: 730 bytes */
__int64 __fastcall sub_140253B04(unsigned int a1, __m128i *a2, unsigned int a3)
{
  __int64 v3; // r14
  __int64 v7; // r13
  __int64 v8; // r15
  __int64 v9; // rcx
  char v10; // si
  int v11; // ebx
  int v12; // esi
  __m128i *v13; // r12
  __m128i *v14; // r14
  int v15; // ebx
  __int64 v16; // rax
  __int64 v17; // xmm0_8
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 NumberOfBytesWritten; // [rsp+30h] [rbp-30h] BYREF
  int v21; // [rsp+38h] [rbp-28h]
  __int64 v22; // [rsp+40h] [rbp-20h]
  __int128 Mode; // [rsp+50h] [rbp-10h] BYREF

  v3 = a3;
  if ( !a3 )
    return 0;
  if ( !a2
    || (v7 = (__int64)(int)a1 >> 6,
        v8 = 9LL * (a1 & 0x3F),
        v9 = *(_QWORD *)&dword_140404A6C[2 * v7 + 19065401],
        v10 = *(_BYTE *)(v9 + 72LL * (a1 & 0x3F) + 57),
        (unsigned __int8)(v10 - 1) <= 1u)
    && (a3 & 1) != 0 )
  {
    *(_DWORD *)sub_14024D19C() = 0;
    *errno() = 22;
    sub_14024CF6C();
    return 0xFFFFFFFFLL;
  }
  if ( (*(_BYTE *)(v9 + 72LL * (a1 & 0x3F) + 56) & 0x20) != 0 )
    lseeki64_nolock(a1, 0, 2);
  v11 = 0;
  v22 = 0;
  if ( !isatty(a1)
    || *(char *)(*(_QWORD *)&dword_140404A6C[2 * v7 + 19065401] + 72LL * (a1 & 0x3F) + 56) >= 0
    || !*(_QWORD *)(*(_QWORD *)(sub_140255A70() + 144) + 312LL)
    && !*(_BYTE *)(*(_QWORD *)&dword_140404A6C[2 * v7 + 19065401] + 72LL * (a1 & 0x3F) + 57)
    || !(unsigned int)((__int64 (__fastcall *)(_QWORD, __int128 *))GetConsoleMode)(
                        *(_QWORD *)(*(_QWORD *)&dword_140404A6C[2 * v7 + 19065401] + 72LL * (a1 & 0x3F) + 40),
                        &Mode) )
  {
    v18 = *(_QWORD *)&dword_140404A6C[2 * v7 + 19065401];
    if ( *(char *)(v18 + 72LL * (a1 & 0x3F) + 56) >= 0 )
    {
      v19 = *(_QWORD *)(v18 + 72LL * (a1 & 0x3F) + 40);
      NumberOfBytesWritten = 0;
      v21 = 0;
      if ( !(unsigned int)((__int64 (__fastcall *)(__int64, __m128i *, _QWORD, char *, _QWORD))WriteFile)(
                            v19,
                            a2,
                            (unsigned int)v3,
                            (char *)&NumberOfBytesWritten + 4,
                            0) )
        LODWORD(NumberOfBytesWritten) = ((__int64 (*)(void))GetLastError)();
      v11 = v21;
LABEL_38:
      v17 = NumberOfBytesWritten;
      goto LABEL_39;
    }
    if ( v10 )
    {
      if ( v10 == 1 )
      {
        v16 = write_text_utf8_nolock(&NumberOfBytesWritten, a1, a2, (unsigned int)v3);
      }
      else
      {
        if ( v10 != 2 )
          goto LABEL_40;
        v16 = write_text_utf16le_nolock((__int64)&NumberOfBytesWritten, a1, a2->m128i_i16, v3);
      }
    }
    else
    {
      v16 = write_text_ansi_nolock((__int64)&NumberOfBytesWritten, a1, a2->m128i_i8, v3);
    }
LABEL_27:
    v17 = *(_QWORD *)v16;
    v11 = *(_DWORD *)(v16 + 8);
LABEL_39:
    v22 = v17;
    goto LABEL_40;
  }
  if ( !v10 )
  {
    v16 = write_double_translated_ansi_nolock(&NumberOfBytesWritten, a1, a2, v3);
    goto LABEL_27;
  }
  if ( (unsigned __int8)(v10 - 1) <= 1u )
  {
    v12 = 0;
    v13 = (__m128i *)((char *)a2 + v3);
    NumberOfBytesWritten = 0;
    v14 = a2;
    if ( a2 < v13 )
    {
      v15 = HIDWORD(NumberOfBytesWritten);
      while ( 1 )
      {
        LOWORD(Mode) = v14->m128i_i16[0];
        if ( (unsigned __int16)putwch_nolock((unsigned __int16)Mode) != (_WORD)Mode )
          break;
        v15 += 2;
        HIDWORD(NumberOfBytesWritten) = v15;
        if ( (_WORD)Mode == 10 )
        {
          if ( (unsigned __int16)putwch_nolock(13) != 13 )
            break;
          HIDWORD(NumberOfBytesWritten) = ++v15;
          ++v12;
        }
        v14 = (__m128i *)((char *)v14 + 2);
        if ( v14 >= v13 )
          goto LABEL_25;
      }
      LODWORD(NumberOfBytesWritten) = ((__int64 (*)(void))GetLastError)();
    }
LABEL_25:
    v11 = v12;
    goto LABEL_38;
  }
LABEL_40:
  if ( HIDWORD(v22) )
    return (unsigned int)(HIDWORD(v22) - v11);
  if ( (_DWORD)v22 )
  {
    if ( (_DWORD)v22 == 5 )
    {
      *errno() = 9;
      *(_DWORD *)sub_14024D19C() = 5;
    }
    else
    {
      sub_14024D14C(v22);
    }
    return 0xFFFFFFFFLL;
  }
  if ( (*(_BYTE *)(*(_QWORD *)&dword_140404A6C[2 * v7 + 19065401] + 8 * v8 + 56) & 0x40) == 0 || a2->m128i_i8[0] != 26 )
  {
    *errno() = 28;
    *(_DWORD *)sub_14024D19C() = 0;
    return 0xFFFFFFFFLL;
  }
  return 0;
}

