/* Address: 0x140207378 | Name: sub_140207378 | Size: 452 bytes */
_DWORD *__fastcall MEMORY[0x140207378](__int64 a1, __int64 a2)
{
  _BYTE *v2; // r8
  __int64 v5; // rcx
  __int64 v6; // rax
  _BYTE *v7; // r8
  __int64 v8; // rcx
  __int64 v9; // rax
  _BYTE *v10; // r8
  __int64 v11; // rcx
  __int64 v12; // rax
  _DWORD *v13; // r8
  _DWORD *result; // rax
  int v15; // r8d
  _BYTE *v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax
  _BYTE *v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rax
  _BYTE *v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rax
  _DWORD *v25; // rdx
  __int64 v26; // rcx
  _BYTE *v27; // rdx
  __int64 v28; // rcx
  _BYTE *v29; // rdx
  __int64 v30; // rcx
  _DWORD *v31; // rdx

  v2 = *(_BYTE **)(a1 + 16);
  *(_QWORD *)(a1 + 8) = v2;
  v5 = *v2 & 0xF;
  v6 = byte_140284A40[v5];
  LOBYTE(v5) = byte_140284A40[v5 + 16];
  v7 = &v2[-v6];
  LODWORD(v6) = *((_DWORD *)v7 - 1);
  *(_QWORD *)(a1 + 8) = v7;
  *(_DWORD *)(a1 + 24) = (unsigned int)v6 >> v5;
  v8 = *v7 & 0xF;
  v9 = byte_140284A40[v8];
  LOBYTE(v8) = byte_140284A40[v8 + 16];
  v10 = &v7[-v9];
  LODWORD(v9) = *((_DWORD *)v10 - 1);
  *(_QWORD *)(a1 + 8) = v10;
  *(_DWORD *)(a1 + 28) = (unsigned int)v9 >> v8;
  v11 = *v10 & 0xF;
  v12 = byte_140284A40[v11];
  LOBYTE(v11) = byte_140284A40[v11 + 16];
  v13 = &v10[-v12];
  LODWORD(v12) = *(v13 - 1);
  *(_QWORD *)(a1 + 8) = v13;
  *(_DWORD *)(a1 + 32) = (unsigned int)v12 >> v11;
  result = v13 + 1;
  LODWORD(v11) = *v13;
  v15 = 0;
  *(_QWORD *)(a1 + 8) = result;
  *(_DWORD *)(a1 + 36) = v11;
  if ( *(_DWORD *)(a2 + 8) )
  {
    do
    {
      v16 = *(_BYTE **)(a1 + 8);
      ++v15;
      v17 = *v16 & 0xF;
      v18 = byte_140284A40[v17];
      LOBYTE(v17) = byte_140284A40[v17 + 16];
      v19 = &v16[-v18];
      LODWORD(v18) = *((_DWORD *)v19 - 1);
      *(_QWORD *)(a1 + 8) = v19;
      *(_DWORD *)(a1 + 24) = (unsigned int)v18 >> v17;
      v20 = *v19 & 0xF;
      v21 = byte_140284A40[v20];
      LOBYTE(v20) = byte_140284A40[v20 + 16];
      v22 = &v19[-v21];
      LODWORD(v21) = *((_DWORD *)v22 - 1);
      *(_QWORD *)(a1 + 8) = v22;
      *(_DWORD *)(a1 + 28) = (unsigned int)v21 >> v20;
      v23 = *v22 & 0xF;
      v24 = byte_140284A40[v23];
      LOBYTE(v23) = byte_140284A40[v23 + 16];
      v25 = &v22[-v24];
      LODWORD(v24) = *(v25 - 1);
      *(_QWORD *)(a1 + 8) = v25;
      *(_DWORD *)(a1 + 32) = (unsigned int)v24 >> v23;
      LODWORD(v24) = *v25++;
      *(_DWORD *)(a1 + 36) = v24;
      *(_QWORD *)(a1 + 8) = v25;
      v26 = *(_BYTE *)v25 & 0xF;
      v27 = (char *)v25 - byte_140284A40[v26];
      LODWORD(v24) = *((_DWORD *)v27 - 1) >> byte_140284A40[v26 + 16];
      *(_QWORD *)(a1 + 8) = v27;
      *(_DWORD *)(a1 + 24) = v24;
      v28 = *v27 & 0xF;
      v29 = &v27[-byte_140284A40[v28]];
      LODWORD(v24) = *((_DWORD *)v29 - 1) >> byte_140284A40[v28 + 16];
      *(_QWORD *)(a1 + 8) = v29;
      *(_DWORD *)(a1 + 28) = v24;
      v30 = *v29 & 0xF;
      v31 = &v29[-byte_140284A40[v30]];
      *(_DWORD *)(a1 + 32) = *(v31 - 1) >> byte_140284A40[v30 + 16];
      result = v31 + 1;
      *(_QWORD *)(a1 + 8) = v31;
      LODWORD(v30) = *v31;
      *(_QWORD *)(a1 + 8) = v31 + 1;
      *(_DWORD *)(a1 + 36) = v30;
    }
    while ( v15 != *(_DWORD *)(a2 + 8) );
  }
  return result;
}

