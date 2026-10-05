/* Address: 0x1400a65b0 | Name: sub_1400A65B0 | Size: 187 bytes */
__int64 __fastcall sub_1400A65B0(_DWORD *a1, int *a2)
{
  unsigned __int64 v4; // rcx
  __int64 SystemTimeAsFileTime; // [rsp+30h] [rbp+8h] BYREF

  if ( a1 )
  {
    ((void (__fastcall *)(__int64 *))GetSystemTimeAsFileTime)(&SystemTimeAsFileTime);
    v4 = (SystemTimeAsFileTime - 11644473600000000LL) / 0xAuLL;
    *a1 = v4 / 0xF4240;
    a1[1] = v4 % 0xF4240;
  }
  if ( a2 )
  {
    if ( !dword_140404A6C[18215639] )
    {
      sub_140238064();
      ++dword_140404A6C[18215639];
    }
    *a2 = *(_DWORD *)sub_140237128() / 60;
    a2[1] = *(_DWORD *)sub_140237118();
  }
  return 0;
}

