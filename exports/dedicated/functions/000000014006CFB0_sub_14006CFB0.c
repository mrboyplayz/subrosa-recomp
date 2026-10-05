/* Address: 0x14006cfb0 | Name: sub_14006CFB0 | Size: 116 bytes */
__int64 __fastcall sub_14006CFB0(int a1, int a2, int a3)
{
  __int64 v3; // r9
  __int64 v4; // r8
  __int64 v5; // r11

  v3 = a3;
  v4 = 28664LL * a2 + 40LL * a3;
  v5 = *(int *)((char *)&unk_1909419A0 + v4 + 27384);
  if ( (int)v5 >= 8 )
    return 0;
  *((_DWORD *)&unk_1909419A0 + 7166 * a2 + 10 * v3 + v5 + 6847) = a1;
  ++*(_DWORD *)((char *)&unk_1909419A0 + v4 + 27384);
  return 1;
}

