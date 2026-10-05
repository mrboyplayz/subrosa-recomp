/* Address: 0x1400b0010 | Name: sub_1400B0010 | Size: 492 bytes */
__int64 __fastcall sub_1400B0010(int a1)
{
  __int64 v1; // rbx
  __int64 v2; // rsi
  int v3; // edi
  int v4; // eax
  __int64 v5; // rdx
  int v6; // r8d
  __int64 v7; // rcx
  __int64 result; // rax

  v1 = 290LL * a1;
  dword_18EE07480[290 * a1 + 257] = 1;
  v2 = 1024;
  dword_18EE07480[v1 + 258] = 0;
  dword_18EE07480[v1 + 259] = 1;
  dword_18EE07480[v1 + 260] = 2;
  dword_18EE07480[v1 + 261] = 3;
  dword_18EE07480[v1 + 262] = 4;
  dword_18EE07480[v1 + 263] = 5;
  dword_18EE07480[v1 + 264] = 6;
  dword_18EE07480[v1 + 265] = 7;
  dword_18EE07480[v1 + 266] = 8;
  dword_18EE07480[v1 + 267] = 9;
  dword_18EE07480[v1 + 268] = 10;
  dword_18EE07480[v1 + 269] = 11;
  dword_18EE07480[v1 + 270] = 12;
  dword_18EE07480[v1 + 271] = 13;
  dword_18EE07480[v1 + 272] = 14;
  dword_18EE07480[v1 + 273] = 15;
  dword_18EE07480[v1 + 274] = 16;
  dword_18EE07480[v1 + 275] = 17;
  dword_18EE07480[v1 + 276] = 18;
  dword_18EE07480[v1 + 277] = 19;
  dword_18EE07480[v1 + 278] = 20;
  dword_18EE07480[v1 + 279] = 21;
  dword_18EE07480[v1 + 280] = 22;
  dword_18EE07480[v1 + 281] = 23;
  dword_18EE07480[v1 + 282] = 24;
  dword_18EE07480[v1 + 283] = 25;
  do
  {
    v3 = rand() % 26;
    v4 = rand();
    v5 = v1 + v3;
    v6 = dword_18EE07480[v5 + 258];
    v7 = v1 + v4 % 26;
    result = (unsigned int)dword_18EE07480[v7 + 258];
    dword_18EE07480[v5 + 258] = result;
    dword_18EE07480[v7 + 258] = v6;
    --v2;
  }
  while ( v2 );
  return result;
}

