/* Address: 0x14024c810 | Name: strcpy_s | Size: 95 bytes */
__int64 __fastcall strcpy_s(_BYTE *a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  int *v4; // rax
  __int64 v5; // rcx
  _BYTE *v7; // r9
  __int64 v8; // r8
  char v9; // al

  v3 = 0;
  if ( !a1 || !a2 )
    goto LABEL_5;
  if ( !a3 )
  {
    *a1 = 0;
LABEL_5:
    v4 = errno();
    v3 = 22;
LABEL_6:
    *v4 = v3;
    sub_14024CF6C(v5);
    return v3;
  }
  v7 = a1;
  v8 = a3 - (_QWORD)a1;
  do
  {
    v9 = v7[v8];
    *v7++ = v9;
    if ( !v9 )
      break;
    --a2;
  }
  while ( a2 );
  if ( !a2 )
  {
    *a1 = 0;
    v4 = errno();
    v3 = 34;
    goto LABEL_6;
  }
  return v3;
}

