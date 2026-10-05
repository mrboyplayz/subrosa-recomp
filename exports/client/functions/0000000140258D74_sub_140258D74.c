/* Address: 0x140258d74 | Name: sub_140258D74 | Size: 1633 bytes */
__int64 __fastcall sub_140258D74(__int64 a1)
{
  __int64 v1; // r8
  _WORD *v3; // r13
  _BYTE *v4; // r14
  char *v5; // rbp
  _WORD *v6; // r12
  unsigned int *v7; // r15
  _BYTE *v8; // rcx
  int i; // eax
  _BYTE *j; // rcx
  int v11; // edx
  __int64 v12; // rax
  int v13; // eax
  _BYTE *v14; // r8
  __int16 *v15; // r10
  int k; // edx
  __int16 v17; // cx
  _BYTE *m; // rdx
  int v19; // ecx
  __int128 v20; // xmm1
  char *v21; // rcx
  __int64 v22; // rax
  __int128 v23; // xmm1
  __int128 v24; // xmm1
  __int128 v25; // xmm1
  char *v26; // r13
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  __int128 v29; // xmm0
  __int128 v30; // xmm1
  __int128 v31; // xmm0
  __int128 v32; // xmm1
  __int128 v33; // xmm0
  __int128 v34; // xmm1
  __int128 v35; // xmm0
  __int128 v36; // xmm1
  __int128 v37; // xmm0
  __int128 v38; // xmm1
  __int128 v39; // xmm0
  __int128 v40; // xmm1
  __int128 v41; // xmm0
  __int128 v42; // xmm1
  __int128 v43; // xmm0
  __int128 v44; // xmm1
  __int128 v45; // xmm0
  volatile signed __int32 *v46; // rcx
  void *v47; // rax
  volatile signed __int32 *v48; // rax
  _QWORD v50[5]; // [rsp+0h] [rbp-C8h] BYREF
  __int64 v51; // [rsp+28h] [rbp-A0h]
  int v52; // [rsp+30h] [rbp-98h]
  unsigned int v53; // [rsp+50h] [rbp-78h]
  void *Block; // [rsp+58h] [rbp-70h]
  char *v55; // [rsp+60h] [rbp-68h]
  char *v56; // [rsp+68h] [rbp-60h]
  _QWORD v57[2]; // [rsp+70h] [rbp-58h] BYREF
  _DWORD CPInfo[6]; // [rsp+80h] [rbp-48h] BYREF
  __int64 v59; // [rsp+98h] [rbp-30h]

  v1 = *(_QWORD *)(a1 + 312);
  v57[0] = a1;
  v57[1] = 0;
  v3 = nullptr;
  v4 = nullptr;
  v5 = nullptr;
  v6 = nullptr;
  if ( v1 )
  {
    v7 = (unsigned int *)(a1 + 12);
    Block = nullptr;
    if ( !*(_DWORD *)(a1 + 12) && (unsigned int)_acrt_GetLocaleInfoA((struct #68 *)v57, a1 + 12) )
      goto LABEL_40;
    Block = (void *)calloc_base(1u, 4u);
    free_base(nullptr);
    v3 = (_WORD *)calloc_base(0x180u, 2u);
    free_base(nullptr);
    v4 = (_BYTE *)calloc_base(0x180u, 1u);
    free_base(nullptr);
    v5 = (char *)calloc_base(0x180u, 1u);
    free_base(nullptr);
    v6 = (_WORD *)calloc_base(0x101u, 1u);
    free_base(nullptr);
    if ( !Block )
      goto LABEL_40;
    if ( !v3 )
      goto LABEL_40;
    if ( !v6 )
      goto LABEL_40;
    if ( !v4 )
      goto LABEL_40;
    if ( !v5 )
      goto LABEL_40;
    v8 = v6;
    for ( i = 0; i < 256; ++i )
      *v8++ = i;
    if ( !(unsigned int)((__int64 (__fastcall *)(_QWORD, _DWORD *))GetCPInfo)(*v7, CPInfo) || CPInfo[0] > 5u )
      goto LABEL_40;
    v53 = LOWORD(CPInfo[0]);
    if ( LOWORD(CPInfo[0]) > 1u )
    {
      if ( *v7 == 65001 )
      {
        MEMORY[0x1401FCD30](v6 + 64, 0x20u, 0x80u);
      }
      else
      {
        for ( j = (char *)&CPInfo[1] + 2; *j; j += 2 )
        {
          if ( !j[1] )
            break;
          v11 = (unsigned __int8)*j;
          if ( v11 <= (unsigned int)(unsigned __int8)j[1] )
          {
            do
            {
              v12 = v11++;
              *((_BYTE *)v6 + v12) = 32;
            }
            while ( v11 <= (unsigned __int8)j[1] );
          }
        }
      }
    }
    if ( (unsigned int)sub_14025A004(0, *(_QWORD *)(a1 + 312), 256, (int)v6 + 1, 255, (__int64)(v4 + 129), 255, *v7, 0)
      && (unsigned int)sub_14025A004(0, *(_QWORD *)(a1 + 312), 512, (int)v6 + 1, 255, (__int64)(v5 + 129), 255, *v7, 0)
      && (v13 = *v7,
          v52 = 0,
          LODWORD(v51) = v13,
          v55 = (char *)(v3 + 128),
          v50[4] = v3 + 128,
          (unsigned int)sub_140262618(0, 1, v6)) )
    {
      v3[127] = 0;
      v4[127] = 0;
      v5[127] = 0;
      v4[128] = 0;
      v5[128] = 0;
      v56 = (char *)(v3 + 127);
      if ( v53 > 1 )
      {
        if ( *v7 == 65001 )
        {
          v14 = v5 + 256;
          v15 = v3 + 256;
          for ( k = 128; k <= 255; ++k )
          {
            v17 = 0x8000;
            if ( (unsigned int)(k - 194) > 0x32 )
              v17 = 0;
            *v15++ = v17;
            v14[v4 - v5] = k;
            *v14++ = k;
          }
        }
        else
        {
          for ( m = (char *)&CPInfo[1] + 2; *m; m += 2 )
          {
            if ( !m[1] )
              break;
            v19 = (unsigned __int8)*m;
            if ( v19 <= (unsigned int)(unsigned __int8)m[1] )
            {
              do
              {
                v3[v19 + 128] = 0x8000;
                v4[v19 + 128] = v19;
                v5[v19 + 128] = v19;
                ++v19;
              }
              while ( v19 <= (unsigned __int8)m[1] );
            }
          }
        }
      }
      v20 = *((_OWORD *)v3 + 33);
      v21 = (char *)(v3 + 320);
      *(_OWORD *)v3 = *((_OWORD *)v3 + 32);
      v22 = *((_QWORD *)v3 + 94);
      *((_OWORD *)v3 + 1) = v20;
      v23 = *((_OWORD *)v3 + 35);
      *((_OWORD *)v3 + 2) = *((_OWORD *)v3 + 34);
      *((_OWORD *)v3 + 3) = v23;
      v24 = *((_OWORD *)v3 + 37);
      *((_OWORD *)v3 + 4) = *((_OWORD *)v3 + 36);
      *((_OWORD *)v3 + 5) = v24;
      v25 = *((_OWORD *)v3 + 39);
      *((_OWORD *)v3 + 6) = *((_OWORD *)v3 + 38);
      v26 = (char *)(v3 + 64);
      v27 = *(_OWORD *)v21;
      *((_OWORD *)v26 - 1) = v25;
      v28 = *((_OWORD *)v21 + 1);
      *(_OWORD *)v26 = v27;
      v29 = *((_OWORD *)v21 + 2);
      *((_OWORD *)v26 + 1) = v28;
      v30 = *((_OWORD *)v21 + 3);
      *((_OWORD *)v26 + 2) = v29;
      v31 = *((_OWORD *)v21 + 4);
      *((_OWORD *)v26 + 3) = v30;
      v32 = *((_OWORD *)v21 + 5);
      *((_OWORD *)v26 + 4) = v31;
      v33 = *((_OWORD *)v21 + 6);
      *((_OWORD *)v26 + 5) = v32;
      *((_OWORD *)v26 + 6) = v33;
      *((_QWORD *)v26 + 14) = v22;
      *((_DWORD *)v26 + 30) = *((_DWORD *)v21 + 30);
      *((_WORD *)v26 + 62) = *((_WORD *)v21 + 62);
      LODWORD(v22) = *((_DWORD *)v4 + 94);
      v34 = *((_OWORD *)v4 + 17);
      *(_OWORD *)v4 = *((_OWORD *)v4 + 16);
      v35 = *((_OWORD *)v4 + 18);
      *((_OWORD *)v4 + 1) = v34;
      v36 = *((_OWORD *)v4 + 19);
      *((_OWORD *)v4 + 2) = v35;
      v37 = *((_OWORD *)v4 + 20);
      *((_OWORD *)v4 + 3) = v36;
      v38 = *((_OWORD *)v4 + 21);
      *((_OWORD *)v4 + 4) = v37;
      v39 = *((_OWORD *)v4 + 22);
      *((_OWORD *)v4 + 5) = v38;
      *(_QWORD *)&v38 = *((_QWORD *)v4 + 46);
      *((_OWORD *)v4 + 6) = v39;
      *((_QWORD *)v4 + 14) = v38;
      *((_DWORD *)v4 + 30) = v22;
      *((_WORD *)v4 + 62) = *((_WORD *)v4 + 190);
      v4[126] = v4[382];
      LODWORD(v22) = *((_DWORD *)v5 + 94);
      v40 = *((_OWORD *)v5 + 17);
      *(_OWORD *)v5 = *((_OWORD *)v5 + 16);
      v41 = *((_OWORD *)v5 + 18);
      *((_OWORD *)v5 + 1) = v40;
      v42 = *((_OWORD *)v5 + 19);
      *((_OWORD *)v5 + 2) = v41;
      v43 = *((_OWORD *)v5 + 20);
      *((_OWORD *)v5 + 3) = v42;
      v44 = *((_OWORD *)v5 + 21);
      *((_OWORD *)v5 + 4) = v43;
      v45 = *((_OWORD *)v5 + 22);
      *((_OWORD *)v5 + 5) = v44;
      *(_QWORD *)&v44 = *((_QWORD *)v5 + 46);
      *((_OWORD *)v5 + 6) = v45;
      *((_QWORD *)v5 + 14) = v44;
      *((_DWORD *)v5 + 30) = v22;
      *((_WORD *)v5 + 62) = *((_WORD *)v5 + 190);
      v5[126] = v5[382];
      v46 = *(volatile signed __int32 **)(a1 + 256);
      if ( v46 && _InterlockedExchangeAdd(v46, 0xFFFFFFFF) == 1 )
      {
        free_base((void *)(*(_QWORD *)(a1 + 264) - 254LL));
        free_base((void *)(*(_QWORD *)(a1 + 272) - 128LL));
        free_base((void *)(*(_QWORD *)(a1 + 280) - 128LL));
        free_base(*(void **)(a1 + 256));
      }
      v47 = Block;
      *(_DWORD *)Block = 1;
      *(_QWORD *)(a1 + 256) = v47;
      *(_QWORD *)a1 = v55;
      *(_QWORD *)(a1 + 264) = v56;
      *(_QWORD *)(a1 + 272) = v4 + 128;
      *(_QWORD *)(a1 + 280) = v5 + 128;
      *(_DWORD *)(a1 + 8) = v53;
    }
    else
    {
LABEL_40:
      free_base(Block);
      free_base(v3);
      free_base(v4);
      free_base(v5);
    }
    free_base(v6);
  }
  else
  {
    v48 = *(volatile signed __int32 **)(a1 + 256);
    if ( v48 )
      _InterlockedDecrement(v48);
    *(_QWORD *)(a1 + 256) = 0;
    *(_QWORD *)a1 = asc_14028B810;
    *(_QWORD *)(a1 + 264) = 0;
    *(_QWORD *)(a1 + 272) = &unk_14028BA90;
    *(_QWORD *)(a1 + 280) = &unk_14028BC10;
    *(_DWORD *)(a1 + 8) = 1;
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)v50 ^ v59);
}

