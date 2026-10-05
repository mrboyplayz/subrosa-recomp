/* Address: 0x140237b08 | Name: sub_140237B08 | Size: 518 bytes */
void __fastcall sub_140237B08(char *Source)
{
  __int64 v2; // rax
  __int64 v3; // r14
  __int64 v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // rbx
  char v7; // si
  char *v8; // rbx
  int v9; // edx
  int v10; // ecx
  char v11; // al
  char v12; // cl
  int v13; // eax
  bool v14; // zf
  unsigned int v15; // ebx
  unsigned int v16; // ebx
  int v17; // [rsp+68h] [rbp+38h] BYREF
  BOOL v18; // [rsp+70h] [rbp+40h] BYREF

  v2 = sub_140237130();
  v17 = 0;
  v18 = 0;
  v3 = v2;
  if ( (unsigned int)sub_140237198(&v17) || (unsigned int)sub_140237138(&v18) )
    goto LABEL_37;
  if ( !*(_QWORD *)&dword_140404A6C[19064603] || strcmp(Source, *(const char **)&dword_140404A6C[19064603]) )
  {
    free_base(*(void **)&dword_140404A6C[19064603]);
    v4 = -1;
    v5 = -1;
    do
      ++v5;
    while ( Source[v5] );
    *(_QWORD *)&dword_140404A6C[19064603] = malloc_base(v5 + 1);
    free_base(nullptr);
    if ( *(_QWORD *)&dword_140404A6C[19064603] )
    {
      do
        ++v4;
      while ( Source[v4] );
      if ( !(unsigned int)strcpy_s(*(_QWORD *)&dword_140404A6C[19064603], v4 + 1, Source) )
      {
        v6 = 3;
        if ( !(unsigned int)strncpy_s(*(_QWORD *)v3, 64, Source, 3) )
        {
          do
          {
            if ( !*Source )
              break;
            ++Source;
            --v6;
          }
          while ( v6 );
          v7 = *Source;
          v8 = Source + 1;
          if ( *Source != 45 )
            v8 = Source;
          v9 = 3600 * unknown_libname_852(v8);
          v17 = v9;
          while ( *v8 == 43 || (unsigned __int8)(*v8 - 48) <= 9u )
            ++v8;
          if ( *v8 == 58 )
          {
            v10 = 60 * unknown_libname_852(++v8);
            v11 = *v8;
            v9 = v10 + v17;
            v17 += v10;
            if ( v11 >= 48 )
            {
              v12 = v11;
              do
              {
                v11 = v12;
                if ( v12 > 57 )
                  break;
                v11 = *++v8;
                v12 = *v8;
              }
              while ( *v8 >= 48 );
            }
            if ( v11 == 58 )
            {
              v13 = unknown_libname_852(++v8);
              v9 = v13 + v17;
              v17 += v13;
              while ( *v8 >= 48 && *v8 <= 57 )
                ++v8;
            }
          }
          if ( v7 == 45 )
            v17 = -v9;
          v14 = *v8 == 0;
          v18 = *v8 != 0;
          if ( v14 )
          {
            **(_BYTE **)(v3 + 8) = 0;
LABEL_35:
            v15 = v17;
            *sub_140237128() = v15;
            v16 = v18;
            *sub_140237118() = v16;
            return;
          }
          if ( !(unsigned int)strncpy_s(*(_QWORD *)(v3 + 8), 64, v8, 3) )
            goto LABEL_35;
        }
      }
LABEL_37:
      sub_14024CFBC(0, 0, 0, 0, 0);
      JUMPOUT(0x140237D0DLL);
    }
  }
}

