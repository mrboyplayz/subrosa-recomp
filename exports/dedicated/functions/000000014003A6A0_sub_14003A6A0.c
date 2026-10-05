/* Address: 0x14003a6a0 | Name: sub_14003A6A0 | Size: 272 bytes */
__int64 sub_14003A6A0()
{
  float v0; // xmm1_4
  int v1; // edx
  float v2; // xmm0_4
  __int64 v3; // rcx
  int v4; // r11d
  int v5; // r8d
  int v6; // r9d
  __int64 result; // rax

  if ( dword_163D75B60 )
  {
    v0 = *(float *)&dword_1961996D4;
    v1 = dword_196199564 + 1;
    v2 = *(float *)&dword_1961996A4 * 10.0;
    v3 = (__int64)dword_196199564 << 7;
    *(_DWORD *)((char *)&unk_195999560 + v3) = 13;
    dword_196199564 = v1;
    dword_1961996AC = (int)v2;
    dword_1961996DC = (int)(float)(v0 * 10.0);
    dword_1961996C4 = (int)(float)(*(float *)&dword_1961996BC * 10.0);
    v4 = (int)v2 + (dword_1961996C4 << 16);
    v5 = (int)(float)(*(float *)&dword_196199704 * 10.0);
    dword_1961996F4 = (int)(float)(*(float *)&dword_1961996EC * 10.0);
    v6 = dword_1961996DC + (dword_1961996F4 << 16);
    dword_19619970C = v5;
    dword_196199724 = (int)(float)(*(float *)&dword_19619971C * 10.0);
    *(_DWORD *)((char *)&unk_195999560 + v3 + 4) = dword_191541414;
    *(_DWORD *)((char *)&unk_195999560 + v3 + 32) = v4;
    *(_DWORD *)((char *)&unk_195999560 + v3 + 36) = v6;
    *(_DWORD *)((char *)&unk_195999560 + v3 + 40) = v5;
    HIWORD(dword_196199564) = 0;
    return 0;
  }
  return result;
}

