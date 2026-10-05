/* Address: 0x140167a50 | Name: sub_140167A50 | Size: 699 bytes */
__int64 __fastcall sub_140167A50(__int64 a1)
{
  _BYTE *v1; // rsi
  unsigned int v3; // edx
  __int64 v4; // rax
  unsigned int v5; // edi
  int v6; // edi
  int v7; // r8d
  int v8; // r11d
  __int64 v9; // rdi
  unsigned int v10; // edx
  unsigned int v11; // edx
  unsigned int v12; // eax
  int v13; // eax
  int v14; // r11d
  int v15; // r14d
  int v16; // r8d
  unsigned int v17; // edx
  char *v18; // rcx
  char v19; // al

  v1 = *(_BYTE **)(a1 + 24);
  while ( 1 )
  {
    while ( 1 )
    {
      if ( *(int *)(a1 + 16) < 16 )
      {
        if ( *(_QWORD *)a1 >= *(_QWORD *)(a1 + 8) )
          goto LABEL_40;
        sub_140160350(a1);
      }
      v3 = *(_DWORD *)(a1 + 20);
      v4 = v3 & 0x1FF;
      v5 = *(unsigned __int16 *)(a1 + 2 * v4 + 52);
      if ( *(_WORD *)(a1 + 2 * v4 + 52) )
      {
        *(_DWORD *)(a1 + 16) -= v5 >> 9;
        *(_DWORD *)(a1 + 20) = v3 >> (v5 >> 9);
        v6 = v5 & 0x1FF;
      }
      else
      {
        v6 = sub_14016FB90(a1, a1 + 52);
      }
      if ( v6 >= 256 )
        break;
      if ( v6 < 0 )
        goto LABEL_40;
      if ( (unsigned __int64)v1 >= *(_QWORD *)(a1 + 40) )
      {
        if ( !(unsigned int)sub_14016F9E0(a1, v1, 1) )
          return 0;
        v1 = *(_BYTE **)(a1 + 24);
      }
      *v1++ = v6;
    }
    if ( v6 == 256 )
      break;
    v7 = *(_DWORD *)(a1 + 16);
    v8 = dword_14026F94C[v6];
    v9 = (unsigned int)dword_14026F8CC[v6];
    if ( v8 )
    {
      if ( v7 < v8 )
      {
        sub_140160350(a1);
        v7 = *(_DWORD *)(a1 + 16);
      }
      v10 = *(_DWORD *)(a1 + 20);
      v7 -= v8;
      *(_DWORD *)(a1 + 20) = v10 >> v8;
      *(_DWORD *)(a1 + 16) = v7;
      v9 = (v10 & ((1 << v8) - 1)) + (unsigned int)v9;
    }
    if ( v7 < 16 )
    {
      if ( *(_QWORD *)a1 >= *(_QWORD *)(a1 + 8) )
        goto LABEL_40;
      sub_140160350(a1);
    }
    v11 = *(_DWORD *)(a1 + 20);
    v12 = *(unsigned __int16 *)(a1 + 2LL * (v11 & 0x1FF) + 2072);
    if ( *(_WORD *)(a1 + 2LL * (v11 & 0x1FF) + 2072) )
    {
      *(_DWORD *)(a1 + 16) -= v12 >> 9;
      *(_DWORD *)(a1 + 20) = v11 >> (v12 >> 9);
      v13 = v12 & 0x1FF;
    }
    else
    {
      v13 = sub_14016FB90(a1, a1 + 2072);
    }
    if ( v13 < 0 )
    {
LABEL_40:
      *(_QWORD *)(*(_QWORD *)(__readgsqword(0x58u) + 8LL * dword_140404A6C[19064470]) + 16LL) = "bad huffman code";
      return 0;
    }
    v14 = dword_14026FE50[v13];
    v15 = dword_14026FDD0[v13];
    if ( v14 )
    {
      v16 = *(_DWORD *)(a1 + 16);
      if ( v16 < v14 )
      {
        sub_140160350(a1);
        v16 = *(_DWORD *)(a1 + 16);
      }
      v17 = *(_DWORD *)(a1 + 20);
      *(_DWORD *)(a1 + 20) = v17 >> v14;
      *(_DWORD *)(a1 + 16) = v16 - v14;
      v15 += v17 & ((1 << v14) - 1);
    }
    if ( (__int64)&v1[-*(_QWORD *)(a1 + 32)] < v15 )
    {
      *(_QWORD *)(*(_QWORD *)(__readgsqword(0x58u) + 8LL * dword_140404A6C[19064470]) + 16LL) = "bad dist";
      return 0;
    }
    if ( (unsigned __int64)&v1[(int)v9] > *(_QWORD *)(a1 + 40) )
    {
      if ( !(unsigned int)sub_14016F9E0(a1, v1, (unsigned int)v9) )
        return 0;
      v1 = *(_BYTE **)(a1 + 24);
    }
    v18 = &v1[-v15];
    if ( v15 == 1 )
    {
      if ( (_DWORD)v9 )
      {
        MEMORY[0x1401FCD30](v1, (unsigned __int8)*v18, v9);
        v1 += v9;
      }
    }
    else
    {
      for ( ; (_DWORD)v9; LODWORD(v9) = v9 - 1 )
      {
        v19 = *v18++;
        *v1++ = v19;
      }
    }
  }
  *(_QWORD *)(a1 + 24) = v1;
  return 1;
}

