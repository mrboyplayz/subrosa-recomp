/* Address: 0x14025f610 | Name: _setmbcp_nolock | Size: 697 bytes */
__int64 __fastcall setmbcp_nolock(unsigned int a1, __int64 a2)
{
  const __int16 *v3; // rbx
  unsigned int SystemCP; // edi
  unsigned int v5; // r14d
  _DWORD *v6; // rax
  int v7; // ebp
  _WORD *v8; // rdi
  __int64 j; // rcx
  bool v10; // zf
  _BYTE *i; // rcx
  unsigned int v12; // eax
  unsigned int v13; // edx
  __int64 v14; // rdi
  __int64 v15; // rdx
  _BYTE *v16; // rax
  __int64 v17; // rcx
  const __int16 *v18; // rax
  __int64 v19; // rax
  _BYTE *v20; // r15
  __int64 v21; // r14
  char *v22; // r9
  unsigned __int8 *v23; // rdx
  unsigned int v24; // r8d
  __int64 v25; // r10
  unsigned int v26; // edi
  unsigned int v27; // edi
  unsigned int v28; // edi
  _WORD *v29; // rdx
  __int64 v30; // rcx
  __int64 v32; // [rsp+0h] [rbp-78h] BYREF
  _DWORD CPInfo[6]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v34; // [rsp+38h] [rbp-40h]

  v3 = nullptr;
  SystemCP = getSystemCP(a1);
  if ( !SystemCP )
    goto LABEL_57;
  v5 = 0;
  v6 = &unk_1403029F0;
  v7 = 1;
  do
  {
    if ( *v6 == SystemCP )
    {
      MEMORY[0x1401FCD30]((_WORD *)(a2 + 24), 0, 0x101u);
      v19 = v5;
      v20 = &unk_1403029E0;
      v21 = 4;
      v22 = (char *)&unk_140302A00 + 48 * v19;
      do
      {
        v23 = (unsigned __int8 *)v22;
        if ( *v22 )
        {
          do
          {
            if ( !v23[1] )
              break;
            v24 = *v23;
            if ( v24 <= v23[1] )
            {
              v25 = v24 + 1;
              do
              {
                if ( (unsigned int)v25 >= 0x101 )
                  break;
                ++v24;
                *(_BYTE *)(v25 + a2 + 24) |= *v20;
                v25 = (unsigned int)(v25 + 1);
              }
              while ( v24 <= v23[1] );
            }
            v23 += 2;
          }
          while ( *v23 );
        }
        v22 += 8;
        ++v20;
        --v21;
      }
      while ( v21 );
      *(_DWORD *)(a2 + 4) = SystemCP;
      *(_DWORD *)(a2 + 8) = 1;
      v26 = SystemCP - 932;
      if ( v26 )
      {
        v27 = v26 - 4;
        if ( v27 )
        {
          v28 = v27 - 13;
          if ( v28 )
          {
            if ( v28 == 1 )
              v3 = L"zh-TW";
          }
          else
          {
            v3 = L"ko-KR";
          }
        }
        else
        {
          v3 = (const __int16 *)off_14028F270;
        }
      }
      else
      {
        v3 = L"ja-JP";
      }
      *(_QWORD *)(a2 + 544) = v3;
      v29 = (_WORD *)(a2 + 12);
      v30 = 6;
      do
      {
        *v29 = *(_WORD *)((char *)v29 + (_QWORD)&unk_1403029F0 + 48 * v19 - a2 - 8);
        ++v29;
        --v30;
      }
      while ( v30 );
      goto LABEL_12;
    }
    ++v5;
    v6 += 12;
  }
  while ( v5 < 5 );
  if ( SystemCP != 65000 && (unsigned int)((__int64 (__fastcall *)(_QWORD))IsValidCodePage)((unsigned __int16)SystemCP) )
  {
    if ( SystemCP == 65001 )
    {
      *(_QWORD *)(a2 + 4) = 65001;
      *(_QWORD *)(a2 + 544) = 0;
      *(_DWORD *)(a2 + 24) = 0;
      *(_WORD *)(a2 + 28) = 0;
      goto LABEL_9;
    }
    if ( (unsigned int)((__int64 (__fastcall *)(_QWORD, _DWORD *))GetCPInfo)(SystemCP, CPInfo) )
    {
      MEMORY[0x1401FCD30]((_WORD *)(a2 + 24), 0, 0x101u);
      v10 = CPInfo[0] == 2;
      *(_DWORD *)(a2 + 4) = SystemCP;
      *(_QWORD *)(a2 + 544) = 0;
      if ( v10 )
      {
        for ( i = (char *)&CPInfo[1] + 2; *i; i += 2 )
        {
          if ( !i[1] )
            break;
          v12 = (unsigned __int8)i[1];
          v13 = (unsigned __int8)*i;
          if ( v13 <= v12 )
          {
            v14 = v13 + 1;
            v15 = v12 - v13 + 1;
            do
            {
              *(_BYTE *)(v14 + a2 + 24) |= 4u;
              v14 = (unsigned int)(v14 + 1);
              --v15;
            }
            while ( v15 );
          }
        }
        v16 = (_BYTE *)(a2 + 26);
        v17 = 254;
        do
        {
          *v16++ |= 8u;
          --v17;
        }
        while ( v17 );
        switch ( *(_DWORD *)(a2 + 4) )
        {
          case 0x3A4:
            v18 = L"ja-JP";
            break;
          case 0x3A8:
            v18 = (const __int16 *)off_14028F270;
            break;
          case 0x3B5:
            v18 = L"ko-KR";
            break;
          case 0x3B6:
            v18 = L"zh-TW";
            break;
          default:
            v18 = nullptr;
            break;
        }
        *(_QWORD *)(a2 + 544) = v18;
      }
      else
      {
        v7 = 0;
      }
      *(_DWORD *)(a2 + 8) = v7;
LABEL_9:
      v8 = (_WORD *)(a2 + 12);
      for ( j = 6; j; --j )
        *v8++ = 0;
LABEL_12:
      setSBUpLow((struct __crt_multibyte_data *)a2);
      return MEMORY[0x1401F8B20]((unsigned __int64)&v32 ^ v34);
    }
    if ( dword_140404A6C[19065831] )
LABEL_57:
      setSBCS((struct __crt_multibyte_data *)a2);
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&v32 ^ v34);
}

