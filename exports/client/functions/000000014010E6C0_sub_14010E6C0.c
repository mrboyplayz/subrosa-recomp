/* Address: 0x14010e6c0 | Name: sub_14010E6C0 | Size: 742 bytes */
__int64 __fastcall sub_14010E6C0(_DWORD *a1, int a2, int a3, unsigned int a4)
{
  int v6; // ebx
  __int64 result; // rax
  char v8; // r8
  signed int v9; // r9d
  unsigned int v10; // r10d
  unsigned int v11; // ecx
  signed int v12; // r9d
  unsigned int v13; // ebx
  unsigned int v14; // ecx
  signed int v15; // r8d
  char v16; // r9
  unsigned int v17; // ebx
  unsigned int v18; // ecx
  int v19; // [rsp+40h] [rbp+18h] BYREF

  if ( !a3 )
    goto LABEL_27;
  v6 = *a1 - a2;
  if ( (unsigned int)(v6 + 8) <= 0xF )
  {
    result = dword_140404A6C[289301092];
    v8 = dword_140404A6C[289301093];
    v9 = 1;
    if ( (int)dword_140404A6C[289301092] < 0x10000 )
    {
      v10 = 0;
      while ( 1 )
      {
        *((_BYTE *)&dword_140404A6C[289301094] + (int)result) &= ~(((1 << v9) - 1) << v8);
        *((_BYTE *)&dword_140404A6C[289301094] + (int)dword_140404A6C[289301092]) |= (_BYTE)v10 << SLOBYTE(dword_140404A6C[289301093]);
        v11 = 8 - dword_140404A6C[289301093];
        result = dword_140404A6C[289301092];
        if ( v9 < 8 - dword_140404A6C[289301093] )
          break;
        v8 = 0;
        dword_140404A6C[289301093] = 0;
        if ( v9 == v11 )
        {
          result = ++dword_140404A6C[289301092];
          goto LABEL_11;
        }
        result = dword_140404A6C[289301092] + 1;
        v10 >>= v11;
        v9 -= v11;
        ++dword_140404A6C[289301092];
        if ( v9 <= 0 )
          goto LABEL_11;
      }
      v8 = v9 + LOBYTE(dword_140404A6C[289301093]);
      dword_140404A6C[289301093] += v9;
    }
LABEL_11:
    v12 = 4;
    if ( (int)result < 0x10000 )
    {
      v13 = v6 & 0xF;
      while ( 1 )
      {
        *((_BYTE *)&dword_140404A6C[289301094] + (int)result) &= ~(((1 << v12) - 1) << v8);
        *((_BYTE *)&dword_140404A6C[289301094] + (int)dword_140404A6C[289301092]) |= (_BYTE)v13 << SLOBYTE(dword_140404A6C[289301093]);
        result = dword_140404A6C[289301093];
        v14 = 8 - dword_140404A6C[289301093];
        if ( v12 < 8 - dword_140404A6C[289301093] )
          break;
        dword_140404A6C[289301093] = 0;
        if ( v12 == v14 )
          goto LABEL_25;
        v12 -= v14;
        result = dword_140404A6C[289301092] + 1;
        v13 >>= v14;
        ++dword_140404A6C[289301092];
        v8 = 0;
        if ( v12 <= 0 )
          return result;
      }
      result = v12 + dword_140404A6C[289301093];
      dword_140404A6C[289301093] += v12;
    }
    return result;
  }
  if ( (unsigned int)(v6 + 256) > 0x1FF )
  {
LABEL_27:
    v19 = 1;
    sub_140115D90(&v19, 1);
    sub_140115D90(&v19, 1);
    return sub_140115D90(a1, a4);
  }
  v19 = 1;
  sub_140115D90(&v19, 1);
  v19 = 0;
  sub_140115D90(&v19, 1);
  result = dword_140404A6C[289301092];
  v15 = 9;
  if ( (int)dword_140404A6C[289301092] < 0x10000 )
  {
    v16 = dword_140404A6C[289301093];
    v17 = v6 & 0x1FF;
    while ( 1 )
    {
      *((_BYTE *)&dword_140404A6C[289301094] + (int)result) &= ~(((1 << v15) - 1) << v16);
      *((_BYTE *)&dword_140404A6C[289301094] + (int)dword_140404A6C[289301092]) |= (_BYTE)v17 << SLOBYTE(dword_140404A6C[289301093]);
      result = dword_140404A6C[289301093];
      v18 = 8 - dword_140404A6C[289301093];
      if ( v15 < 8 - dword_140404A6C[289301093] )
        break;
      dword_140404A6C[289301093] = 0;
      if ( v15 == v18 )
      {
LABEL_25:
        ++dword_140404A6C[289301092];
        return result;
      }
      v15 -= v18;
      result = dword_140404A6C[289301092] + 1;
      v17 >>= v18;
      ++dword_140404A6C[289301092];
      v16 = 0;
      if ( v15 <= 0 )
        return result;
    }
    result = v15 + dword_140404A6C[289301093];
    dword_140404A6C[289301093] += v15;
  }
  return result;
}

