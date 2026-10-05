/* Address: 0x14004c0f0 | Name: sub_14004C0F0 | Size: 616 bytes */
void __fastcall sub_14004C0F0(int a1)
{
  __int64 v2; // r10
  int v3; // eax
  __int64 v4; // r9
  int *v5; // r8
  __int64 v6; // rax
  int *v7; // rax
  __int64 v8; // rcx
  _DWORD *v9; // rax
  int v10; // eax
  __int64 v11; // r9
  int *v12; // r8
  __int64 v13; // rax
  __int64 v14; // rax
  int *v15; // rax
  int *v16; // r8
  int v17; // r9d
  int v18; // eax
  __int64 v19; // rcx
  int v20; // xmm0_4
  int v21; // xmm1_4
  int v22; // xmm2_4

  if ( (unsigned int)a1 <= 0x1FF )
  {
    v2 = 5210LL * a1;
    v3 = *(_DWORD *)((char *)&unk_16E6A3D4C + v2 * 4);
    if ( v3 > 0 )
    {
      v4 = (unsigned int)v3;
      v5 = &dword_16E6A3D50[v2];
      do
      {
        v6 = *v5++;
        *((_DWORD *)&unk_16E18CAE4 + 60 * v6) = 0;
        --v4;
      }
      while ( v4 );
    }
    v7 = dword_1909419F0;
    do
    {
      if ( *(v7 - 10) && *v7 == a1 )
        *v7 = -1;
      if ( v7[7156] && v7[7166] == a1 )
        v7[7166] = -1;
      if ( v7[14322] && v7[14332] == a1 )
        v7[14332] = -1;
      if ( v7[21488] && v7[21498] == a1 )
        v7[21498] = -1;
      v7 += 28664;
    }
    while ( (__int64)v7 < (__int64)dword_1910411F0 );
    v8 = (unsigned int)dword_16D67C580;
    if ( dword_16D67C580 > 0 )
    {
      v9 = &unk_16D4FD588;
      do
      {
        if ( *v9 == a1 )
          *v9 = -1;
        v9 += 383;
        --v8;
      }
      while ( v8 );
    }
    v10 = dword_16E6A75A0[v2];
    dword_16E6A3C60[v2] = 0;
    if ( v10 > 0 )
    {
      v11 = (unsigned int)v10;
      v12 = (int *)((char *)&unk_16E6A75A4 + v2 * 4);
      do
      {
        v13 = *v12;
        if ( (unsigned int)v13 < 0x2000 )
          *((_DWORD *)&unk_140249600 + 47 * v13) = 0;
        v12 += 43;
        --v11;
      }
      while ( v11 );
    }
    v14 = dword_16E6A3C88[v2];
    if ( (unsigned int)v14 < 0x2000 )
      *((_DWORD *)&unk_140249600 + 47 * v14) = 0;
    v15 = dword_19025F0D4;
    do
    {
      if ( *(v15 - 5) && *v15 == 27 && v15[155] == a1 )
      {
        v15[2] = 0;
        v15[155] = -1;
      }
      v15 += 1760;
    }
    while ( (__int64)v15 < (__int64)dword_19093F0D4 );
    v16 = &dword_16E6A3C8C[v2];
    if ( dword_163D75B60 )
    {
      v17 = dword_196199564;
      v18 = dword_191541414;
      v19 = (__int64)dword_196199564 << 7;
      *(_DWORD *)((char *)&unk_195999560 + v19) = 4;
      *(_DWORD *)((char *)&unk_195999564 + v19) = v18;
      *(int *)((char *)&dword_195999580 + v19) = a1;
      *(_QWORD *)((char *)&dword_195999584 + v19) = 3;
      if ( v16 )
      {
        v20 = v16[2];
        v21 = v16[1];
        v22 = *v16;
      }
      else
      {
        v20 = 0;
        v21 = 0;
        v22 = 0;
      }
      *(_DWORD *)((char *)&qword_195999568 + v19) = v22;
      *(_DWORD *)((char *)&qword_195999568 + v19 + 4) = v21;
      *(int *)((char *)&dword_195999570 + v19) = v20;
      dword_196199564 = v17 + 1;
      HIWORD(dword_196199564) = 0;
      *(__int64 *)((char *)&qword_195999574 + v19) = 0;
      *(int *)((char *)&dword_19599957C + v19) = 0;
    }
  }
}

