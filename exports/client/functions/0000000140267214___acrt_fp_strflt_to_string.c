/* Address: 0x140267214 | Name: __acrt_fp_strflt_to_string | Size: 226 bytes */
__int64 __fastcall _acrt_fp_strflt_to_string(__int64 a1, unsigned __int64 a2, int a3, __int64 a4)
{
  int v4; // r11d
  int *v5; // rax
  unsigned int v6; // ebx
  int v8; // eax
  char *v9; // rbx
  char *v10; // r8
  char *v11; // rax
  char v12; // dl
  __int64 v13; // r8

  v4 = a3;
  if ( !a1 || !a2 )
    goto LABEL_2;
  v8 = 0;
  *(_BYTE *)a1 = 0;
  if ( a3 > 0 )
    v8 = a3;
  if ( a2 <= v8 + 1 )
  {
    v5 = errno();
    v6 = 34;
    goto LABEL_3;
  }
  if ( !a4 )
  {
LABEL_2:
    v5 = errno();
    v6 = 22;
LABEL_3:
    *v5 = v6;
    sub_14024CF6C();
    return v6;
  }
  v9 = *(char **)(a4 + 8);
  v10 = (char *)(a1 + 1);
  *(_BYTE *)a1 = 48;
  while ( v4 > 0 )
  {
    v11 = v9 + 1;
    v12 = 48;
    if ( *v9 )
      v12 = *v9;
    else
      v11 = v9;
    *v10 = v12;
    v9 = v11;
    ++v10;
    --v4;
  }
  *v10 = 0;
  if ( v4 >= 0 && *v9 >= 53 )
  {
    while ( *--v10 == 57 )
      *v10 = 48;
    ++*v10;
  }
  if ( *(_BYTE *)a1 == 49 )
  {
    ++*(_DWORD *)(a4 + 4);
  }
  else
  {
    v13 = -1;
    do
      ++v13;
    while ( *(_BYTE *)(a1 + v13 + 1) );
    MEMORY[0x1401FC920]((__m128i *)a1, (const __m128i *)(a1 + 1), v13 + 1);
  }
  return 0;
}

