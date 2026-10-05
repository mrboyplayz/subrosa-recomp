/* Address: 0x1402389d8 | Name: sub_1402389D8 | Size: 325 bytes */
__int64 __fastcall sub_1402389D8(__int64 a1, _DWORD *a2)
{
  __int64 v3; // rcx
  unsigned int v5; // eax
  int v6; // eax
  __int64 v7; // [rsp+0h] [rbp-298h] BYREF
  int FindFileData; // [rsp+30h] [rbp-268h] BYREF
  _BYTE v9[8]; // [rsp+34h] [rbp-264h] BYREF
  _BYTE v10[8]; // [rsp+3Ch] [rbp-25Ch] BYREF
  _BYTE v11[12]; // [rsp+44h] [rbp-254h] BYREF
  int v12; // [rsp+50h] [rbp-248h]
  _BYTE Source[548]; // [rsp+5Ch] [rbp-23Ch] BYREF
  __int64 v14; // [rsp+280h] [rbp-18h]

  if ( a2 && a1 )
  {
    if ( ((__int64 (__fastcall *)(__int64, _QWORD, int *, _QWORD, _QWORD, _DWORD))FindFirstFileExW)(
           a1,
           0,
           &FindFileData,
           0,
           0,
           0) == -1 )
    {
      v5 = ((__int64 (*)(void))GetLastError)();
      if ( v5 >= 2 )
      {
        if ( v5 <= 3 )
          goto LABEL_12;
        if ( v5 == 8 )
        {
          *errno() = 12;
          return MEMORY[0x1401F8B20]((unsigned __int64)&v7 ^ v14);
        }
        if ( v5 == 18 )
        {
LABEL_12:
          *errno() = 2;
          return MEMORY[0x1401F8B20]((unsigned __int64)&v7 ^ v14);
        }
      }
      *errno() = 22;
    }
    else
    {
      v6 = FindFileData;
      if ( FindFileData == 128 )
        v6 = 0;
      *a2 = v6;
      a2[1] = sub_140239580(v9);
      a2[2] = sub_140239580(v10);
      a2[3] = sub_140239580(v11);
      a2[4] = v12;
      if ( (unsigned int)sub_140259444(a2 + 5, 260, Source) )
      {
        sub_14024CFBC(0, 0, 0, 0, 0);
        JUMPOUT(0x140238B1CLL);
      }
    }
  }
  else
  {
    *errno() = 22;
    sub_14024CF6C(v3);
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&v7 ^ v14);
}

