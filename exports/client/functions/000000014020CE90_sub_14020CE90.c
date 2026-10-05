/* Address: 0x14020ce90 | Name: sub_14020CE90 | Size: 294 bytes */
__int64 __fastcall sub_14020CE90(int a1, __int64 a2)
{
  int v4; // eax
  _BYTE *v5; // r9
  _BYTE *v6; // r10
  __int64 v7; // rcx
  int v9; // ecx
  __int64 v10; // rax
  _BYTE *v11; // rcx
  int v12; // eax

  if ( (*(_DWORD *)(a2 + 20) & 0x1000) == 0 )
  {
    v4 = fileno((FILE *)a2);
    v5 = &unk_1403022C0;
    v6 = (unsigned int)(v4 + 2) <= 1
       ? &unk_1403022C0
       : (_BYTE *)(*(_QWORD *)&dword_140404A6C[2 * ((__int64)v4 >> 6) + 19065401] + 72LL * (v4 & 0x3F));
    if ( v6[57] )
      goto LABEL_9;
    if ( (unsigned int)(v4 + 2) > 1 )
      v5 = (_BYTE *)(*(_QWORD *)&dword_140404A6C[2 * ((__int64)v4 >> 6) + 19065401] + 72LL * (v4 & 0x3F));
    if ( (v5[61] & 1) != 0 )
    {
LABEL_9:
      *errno() = 22;
      sub_14024CF6C(v7);
      return 0xFFFFFFFFLL;
    }
  }
  if ( a1 == -1 )
    return 0xFFFFFFFFLL;
  v9 = *(_DWORD *)(a2 + 20);
  if ( (v9 & 1) == 0 && (v9 & 6) != 6 )
    return 0xFFFFFFFFLL;
  v10 = *(_QWORD *)(a2 + 8);
  if ( !v10 )
  {
    sub_140253EF8(a2);
    v10 = *(_QWORD *)(a2 + 8);
  }
  if ( *(_QWORD *)a2 == v10 )
  {
    if ( *(_DWORD *)(a2 + 16) )
      return 0xFFFFFFFFLL;
    ++*(_QWORD *)a2;
  }
  v11 = (_BYTE *)(*(_QWORD *)a2 - 1LL);
  v12 = *(_DWORD *)(a2 + 20) >> 12;
  *(_QWORD *)a2 = v11;
  if ( (v12 & 1) != 0 )
  {
    if ( *v11 != (_BYTE)a1 )
    {
      *(_QWORD *)a2 = v11 + 1;
      return 0xFFFFFFFFLL;
    }
  }
  else
  {
    *v11 = a1;
  }
  ++*(_DWORD *)(a2 + 16);
  _InterlockedAnd((volatile signed __int32 *)(a2 + 20), 0xFFFFFFF7);
  _InterlockedOr((volatile signed __int32 *)(a2 + 20), 1u);
  return (unsigned __int8)a1;
}

