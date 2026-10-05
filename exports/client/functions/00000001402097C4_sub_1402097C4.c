/* Address: 0x1402097c4 | Name: sub_1402097C4 | Size: 213 bytes */
FH4::TryBlockMap4 *__fastcall MEMORY[0x1402097C4](FH4::TryBlockMap4 *this, const struct FH4::FuncInfo4 *a2, __int64 a3)
{
  _BYTE *v4; // rdx
  __int64 v5; // rcx
  _BYTE *v6; // rdx
  int v7; // eax
  __int64 v8; // rcx
  _BYTE *v9; // rdx
  int v10; // eax
  __int64 v11; // rcx
  _BYTE *v12; // rdx
  int v13; // eax
  __int64 v14; // rcx
  _DWORD *v15; // rdx

  if ( *((_DWORD *)a2 + 3) )
  {
    v4 = (_BYTE *)(a3 + *((int *)a2 + 3));
    *((_QWORD *)this + 1) = v4;
    v5 = *v4 & 0xF;
    v6 = &v4[-byte_140284A40[v5]];
    v7 = *((_DWORD *)v6 - 1) >> byte_140284A40[v5 + 16];
    *((_QWORD *)this + 1) = v6;
    *(_DWORD *)this = v7;
    *((_QWORD *)this + 2) = v6;
    v8 = *v6 & 0xF;
    v9 = &v6[-byte_140284A40[v8]];
    v10 = *((_DWORD *)v9 - 1) >> byte_140284A40[v8 + 16];
    *((_QWORD *)this + 1) = v9;
    *((_DWORD *)this + 6) = v10;
    v11 = *v9 & 0xF;
    v12 = &v9[-byte_140284A40[v11]];
    v13 = *((_DWORD *)v12 - 1) >> byte_140284A40[v11 + 16];
    *((_QWORD *)this + 1) = v12;
    *((_DWORD *)this + 7) = v13;
    v14 = *v12 & 0xF;
    v15 = &v12[-byte_140284A40[v14]];
    *((_DWORD *)this + 8) = *(v15 - 1) >> byte_140284A40[v14 + 16];
    *((_QWORD *)this + 1) = v15;
    LODWORD(v14) = *v15;
    *((_QWORD *)this + 1) = v15 + 1;
    *((_DWORD *)this + 9) = v14;
  }
  else
  {
    *(_DWORD *)this = 0;
  }
  return this;
}

