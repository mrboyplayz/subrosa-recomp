/* Address: 0x140091ef0 | Name: sub_140091EF0 | Size: 590 bytes */
__int64 __fastcall sub_140091EF0(int a1, int a2)
{
  int v2; // edi
  int v3; // r15d
  int *v4; // rsi
  int v5; // ebx
  int *v6; // r14
  __int64 v7; // rbp
  __int64 v8; // r9
  int v9; // ebp
  __int64 v10; // rcx
  _DWORD *v11; // rax
  unsigned __int64 v12; // r8
  unsigned int v13; // r9d
  int v14; // edx
  unsigned int v15; // ecx
  int v16; // ecx
  __int64 result; // rax
  unsigned __int64 v18; // [rsp+80h] [rbp+18h]
  unsigned __int64 v19; // [rsp+88h] [rbp+20h]

  v2 = 0;
  v3 = 0;
  v4 = dword_19025F0D4;
  v5 = 0;
  v6 = dword_19025F11C;
  v7 = a1;
  v18 = 23492LL * a1;
  v19 = 1116LL * a2;
  do
  {
    if ( *(v4 - 5) && (unsigned int)sub_1400B3580(v6, (unsigned int)v7) )
    {
      if ( *v4 == 18 )
      {
        v3 += sub_14006D030(v5);
      }
      else if ( *(_DWORD *)((char *)&unk_1915415E8 + v19 + v18) && v5 == dword_1915415EC[v19 / 4 + v18 / 4] )
      {
        v2 = 1;
      }
    }
    ++v5;
    v6 += 1760;
    v4 += 1760;
  }
  while ( v5 < 1024 );
  v8 = v7;
  v9 = 0;
  if ( (int)dword_18F7184E4[2570 * v8 + 256994] > 0 )
  {
    v10 = 0;
    v11 = (_DWORD *)((char *)&unk_18F813470 + 10280 * v8);
    while ( *v11 != *(_DWORD *)((char *)&unk_1915415F4 + v19 + v18) )
    {
      ++v9;
      ++v10;
      v11 += 6;
      if ( v10 >= (int)dword_18F7184E4[2570 * v8 + 256994] )
        goto LABEL_17;
    }
    v2 = 1;
  }
LABEL_17:
  v12 = v19 + v18;
  v13 = *(_DWORD *)((char *)&unk_1915415E8 + v19 + v18);
  if ( v13 <= 1 )
  {
    if ( v2 )
      v16 = *(_DWORD *)((char *)&unk_19154161C + v12) / 10;
    else
      v16 = -10;
    v15 = v3 / 10 + v16;
    if ( v2 )
      return v15;
  }
  else
  {
    v14 = v3 / 10 - *(_DWORD *)((char *)&unk_191541628 + v12) / 10;
    if ( v13 == 2 )
    {
      v15 = v14 + 50;
      if ( v14 < 0 )
        v15 = v3 / 10 - *(_DWORD *)((char *)&unk_191541628 + v12) / 10;
      if ( v2 )
      {
        if ( (int)v15 >= -10 )
          v15 += 10;
        else
          return (unsigned int)-10;
        return v15;
      }
    }
    else
    {
      v15 = v3 / 10 - *(_DWORD *)((char *)&unk_191541628 + v12) / 10;
      if ( v2 )
        return (unsigned int)(*(_DWORD *)((char *)&unk_19154161C + v12) / 10 + v14);
    }
  }
  if ( v3 > 0 )
    return v15;
  result = 4294957296LL;
  if ( dword_178C5B8E0 > *(_DWORD *)((char *)&unk_191541620 + v12) )
    return v15;
  return result;
}

