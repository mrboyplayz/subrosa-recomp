/* Address: 0x1401c5a20 | Name: sub_1401C5A20 | Size: 877 bytes */
__int64 __fastcall sub_1401C5A20(__int64 a1, __int64 a2, __int16 *a3, __int64 a4)
{
  __int64 v5; // [rsp+0h] [rbp-D8h] BYREF
  int i; // [rsp+40h] [rbp-98h]
  int v7; // [rsp+44h] [rbp-94h]
  __int16 v8; // [rsp+48h] [rbp-90h]
  BOOL v9; // [rsp+4Ch] [rbp-8Ch]
  BOOL v10; // [rsp+50h] [rbp-88h]
  void *v11; // [rsp+58h] [rbp-80h]
  _WORD v12[16]; // [rsp+60h] [rbp-78h] BYREF
  __int16 v13[16]; // [rsp+80h] [rbp-58h] BYREF
  _WORD v14[16]; // [rsp+A0h] [rbp-38h] BYREF
  __int64 v15; // [rsp+C0h] [rbp-18h]

  v7 = ((-268434LL * *(__int16 *)(a1 + 4532)) >> 16) + 3146;
  if ( *(_DWORD *)(a1 + 4580) == 2 )
    v7 += v7 >> 1;
  sub_1401BDFF0(v12, a3, *(_DWORD *)(a1 + 4640));
  v9 = *(_DWORD *)(a1 + 4632) == 1 && *(char *)(a1 + 4783) < 4;
  v10 = v9;
  if ( v9 )
  {
    sub_1401C2F40((__int64)v13, a4, (__int64)a3, *(char *)(a1 + 4783), *(_DWORD *)(a1 + 4640));
    sub_1401BDFF0(v14, v13, *(_DWORD *)(a1 + 4640));
    v8 = (*(char *)(a1 + 4783) * *(char *)(a1 + 4783)) << 11;
    for ( i = 0; i < *(_DWORD *)(a1 + 4640); ++i )
      v12[i] = ((unsigned int)(v8 * (__int16)v14[i]) >> 16) + ((__int16)v12[i] >> 1);
  }
  sub_1401C5DA0(
    a1 + 4760,
    (_DWORD)a3,
    *(_QWORD *)(a1 + 4704),
    (unsigned int)v12,
    v7,
    *(_DWORD *)(a1 + 4660),
    *(char *)(a1 + 4781));
  CWinApp::ShowAppMessageBox((struct CWinApp *)(a2 + 32), (const char *)a3, *(_DWORD *)(a1 + 4640));
  if ( v10 )
  {
    sub_1401C2F40((__int64)v13, a4, (__int64)a3, *(char *)(a1 + 4783), *(_DWORD *)(a1 + 4640));
    CWinApp::ShowAppMessageBox((struct CWinApp *)a2, (const char *)v13, *(_DWORD *)(a1 + 4640));
  }
  else
  {
    v11 = (void *)a2;
    MEMORY[0x1401FC920](a2, a2 + 32);
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&v5 ^ v15);
}

