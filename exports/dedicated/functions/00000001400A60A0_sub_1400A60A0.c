/* Address: 0x1400a60a0 | Name: sub_1400A60A0 | Size: 694 bytes */
void sub_1400A60A0()
{
  __int64 v0; // r11
  int *v1; // r10
  int v2; // ebx
  int v3; // edi
  int i; // edx
  int v5; // ecx
  int v6; // eax
  int *v7; // r8
  __int64 v8; // r9
  __int64 v9; // rax
  int *v10; // rax
  _DWORD *v11; // rax
  __int64 v12; // rcx
  int v13; // eax
  int *v14; // r8
  __int64 v15; // r9
  __int64 v16; // rax
  __int64 v17; // rax
  int *v18; // rax
  int v19; // ecx
  __int64 v20; // rax
  int v21; // xmm0_4
  int v22; // xmm1_4
  int v23; // xmm2_4

  v0 = (unsigned int)dword_16D67C580;
  v1 = (int *)&unk_16E6A3C7C;
  v2 = dword_163D75B60;
  v3 = dword_191541414;
  for ( i = 0; i < 512; ++i )
  {
    if ( *(v1 - 7) )
    {
      v5 = *v1;
      if ( *v1 < 0xFFFF )
        *v1 = --v5;
      if ( v5 <= 0 && (unsigned int)i <= 0x1FF )
      {
        v6 = v1[52];
        if ( v6 > 0 )
        {
          v7 = v1 + 53;
          v8 = (unsigned int)v6;
          do
          {
            v9 = *v7++;
            *((_DWORD *)&unk_16E18CAE4 + 60 * v9) = 0;
            --v8;
          }
          while ( v8 );
        }
        v10 = dword_1909419F0;
        do
        {
          if ( *(v10 - 10) && *v10 == i )
            *v10 = -1;
          if ( v10[7156] && v10[7166] == i )
            v10[7166] = -1;
          if ( v10[14322] && v10[14332] == i )
            v10[14332] = -1;
          if ( v10[21488] && v10[21498] == i )
            v10[21498] = -1;
          v10 += 28664;
        }
        while ( (__int64)v10 < (__int64)dword_1910411F0 );
        if ( (int)v0 > 0 )
        {
          v11 = &unk_16D4FD588;
          v12 = v0;
          do
          {
            if ( *v11 == i )
              *v11 = -1;
            v11 += 383;
            --v12;
          }
          while ( v12 );
        }
        v13 = v1[3657];
        *(v1 - 7) = 0;
        if ( v13 > 0 )
        {
          v14 = v1 + 3658;
          v15 = (unsigned int)v13;
          do
          {
            v16 = *v14;
            if ( (unsigned int)v16 < 0x2000 )
              *((_DWORD *)&unk_140249600 + 47 * v16) = 0;
            v14 += 43;
            --v15;
          }
          while ( v15 );
        }
        v17 = v1[3];
        if ( (unsigned int)v17 < 0x2000 )
          *((_DWORD *)&unk_140249600 + 47 * v17) = 0;
        v18 = dword_19025F0D4;
        do
        {
          if ( *(v18 - 5) && *v18 == 27 && v18[155] == i )
          {
            v18[2] = 0;
            v18[155] = -1;
          }
          v18 += 1760;
        }
        while ( (__int64)v18 < (__int64)dword_19093F0D4 );
        if ( v2 )
        {
          v19 = dword_196199564;
          v20 = (__int64)dword_196199564 << 7;
          *(_DWORD *)((char *)&unk_195999560 + v20) = 4;
          *(_DWORD *)((char *)&unk_195999564 + v20) = v3;
          *(int *)((char *)&dword_195999580 + v20) = i;
          *(_QWORD *)((char *)&dword_195999584 + v20) = 3;
          if ( v1 == (int *)-16LL )
          {
            v21 = 0;
            v22 = 0;
            v23 = 0;
          }
          else
          {
            v21 = v1[6];
            v22 = v1[5];
            v23 = v1[4];
          }
          *(_DWORD *)((char *)&qword_195999568 + v20) = v23;
          *(_DWORD *)((char *)&qword_195999568 + v20 + 4) = v22;
          *(int *)((char *)&dword_195999570 + v20) = v21;
          dword_196199564 = v19 + 1;
          HIWORD(dword_196199564) = 0;
          *(__int64 *)((char *)&qword_195999574 + v20) = 0;
          *(int *)((char *)&dword_19599957C + v20) = 0;
        }
      }
    }
    v1 += 5210;
  }
}

