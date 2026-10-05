/* Address: 0x140127630 | Name: sub_140127630 | Size: 710 bytes */
__int64 sub_140127630()
{
  unsigned int v0; // ebx
  signed int v1; // eax
  __int128 v2; // xmm1
  int v3; // edi
  signed int v4; // r8d
  __int64 v5; // rbx
  signed int v6; // eax
  char v7; // r9
  unsigned int v8; // r10d
  unsigned int v9; // ecx
  __int64 result; // rax

  v0 = dword_140404A6C[19065873];
  if ( !dword_140404A6C[19065873] )
  {
    *(_QWORD *)&dword_140404A6C[289301092] = 1;
    LOBYTE(dword_140404A6C[289301094]) = 6;
    sub_140115D90(&dword_140404A6C[283831312], 4);
    v1 = dword_140404A6C[289301092];
    if ( (int)dword_140404A6C[289301092] < 0x10000 )
    {
      if ( (int)dword_140404A6C[289301093] > 0 )
      {
        v1 = dword_140404A6C[289301092] + 1;
        dword_140404A6C[289301093] = 0;
        ++dword_140404A6C[289301092];
      }
      v2 = *(_OWORD *)&dword_140404A6C[283831317];
      *(_OWORD *)((char *)&dword_140404A6C[289301094] + v1) = *(_OWORD *)&dword_140404A6C[283831313];
      *(_OWORD *)((char *)&dword_140404A6C[289301098] + v1) = v2;
      v1 = dword_140404A6C[289301092] + 32;
    }
    dword_140404A6C[289301092] = v1 + 1;
    if ( v1 + 1 < dword_140404A6C[19065869] )
    {
      MEMORY[0x1401FC920](*(_QWORD *)&dword_140404A6C[19065875], &dword_140404A6C[289301094]);
      v0 = dword_140404A6C[289301092] + dword_140404A6C[19065873];
      dword_140404A6C[19065873] += dword_140404A6C[289301092];
    }
    dword_140404A6C[19065874] = v0;
  }
  *(_QWORD *)&dword_140404A6C[289301092] = 1;
  LOBYTE(dword_140404A6C[289301094]) = 5;
  sub_140115D90(&dword_140404A6C[283831448], 4);
  sub_140115D90(&dword_140404A6C[283831450], 24);
  sub_140115D90(&dword_140404A6C[179992853], 30);
  *(_QWORD *)&dword_140404A6C[450962141] = 0;
  dword_140404A6C[450962143] = 0;
  sub_140110D00(255, -1);
  dword_140404A6C[450929546] = dword_140404A6C[456202728];
  sub_140106160(255);
  v3 = dword_140404A6C[19065872];
  v4 = 16;
  dword_140404A6C[450976488] = dword_140404A6C[450976486];
  v5 = dword_140404A6C[308307070] - dword_140404A6C[19065872] + 0x10000;
  v6 = dword_140404A6C[289301092];
  if ( (int)dword_140404A6C[308307070] >= (int)dword_140404A6C[19065872] )
    v5 = dword_140404A6C[308307070] - dword_140404A6C[19065872];
  if ( (int)dword_140404A6C[289301092] < 0x10000 )
  {
    v7 = dword_140404A6C[289301093];
    v8 = (unsigned __int16)v5;
    while ( 1 )
    {
      *((_BYTE *)&dword_140404A6C[289301094] + v6) &= ~(((1 << v4) - 1) << v7);
      *((_BYTE *)&dword_140404A6C[289301094] + (int)dword_140404A6C[289301092]) |= (_BYTE)v8 << SLOBYTE(dword_140404A6C[289301093]);
      v9 = 8 - dword_140404A6C[289301093];
      if ( v4 < 8 - dword_140404A6C[289301093] )
        break;
      dword_140404A6C[289301093] = 0;
      if ( v4 == v9 )
      {
        ++dword_140404A6C[289301092];
        goto LABEL_19;
      }
      v4 -= v9;
      v6 = dword_140404A6C[289301092] + 1;
      v8 >>= v9;
      ++dword_140404A6C[289301092];
      v7 = 0;
      if ( v4 <= 0 )
        goto LABEL_19;
    }
    dword_140404A6C[289301093] += v4;
  }
LABEL_19:
  sub_140115D90(&dword_140404A6C[19065872], 16);
  if ( (int)v5 > 0 )
  {
    while ( 1 )
    {
      sub_14010EFF0(v3, 255);
      ++dword_140404A6C[19065872];
      HIWORD(dword_140404A6C[19065872]) = 0;
      if ( !--v5 )
        break;
      v3 = dword_140404A6C[19065872];
    }
  }
  result = ++dword_140404A6C[289301092] + dword_140404A6C[19065873];
  if ( (unsigned int)result >= dword_140404A6C[19065869] )
  {
    dword_140404A6C[19065874] = dword_140404A6C[19065873];
  }
  else
  {
    MEMORY[0x1401FC920](
      *(_QWORD *)&dword_140404A6C[19065875] + (int)dword_140404A6C[19065873],
      &dword_140404A6C[289301094]);
    result = dword_140404A6C[289301092] + dword_140404A6C[19065873];
    dword_140404A6C[19065873] = result;
    dword_140404A6C[19065874] = result;
  }
  return result;
}

