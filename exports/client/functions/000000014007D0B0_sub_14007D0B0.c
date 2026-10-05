/* Address: 0x14007d0b0 | Name: sub_14007D0B0 | Size: 135 bytes */
__int64 __fastcall sub_14007D0B0(int *a1, unsigned __int16 a2)
{
  __int64 v2; // r10
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // r11
  __int64 result; // rax

  v2 = a1[1];
  v3 = dword_1402B3840[a2];
  v4 = dword_1402B3840[(unsigned __int16)(a2 + 0x4000)];
  v5 = v3 * *a1 + 0x8000;
  *a1 = ((v4 * *a1 + 0x8000) >> 16) + ((v3 * -(int)v2 + 0x8000) >> 16);
  result = (unsigned int)(v5 >> 16) + (unsigned int)((v4 * v2 + 0x8000) >> 16);
  a1[1] = result;
  return result;
}

