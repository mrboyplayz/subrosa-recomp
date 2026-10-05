/* Address: 0x14016f9e0 | Name: sub_14016F9E0 | Size: 283 bytes */
__int64 __fastcall sub_14016F9E0(__int64 a1, __int64 a2, unsigned int a3)
{
  bool v3; // zf
  unsigned int v6; // edi
  unsigned int v7; // ecx
  __int64 v8; // rsi
  __int64 v9; // rax

  v3 = *(_DWORD *)(a1 + 48) == 0;
  *(_QWORD *)(a1 + 24) = a2;
  if ( v3 )
  {
    *(_QWORD *)(*(_QWORD *)(__readgsqword(0x58u) + 8LL * dword_140404A6C[19064470]) + 16LL) = "output buffer limit";
    return 0;
  }
  v6 = a2 - *(_DWORD *)(a1 + 32);
  v7 = *(_DWORD *)(a1 + 40) - *(_DWORD *)(a1 + 32);
  if ( ~v6 < a3 )
    goto LABEL_9;
  if ( v6 + a3 > v7 )
  {
    while ( v7 <= 0x7FFFFFFF )
    {
      v7 *= 2;
      if ( v6 + a3 <= v7 )
        goto LABEL_8;
    }
    goto LABEL_9;
  }
LABEL_8:
  v8 = v7;
  v9 = j__realloc_base(*(_QWORD *)(a1 + 32), v7);
  if ( !v9 )
  {
LABEL_9:
    *(_QWORD *)(*(_QWORD *)(__readgsqword(0x58u) + 8LL * dword_140404A6C[19064470]) + 16LL) = "outofmem";
    return 0;
  }
  *(_QWORD *)(a1 + 32) = v9;
  *(_QWORD *)(a1 + 24) = v9 + v6;
  *(_QWORD *)(a1 + 40) = v8 + v9;
  return 1;
}

