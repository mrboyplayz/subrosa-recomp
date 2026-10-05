/* Address: 0x140264e74 | Name: __acrt_DownlevelLCIDToLocaleName | Size: 244 bytes */
__int64 __fastcall _acrt_DownlevelLCIDToLocaleName(int a1, _WORD *a2, int a3)
{
  __int64 v3; // rdi
  int v6; // r9d
  int v7; // r10d
  int v8; // eax
  __int64 v9; // rcx
  int v10; // edx
  int v11; // ecx
  int v12; // eax
  __int64 v13; // rbp
  int v14; // eax
  int v15; // ebx

  v3 = a3;
  if ( ((a1 & 0xFFFFF3FF) != 0 || a1 == 3072) && (a2 || (int)v3 <= 0) && (int)v3 >= 0 )
  {
    v6 = 0;
    v7 = 227;
    while ( 1 )
    {
      v8 = (v7 + v6) / 2;
      v9 = 4LL * v8;
      v10 = a1 - dword_140290400[v9];
      if ( a1 == dword_140290400[v9] )
        break;
      v11 = v8 - 1;
      if ( v10 >= 0 )
        v11 = v7;
      v12 = v8 + 1;
      v7 = v11;
      if ( v10 >= 0 )
        v6 = v12;
      if ( v6 > v11 )
      {
        v8 = -1;
        break;
      }
    }
    if ( v8 >= 0 )
    {
      v13 = *(_QWORD *)&dword_140290400[4 * v8 + 2];
      v14 = MEMORY[0x140254F48](v13, 85);
      v15 = v14;
      if ( (int)v3 <= 0 )
        return (unsigned int)(v15 + 1);
      if ( v14 < (int)v3 )
      {
        if ( (unsigned int)sub_140259444(a2, v3, v13) )
        {
          sub_14024CFBC();
          __debugbreak();
        }
        return (unsigned int)(v15 + 1);
      }
    }
  }
  return 0;
}

