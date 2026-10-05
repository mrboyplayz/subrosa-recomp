/* Address: 0x14024b7f8 | Name: ?is_valid_drive@@YAHI@Z | Size: 128 bytes */
__int64 __fastcall is_valid_drive(unsigned int a1)
{
  __int64 v1; // rcx
  __int64 v3; // [rsp+0h] [rbp-38h] BYREF
  __int16 RootPathName; // [rsp+20h] [rbp-18h] BYREF
  int v5; // [rsp+22h] [rbp-16h]
  __int16 v6; // [rsp+26h] [rbp-12h]
  __int64 v7; // [rsp+28h] [rbp-10h]

  if ( a1 <= 0x1A )
  {
    if ( a1 )
    {
      v5 = 6029370;
      RootPathName = a1 + 64;
      v6 = 0;
      ((void (__fastcall *)(__int16 *))GetDriveTypeW)(&RootPathName);
    }
  }
  else
  {
    *(_DWORD *)sub_14024D19C() = 15;
    *errno() = 13;
    sub_14024CF6C(v1);
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&v3 ^ v7);
}

