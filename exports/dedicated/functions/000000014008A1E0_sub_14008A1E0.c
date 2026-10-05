/* Address: 0x14008a1e0 | Name: sub_14008A1E0 | Size: 336 bytes */
void __fastcall sub_14008A1E0(const char *a1, int a2, int a3)
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

  v4 = 16385LL * a2;
  v5 = _findfirst64i32(a1, &FindData);
  dword_19AA58620[v4] = 0;
  if ( (_DWORD)v5 != -1 )
  {
    while ( 1 )
    {
      v6 = dword_19AA58620[v4];
      if ( (int)v6 >= 1024 )
        goto LABEL_14;
      if ( a3 )
        break;
      if ( (FindData.attrib & 0x10) == 0 )
      {
        name = FindData.name;
        v8 = (char *)&unk_19AA58624 + 64 * v6 + v4 * 4;
        do
        {
          v9 = *name++;
          *v8++ = v9;
        }
        while ( v9 );
LABEL_12:
        ++dword_19AA58620[v4];
      }
LABEL_13:
      if ( _findnext64i32(v5, &FindData) == -1 )
        goto LABEL_14;
    }
    if ( (FindData.attrib & 0x10) == 0 || FindData.name[0] == 46 )
      goto LABEL_13;
    v10 = FindData.name;
    v11 = (char *)&unk_19AA58624 + 64 * v6 + v4 * 4;
    do
    {
      v12 = *v10++;
      *v11++ = v12;
    }
    while ( v12 );
    goto LABEL_12;
  }
LABEL_14:
  LOBYTE(dword_19AA58620[16 * (__int64)dword_19AA58620[v4] + 1 + v4]) = 0;
  _findclose(v5);
  qsort(
    (char *)&unk_19AA58624 + v4 * 4,
    dword_19AA58620[v4],
    0x40u,
    (_CoreCrtNonSecureSearchSortCompareFunction)CompareFunction);
}

