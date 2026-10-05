/* Address: 0x1402641e8 | Name: _chdrive | Size: 129 bytes */
int __cdecl chdrive(int Drive)
{
  unsigned int v1; // eax
  __int64 v3; // [rsp+0h] [rbp-38h] BYREF
  __int16 PathName; // [rsp+20h] [rbp-18h] BYREF
  int v5; // [rsp+22h] [rbp-16h]
  __int64 v6; // [rsp+28h] [rbp-10h]

  if ( (unsigned int)(Drive - 1) <= 0x19 )
  {
    v5 = 58;
    PathName = Drive + 64;
    if ( !(unsigned int)((__int64 (__fastcall *)(__int16 *))SetCurrentDirectoryW)(&PathName) )
    {
      v1 = ((__int64 (*)(void))GetLastError)();
      sub_14024D14C(v1);
    }
  }
  else
  {
    *(_DWORD *)sub_14024D19C() = 15;
    *errno() = 13;
    sub_14024CF6C();
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&v3 ^ v6);
}

