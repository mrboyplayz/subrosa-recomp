/* Address: 0x1402254c4 | Name: sub_1402254C4 | Size: 296 bytes */
__int64 __fastcall sub_1402254C4(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        struct __crt_locale_pointers *a5,
        __int64 a6)
{
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v12; // [rsp+0h] [rbp-C9h] BYREF
  __int128 v13; // [rsp+20h] [rbp-A9h]
  __int64 v14; // [rsp+30h] [rbp-99h]
  __int64 v15; // [rsp+38h] [rbp-91h] BYREF
  _BYTE v16[32]; // [rsp+40h] [rbp-89h] BYREF
  __int64 v17; // [rsp+60h] [rbp-69h] BYREF
  __int128 v18; // [rsp+68h] [rbp-61h]
  __int64 v19; // [rsp+78h] [rbp-51h]
  __int64 v20; // [rsp+80h] [rbp-49h]
  __int64 v21; // [rsp+88h] [rbp-41h]
  int v22; // [rsp+90h] [rbp-39h]
  int v23; // [rsp+94h] [rbp-35h]
  __int16 v24; // [rsp+98h] [rbp-31h]
  char v25; // [rsp+9Ah] [rbp-2Fh]
  __int64 v26; // [rsp+A0h] [rbp-29h]
  int v27; // [rsp+A8h] [rbp-21h]
  char v28; // [rsp+ACh] [rbp-1Dh]
  int v29; // [rsp+B0h] [rbp-19h]
  _WORD v30[18]; // [rsp+B4h] [rbp-15h] BYREF
  _BYTE *v31; // [rsp+D8h] [rbp+Fh]
  __int64 v32; // [rsp+E0h] [rbp+17h]
  __int64 v33; // [rsp+E8h] [rbp+1Fh]
  __int64 v34; // [rsp+F0h] [rbp+27h]

  if ( a2 && a4 )
  {
    v10 = strnlen(a2, a3);
    sub_140213644((_LocaleUpdate *)&v15, a5);
    v22 = 0;
    *((_QWORD *)&v13 + 1) = a2 + v10;
    *(_QWORD *)&v13 = a2;
    v14 = a2;
    v18 = v13;
    v17 = a1;
    v19 = a2;
    v20 = a1;
    v21 = a4;
    MEMORY[0x1401FCD30](v30, 0, 0x20u);
    v23 = 0;
    v24 = 0;
    v26 = 0;
    v27 = 0;
    v29 = 0;
    v33 = 0;
    v31 = v16;
    v32 = a6;
    v25 = 0;
    v28 = 0;
    sub_1402338B8(&v17);
    if ( v16[16] )
      *(_DWORD *)(v15 + 936) &= ~2u;
  }
  else
  {
    *errno() = 22;
    sub_14024CF6C(v9);
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&v12 ^ v34);
}

