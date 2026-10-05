/* Address: 0x1401c7df0 | Name: sub_1401C7DF0 | Size: 1237 bytes */
__int64 __fastcall sub_1401C7DF0(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // [rsp+0h] [rbp-A8h] BYREF
  int i; // [rsp+30h] [rbp-78h]
  int j; // [rsp+34h] [rbp-74h]
  int v7; // [rsp+38h] [rbp-70h]
  BOOL v8; // [rsp+3Ch] [rbp-6Ch]
  __int64 v9; // [rsp+40h] [rbp-68h]
  __int64 v10; // [rsp+48h] [rbp-60h]
  __int64 v11; // [rsp+50h] [rbp-58h]
  __int16 v12[16]; // [rsp+58h] [rbp-50h] BYREF
  _WORD v13[16]; // [rsp+78h] [rbp-30h] BYREF
  __int64 v14; // [rsp+98h] [rbp-10h]

  v8 = a3 == 2;
  v9 = a2 + 16;
  sub_1401C2D70(a2 + 16, (char *)(a1 + 2760), (char *)(a1 + 2312), v8, *(_DWORD *)(a1 + 2324));
  sub_1401C6F70(v12, (char *)(a1 + 2768), *(_QWORD *)(a1 + 2752));
  CWinApp::ShowAppMessageBox((struct CWinApp *)(a2 + 64), (const char *)v12, *(_DWORD *)(a1 + 2340));
  if ( *(_DWORD *)(a1 + 2376) == 1 )
    *(_BYTE *)(a1 + 2791) = 4;
  if ( *(char *)(a1 + 2791) >= 4 )
  {
    v10 = a2 + 32;
    MEMORY[0x1401FC920](a2 + 32, a2 + 64);
  }
  else
  {
    for ( i = 0; i < *(_DWORD *)(a1 + 2340); ++i )
      v13[i] = (((v12[i] - *(__int16 *)(a1 + 2LL * i + 2344)) * *(char *)(a1 + 2791)) >> 2)
             + *(_WORD *)(a1 + 2LL * i + 2344);
    CWinApp::ShowAppMessageBox((struct CWinApp *)(a2 + 32), (const char *)v13, *(_DWORD *)(a1 + 2340));
  }
  MEMORY[0x1401FC920](a1 + 2344, v12);
  if ( *(_DWORD *)(a1 + 4184) )
  {
    sub_1401BBDE0(a2 + 32, *(_DWORD *)(a1 + 2340), 63570);
    sub_1401BBDE0(a2 + 64, *(_DWORD *)(a1 + 2340), 63570);
  }
  if ( *(_BYTE *)(a1 + 2789) == 2 )
  {
    sub_1401BC700(*(_WORD *)(a1 + 2786), *(_BYTE *)(a1 + 2788), a2, *(_DWORD *)(a1 + 2316), *(_DWORD *)(a1 + 2324));
    v11 = (__int64)*(&off_140282768 + *(char *)(a1 + 2792));
    for ( j = 0; j < *(_DWORD *)(a1 + 2324); ++j )
    {
      v7 = *(char *)(a1 + j + 2764);
      for ( i = 0; i < 5; ++i )
        *(_WORD *)(a2 + 2LL * (i + 5 * j) + 96) = *(char *)(v11 + i + 5 * v7) << 7;
    }
    v7 = *(char *)(a1 + 2793);
    *(_DWORD *)(a2 + 136) = word_140282798[v7];
  }
  else
  {
    MEMORY[0x1401FCD30](a2, 0, 4LL * *(int *)(a1 + 2324));
    MEMORY[0x1401FCD30](a2 + 96, 0, 10LL * *(_DWORD *)(a1 + 2324));
    *(_BYTE *)(a1 + 2792) = 0;
    *(_DWORD *)(a2 + 136) = 0;
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&v4 ^ v14);
}

