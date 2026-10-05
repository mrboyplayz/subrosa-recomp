/* Address: 0x1400c6b30 | Name: sub_1400C6B30 | Size: 344 bytes */
void __fastcall sub_1400C6B30(_BYTE *a1, int a2, int a3)
{
  __int64 v3; // rsi
  __int64 v5; // rdi
  unsigned int v6; // ebp
  int v7; // r9d
  __int64 v8; // rdx
  char *v9; // r11
  int *v10; // r10
  char *v11; // rcx
  bool v12; // zf
  int v13; // eax
  _WORD *v14; // rax

  v3 = a3;
  if ( a3 == 2 )
  {
    v5 = 1760LL * a2;
    v6 = dword_140404A6C[v5 + 278846098];
  }
  else
  {
    if ( a3 )
      goto LABEL_17;
    v5 = 1760LL * a2;
    if ( (int)dword_140404A6C[v5 + 278845906] <= 0 )
      goto LABEL_17;
    v6 = dword_140404A6C[1760 * dword_140404A6C[v5 + 278845907] + 278846098];
  }
  if ( v6 == -1 )
  {
LABEL_17:
    *a1 = 0;
    return;
  }
  sub_140158AB0(a1, "%c:\\", (unsigned int)(a3 + 65));
  v7 = 1;
  v8 = v5 * 4 + 72 * v3;
  v9 = (char *)&dword_140404A6C[278845893] + v8;
  if ( *(int *)((char *)&dword_140404A6C[278847172] + v8) >= 1 )
  {
    v10 = (int *)((char *)&dword_140404A6C[278847174] + v8);
    do
    {
      v11 = a1 - 1;
      do
        v12 = *++v11 == 0;
      while ( !v12 );
      strcpy(v11, (const char *)&dword_140404A6C[2570 * v6 + 275753048 + 4 * *v10]);
      v13 = *((_DWORD *)v9 + 1279);
      if ( v7 < v13 )
      {
        v14 = a1 - 1;
        do
        {
          v12 = *((_BYTE *)v14 + 1) == 0;
          v14 = (_WORD *)((char *)v14 + 1);
        }
        while ( !v12 );
        *v14 = 92;
        v13 = *((_DWORD *)v9 + 1279);
      }
      ++v7;
      ++v10;
    }
    while ( v7 <= v13 );
  }
}

