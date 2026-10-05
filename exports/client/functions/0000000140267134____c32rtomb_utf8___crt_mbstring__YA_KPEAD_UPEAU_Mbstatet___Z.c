/* Address: 0x140267134 | Name: ?__c32rtomb_utf8@__crt_mbstring@@YA_KPEAD_UPEAU_Mbstatet@@@Z | Size: 179 bytes */
__int64 __fastcall __crt_mbstring::__c32rtomb_utf8(_BYTE *a1, unsigned int a2, _QWORD *a3)
{
  __int64 v4; // r9
  char v5; // r10
  __int64 v6; // r11
  char v7; // al

  if ( !a1 )
    goto LABEL_2;
  if ( !a2 )
  {
    *a1 = 0;
LABEL_2:
    *a3 = 0;
    return 1;
  }
  if ( (a2 & 0xFFFFFF80) == 0 )
  {
    *a1 = a2;
    return 1;
  }
  if ( (a2 & 0xFFFFF800) == 0 )
  {
    v4 = 1;
    v5 = -64;
    goto LABEL_16;
  }
  if ( (a2 & 0xFFFF0000) == 0 )
  {
    if ( a2 - 55296 > 0x7FF )
    {
      v4 = 2;
      v5 = -32;
      goto LABEL_16;
    }
LABEL_19:
    *a3 = 0;
    *errno() = 42;
    return -1;
  }
  if ( (a2 & 0xFFE00000) != 0 || a2 > 0x10FFFF )
    goto LABEL_19;
  v4 = 3;
  v5 = -16;
LABEL_16:
  v6 = v4;
  do
  {
    v7 = a2;
    a2 >>= 6;
    a1[v6--] = v7 & 0x3F | 0x80;
  }
  while ( v6 );
  *a1 = v5 | a2;
  *a3 = 0;
  return v4 + 1;
}

