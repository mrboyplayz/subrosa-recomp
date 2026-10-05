/* Address: 0x14022ef60 | Name: unknown_libname_647 | Size: 209 bytes */
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64 __fastcall unknown_libname_647(__int64 a1)
{
  __int128 v2; // xmm0
  __int64 v3; // r8
  __int64 v4; // rdx
  unsigned int v5; // ebx
  __int64 v7; // [rsp+30h] [rbp-39h] BYREF
  __int128 v8; // [rsp+38h] [rbp-31h]
  __int64 v9; // [rsp+48h] [rbp-21h]
  __int64 v10; // [rsp+50h] [rbp-19h]
  __int64 v11; // [rsp+58h] [rbp-11h]
  int v12; // [rsp+60h] [rbp-9h]
  char v13; // [rsp+64h] [rbp-5h]
  __int64 v14; // [rsp+68h] [rbp-1h]
  int v15; // [rsp+70h] [rbp+7h]
  char v16; // [rsp+74h] [rbp+Bh]
  int v17; // [rsp+78h] [rbp+Fh]
  void *Block; // [rsp+80h] [rbp+17h]
  _BYTE *v19; // [rsp+88h] [rbp+1Fh]
  __int64 v20; // [rsp+90h] [rbp+27h]
  __int64 v21; // [rsp+98h] [rbp+2Fh]
  __int64 v22; // [rsp+A0h] [rbp+37h] BYREF
  _BYTE v23[24]; // [rsp+A8h] [rbp+3Fh] BYREF

  sub_140213644((_LocaleUpdate *)&v22, **(struct __crt_locale_pointers *const **)a1);
  v2 = **(unsigned __int64 **)(a1 + 8);
  v3 = **(_QWORD **)(a1 + 32);
  v4 = **(_QWORD **)(a1 + 24);
  v7 = **(_QWORD **)(a1 + 16);
  v9 = v7;
  v8 = v2;
  v10 = v4;
  v11 = 0;
  Block = nullptr;
  v12 = 0;
  v13 = 0;
  v14 = 0;
  v15 = 0;
  v16 = 0;
  v17 = 0;
  v19 = v23;
  v20 = v3;
  v21 = 0;
  v5 = sub_1402339A4(&v7);
  free_base(Block);
  Block = nullptr;
  if ( v23[16] )
    *(_DWORD *)(v22 + 936) &= ~2u;
  return v5;
}

