/* Address: 0x140239448 | Name: sub_140239448 | Size: 295 bytes */
__int64 __fastcall sub_140239448(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  unsigned int v5; // eax
  int v6; // eax
  __int64 v7; // [rsp+0h] [rbp-298h] BYREF
  _DWORD FindFileData[148]; // [rsp+30h] [rbp-268h] BYREF
  __int64 v9; // [rsp+280h] [rbp-18h]

  if ( a1 && a1 != -1 && a2 )
  {
    if ( (unsigned int)((__int64 (__fastcall *)(__int64, _DWORD *))FindNextFileW)(a1, FindFileData) )
    {
      v6 = FindFileData[0];
      if ( FindFileData[0] == 128 )
        v6 = 0;
      *(_DWORD *)a2 = v6;
      *(_QWORD *)(a2 + 8) = sub_140239610(&FindFileData[1]);
      *(_QWORD *)(a2 + 16) = sub_140239610(&FindFileData[3]);
      *(_QWORD *)(a2 + 24) = sub_140239610(&FindFileData[5]);
      *(_DWORD *)(a2 + 32) = FindFileData[8];
      if ( (unsigned int)sub_140259444(a2 + 36, 260, &FindFileData[11]) )
      {
        sub_14024CFBC(0, 0, 0, 0, 0);
        JUMPOUT(0x14023956ELL);
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
          return MEMORY[0x1401F8B20]((unsigned __int64)&v7 ^ v9);
        }
        if ( v5 == 18 )
        {
LABEL_13:
          *errno() = 2;
          return MEMORY[0x1401F8B20]((unsigned __int64)&v7 ^ v9);
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
  return MEMORY[0x1401F8B20]((unsigned __int64)&v7 ^ v9);
}

