/* Address: 0x140238b20 | Name: sub_140238B20 | Size: 337 bytes */
__int64 __fastcall sub_140238B20(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  unsigned int v5; // eax
  int v6; // eax
  int v7; // eax
  unsigned __int64 v8; // rcx
  __int64 v9; // [rsp+0h] [rbp-298h] BYREF
  int FindFileData; // [rsp+30h] [rbp-268h] BYREF
  _BYTE v11[8]; // [rsp+34h] [rbp-264h] BYREF
  _BYTE v12[8]; // [rsp+3Ch] [rbp-25Ch] BYREF
  _BYTE v13[8]; // [rsp+44h] [rbp-254h] BYREF
  unsigned int v14; // [rsp+4Ch] [rbp-24Ch]
  unsigned int v15; // [rsp+50h] [rbp-248h]
  _BYTE Source[548]; // [rsp+5Ch] [rbp-23Ch] BYREF
  __int64 v17; // [rsp+280h] [rbp-18h]

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
          return MEMORY[0x1401F8B20]((unsigned __int64)&v9 ^ v17);
        }
        if ( v5 == 18 )
        {
LABEL_12:
          *errno() = 2;
          return MEMORY[0x1401F8B20]((unsigned __int64)&v9 ^ v17);
        }
      }
      *errno() = 22;
    }
    else
    {
      v6 = FindFileData;
      if ( FindFileData == 128 )
        v6 = 0;
      *(_DWORD *)a2 = v6;
      *(_DWORD *)(a2 + 4) = sub_140239580(v11);
      *(_DWORD *)(a2 + 8) = sub_140239580(v12);
      v7 = sub_140239580(v13);
      v8 = (unsigned __int64)v14 << 32;
      *(_DWORD *)(a2 + 12) = v7;
      *(_QWORD *)(a2 + 16) = v15 + v8;
      if ( (unsigned int)sub_140259444(a2 + 24, 260, Source) )
      {
        sub_14024CFBC(0, 0, 0, 0, 0);
        JUMPOUT(0x140238C70LL);
      }
    }
  }
  else
  {
    *errno() = 22;
    sub_14024CF6C(v3);
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&v9 ^ v17);
}

