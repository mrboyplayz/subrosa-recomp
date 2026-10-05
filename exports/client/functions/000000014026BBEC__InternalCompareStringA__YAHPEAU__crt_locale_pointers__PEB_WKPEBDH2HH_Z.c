/* Address: 0x14026bbec | Name: ?InternalCompareStringA@@YAHPEAU__crt_locale_pointers@@PEB_WKPEBDH2HH@Z | Size: 861 bytes */
__int64 __fastcall InternalCompareStringA(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned __int8 *a4,
        int a5,
        char *String,
        int a7,
        unsigned int CodePage)
{
  int v8; // ebx
  int v11; // esi
  unsigned int v12; // r14d
  unsigned __int8 *i; // rax
  unsigned __int8 *j; // rax
  signed int v15; // eax
  unsigned int v16; // r12d
  unsigned __int64 v17; // rcx
  void *v18; // rsp
  unsigned int *v19; // rdi
  unsigned int *v20; // rax
  int v21; // eax
  int v22; // r15d
  unsigned __int64 v23; // rcx
  void *v24; // rsp
  unsigned int *v25; // rbx
  unsigned int *v26; // rax
  _BYTE v28[32]; // [rsp+0h] [rbp-50h] BYREF
  unsigned int *v29; // [rsp+20h] [rbp-30h]
  unsigned int v30; // [rsp+28h] [rbp-28h]
  unsigned int v31; // [rsp+50h] [rbp+0h] BYREF
  __int64 v32; // [rsp+58h] [rbp+8h]
  _DWORD CPInfo[6]; // [rsp+60h] [rbp+10h] BYREF
  __int64 v34; // [rsp+78h] [rbp+28h]

  v8 = a5;
  v31 = a3;
  v32 = a2;
  if ( a5 <= 0 )
  {
    if ( a5 < -1 )
      return MEMORY[0x1401F8B20]((unsigned __int64)&v31 ^ v34);
  }
  else
  {
    v8 = _strncnt(a4, a5);
  }
  v11 = a7;
  if ( a7 <= 0 )
  {
    if ( a7 < -1 )
      return MEMORY[0x1401F8B20]((unsigned __int64)&v31 ^ v34);
  }
  else
  {
    v11 = _strncnt(String, a7);
  }
  v12 = CodePage;
  if ( !CodePage )
    v12 = *(_DWORD *)(*(_QWORD *)a1 + 12LL);
  if ( !v8 || !v11 )
  {
    if ( v8 == v11
      || v11 > 1
      || v8 > 1
      || !(unsigned int)((__int64 (__fastcall *)(_QWORD, _DWORD *))GetCPInfo)(v12, CPInfo) )
    {
      return MEMORY[0x1401F8B20]((unsigned __int64)&v31 ^ v34);
    }
    if ( v8 > 0 )
    {
      if ( CPInfo[0] >= 2u )
      {
        for ( i = (unsigned __int8 *)&CPInfo[1] + 2; *i; i += 2 )
        {
          if ( !i[1] || *a4 >= *i && *a4 <= i[1] )
            break;
        }
      }
      return MEMORY[0x1401F8B20]((unsigned __int64)&v31 ^ v34);
    }
    if ( v11 > 0 )
    {
      if ( CPInfo[0] >= 2u )
      {
        for ( j = (unsigned __int8 *)&CPInfo[1] + 2; *j; j += 2 )
        {
          if ( !j[1] || (unsigned __int8)*String >= *j && (unsigned __int8)*String <= j[1] )
            break;
        }
      }
      return MEMORY[0x1401F8B20]((unsigned __int64)&v31 ^ v34);
    }
  }
  v30 = 0;
  v29 = nullptr;
  v15 = MEMORY[0x140259504](v12, 9, a4);
  v16 = v15;
  if ( !v15 )
    return MEMORY[0x1401F8B20]((unsigned __int64)&v31 ^ v34);
  v17 = (2LL * v15 + 16) & -(__int64)(2LL * v15 < (unsigned __int64)(2LL * v15 + 16));
  if ( !v17 )
  {
    v19 = nullptr;
    goto LABEL_40;
  }
  if ( v17 <= 0x400 )
  {
    v18 = alloca(sub_1401F89D0());
    v19 = &v31;
    if ( v28 == (_BYTE *)-80LL )
      goto LABEL_57;
    v31 = 52428;
    goto LABEL_38;
  }
  v20 = (unsigned int *)malloc_base(v17);
  v19 = v20;
  if ( v20 )
  {
    *v20 = 56797;
LABEL_38:
    v19 += 4;
  }
LABEL_40:
  if ( v19 )
  {
    v30 = v16;
    v29 = v19;
    if ( (unsigned int)MEMORY[0x140259504](v12, 1, a4) )
    {
      v30 = 0;
      v29 = nullptr;
      v21 = MEMORY[0x140259504](v12, 9, String);
      v22 = v21;
      if ( v21 )
      {
        v23 = 2LL * v21 + 16;
        if ( (v23 & -(__int64)(2LL * v21 < v23)) == 0 )
        {
          v25 = nullptr;
          goto LABEL_51;
        }
        if ( (v23 & -(__int64)(2LL * v21 < v23)) > 0x400 )
        {
          v26 = (unsigned int *)malloc_base(v23 & -(__int64)(2LL * v21 < v23));
          v25 = v26;
          if ( !v26 )
          {
LABEL_51:
            if ( v25 )
            {
              v30 = v22;
              v29 = v25;
              if ( (unsigned int)MEMORY[0x140259504](v12, 1, String) )
                sub_14024EDE0(v32, v31, (__int64)v19, v16, (__int64)v25, v22, 0, 0, 0);
            }
            goto LABEL_54;
          }
          *v26 = 56797;
        }
        else
        {
          v24 = alloca(sub_1401F89D0());
          v25 = &v31;
          if ( v28 == (_BYTE *)-80LL )
          {
LABEL_54:
            if ( v25 && *(v25 - 4) == 56797 )
              free_base(v25 - 4);
            goto LABEL_57;
          }
          v31 = 52428;
        }
        v25 += 4;
        goto LABEL_51;
      }
    }
  }
LABEL_57:
  if ( v19 && *(v19 - 4) == 56797 )
    free_base(v19 - 4);
  return MEMORY[0x1401F8B20]((unsigned __int64)&v31 ^ v34);
}

