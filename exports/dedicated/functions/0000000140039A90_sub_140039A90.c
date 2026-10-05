/* Address: 0x140039a90 | Name: sub_140039A90 | Size: 224 bytes */
__int64 __fastcall sub_140039A90(int a1, _BYTE *a2, int a3, int a4)
{
  __int64 v7; // rbx
  int v8; // ebp
  int v9; // eax
  __int64 v10; // rsi
  __int64 result; // rax

  if ( dword_163D75B60 )
  {
    v7 = -1;
    do
      ++v7;
    while ( a2[v7] );
    v8 = dword_196199564;
    if ( (int)v7 > 63 )
      LODWORD(v7) = 63;
    v9 = dword_191541414;
    v10 = (__int64)dword_196199564 << 7;
    *(_DWORD *)((char *)&unk_195999560 + v10) = 2;
    *(_DWORD *)((char *)&unk_195999560 + v10 + 4) = v9;
    memcpy((char *)&unk_1959995A0 + v10, a2, (int)v7);
    *((_BYTE *)&unk_195999560 + v10 + (int)v7 + 64) = 0;
    *(_DWORD *)((char *)&unk_195999560 + v10 + 32) = v7;
    *(_DWORD *)((char *)&unk_195999560 + v10 + 36) = a1;
    *(_DWORD *)((char *)&unk_195999560 + v10 + 40) = a3;
    *(_DWORD *)((char *)&unk_195999560 + v10 + 44) = a4;
    dword_196199564 = v8 + 1;
    HIWORD(dword_196199564) = 0;
    return 0;
  }
  return result;
}

