/* Address: 0x14025d88c | Name: ??$common_expand_argv_wildcards@_W@@YAHQEAPEA_WQEAPEAPEA_W@Z | Size: 970 bytes */
__int64 __fastcall common_expand_argv_wildcards<wchar_t>(const #49 **a1, __int64 *a2)
{
  __int64 v2; // rdi
  const #49 **v3; // r12
  const #49 *v4; // rax
  __int64 *v5; // rsi
  __int64 *v6; // r14
  __int64 v7; // rbx
  #49 *v8; // rax
  const #49 *v9; // r13
  #49 *v10; // rcx
  int v11; // eax
  bool v12; // zf
  unsigned __int16 v13; // ax
  int v14; // r15d
  unsigned __int16 v15; // dx
  char v16; // al
  __int64 v17; // r15
  __int64 v18; // rbx
  signed __int64 v19; // rdx
  unsigned __int64 v20; // r10
  __int64 *v21; // rdx
  __int64 v22; // r9
  unsigned __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rbx
  __int64 v27; // rcx
  __int64 *v28; // r15
  __int64 v29; // r13
  __int64 v30; // r8
  __int64 v31; // r12
  __int64 v32; // r12
  void **v33; // r12
  unsigned __int64 v34; // rbx
  _QWORD v36[5]; // [rsp+0h] [rbp-100h] BYREF
  void *Block[2]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v38; // [rsp+40h] [rbp-C0h]
  __int64 v39; // [rsp+48h] [rbp-B8h]
  __int64 v40; // [rsp+50h] [rbp-B0h]
  __int64 *v41; // [rsp+58h] [rbp-A8h]
  _BYTE FindFileData[44]; // [rsp+60h] [rbp-A0h] BYREF
  __int16 v43; // [rsp+8Ch] [rbp-74h] BYREF
  __int16 v44; // [rsp+8Eh] [rbp-72h]
  __int16 v45; // [rsp+90h] [rbp-70h]
  _QWORD Control[8]; // [rsp+2B0h] [rbp+1B0h] BYREF

  v2 = 0;
  v41 = a2;
  v3 = a1;
  if ( a2 )
  {
    *a2 = 0;
    v4 = *a1;
    *(_OWORD *)Block = 0;
    v5 = nullptr;
    v6 = nullptr;
    v38 = 0;
    while ( v4 )
    {
      LODWORD(Control[0]) = 4128810;
      WORD2(Control[0]) = 0;
      v7 = 0x200000000801LL;
      v8 = wcspbrk(v4, (const #49 *)Control);
      v9 = *v3;
      v10 = v8;
      if ( v8 )
      {
        if ( v8 != v9 )
        {
          do
          {
            v13 = *(_WORD *)v10 - 47;
            if ( v13 <= 0x2Du && _bittest64(&v7, v13) )
              break;
            v10 = (#49 *)((char *)v10 - 2);
          }
          while ( v10 != v9 );
        }
        if ( *(_WORD *)v10 == 58 && v10 != (const #49 *)((char *)v9 + 2) )
          goto LABEL_13;
        v15 = *(_WORD *)v10 - 47;
        if ( v15 > 0x2Du || (v16 = 1, !_bittest64(&v7, v15)) )
          v16 = 0;
        v17 = (((v10 - v9) >> 1) + 1) & -(__int64)(v16 != 0);
        v39 = v17;
        v18 = ((__int64 (__fastcall *)(const #49 *, _QWORD, _BYTE *, _QWORD, _QWORD, _DWORD))FindFirstFileExW)(
                v9,
                0,
                FindFileData,
                0,
                0,
                0);
        if ( v18 == -1 )
        {
LABEL_13:
          v14 = sub_14025DDE0(v9, 0, 0, Block);
LABEL_30:
          v5 = (__int64 *)Block[1];
          v6 = (__int64 *)Block[0];
        }
        else
        {
          v40 = v5 - v6;
          do
          {
            if ( v43 != 46 || v44 && (v44 != 46 || v45) )
            {
              v14 = sub_14025DDE0(&v43, v9, v17, Block);
              if ( v14 )
              {
                ((void (__fastcall *)(__int64))FindClose)(v18);
                goto LABEL_30;
              }
              v17 = v39;
            }
          }
          while ( (unsigned int)((__int64 (__fastcall *)(__int64, _BYTE *))FindNextFileW)(v18, FindFileData) );
          v5 = (__int64 *)Block[1];
          v6 = (__int64 *)Block[0];
          v19 = ((char *)Block[1] - (char *)Block[0]) >> 3;
          if ( v40 == v19 )
          {
            ((void (__fastcall *)(__int64))FindClose)(v18);
            goto LABEL_33;
          }
          sub_14023AE00(
            (unsigned __int64)Block[0] + 8 * v40,
            v19 - v40,
            8u,
            (int (__fastcall *)(unsigned __int64, _BYTE *))unknown_libname_897);
          ((void (__fastcall *)(__int64))FindClose)(v18);
          v14 = 0;
        }
        v12 = v14 == 0;
      }
      else
      {
        v11 = sub_14025DDE0(*v3, 0, 0, Block);
        v5 = (__int64 *)Block[1];
        v6 = (__int64 *)Block[0];
        v12 = v11 == 0;
      }
      if ( !v12 )
        goto LABEL_50;
LABEL_33:
      v4 = *++v3;
    }
    Control[0] = 0;
    v20 = 0;
    v21 = v6;
    v22 = 0;
    v23 = (unsigned __int64)((char *)v5 - (char *)v6 + 7) >> 3;
    if ( v6 > v5 )
      v23 = 0;
    if ( v23 )
    {
      do
      {
        v24 = -1;
        do
          ++v24;
        while ( *(_WORD *)(*v21 + 2 * v24) );
        ++v21;
        v20 += v24 + 1;
        ++v22;
      }
      while ( v22 != v23 );
      Control[0] = v20;
    }
    v25 = sub_140245E48(v5 - v6 + 1, v20, 2u);
    v26 = v25;
    if ( v25 )
    {
      v27 = v25 + 8 * (v5 - v6 + 1);
      v28 = v6;
      v39 = v27;
      v29 = v27;
      if ( v6 != v5 )
      {
        v40 = v25 - (_QWORD)v6;
        do
        {
          v30 = *v28;
          v31 = -1;
          do
            ++v31;
          while ( *(_WORD *)(v30 + 2 * v31) );
          v32 = v31 + 1;
          if ( (unsigned int)sub_140260D80(v29, Control[0] - ((v29 - v27) >> 1), v30, v32) )
          {
            v36[4] = 0;
            sub_14024CFBC();
            JUMPOUT(0x14025DC55LL);
          }
          v27 = v39;
          *(__int64 *)((char *)v28++ + v40) = v29;
          v29 += 2 * v32;
        }
        while ( v28 != v5 );
      }
      *v41 = v26;
    }
    free_base(nullptr);
LABEL_50:
    v33 = (void **)v6;
    v34 = (unsigned __int64)((char *)v5 - (char *)v6 + 7) >> 3;
    if ( v6 > v5 )
      v34 = 0;
    if ( v34 )
    {
      do
      {
        free_base(*v33);
        ++v2;
        ++v33;
      }
      while ( v2 != v34 );
    }
    free_base(v6);
  }
  else
  {
    *errno() = 22;
    sub_14024CF6C();
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)v36 ^ Control[1]);
}

