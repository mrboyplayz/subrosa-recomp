/* Address: 0x14017f5b0 | Name: sub_14017F5B0 | Size: 357 bytes */
__int64 __fastcall sub_14017F5B0(__int64 a1)
{
  __int64 v1; // r8
  int v3; // r10d
  unsigned __int8 v4; // al
  __int64 result; // rax
  unsigned __int8 v6; // cl
  unsigned __int8 v7; // cl
  __int64 v8; // rcx
  int v9; // r8d
  int v10; // eax
  unsigned __int8 v11; // dl

  v1 = *(int *)(a1 + 8);
  v3 = *(_DWORD *)(a1 + 12);
  if ( (int)v1 < v3 )
  {
    v4 = *(_BYTE *)(v1 + *(_QWORD *)a1);
    LODWORD(v1) = v1 + 1;
    *(_DWORD *)(a1 + 8) = v1;
  }
  else
  {
    v4 = 0;
  }
  if ( (unsigned int)v4 - 32 <= 0xD6 )
    return (unsigned int)v4 - 139;
  if ( (unsigned int)v4 - 247 > 3 )
  {
    if ( (unsigned int)v4 - 251 > 3 )
    {
      if ( v4 == 28 )
      {
        if ( (int)v1 < v3 )
        {
          v8 = (int)v1;
          v9 = v1 + 1;
          v10 = *(unsigned __int8 *)(v8 + *(_QWORD *)a1);
          *(_DWORD *)(a1 + 8) = v9;
          if ( v9 < v3 )
          {
            v11 = *(_BYTE *)(v9 + *(_QWORD *)a1);
            *(_DWORD *)(a1 + 8) = v9 + 1;
            LODWORD(result) = v11 | (v10 << 8);
          }
          else
          {
            LODWORD(result) = v10 << 8;
          }
          return (unsigned int)result;
        }
        else
        {
          return 0;
        }
      }
      else if ( v4 == 29 )
      {
        return sub_14017F020(a1, 4u);
      }
      else
      {
        sub_14023E640(L"0", L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h", 1179);
        return 0;
      }
    }
    else if ( (int)v1 < v3 )
    {
      v7 = *(_BYTE *)((int)v1 + *(_QWORD *)a1);
      *(_DWORD *)(a1 + 8) = v1 + 1;
      return 64148 - (v4 << 8) - (unsigned int)v7;
    }
    else
    {
      return 64148 - (v4 << 8);
    }
  }
  else if ( (int)v1 < v3 )
  {
    v6 = *(_BYTE *)((int)v1 + *(_QWORD *)a1);
    *(_DWORD *)(a1 + 8) = v1 + 1;
    return (v4 << 8) + (unsigned int)v6 - 63124;
  }
  else
  {
    return (v4 << 8) - 63124;
  }
}

