/* Address: 0x140265e90 | Name: ?decode_options@@YA?AUfile_options@?A0xa9d50aae@@HHH@Z | Size: 522 bytes */
__int64 __fastcall decode_options(__int64 a1, int a2, int a3, char a4)
{
  int v8; // esi
  int v9; // ecx
  int v10; // eax
  int v11; // eax
  int v12; // ebp
  int v13; // ebp
  int v14; // ebp
  int v15; // ebp
  int v17; // [rsp+58h] [rbp+10h] BYREF

  *(_BYTE *)a1 = 0;
  v8 = -1;
  if ( (a2 & 3) != 0 )
  {
    if ( (a2 & 3) == 1 )
    {
      v9 = (a2 & 8) != 0 && (a2 & 0x70000) != 0 ? -1073741824 : 0x40000000;
    }
    else if ( (a2 & 3) == 2 )
    {
      v9 = -1073741824;
    }
    else
    {
      *errno() = 22;
      sub_14024CF6C();
      v9 = -1;
    }
  }
  else
  {
    v9 = 0x80000000;
  }
  *(_DWORD *)(a1 + 4) = v9;
  v10 = a2 & 0x700;
  if ( (a2 & 0x700) != 0 )
  {
    switch ( v10 )
    {
      case 256:
        v11 = 4;
        goto LABEL_22;
      case 512:
LABEL_19:
        v11 = 5;
        goto LABEL_22;
      case 768:
        v11 = 2;
        goto LABEL_22;
    }
    if ( v10 != 1024 )
    {
      if ( v10 == 1280 )
      {
LABEL_17:
        v11 = 1;
        goto LABEL_22;
      }
      if ( v10 != 1536 )
      {
        if ( v10 != 1792 )
        {
          *errno() = 22;
          sub_14024CF6C();
          v9 = *(_DWORD *)(a1 + 4);
          v11 = -1;
          goto LABEL_22;
        }
        goto LABEL_17;
      }
      goto LABEL_19;
    }
  }
  v11 = 3;
LABEL_22:
  *(_DWORD *)(a1 + 8) = v11;
  v12 = a3 - 16;
  if ( v12 )
  {
    v13 = v12 - 16;
    if ( v13 )
    {
      v14 = v13 - 16;
      if ( v14 )
      {
        v15 = v14 - 16;
        if ( v15 )
        {
          if ( v15 == 64 )
          {
            v8 = v9 == 0x80000000;
          }
          else
          {
            *errno() = 22;
            sub_14024CF6C();
          }
        }
        else
        {
          v8 = 3;
        }
      }
      else
      {
        v8 = 2;
      }
    }
    else
    {
      v8 = 1;
    }
  }
  else
  {
    v8 = 0;
  }
  *(_DWORD *)(a1 + 20) = 0;
  *(_DWORD *)(a1 + 12) = v8;
  *(_DWORD *)(a1 + 16) = 128;
  if ( (a2 & 0x80u) != 0 )
    *(_BYTE *)a1 |= 0x10u;
  if ( (a2 & 0x8000) == 0 )
  {
    if ( (a2 & 0x74000) != 0 )
      goto LABEL_39;
    if ( (unsigned int)sub_140247AA8(&v17) )
    {
      sub_14024CFBC();
      JUMPOUT(0x140266099LL);
    }
    if ( v17 != 0x8000 )
LABEL_39:
      *(_BYTE *)a1 |= 0x80u;
  }
  if ( (a2 & 0x100) != 0 && (a4 & ~LOBYTE(dword_140404A6C[19065861]) & 0x80u) == 0 )
    *(_DWORD *)(a1 + 16) = 1;
  if ( (a2 & 0x40) != 0 )
  {
    *(_DWORD *)(a1 + 20) |= 0x4000000u;
    *(_DWORD *)(a1 + 4) |= 0x10000u;
    *(_DWORD *)(a1 + 12) |= 4u;
  }
  if ( (a2 & 0x1000) != 0 )
    *(_DWORD *)(a1 + 16) |= 0x100u;
  if ( (a2 & 0x2000) != 0 )
    *(_DWORD *)(a1 + 20) |= 0x2000000u;
  if ( (a2 & 0x20) != 0 )
  {
    *(_DWORD *)(a1 + 20) |= 0x8000000u;
  }
  else if ( (a2 & 0x10) != 0 )
  {
    *(_DWORD *)(a1 + 20) |= 0x10000000u;
  }
  return a1;
}

