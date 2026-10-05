/* Address: 0x140253090 | Name: ?write_double_translated_ansi_nolock@@YA?AUwrite_result@?A0x17268360@@HQEBDI@Z | Size: 1232 bytes */
__int64 __fastcall write_double_translated_ansi_nolock(_QWORD *a1, int a2, const __m128i *a3, unsigned int a4)
{
  __int64 v4; // rbx
  const __m128i *v5; // rdi
  unsigned __int64 v6; // r13
  __int64 v7; // r14
  __int64 v8; // r12
  const __m128i *v9; // rsi
  int v10; // edx
  __int64 v11; // rax
  int v12; // ebx
  __int64 v13; // rax
  const char **v14; // r15
  int v15; // edx
  __int64 v16; // r9
  __int64 i; // rdi
  __int64 v18; // r8
  int v19; // r15d
  int v20; // r13d
  __int64 v21; // rdx
  __int64 v22; // r9
  _BYTE *v23; // rcx
  __int64 j; // rdx
  __int64 v25; // rcx
  int v26; // eax
  __int64 v27; // rdx
  __int64 v28; // rdi
  const char **v29; // rbx
  __int64 v30; // rdx
  char v31; // cl
  __int64 v32; // r8
  __int8 v33; // al
  const __m128i *v34; // rdx
  unsigned int v35; // eax
  unsigned int v36; // edi
  int v37; // r15d
  int v38; // edx
  __int8 *v39; // rsi
  char v40; // al
  __int64 v41; // rcx
  int v42; // ebx
  bool v43; // zf
  _QWORD *v44; // rax
  int v45; // ecx
  int v47; // r9d
  __int64 v48; // r8
  __int64 v49; // r13
  __int64 v50; // r10
  __int8 v51; // al
  __int64 v52; // rcx
  __int8 v53; // al
  __int64 v54; // rcx
  __int64 v55; // [rsp+0h] [rbp-D9h] BYREF
  struct _Mbstatet *lpOverlapped; // [rsp+20h] [rbp-B9h]
  __int16 v57[2]; // [rsp+40h] [rbp-99h] BYREF
  int DstCh; // [rsp+44h] [rbp-95h] BYREF
  __int64 NumberOfBytesWritten; // [rsp+48h] [rbp-91h] BYREF
  _QWORD v60[3]; // [rsp+50h] [rbp-89h] BYREF
  char v61; // [rsp+68h] [rbp-71h]
  __int64 v62; // [rsp+70h] [rbp-69h]
  int v63; // [rsp+80h] [rbp-59h]
  int v64; // [rsp+84h] [rbp-55h]
  __int64 v65; // [rsp+88h] [rbp-51h]
  unsigned __int64 v66; // [rsp+90h] [rbp-49h]
  __int64 hFile; // [rsp+98h] [rbp-41h]
  unsigned __int64 v68; // [rsp+A0h] [rbp-39h] BYREF
  _BYTE *v69; // [rsp+A8h] [rbp-31h] BYREF
  unsigned __int64 v70; // [rsp+B0h] [rbp-29h] BYREF
  const __m128i *v71; // [rsp+B8h] [rbp-21h] BYREF
  const __m128i *v72; // [rsp+C0h] [rbp-19h]
  __int64 v73; // [rsp+C8h] [rbp-11h]
  __int64 v74; // [rsp+D0h] [rbp-9h]
  _QWORD *v75; // [rsp+D8h] [rbp-1h]
  _BYTE v76[8]; // [rsp+E0h] [rbp+7h] BYREF
  _BYTE v77[8]; // [rsp+E8h] [rbp+Fh] BYREF
  char Buffer; // [rsp+F0h] [rbp+17h] BYREF
  __int64 v79; // [rsp+F8h] [rbp+1Fh]

  v4 = a2;
  v5 = a3;
  v75 = a1;
  v72 = a3;
  v6 = (unsigned __int64)a3->m128i_u64 + a4;
  v74 = a2;
  v66 = v6;
  v7 = 9LL * (a2 & 0x3F);
  v8 = (__int64)a2 >> 6;
  hFile = *(_QWORD *)(*(_QWORD *)&dword_140404A6C[2 * v8 + 19065401] + 72LL * (a2 & 0x3F) + 40);
  v63 = ((__int64 (*)(void))GetConsoleCP)();
  sub_140213644((_LocaleUpdate *)v60, nullptr);
  v65 = 0;
  v62 = 0;
  v9 = v5;
  v10 = *(_DWORD *)(v60[1] + 12LL);
  v64 = v10;
  if ( (unsigned __int64)v5 >= v6 )
  {
LABEL_44:
    v43 = v61 == 0;
    goto LABEL_45;
  }
  v11 = v4;
  v12 = HIDWORD(v62);
  v13 = v11 >> 6;
  v73 = v13;
  while ( 1 )
  {
    LODWORD(v14) = 1;
    LOBYTE(v57[0]) = v9->m128i_i8[0];
    DstCh = 0;
    if ( v10 == 65001 )
    {
      v15 = 0;
      v16 = *(_QWORD *)&dword_140404A6C[2 * v13 + 19065401];
      for ( i = 0; i < 5; ++i )
      {
        if ( !*(_BYTE *)(v16 + 8 * v7 + i + 62) )
          break;
        ++v15;
      }
      if ( i <= 0 )
      {
        v27 = v6 - (_QWORD)v9;
        v28 = byte_140302310[v9->m128i_u8[0]];
        if ( (int)v28 + 1 <= (__int64)(v6 - (_QWORD)v9) )
        {
          v70 = 0;
          v71 = v9;
          v29 = (const char **)((unsigned int)((_DWORD)v28 == 3) + 1);
          if ( __crt_mbstring::__mbsrtowcs_utf8((#115 *)&DstCh, (#49 *)&v71, v29, (unsigned __int64)&v70, lpOverlapped) == -1 )
            goto LABEL_54;
          v5 = (const __m128i *)((char *)v9 + v28);
          LODWORD(v14) = (_DWORD)v29;
          goto LABEL_29;
        }
        v47 = 0;
        if ( v27 > 0 )
        {
          v48 = 0;
          v49 = v74 & 0x3F;
          v50 = v74 >> 6;
          do
          {
            v51 = v9->m128i_i8[v48];
            ++v47;
            v52 = v48 + *(_QWORD *)&dword_140404A6C[2 * v50 + 19065401];
            ++v48;
            *(_BYTE *)(v52 + 72 * v49 + 62) = v51;
          }
          while ( v47 < v27 );
        }
        v42 = v27 + v12;
      }
      else
      {
        v18 = v66 - (_QWORD)v9;
        v19 = byte_140302310[*(unsigned __int8 *)(*(_QWORD *)&dword_140404A6C[2 * v8 + 19065401] + 8 * v7 + 62)] + 1;
        v20 = v19 - v15;
        if ( v19 - v15 <= (__int64)(v66 - (_QWORD)v9) )
        {
          v21 = 0;
          v22 = v16 - (_QWORD)v76;
          do
          {
            v23 = &v76[v21++];
            *v23 = v23[8 * v7 + 62 + v22];
          }
          while ( v21 < i );
          if ( v20 > 0 )
            MEMORY[0x1401FC920]((__m128i *)&v76[i], v9, v20);
          for ( j = 0; j < i; ++j )
          {
            v25 = j + *(_QWORD *)&dword_140404A6C[2 * v8 + 19065401];
            *(_BYTE *)(v25 + 8 * v7 + 62) = 0;
          }
          v68 = 0;
          v69 = v76;
          v14 = (const char **)((unsigned int)(v19 == 4) + 1);
          if ( __crt_mbstring::__mbsrtowcs_utf8((#115 *)&DstCh, (#49 *)&v69, v14, (unsigned __int64)&v68, lpOverlapped) == -1 )
            goto LABEL_54;
          v26 = v20 - 1;
          v6 = v66;
          v5 = (const __m128i *)((char *)v9 + v26);
          goto LABEL_29;
        }
        v38 = 0;
        if ( v18 > 0 )
        {
          v39 = &v9->m128i_i8[-i];
          do
          {
            v40 = v39[i];
            ++v38;
            v41 = i + *(_QWORD *)&dword_140404A6C[2 * v8 + 19065401];
            ++i;
            *(_BYTE *)(v41 + 8 * v7 + 62) = v40;
          }
          while ( v38 < v18 );
          v12 = HIDWORD(v62);
        }
        v42 = v18 + v12;
      }
      HIDWORD(v62) = v42;
      goto LABEL_44;
    }
    v30 = *(_QWORD *)&dword_140404A6C[2 * v8 + 19065401];
    v31 = *(_BYTE *)(v30 + 8 * v7 + 61);
    if ( (v31 & 4) != 0 )
    {
      v77[0] = *(_BYTE *)(v30 + 8 * v7 + 62);
      v32 = 2;
      v33 = v9->m128i_i8[0];
      *(_BYTE *)(v30 + 8 * v7 + 61) = v31 & 0xFB;
      v34 = (const __m128i *)v77;
      v77[1] = v33;
    }
    else
    {
      if ( (sub_140256DC0()[v9->m128i_u8[0]] & 0x8000u) == 0 )
      {
        v32 = 1;
      }
      else
      {
        v5 = (const __m128i *)((char *)v5 + 1);
        if ( (unsigned __int64)v5 >= v6 )
        {
          v53 = v9->m128i_i8[0];
          v54 = *(_QWORD *)&dword_140404A6C[2 * v8 + 19065401];
          HIDWORD(v62) = v12 + 1;
          *(_BYTE *)(v54 + 8 * v7 + 62) = v53;
          *(_BYTE *)(*(_QWORD *)&dword_140404A6C[2 * v8 + 19065401] + 8 * v7 + 61) |= 4u;
          v43 = v61 == 0;
          goto LABEL_45;
        }
        v32 = 2;
      }
      v34 = v9;
    }
    if ( (unsigned int)MEMORY[0x140254140](&DstCh, v34, v32) == -1 )
      goto LABEL_54;
LABEL_29:
    v9 = (const __m128i *)&v5->m128i_i8[1];
    v35 = sub_140258A84(v63, 0, (unsigned int)&DstCh, (_DWORD)v14, (unsigned int)&Buffer, 5, 0, 0);
    v36 = v35;
    if ( !v35 )
      goto LABEL_56;
    lpOverlapped = nullptr;
    if ( !(unsigned int)((__int64 (__fastcall *)(__int64, char *, _QWORD, __int64 *))WriteFile)(
                          hFile,
                          &Buffer,
                          v35,
                          &NumberOfBytesWritten) )
    {
      LODWORD(v62) = ((__int64 (*)(void))GetLastError)();
LABEL_56:
      v43 = v61 == 0;
      goto LABEL_45;
    }
    v37 = v65;
    v12 = (_DWORD)v9 - (_DWORD)v72 + v65;
    HIDWORD(v62) = v12;
    if ( (unsigned int)NumberOfBytesWritten < v36 )
      goto LABEL_44;
    if ( LOBYTE(v57[0]) == 10 )
      break;
LABEL_36:
    v5 = v9;
    if ( (unsigned __int64)v9 >= v6 )
      goto LABEL_44;
    v13 = v73;
    v10 = v64;
  }
  v57[0] = 13;
  lpOverlapped = nullptr;
  if ( (unsigned int)((__int64 (__fastcall *)(__int64, __int16 *, __int64, __int64 *))WriteFile)(
                       hFile,
                       v57,
                       1,
                       &NumberOfBytesWritten) )
  {
    if ( !(_DWORD)NumberOfBytesWritten )
      goto LABEL_44;
    ++v12;
    v65 = (unsigned int)(v37 + 1);
    HIDWORD(v62) = v12;
    goto LABEL_36;
  }
  LODWORD(v62) = ((__int64 (*)(void))GetLastError)();
LABEL_54:
  v43 = v61 == 0;
LABEL_45:
  if ( !v43 )
    *(_DWORD *)(v60[0] + 936LL) &= ~2u;
  v44 = v75;
  v45 = v65;
  *v75 = v62;
  *((_DWORD *)v44 + 2) = v45;
  return MEMORY[0x1401F8B20]((unsigned __int64)&v55 ^ v79);
}

