/* Address: 0x140207890 | Name: sub_140207890 | Size: 231 bytes */
__int64 __fastcall sub_140207890(struct FH4::FuncInfo4 *a1, struct _xDISPATCHER_CONTEXT *a2, unsigned __int64 a3)
{
  __int64 v5; // rdi
  unsigned int v6; // esi
  _BYTE *v7; // r9
  unsigned int v8; // edx
  unsigned int v9; // r8d
  __int64 v10; // rcx
  _BYTE *v11; // r9
  unsigned int v12; // r11d
  __int64 v13; // r10
  __int64 v14; // rcx
  _BYTE *v15; // r9
  __int64 v16; // rcx

  if ( !*((_DWORD *)a1 + 4) )
    return 0xFFFFFFFFLL;
  v5 = *((_QWORD *)a2 + 1);
  v6 = 0;
  v7 = (_BYTE *)(v5 + *((int *)a1 + 4));
  v8 = -1;
  v9 = 0;
  v10 = *v7 & 0xF;
  v11 = &v7[-byte_140284A40[v10]];
  v12 = *((_DWORD *)v11 - 1) >> byte_140284A40[v10 + 16];
  if ( !v12 )
    return 0xFFFFFFFFLL;
  v13 = **((unsigned int **)a2 + 2);
  do
  {
    v14 = *v11 & 0xF;
    v15 = &v11[-byte_140284A40[v14]];
    v6 += *((_DWORD *)v15 - 1) >> byte_140284A40[v14 + 16];
    if ( a3 < v5 + v13 + (unsigned __int64)v6 )
      break;
    ++v9;
    v16 = *v15 & 0xF;
    v11 = &v15[-byte_140284A40[v16]];
    v8 = (*((_DWORD *)v11 - 1) >> byte_140284A40[v16 + 16]) - 1;
  }
  while ( v9 < v12 );
  if ( v9 )
    return v8;
  else
    return 0xFFFFFFFFLL;
}

