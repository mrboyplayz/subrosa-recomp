/* Address: 0x14020a084 | Name: sub_14020A084 | Size: 392 bytes */
char __fastcall MEMORY[0x14020A084](FH4::HandlerMap4 *this)
{
  char *v2; // rax
  char v3; // r10
  _BYTE *v4; // rdx
  __int64 v5; // rcx
  int v6; // eax
  __int64 v7; // rcx
  int *v8; // r9
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  char *v13; // r9
  int v14; // edx
  __int64 v15; // rcx
  _BYTE *v16; // r9
  int v17; // eax
  __int64 v18; // rcx
  _BYTE *v19; // r9

  *((_BYTE *)this + 24) = 0;
  *(_QWORD *)((char *)this + 28) = 0;
  *(_QWORD *)((char *)this + 36) = 0;
  *((_OWORD *)this + 3) = 0;
  v2 = *((char **)this + 1);
  v3 = *v2;
  v4 = v2 + 1;
  *((_BYTE *)this + 24) = *v2;
  *((_QWORD *)this + 1) = v2 + 1;
  if ( (v3 & 1) != 0 )
  {
    v5 = *v4 & 0xF;
    v4 -= byte_140284A40[v5];
    *((_DWORD *)this + 7) = *((_DWORD *)v4 - 1) >> byte_140284A40[v5 + 16];
    *((_QWORD *)this + 1) = v4;
  }
  if ( (v3 & 2) != 0 )
  {
    v6 = *(_DWORD *)v4;
    v4 += 4;
    *((_QWORD *)this + 1) = v4;
    *((_DWORD *)this + 8) = v6;
  }
  if ( (v3 & 4) != 0 )
  {
    v7 = *v4 & 0xF;
    v4 -= byte_140284A40[v7];
    *((_DWORD *)this + 9) = *((_DWORD *)v4 - 1) >> byte_140284A40[v7 + 16];
    *((_QWORD *)this + 1) = v4;
  }
  v8 = (int *)(v4 + 4);
  *((_DWORD *)this + 10) = *(_DWORD *)v4;
  LOBYTE(v9) = v3 & 0x30;
  *((_QWORD *)this + 1) = v4 + 4;
  if ( (v3 & 8) == 0 )
  {
    if ( (_BYTE)v9 == 16 )
    {
      v12 = *(_BYTE *)v8 & 0xF;
      v13 = (char *)v8 - byte_140284A40[v12];
      v9 = (unsigned int)((*((_DWORD *)v13 - 1) >> byte_140284A40[v12 + 16]) + *((_DWORD *)this + 18));
      *((_QWORD *)this + 1) = v13;
      *((_QWORD *)this + 6) = v9;
      return v9;
    }
    if ( (_BYTE)v9 != 32 )
      return v9;
    v14 = *((_DWORD *)this + 18);
    v15 = *(_BYTE *)v8 & 0xF;
    v16 = (char *)v8 - byte_140284A40[v15];
    v17 = *((_DWORD *)v16 - 1) >> byte_140284A40[v15 + 16];
    *((_QWORD *)this + 1) = v16;
    *((_QWORD *)this + 6) = (unsigned int)(v14 + v17);
    v18 = *v16 & 0xF;
    v19 = &v16[-byte_140284A40[v18]];
    LODWORD(v9) = *((_DWORD *)v19 - 1) >> byte_140284A40[v18 + 16];
    *((_QWORD *)this + 1) = v19;
    v11 = (unsigned int)(v14 + v9);
    goto LABEL_16;
  }
  if ( (_BYTE)v9 != 16 )
  {
    if ( (_BYTE)v9 != 32 )
      return v9;
    v9 = *v8;
    *((_QWORD *)this + 1) = v4 + 8;
    *((_QWORD *)this + 6) = v9;
    LOBYTE(v9) = (_BYTE)v4 + 12;
    v11 = *((int *)v4 + 2);
    *((_QWORD *)this + 1) = v4 + 12;
LABEL_16:
    *((_QWORD *)this + 7) = v11;
    return v9;
  }
  v10 = *v8;
  *((_QWORD *)this + 1) = v4 + 8;
  *((_QWORD *)this + 6) = v10;
  LOBYTE(v9) = (_BYTE)v4 + 8;
  return v9;
}

