/* Address: 0x14021c4f0 | Name: sub_14021C4F0 | Size: 115 bytes */
char __fastcall sub_14021C4F0(__int64 a1)
{
  unsigned __int16 *v1; // r8
  __int64 v2; // r9
  bool v3; // dl
  unsigned int v4; // eax

  *(_QWORD *)(a1 + 32) += 8LL;
  v1 = *(unsigned __int16 **)(*(_QWORD *)(a1 + 32) - 8LL);
  if ( !v1 || (v2 = *((_QWORD *)v1 + 1)) == 0 )
  {
    v4 = 6;
    *(_QWORD *)(a1 + 72) = "(null)";
    goto LABEL_13;
  }
  if ( *(_DWORD *)(a1 + 60) != 2 )
  {
    if ( *(_DWORD *)(a1 + 60) == 3 || *(_DWORD *)(a1 + 60) == 12 )
    {
      v3 = 1;
      goto LABEL_10;
    }
    if ( *(_DWORD *)(a1 + 60) != 13 )
    {
      v3 = ((*(_BYTE *)(a1 + 65) - 99) & 0xEF) != 0;
      goto LABEL_10;
    }
  }
  v3 = 0;
LABEL_10:
  *(_QWORD *)(a1 + 72) = v2;
  v4 = *v1;
  if ( !v3 )
  {
LABEL_13:
    *(_BYTE *)(a1 + 84) = 0;
    goto LABEL_14;
  }
  *(_BYTE *)(a1 + 84) = 1;
  v4 >>= 1;
LABEL_14:
  *(_DWORD *)(a1 + 80) = v4;
  return 1;
}

