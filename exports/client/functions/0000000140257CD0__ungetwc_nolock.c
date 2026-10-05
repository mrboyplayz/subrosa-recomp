/* Address: 0x140257cd0 | Name: _ungetwc_nolock | Size: 313 bytes */
__int64 __fastcall ungetwc_nolock(unsigned __int16 a1, __int64 a2)
{
  unsigned __int16 v2; // si
  int v5; // edx
  __int64 v6; // rbx
  char *v7; // rdx
  unsigned __int64 v9; // rax
  __int64 v10; // rdx
  int v11; // eax
  unsigned __int16 *v12; // rcx

  v2 = -1;
  if ( a1 == 0xFFFF )
    return v2;
  v5 = *(_DWORD *)(a2 + 20);
  if ( (v5 & 1) == 0 && ((v5 & 4) == 0 || (*(_DWORD *)(a2 + 20) & 2) != 0) )
    return v2;
  if ( !*(_QWORD *)(a2 + 8) )
    sub_140253EF8(a2);
  if ( (*(_DWORD *)(a2 + 20) & 0x1000) == 0 )
  {
    if ( fileno((FILE *)a2) == -1 || fileno((FILE *)a2) == -2 )
    {
      v7 = (char *)&unk_1403022C0;
    }
    else
    {
      v6 = (__int64)fileno((FILE *)a2) >> 6;
      v7 = (char *)(*(_QWORD *)&dword_140404A6C[2 * v6 + 19065401] + 72LL * (fileno((FILE *)a2) & 0x3F));
    }
    if ( v7[56] < 0 )
      return ungetwc_text_mode_nolock(a1, a2);
  }
  v9 = *(_QWORD *)(a2 + 8) + 2LL;
  if ( *(_QWORD *)a2 < v9 )
  {
    if ( *(_DWORD *)(a2 + 16) || *(_DWORD *)(a2 + 32) < 2u )
      return v2;
    *(_QWORD *)a2 = v9;
  }
  v10 = *(_QWORD *)a2;
  v11 = *(_DWORD *)(a2 + 20) >> 12;
  v12 = (unsigned __int16 *)(*(_QWORD *)a2 - 2LL);
  *(_QWORD *)a2 = v12;
  if ( (v11 & 1) == 0 )
  {
    *v12 = a1;
    goto LABEL_22;
  }
  if ( *v12 == a1 )
  {
LABEL_22:
    *(_DWORD *)(a2 + 16) += 2;
    _InterlockedAnd((volatile signed __int32 *)(a2 + 20), 0xFFFFFFF7);
    _InterlockedOr((volatile signed __int32 *)(a2 + 20), 1u);
    return a1;
  }
  *(_QWORD *)a2 = v10;
  return v2;
}

