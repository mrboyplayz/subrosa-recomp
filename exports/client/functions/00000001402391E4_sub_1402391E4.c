/* Address: 0x1402391e4 | Name: sub_1402391E4 | Size: 304 bytes */
__int64 __fastcall sub_1402391E4(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  unsigned int v5; // eax
  int v6; // eax
  int v7; // eax
  unsigned __int64 v8; // rcx
  __int64 v9; // [rsp+0h] [rbp-298h] BYREF
  _DWORD FindFileData[148]; // [rsp+30h] [rbp-268h] BYREF
  __int64 v11; // [rsp+280h] [rbp-18h]

  if ( a1 && a1 != -1 && a2 )
  {
    if ( (unsigned int)((__int64 (__fastcall *)(__int64, _DWORD *))FindNextFileW)(a1, FindFileData) )
    {
      v6 = FindFileData[0];
      if ( FindFileData[0] == 128 )
        v6 = 0;
      *(_DWORD *)a2 = v6;
      *(_DWORD *)(a2 + 4) = sub_140239580(&FindFileData[1]);
      *(_DWORD *)(a2 + 8) = sub_140239580(&FindFileData[3]);
      v7 = sub_140239580(&FindFileData[5]);
      v8 = (unsigned __int64)FindFileData[7] << 32;
      *(_DWORD *)(a2 + 12) = v7;
      *(_QWORD *)(a2 + 16) = FindFileData[8] + v8;
      if ( (unsigned int)sub_140259444(a2 + 24, 260, &FindFileData[11]) )
      {
        sub_14024CFBC(0, 0, 0, 0, 0);
        __debugbreak();
      }
    }
    else
    {
      v5 = ((__int64 (*)(void))GetLastError)();
      if ( v5 >= 2 )
      {
        if ( v5 <= 3 )
          goto LABEL_13;
        if ( v5 == 8 )
        {
          *errno() = 12;
          return MEMORY[0x1401F8B20]((unsigned __int64)&v9 ^ v11);
        }
        if ( v5 == 18 )
        {
LABEL_13:
          *errno() = 2;
          return MEMORY[0x1401F8B20]((unsigned __int64)&v9 ^ v11);
        }
      }
      *errno() = 22;
    }
  }
  else
  {
    *errno() = 22;
    sub_14024CF6C(v3);
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&v9 ^ v11);
}

