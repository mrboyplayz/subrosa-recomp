/* Address: 0x14022f104 | Name: ??R_lambda_f3caf1ecae5fe01a9a1a6239afa44510_@@QEBAHXZ | Size: 240 bytes */
__int64 __fastcall _lambda_f3caf1ecae5fe01a9a1a6239afa44510_::operator()(__int64 a1)
{
  __int64 *v2; // rax
  __int64 v3; // rdi
  __int64 v4; // rdx
  __int64 v6; // [rsp+8h] [rbp-99h] BYREF
  __int128 v7; // [rsp+28h] [rbp-79h]
  __int64 v8; // [rsp+38h] [rbp-69h] BYREF
  _BYTE v9[24]; // [rsp+40h] [rbp-61h] BYREF
  __int64 v10; // [rsp+58h] [rbp-49h] BYREF
  __int128 v11; // [rsp+60h] [rbp-41h]
  __int64 v12; // [rsp+70h] [rbp-31h]
  __int64 v13; // [rsp+78h] [rbp-29h]
  int v14; // [rsp+80h] [rbp-21h]
  int v15; // [rsp+84h] [rbp-1Dh]
  __int16 v16; // [rsp+88h] [rbp-19h]
  char v17; // [rsp+8Ah] [rbp-17h]
  __int64 v18; // [rsp+90h] [rbp-11h]
  int v19; // [rsp+98h] [rbp-9h]
  char v20; // [rsp+9Ch] [rbp-5h]
  int v21; // [rsp+A0h] [rbp-1h]
  _WORD v22[18]; // [rsp+A4h] [rbp+3h] BYREF
  _BYTE *v23; // [rsp+C8h] [rbp+27h]
  __int64 v24; // [rsp+D0h] [rbp+2Fh]
  __int64 v25; // [rsp+D8h] [rbp+37h]
  __int64 v26; // [rsp+E8h] [rbp+47h]

  sub_140213644((_LocaleUpdate *)&v8, **(struct __crt_locale_pointers *const **)a1);
  v2 = *(__int64 **)(a1 + 32);
  v7 = **(unsigned __int64 **)(a1 + 8);
  v3 = *v2;
  v4 = **(_QWORD **)(a1 + 24);
  v10 = **(_QWORD **)(a1 + 16);
  v12 = v10;
  v13 = v4;
  v11 = v7;
  v14 = 0;
  MEMORY[0x1401FCD30](v22, 0, 0x20u);
  v15 = 0;
  v23 = v9;
  v16 = 0;
  v17 = 0;
  v18 = 0;
  v19 = 0;
  v20 = 0;
  v21 = 0;
  v24 = v3;
  v25 = 0;
  sub_1402337F8(&v10);
  if ( v9[16] )
    *(_DWORD *)(v8 + 936) &= ~2u;
  return MEMORY[0x1401F8B20]((unsigned __int64)&v6 ^ v26);
}

