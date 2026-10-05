/* Address: 0x14007c350 | Name: sub_14007C350 | Size: 175 bytes */
_DWORD *__fastcall sub_14007C350(__int64 a1, int a2)
{
  __int64 v2; // r11
  __int64 v3; // r9
  char *v4; // r10
  __int64 v5; // rdx
  _DWORD *v6; // r8
  __int64 v7; // rcx
  _DWORD *result; // rax

  v2 = 14352LL * a2;
  v3 = 0;
  v4 = (char *)&unk_18009531C + v2;
LABEL_2:
  v5 = 0;
  v6 = v4;
LABEL_3:
  v7 = 0;
  result = v6;
  while ( !*(result - 2560) && !*result && !result[512] )
  {
    ++v7;
    ++result;
    if ( v7 >= 8 )
    {
      ++v5;
      v6 += 8;
      if ( v5 < 8 )
        goto LABEL_3;
      ++v3;
      v4 += 256;
      if ( v3 >= 8 )
        return memcpy((char *)&unk_180092B0C + v2, (char *)&unk_180092B0C + 14352 * --dword_180092B08, 0x3810u);
      goto LABEL_2;
    }
  }
  return result;
}

