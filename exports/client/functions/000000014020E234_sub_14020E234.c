/* Address: 0x14020e234 | Name: sub_14020E234 | Size: 487 bytes */
__int64 __fastcall sub_14020E234(
        __int64 a1,
        _BYTE *a2,
        __int64 a3,
        __int64 a4,
        struct __crt_locale_pointers *a5,
        __int64 a6)
{
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // rax
  __int64 v14; // [rsp+0h] [rbp-100h] BYREF
  _QWORD v15[2]; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v16; // [rsp+30h] [rbp-D0h]
  char v17; // [rsp+38h] [rbp-C8h]
  int v18; // [rsp+39h] [rbp-C7h]
  __int16 v19; // [rsp+3Dh] [rbp-C3h]
  char v20; // [rsp+3Fh] [rbp-C1h]
  __int64 v21; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v22[24]; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD v23[7]; // [rsp+60h] [rbp-A0h] BYREF
  int v24; // [rsp+98h] [rbp-68h]
  __int16 v25; // [rsp+A0h] [rbp-60h]
  int v26; // [rsp+B0h] [rbp-50h]
  char v27; // [rsp+B4h] [rbp-4Ch]
  __int64 v28; // [rsp+4B8h] [rbp+3B8h]
  void *Block; // [rsp+4C0h] [rbp+3C0h]
  _QWORD *v30; // [rsp+4C8h] [rbp+3C8h]
  int v31; // [rsp+4D0h] [rbp+3D0h]
  __int64 v32; // [rsp+4D8h] [rbp+3D8h]
  __int64 v33; // [rsp+4E0h] [rbp+3E0h]
  int v34; // [rsp+E48h] [rbp+D48h]
  int v35; // [rsp+E4Ch] [rbp+D4Ch]
  __int64 v36; // [rsp+E50h] [rbp+D50h]

  if ( !a4 || a3 && !a2 )
  {
    *errno() = 22;
    sub_14024CF6C(v10);
    return MEMORY[0x1401F8B20]((unsigned __int64)&v14 ^ v36);
  }
  sub_140213644((_LocaleUpdate *)&v21, a5);
  v18 = 0;
  v19 = 0;
  v20 = 0;
  v15[0] = a2;
  v15[1] = a3;
  v16 = 0;
  if ( (a1 & 2) != 0 || (v17 = 0, !a2) )
    v17 = 1;
  v34 = -1;
  v35 = -1;
  v30 = v15;
  v23[1] = v22;
  v23[4] = a6;
  v23[2] = 0;
  v23[5] = 0;
  v23[6] = 0;
  v24 = 0;
  v25 = 0;
  v26 = 0;
  v27 = 0;
  v28 = 0;
  Block = nullptr;
  v23[0] = a1;
  v23[3] = a4;
  v31 = 0;
  v32 = 0;
  v33 = a4;
  v11 = sub_1402163D4(v23);
  if ( a2 )
  {
    if ( (a1 & 1) != 0 )
    {
      if ( !a3 && v11 )
        goto LABEL_20;
      v12 = v16;
      if ( v16 == a3 )
        goto LABEL_20;
      goto LABEL_19;
    }
    if ( (a1 & 2) != 0 )
    {
      if ( !a3 )
        goto LABEL_20;
      if ( v11 < 0 )
      {
        *a2 = 0;
        goto LABEL_20;
      }
      v12 = v16;
      if ( v16 != a3 )
        goto LABEL_19;
LABEL_26:
      a2[a3 - 1] = 0;
      goto LABEL_20;
    }
    if ( a3 )
    {
      v12 = v16;
      if ( v16 != a3 )
      {
LABEL_19:
        a2[v12] = 0;
        goto LABEL_20;
      }
      goto LABEL_26;
    }
  }
LABEL_20:
  free_base(Block);
  Block = nullptr;
  if ( v22[16] )
    *(_DWORD *)(v21 + 936) &= ~2u;
  return MEMORY[0x1401F8B20]((unsigned __int64)&v14 ^ v36);
}

