/* Address: 0x14019adb0 | Name: sub_14019ADB0 | Size: 182 bytes */
__int64 __fastcall sub_14019ADB0(_DWORD *a1, char a2)
{
  int v3; // [rsp+0h] [rbp-28h]

  a1[10] = a1[8] >> a2;
  v3 = a1[9] / a1[10];
  return (1 << a2) - (v3 + (1 << a2 < (unsigned int)(v3 + 1) ? (1 << a2) - (v3 + 1) : 0) + 1);
}

