/* Address: 0x14006fea0 | Name: sub_14006FEA0 | Size: 344 bytes */
void __fastcall sub_14006FEA0(char *Buffer, int a2, int a3)
{
  __int64 v3; // rsi
  __int64 v5; // rdi
  int v6; // ebp
  int v7; // r9d
  __int64 v8; // rdx
  char *v9; // r11
  int *v10; // r10
  char *v11; // rcx
  bool v12; // zf
  int v13; // eax
  char *v14; // rax

  v3 = a3;
  if ( a3 == 2 )
  {
    v5 = 7040LL * a2;
    v6 = *(_DWORD *)((char *)&unk_19025F0C0 + v5 + 820);
  }
  else
  {
    if ( a3 )
      goto LABEL_17;
    v5 = 7040LL * a2;
    if ( *(int *)((char *)&unk_19025F0C0 + v5 + 52) <= 0 )
      goto LABEL_17;
    v6 = *((_DWORD *)&unk_19025F0C0 + 1760 * *(int *)((char *)&unk_19025F0C0 + v5 + 56) + 205);
  }
  if ( v6 == -1 )
  {
LABEL_17:
    *Buffer = 0;
    return;
  }
  sub_1400DBB30(Buffer, "%c:\\");
  v7 = 1;
  v8 = v5 + 72 * v3;
  v9 = (char *)&unk_19025F0C0 + v8;
  if ( *(int *)((char *)&unk_19025F0C0 + v8 + 5116) >= 1 )
  {
    v10 = (int *)((char *)dword_1902604C4 + v8);
    do
    {
      v11 = Buffer - 1;
      do
        v12 = *++v11 == 0;
      while ( !v12 );
      strcpy(v11, (const char *)&unk_18F7174CC + 10280 * v6 + 16 * *v10);
      v13 = *((_DWORD *)v9 + 1279);
      if ( v7 < v13 )
      {
        v14 = Buffer - 1;
        do
          v12 = *++v14 == 0;
        while ( !v12 );
        *(_WORD *)v14 = 92;
        v13 = *((_DWORD *)v9 + 1279);
      }
      ++v7;
      ++v10;
    }
    while ( v7 <= v13 );
  }
}

