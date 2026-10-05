/* Address: 0x14010e9b0 | Name: sub_14010E9B0 | Size: 630 bytes */
__int64 __fastcall sub_14010E9B0(_DWORD *a1, int a2, int a3, unsigned int a4)
{
  int v6; // r8d
  int v8; // r11d
  signed int v9; // edx
  unsigned int v10; // r9d
  signed int v11; // r8d
  unsigned int v12; // r10d
  unsigned int v13; // ecx
  signed int v14; // eax
  unsigned int v15; // r10d
  unsigned int v16; // ecx
  __int64 v17; // rdx
  _DWORD *v18; // rcx
  _DWORD v19[6]; // [rsp+20h] [rbp-18h] BYREF
  int v20; // [rsp+50h] [rbp+18h] BYREF

  if ( a3 )
  {
    v6 = *a1 - a2;
    v19[0] = v6;
    if ( dword_140404A6C[179992056] && !v6 )
    {
      v20 = 0;
      return sub_140115D90(&v20, 1);
    }
    if ( v6 >= (signed int)-dword_140404A6C[157679553] && v6 < (int)dword_140404A6C[157679553] )
    {
      v8 = 0;
      goto LABEL_11;
    }
    if ( v6 >= (signed int)-dword_140404A6C[157679554] )
    {
      v8 = 1;
      if ( v6 < (int)dword_140404A6C[157679554] )
        goto LABEL_11;
    }
  }
  v8 = 2;
LABEL_11:
  v9 = dword_140404A6C[289301092];
  LOBYTE(v10) = dword_140404A6C[289301093];
  if ( dword_140404A6C[179992056] )
  {
    v11 = 1;
    if ( (int)dword_140404A6C[289301092] < 0x10000 )
    {
      v12 = 1;
      while ( 1 )
      {
        *((_BYTE *)&dword_140404A6C[289301094] + v9) &= ~(((1 << v11) - 1) << v10);
        *((_BYTE *)&dword_140404A6C[289301094] + (int)dword_140404A6C[289301092]) |= (_BYTE)v12 << SLOBYTE(dword_140404A6C[289301093]);
        v13 = 8 - dword_140404A6C[289301093];
        v9 = dword_140404A6C[289301092];
        if ( v11 < 8 - dword_140404A6C[289301093] )
          break;
        if ( v11 == v13 )
        {
          v9 = ++dword_140404A6C[289301092];
          v10 = 0;
          goto LABEL_20;
        }
        v9 = dword_140404A6C[289301092] + 1;
        v12 >>= v13;
        LOBYTE(v10) = 0;
        ++dword_140404A6C[289301092];
        v11 -= v13;
        dword_140404A6C[289301093] = 0;
        if ( v11 <= 0 )
          goto LABEL_21;
      }
      v10 = v11 + dword_140404A6C[289301093];
LABEL_20:
      dword_140404A6C[289301093] = v10;
    }
  }
LABEL_21:
  if ( v8 )
  {
    v20 = 1;
    if ( v8 == 1 )
    {
      sub_140115D90(&v20, 1);
      v20 = 0;
      sub_140115D90(&v20, 1);
      v17 = dword_140404A6C[157679550];
      v18 = v19;
    }
    else
    {
      sub_140115D90(&v20, 1);
      sub_140115D90(&v20, 1);
      v17 = a4;
      v18 = a1;
    }
  }
  else
  {
    v14 = 1;
    if ( v9 < 0x10000 )
    {
      v15 = 0;
      while ( 1 )
      {
        *((_BYTE *)&dword_140404A6C[289301094] + v9) &= ~(((1 << v14) - 1) << v10);
        *((_BYTE *)&dword_140404A6C[289301094] + (int)dword_140404A6C[289301092]) |= (_BYTE)v15 << SLOBYTE(dword_140404A6C[289301093]);
        v16 = 8 - dword_140404A6C[289301093];
        if ( v14 < 8 - dword_140404A6C[289301093] )
          break;
        if ( v14 == v16 )
        {
          ++dword_140404A6C[289301092];
          v18 = v19;
          v17 = dword_140404A6C[157679549];
          dword_140404A6C[289301093] = 0;
          return sub_140115D90(v18, v17);
        }
        LOBYTE(v10) = 0;
        v9 = dword_140404A6C[289301092] + 1;
        v15 >>= v16;
        v14 -= v16;
        ++dword_140404A6C[289301092];
        dword_140404A6C[289301093] = 0;
        if ( v14 <= 0 )
        {
          v17 = dword_140404A6C[157679549];
          v18 = v19;
          return sub_140115D90(v18, v17);
        }
      }
      dword_140404A6C[289301093] += v14;
    }
    v17 = dword_140404A6C[157679549];
    v18 = v19;
  }
  return sub_140115D90(v18, v17);
}

