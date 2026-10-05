/* Address: 0x14007a520 | Name: sub_14007A520 | Size: 227 bytes */
void __fastcall sub_14007A520(int a1, int a2, float a3)
{
  int v3; // r9d
  int v4; // r8d
  __int64 v5; // r11
  int v6; // edx
  __int64 v7; // rbx
  __int64 v8; // r10

  v3 = a1 >> 11;
  v4 = a2 >> 11;
  if ( (unsigned int)(a1 >> 11) <= 7 && (unsigned int)v4 <= 7 )
  {
    v5 = v3 + 8 * v4;
    v6 = a2 & 0x7FF;
    v7 = (unsigned int)(2049 * v6);
    v8 = a1 & 0x7FF;
    *(float *)(*((_QWORD *)&unk_18E8E8140 + 1668 * v5 + 3) + 4LL * (unsigned int)(v7 + v8)) = a3;
    if ( (a1 & 0x7FF) == 0 )
    {
      if ( v6 )
      {
        if ( v3 <= 0 )
          return;
      }
      else
      {
        if ( v3 <= 0 )
        {
LABEL_11:
          if ( v4 > 0 )
            *(float *)(*((_QWORD *)&unk_18E8E8140 + 1668 * v5 - 13341) + 4 * v8 + 16785408) = a3;
          return;
        }
        if ( v4 > 0 )
          *(float *)(*((_QWORD *)&unk_18E8E8140 + 1668 * v5 - 15009) + 16793600LL) = a3;
      }
      *(float *)(*((_QWORD *)&unk_18E8E8140 + 1668 * v5 - 1665) + 4 * v7 + 0x2000) = a3;
    }
    if ( v6 )
      return;
    goto LABEL_11;
  }
}

