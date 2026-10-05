/* Address: 0x14001a090 | Name: sub_14001A090 | Size: 953 bytes */
__int64 sub_14001A090()
{
  int v0; // esi
  intptr_t v1; // rax
  int v2; // ebx
  intptr_t v3; // rdi
  int v4; // ecx
  char *name; // rdx
  char *v6; // rcx
  char v7; // al
  int v8; // eax
  __int64 v9; // r8
  __int64 result; // rax
  __int64 v11; // r9
  __int64 v12; // rax
  char *v13; // rcx
  char v14; // dl
  char v15; // dl
  char v16; // dl
  struct _finddata64i32_t FindData; // [rsp+20h] [rbp-148h] BYREF

  byte_143C7A200[0] = 0;
  byte_143C7D240 = 0;
  byte_143C80280 = 0;
  byte_143C832C0 = 0;
  byte_143C86300 = 0;
  byte_143C89340 = 0;
  byte_143C8C380 = 0;
  byte_143C8F3C0 = 0;
  byte_143C92400 = 0;
  byte_143C95440 = 0;
  byte_143C98480 = 0;
  byte_143C9B4C0 = 0;
  byte_143C9E500 = 0;
  byte_143CA1540 = 0;
  byte_143CA4580 = 0;
  byte_143CA75C0 = 0;
  byte_143CAA600 = 0;
  byte_143CAD640 = 0;
  byte_143CB0680 = 0;
  byte_143CB36C0 = 0;
  byte_143CB6700 = 0;
  byte_143CB9740 = 0;
  byte_143CBC780 = 0;
  byte_143CBF7C0 = 0;
  byte_143CC2800 = 0;
  byte_143CC5840 = 0;
  byte_143CC8880 = 0;
  byte_143CCB8C0 = 0;
  byte_143CCE900 = 0;
  byte_143CD1940 = 0;
  byte_143CD4980 = 0;
  byte_143CD79C0 = 0;
  byte_143CDAA00 = 0;
  byte_143CDDA40 = 0;
  byte_143CE0A80 = 0;
  byte_143CE3AC0 = 0;
  byte_143CE6B00 = 0;
  byte_143CE9B40 = 0;
  byte_143CECB80 = 0;
  byte_143CEFBC0 = 0;
  byte_143CF2C00 = 0;
  byte_143CF5C40 = 0;
  byte_143CF8C80 = 0;
  byte_143CFBCC0 = 0;
  byte_143CFED00 = 0;
  byte_143D01D40 = 0;
  byte_143D04D80 = 0;
  byte_143D07DC0 = 0;
  byte_143D0AE00 = 0;
  byte_143D0DE40 = 0;
  byte_143D10E80 = 0;
  byte_143D13EC0 = 0;
  byte_143D16F00 = 0;
  byte_143D19F40 = 0;
  byte_143D1CF80 = 0;
  byte_143D1FFC0 = 0;
  byte_143D23000 = 0;
  byte_143D26040 = 0;
  byte_143D29080 = 0;
  byte_143D2C0C0 = 0;
  byte_143D2F100 = 0;
  byte_143D32140 = 0;
  byte_143D35180 = 0;
  byte_143D381C0 = 0;
  v0 = _chdir("buildblock");
  v1 = _findfirst64i32("*.sbl", &FindData);
  v2 = 0;
  dword_19AA58620[0] = 0;
  v3 = v1;
  v4 = 0;
  if ( (_DWORD)v1 != -1 )
  {
    do
    {
      if ( v4 >= 1024 )
        break;
      if ( (FindData.attrib & 0x10) == 0 )
      {
        name = FindData.name;
        v6 = (char *)&unk_19AA58624 + 64 * (__int64)v4;
        do
        {
          v7 = *name++;
          *v6++ = v7;
        }
        while ( v7 );
        ++dword_19AA58620[0];
      }
      v8 = _findnext64i32(v3, &FindData);
      v4 = dword_19AA58620[0];
    }
    while ( v8 != -1 );
  }
  LOBYTE(dword_19AA58620[16 * (__int64)v4 + 1]) = 0;
  _findclose(v3);
  qsort(&unk_19AA58624, dword_19AA58620[0], 0x40u, CompareFunction);
  result = (unsigned int)dword_19AA58620[0];
  v11 = 0;
  if ( dword_19AA58620[0] > 0 )
  {
    v9 = 0;
    do
    {
      v12 = 0;
      v13 = (char *)&unk_19AA58625 + v9 * 4;
      do
      {
        v14 = *(v13 - 1);
        if ( !v14 || v14 == 46 )
          break;
        if ( !*v13 || *v13 == 46 )
        {
          ++v12;
          break;
        }
        v15 = v13[1];
        if ( !v15 || v15 == 46 )
        {
          v12 += 2;
          break;
        }
        v16 = v13[2];
        if ( !v16 || v16 == 46 )
        {
          v12 += 3;
          break;
        }
        v12 += 4;
        v13 += 4;
      }
      while ( v12 < 64 );
      v11 = (unsigned int)(v11 + 1);
      *((_BYTE *)&dword_19AA58620[v9 + 1] + v12) = 0;
      v9 += 16;
      result = (unsigned int)dword_19AA58620[0];
    }
    while ( (int)v11 < dword_19AA58620[0] );
  }
  if ( !v0 )
  {
    _chdir("..");
    result = (unsigned int)dword_19AA58620[0];
  }
  if ( (int)result > 64 )
    result = 64;
  dword_19AA58620[0] = result;
  if ( (int)result > 0 )
  {
    do
    {
      result = sub_14001A450((char *)&unk_19AA58624 + 64 * (__int64)v2, (unsigned int)v2, v9 * 4, v11);
      ++v2;
    }
    while ( v2 < dword_19AA58620[0] );
  }
  return result;
}

