/* Address: 0x1400a3970 | Name: sub_1400A3970 | Size: 1024 bytes */
__int64 __fastcall sub_1400A3970(__int64 a1, __int64 a2)
{
  unsigned int v2; // eax
  int v3; // ebx
  unsigned int v4; // edi
  __int64 v5; // r8
  float v6; // xmm2_4
  __int64 v7; // rcx
  float v8; // xmm1_4
  float v9; // xmm0_4
  float v10; // xmm2_4
  __int64 v11; // rcx
  float v12; // xmm1_4
  float v13; // xmm0_4
  unsigned __int8 v14; // al
  unsigned int v15; // ecx
  int v16; // r9d
  char v17; // al
  __int64 v19; // [rsp+0h] [rbp-58h] BYREF
  __int128 v20; // [rsp+20h] [rbp-38h] BYREF
  __int128 v21; // [rsp+30h] [rbp-28h]
  float v22; // [rsp+40h] [rbp-18h]
  __int64 v23; // [rsp+48h] [rbp-10h]

  if ( HIBYTE(dword_140404A6C[284024769]) && !HIBYTE(dword_140404A6C[284024641]) )
    dword_140404A6C[283831479] ^= 1u;
  if ( BYTE2(dword_140404A6C[284024769]) )
  {
    v2 = dword_140404A6C[283831480];
    if ( !BYTE2(dword_140404A6C[284024641]) )
      v2 = 1;
    dword_140404A6C[283831480] = v2;
  }
  if ( LOBYTE(dword_140404A6C[284024768]) && !LOBYTE(dword_140404A6C[284024640]) )
    dword_140404A6C[283831481] ^= 1u;
  v3 = dword_140404A6C[284021982];
  if ( BYTE1(dword_140404A6C[284024778]) )
    v3 = -1;
  dword_140404A6C[284021982] = v3;
  if ( BYTE2(dword_140404A6C[284024772]) )
  {
    v3 = -1;
    dword_140404A6C[19065878] = 1;
    dword_140404A6C[284021982] = -1;
    v4 = 1;
  }
  else
  {
    v4 = dword_140404A6C[19065878];
  }
  v5 = *(_QWORD *)((char *)&dword_140404A6C[284024821] + 1);
  if ( HIBYTE(dword_140404A6C[284024772]) )
  {
    v4 = 2;
    dword_140404A6C[19065878] = 2;
    if ( BYTE1(dword_140404A6C[284024821]) )
    {
      dword_140404A6C[284024395] = dword_140404A6C[284024388];
      dword_140404A6C[284024396] = dword_140404A6C[284024389];
      dword_140404A6C[284024397] = dword_140404A6C[284024390];
      v20 = xmmword_140278D30;
      v22 = 1.0;
      v21 = xmmword_140278D30;
      sub_14007B2A0((__int64)&v20, (float *)&v20 + 3);
      sub_14007B2A0((__int64)&v20, (float *)&v20);
      v6 = *(float *)&dword_140404A6C[284024393];
      v4 = dword_140404A6C[19065878];
      v5 = *(_QWORD *)((char *)&dword_140404A6C[284024821] + 1);
      v3 = dword_140404A6C[284021982];
      v7 = 7LL * (int)dword_140404A6C[19065878];
      v8 = *((float *)&v21 + 3) * *(float *)&dword_140404A6C[284024393];
      *(float *)&dword_140404A6C[v7 + 284024381] = (float)(*((float *)&v21 + 2) * *(float *)&dword_140404A6C[284024393])
                                                 + *(float *)&dword_140404A6C[v7 + 284024381];
      v9 = v22 * v6;
      *(float *)&dword_140404A6C[v7 + 284024382] = v8 + *(float *)&dword_140404A6C[v7 + 284024382];
      *(float *)&dword_140404A6C[v7 + 284024383] = v9 + *(float *)&dword_140404A6C[v7 + 284024383];
      dword_140404A6C[v7 + 284024384] = dword_140404A6C[284024391];
      dword_140404A6C[v7 + 284024385] = dword_140404A6C[284024392];
    }
  }
  if ( LOBYTE(dword_140404A6C[284024773]) )
  {
    v4 = 3;
    dword_140404A6C[19065878] = 3;
    if ( (_BYTE)v5 )
    {
      dword_140404A6C[284024402] = dword_140404A6C[284024388];
      dword_140404A6C[284024403] = dword_140404A6C[284024389];
      dword_140404A6C[284024404] = dword_140404A6C[284024390];
      v20 = xmmword_140278D30;
      v22 = 1.0;
      v21 = xmmword_140278D30;
      sub_14007B2A0((__int64)&v20, (float *)&v20 + 3);
      sub_14007B2A0((__int64)&v20, (float *)&v20);
      v10 = *(float *)&dword_140404A6C[284024393];
      v4 = dword_140404A6C[19065878];
      v5 = *(_QWORD *)((char *)&dword_140404A6C[284024821] + 1);
      v3 = dword_140404A6C[284021982];
      v11 = 7LL * (int)dword_140404A6C[19065878];
      v12 = *((float *)&v21 + 3) * *(float *)&dword_140404A6C[284024393];
      *(float *)&dword_140404A6C[v11 + 284024381] = (float)(*((float *)&v21 + 2) * *(float *)&dword_140404A6C[284024393])
                                                  + *(float *)&dword_140404A6C[v11 + 284024381];
      v13 = v22 * v10;
      *(float *)&dword_140404A6C[v11 + 284024382] = v12 + *(float *)&dword_140404A6C[v11 + 284024382];
      *(float *)&dword_140404A6C[v11 + 284024383] = v13 + *(float *)&dword_140404A6C[v11 + 284024383];
      dword_140404A6C[v11 + 284024384] = dword_140404A6C[284024391];
      dword_140404A6C[v11 + 284024385] = dword_140404A6C[284024392];
    }
  }
  if ( LOBYTE(dword_140404A6C[284024776]) && !LOBYTE(dword_140404A6C[284024648]) )
  {
    v14 = v3;
    if ( v3 >= 0 )
    {
      LOBYTE(v15) = v3 + 1;
      if ( (_BYTE)v5 )
        LOBYTE(v15) = v3 - 1;
    }
    else
    {
      LOBYTE(v15) = 0;
      v14 = -1;
    }
    v15 = (unsigned __int8)v15;
    v16 = v14;
    while ( 1 )
    {
      a2 = 7166LL * v15;
      if ( dword_140404A6C[a2 + 280651303] )
      {
        if ( (int)dword_140404A6C[a2 + 280651318] > 0 && dword_140404A6C[a2 + 280658438] <= 2 )
          break;
      }
      v17 = 1;
      if ( (_BYTE)v5 )
        v17 = -1;
      v15 = (unsigned __int8)(v15 + v17);
      if ( v15 == v16 )
        goto LABEL_37;
    }
    v3 = v15;
    dword_140404A6C[284021982] = v15;
  }
LABEL_37:
  if ( v4 == 1 )
  {
    sub_140105180(1);
  }
  else
  {
    sub_140105470(v4, a2 * 4, v5);
    if ( v3 != -1 )
      sub_14002EDF0(v4);
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&v19 ^ v23);
}

