/* Address: 0x140259cc8 | Name: sub_140259CC8 | Size: 789 bytes */
__int64 __fastcall sub_140259CC8(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        int a5,
        __int64 a6,
        int a7,
        unsigned int a8,
        int a9)
{
  unsigned int v12; // r14d
  signed int v13; // eax
  unsigned int v14; // r12d
  unsigned __int64 v15; // rcx
  void *v16; // rsp
  __int64 *v17; // rsi
  __int64 *v18; // rax
  __int64 v19; // r15
  signed int v20; // eax
  unsigned int v21; // edi
  unsigned __int64 v22; // rcx
  void *v23; // rsp
  __int64 *v24; // rbx
  __int64 *v25; // rax
  _BYTE v27[32]; // [rsp+0h] [rbp-50h] BYREF
  __int64 v28; // [rsp+20h] [rbp-30h]
  int v29; // [rsp+28h] [rbp-28h]
  __int64 v30; // [rsp+30h] [rbp-20h]
  __int64 v31; // [rsp+38h] [rbp-18h]
  __int64 v32[6]; // [rsp+50h] [rbp+0h] BYREF

  v32[0] = a2;
  if ( a5 > 0 )
    _strncnt(a4, a5);
  v12 = a8;
  if ( !a8 )
    v12 = *(_DWORD *)(*(_QWORD *)a1 + 12LL);
  v29 = 0;
  v28 = 0;
  v13 = MEMORY[0x140259504](v12, a9 != 0 ? 9 : 1, a4);
  v14 = v13;
  if ( v13 )
  {
    v15 = 2LL * v13 + 16;
    if ( (v15 & -(__int64)(2LL * v13 < v15)) == 0 )
    {
      v17 = nullptr;
      goto LABEL_14;
    }
    if ( (v15 & -(__int64)(2LL * v13 < v15)) > 0x400 )
    {
      v18 = (__int64 *)malloc_base(v15 & -(__int64)(2LL * v13 < v15));
      v17 = v18;
      if ( !v18 )
      {
LABEL_14:
        if ( !v17 )
          goto LABEL_36;
        v29 = v14;
        v28 = (__int64)v17;
        if ( !(unsigned int)MEMORY[0x140259504](v12, 1, a4) )
          goto LABEL_36;
        v19 = v32[0];
        v20 = sub_14024F4D0(v32[0], a3, (__int64)v17, v14, 0, 0, 0, 0, 0);
        v21 = v20;
        if ( !v20 )
          goto LABEL_36;
        if ( (a3 & 0x400) != 0 )
        {
          if ( a7 && v20 <= a7 )
            sub_14024F4D0(v19, a3, (__int64)v17, v14, a6, a7, 0, 0, 0);
          goto LABEL_36;
        }
        v22 = (2LL * v20 + 16) & -(__int64)(2LL * v20 < (unsigned __int64)(2LL * v20 + 16));
        if ( v22 )
        {
          if ( v22 > 0x400 )
          {
            v25 = (__int64 *)malloc_base(v22);
            v24 = v25;
            if ( !v25 )
              goto LABEL_29;
            *(_DWORD *)v25 = 56797;
          }
          else
          {
            v23 = alloca(sub_1401F89D0());
            v24 = v32;
            if ( v27 == (_BYTE *)-80LL )
              goto LABEL_36;
            LODWORD(v32[0]) = 52428;
          }
          v24 += 2;
        }
        else
        {
          v24 = nullptr;
        }
LABEL_29:
        if ( v24 )
        {
          if ( (unsigned int)sub_14024F4D0(v19, a3, (__int64)v17, v14, (__int64)v24, v21, 0, 0, 0) )
          {
            v31 = 0;
            v30 = 0;
            if ( a7 )
            {
              v29 = a7;
              v28 = a6;
            }
            else
            {
              v29 = 0;
              v28 = 0;
            }
            if ( (unsigned int)sub_140258A84(v12, 0, (__int64)v24, v21, v28, v29, v30, v31) )
            {
              if ( *((_DWORD *)v24 - 4) != 56797 )
                goto LABEL_36;
              goto LABEL_35;
            }
          }
          if ( *((_DWORD *)v24 - 4) == 56797 )
LABEL_35:
            free_base(v24 - 2);
        }
LABEL_36:
        if ( v17 && *((_DWORD *)v17 - 4) == 56797 )
          free_base(v17 - 2);
        return MEMORY[0x1401F8B20]((unsigned __int64)v32 ^ v32[1]);
      }
      *(_DWORD *)v18 = 56797;
    }
    else
    {
      v16 = alloca(sub_1401F89D0());
      v17 = v32;
      if ( v27 == (_BYTE *)-80LL )
        goto LABEL_36;
      LODWORD(v32[0]) = 52428;
    }
    v17 += 2;
    goto LABEL_14;
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)v32 ^ v32[1]);
}

