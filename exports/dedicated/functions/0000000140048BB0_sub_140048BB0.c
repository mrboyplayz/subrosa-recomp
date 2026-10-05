/* Address: 0x140048bb0 | Name: sub_140048BB0 | Size: 336 bytes */
void __fastcall sub_140048BB0(const char *a1, int a2, int a3)
{
  __int64 v4; // rbx
  intptr_t v5; // rsi
  __int64 v6; // rax
  char *name; // rdx
  char *v8; // rcx
  char v9; // al
  char *v10; // rdx
  char *v11; // rax
  char v12; // cl
  struct _finddata64i32_t FindData; // [rsp+20h] [rbp-158h] BYREF

  v4 = 131076LL * a2;
  v5 = _findfirst64i32(a1, &FindData);
  *(_DWORD *)((char *)&unk_196199940 + v4) = 0;
  if ( (_DWORD)v5 != -1 )
  {
    while ( 1 )
    {
      v6 = *(int *)((char *)&unk_196199940 + v4);
      if ( (int)v6 >= 1024 )
        goto LABEL_14;
      if ( a3 )
        break;
      if ( (FindData.attrib & 0x10) == 0 )
      {
        name = FindData.name;
        v8 = (char *)&unk_196199944 + 128 * v6 + v4;
        do
        {
          v9 = *name++;
          *v8++ = v9;
        }
        while ( v9 );
LABEL_12:
        ++*(_DWORD *)((char *)&unk_196199940 + v4);
      }
LABEL_13:
      if ( _findnext64i32(v5, &FindData) == -1 )
        goto LABEL_14;
    }
    if ( (FindData.attrib & 0x10) == 0 || FindData.name[0] == 46 )
      goto LABEL_13;
    v10 = FindData.name;
    v11 = (char *)&unk_196199944 + 128 * v6 + v4;
    do
    {
      v12 = *v10++;
      *v11++ = v12;
    }
    while ( v12 );
    goto LABEL_12;
  }
LABEL_14:
  *((_BYTE *)&unk_196199940 + 128 * (__int64)*(int *)((char *)&unk_196199940 + v4) + v4 + 4) = 0;
  _findclose(v5);
  qsort(
    (char *)&unk_196199944 + v4,
    *(int *)((char *)&unk_196199940 + v4),
    0x80u,
    (_CoreCrtNonSecureSearchSortCompareFunction)sub_1400471E0);
}

