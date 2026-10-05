/* Address: 0x1402255ec | Name: sub_1402255EC | Size: 277 bytes */
__int64 __fastcall sub_1402255EC(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        struct __crt_locale_pointers *a5,
        __int64 a6)
{
  __int64 v9; // rcx
  __int64 v11; // rbx
  unsigned int v12; // ebx
  __int128 v13; // [rsp+28h] [rbp-89h]
  __int64 v14; // [rsp+48h] [rbp-69h] BYREF
  __int128 v15; // [rsp+50h] [rbp-61h]
  __int64 v16; // [rsp+60h] [rbp-51h]
  __int64 v17; // [rsp+68h] [rbp-49h]
  __int64 v18; // [rsp+70h] [rbp-41h]
  __int64 v19; // [rsp+78h] [rbp-39h]
  int v20; // [rsp+80h] [rbp-31h]
  char v21; // [rsp+84h] [rbp-2Dh]
  __int64 v22; // [rsp+88h] [rbp-29h]
  int v23; // [rsp+90h] [rbp-21h]
  char v24; // [rsp+94h] [rbp-1Dh]
  int v25; // [rsp+98h] [rbp-19h]
  void *Block; // [rsp+A0h] [rbp-11h]
  _BYTE *v27; // [rsp+A8h] [rbp-9h]
  __int64 v28; // [rsp+B0h] [rbp-1h]
  __int64 v29; // [rsp+B8h] [rbp+7h]
  __int64 v30; // [rsp+C8h] [rbp+17h] BYREF
  _BYTE v31[24]; // [rsp+D0h] [rbp+1Fh] BYREF

  if ( a2 && a4 )
  {
    v11 = MEMORY[0x140254F48](a2, a3);
    sub_140213644((_LocaleUpdate *)&v30, a5);
    *(_QWORD *)&v13 = a2;
    *((_QWORD *)&v13 + 1) = a2 + 2 * v11;
    v27 = v31;
    v28 = a6;
    v14 = a1;
    v15 = v13;
    v17 = a1;
    v16 = a2;
    v18 = a4;
    v19 = 0;
    Block = nullptr;
    v20 = 0;
    v21 = 0;
    v22 = 0;
    v23 = 0;
    v24 = 0;
    v25 = 0;
    v29 = 0;
    v12 = sub_140233A68(&v14);
    free_base(Block);
    Block = nullptr;
    if ( v31[16] )
      *(_DWORD *)(v30 + 936) &= ~2u;
    return v12;
  }
  else
  {
    *errno() = 22;
    sub_14024CF6C(v9);
    return 0xFFFFFFFFLL;
  }
}

