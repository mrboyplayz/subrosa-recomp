/* Address: 0x140263cc0 | Name: LcidFromHexString | Size: 78 bytes */
__int64 __fastcall LcidFromHexString(unsigned __int16 *a1)
{
  unsigned __int16 v1; // dx
  unsigned int v2; // r8d
  unsigned __int16 *v3; // r9
  __int16 v4; // ax
  int v5; // ecx

  v1 = *a1;
  v2 = 0;
  v3 = a1;
  while ( v1 )
  {
    ++v3;
    if ( (unsigned __int16)(v1 - 97) > 5u )
    {
      if ( (unsigned __int16)(v1 - 65) > 5u )
        goto LABEL_7;
      v4 = -7;
    }
    else
    {
      v4 = -39;
    }
    v1 += v4;
LABEL_7:
    v5 = v1;
    v1 = *v3;
    v2 = v5 + 16 * v2 - 48;
  }
  return v2;
}

