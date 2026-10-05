/* Address: 0x14025276c | Name: _read_nolock | Size: 1110 bytes */
__int64 __fastcall read_nolock(int a1, __int16 *a2, unsigned int a3)
{
  __int64 v5; // rax
  __int64 v6; // r8
  __int64 v7; // r14
  __int64 v8; // rcx
  char v9; // al
  int v10; // r11d
  __int16 *v11; // rbx
  unsigned int v12; // ebp
  __int16 *v13; // r15
  __int64 v14; // rax
  bool v15; // zf
  int v16; // edi
  char v17; // al
  char v18; // cl
  char v19; // cl
  unsigned int v20; // eax
  int v21; // edi
  __int64 v23; // rdx
  int v24; // eax
  unsigned __int64 v25; // r8
  __int16 *v26; // r10
  __int16 *v27; // rax
  __int16 *v28; // rdi
  __int16 *v29; // r9
  __int16 v30; // cx
  __int64 v31; // r8
  __int64 Mode; // [rsp+30h] [rbp-68h] BYREF
  __int64 hConsoleHandle; // [rsp+38h] [rbp-60h]
  __int64 v34; // [rsp+40h] [rbp-58h]
  __int64 v35; // [rsp+48h] [rbp-50h]
  __int16 *v36; // [rsp+50h] [rbp-48h]
  char v37; // [rsp+A0h] [rbp+8h]
  unsigned int NumberOfCharsRead; // [rsp+B8h] [rbp+20h] BYREF

  if ( a1 != -2 )
  {
    if ( a1 >= 0
      && a1 < dword_140404A6C[19065657]
      && (v5 = a1 & 0x3F,
          v35 = 1,
          v6 = (__int64)a1 >> 6,
          v34 = v6,
          v7 = 9 * v5,
          v8 = *(_QWORD *)&dword_140404A6C[2 * v6 + 19065401],
          v9 = *(_BYTE *)(v8 + 72 * v5 + 56),
          (v9 & 1) != 0) )
    {
      if ( a3 <= 0x7FFFFFFF )
      {
        if ( !a3 || (v9 & 2) != 0 )
          return 0;
        if ( a2 )
        {
          v10 = *(char *)(v8 + 8 * v7 + 57);
          v11 = nullptr;
          hConsoleHandle = *(_QWORD *)(v8 + 8 * v7 + 40);
          v37 = v10;
          if ( v10 == 1 )
          {
            if ( (a3 & 1) != 0 )
            {
LABEL_14:
              *(_DWORD *)sub_14024D19C() = 0;
              *errno() = 22;
              sub_14024CF6C();
LABEL_38:
              v21 = -1;
              goto LABEL_39;
            }
            v12 = a3 >> 1;
            if ( a3 >> 1 < 4 )
              v12 = 4;
            v11 = (__int16 *)malloc_base(v12);
            free_base(nullptr);
            free_base(nullptr);
            v13 = v11;
            if ( !v11 )
            {
              *errno() = 12;
              *(_DWORD *)sub_14024D19C() = 8;
              goto LABEL_38;
            }
            v14 = lseeki64_nolock((unsigned int)a1, 0, 1);
            v6 = v34;
            LOBYTE(v10) = v37;
            *(_QWORD *)(*(_QWORD *)&dword_140404A6C[2 * v34 + 19065401] + 8 * v7 + 48) = v14;
            v8 = *(_QWORD *)&dword_140404A6C[2 * v6 + 19065401];
          }
          else
          {
            if ( v10 == 2 && (a3 & 1) != 0 )
              goto LABEL_14;
            v12 = a3;
            v13 = a2;
          }
          v15 = (*(_BYTE *)(v8 + 8 * v7 + 56) & 0x48) == 0;
          v16 = 0;
          v36 = v13;
          if ( !v15 )
          {
            v17 = *(_BYTE *)(v8 + 8 * v7 + 58);
            if ( v17 != 10 )
            {
              *(_BYTE *)v13 = v17;
              --v12;
              v13 = (__int16 *)((char *)v13 + 1);
              v16 = 1;
              *(_BYTE *)(*(_QWORD *)&dword_140404A6C[2 * v6 + 19065401] + 8 * v7 + 58) = 10;
              if ( (_BYTE)v10 )
              {
                v18 = *(_BYTE *)(*(_QWORD *)&dword_140404A6C[2 * v6 + 19065401] + 8 * v7 + 59);
                if ( v18 != 10 )
                {
                  if ( v12 )
                  {
                    *(_BYTE *)v13 = v18;
                    v16 = 2;
                    v13 = (__int16 *)((char *)v13 + 1);
                    --v12;
                    *(_BYTE *)(*(_QWORD *)&dword_140404A6C[2 * v6 + 19065401] + 8 * v7 + 59) = 10;
                    if ( (_BYTE)v10 == 1 )
                    {
                      v19 = *(_BYTE *)(*(_QWORD *)&dword_140404A6C[2 * v6 + 19065401] + 8 * v7 + 60);
                      if ( v19 != 10 )
                      {
                        if ( v12 )
                        {
                          *(_BYTE *)v13 = v19;
                          v16 = 3;
                          v13 = (__int16 *)((char *)v13 + 1);
                          --v12;
                          *(_BYTE *)(*(_QWORD *)&dword_140404A6C[2 * v6 + 19065401] + 8 * v7 + 60) = 10;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          if ( isatty(a1)
            && *(char *)(*(_QWORD *)&dword_140404A6C[2 * v34 + 19065401] + 8 * v7 + 56) < 0
            && (unsigned int)((__int64 (__fastcall *)(__int64, __int64 *))GetConsoleMode)(hConsoleHandle, &Mode) )
          {
            if ( v37 == 2 )
            {
              if ( !(unsigned int)((__int64 (__fastcall *)(__int64, __int16 *, _QWORD, unsigned int *, _QWORD))ReadConsoleW)(
                                    hConsoleHandle,
                                    v13,
                                    v12 >> 1,
                                    &NumberOfCharsRead,
                                    0) )
              {
                v20 = ((__int64 (*)(void))GetLastError)();
LABEL_37:
                sub_14024D14C(v20);
                goto LABEL_38;
              }
              v21 = v16 + 2 * NumberOfCharsRead;
              goto LABEL_45;
            }
          }
          else
          {
            LOBYTE(v35) = 0;
          }
          if ( !(unsigned int)((__int64 (__fastcall *)(__int64, __int16 *, _QWORD, unsigned int *, _QWORD))ReadFile)(
                                hConsoleHandle,
                                v13,
                                v12,
                                &NumberOfCharsRead,
                                0)
            || NumberOfCharsRead > a3 )
          {
            v20 = ((__int64 (*)(void))GetLastError)();
            if ( v20 == 5 )
            {
              *errno() = 9;
              *(_DWORD *)sub_14024D19C() = 5;
              goto LABEL_38;
            }
            if ( v20 == 109 )
            {
              v21 = 0;
              goto LABEL_39;
            }
            goto LABEL_37;
          }
          v21 = NumberOfCharsRead + v16;
LABEL_45:
          v23 = v34;
          if ( *(char *)(*(_QWORD *)&dword_140404A6C[2 * v34 + 19065401] + 8 * v7 + 56) < 0 )
          {
            if ( v37 == 2 )
            {
              v25 = (unsigned __int64)v21 >> 1;
              if ( (_BYTE)v35 )
              {
                v26 = v36;
                v27 = v36;
                v28 = v36;
                v29 = &v36[v25];
                if ( v36 < v29 )
                {
                  while ( 1 )
                  {
                    v30 = *v27;
                    if ( *v27 == 26 )
                      break;
                    if ( v30 == 13 && v27 + 1 < v29 && v27[1] == 10 )
                    {
                      v30 = 10;
                      v31 = 4;
                    }
                    else
                    {
                      v31 = 2;
                    }
                    v27 = (__int16 *)((char *)v27 + v31);
                    *v28++ = v30;
                    if ( v27 >= v29 )
                      goto LABEL_60;
                  }
                  *(_BYTE *)(*(_QWORD *)&dword_140404A6C[2 * v23 + 19065401] + 8 * v7 + 56) |= 2u;
                }
LABEL_60:
                v21 = 2 * (v28 - v26);
                goto LABEL_39;
              }
              v24 = sub_140252140(a1, v36, v25);
            }
            else
            {
              v24 = translate_ansi_or_utf8_nolock(a1, (char *)v13, v21);
            }
            v21 = v24;
          }
LABEL_39:
          free_base(v11);
          return (unsigned int)v21;
        }
      }
      *(_DWORD *)sub_14024D19C() = 0;
      *errno() = 22;
    }
    else
    {
      *(_DWORD *)sub_14024D19C() = 0;
      *errno() = 9;
    }
    sub_14024CF6C();
    return 0xFFFFFFFFLL;
  }
  *(_DWORD *)sub_14024D19C() = 0;
  *errno() = 9;
  return 0xFFFFFFFFLL;
}

