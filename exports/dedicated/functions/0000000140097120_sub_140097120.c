/* Address: 0x140097120 | Name: sub_140097120 | Size: 971 bytes */
__int64 __fastcall sub_140097120(int a1, int a2)
{
  int v2; // r15d
  float *v3; // r13
  __int64 v4; // r9
  char *v5; // rcx
  __int64 v6; // r10
  int v7; // eax
  __int64 v8; // rdx
  int v9; // r12d
  char *v10; // rbx
  __int64 v11; // rax
  char *v12; // rbp
  int v13; // r14d
  int v14; // esi
  int *v15; // rdi
  unsigned int v16; // eax
  int v17; // ecx
  int v18; // ecx
  int v19; // eax
  int v20; // esi
  float *v21; // r12
  float v22; // xmm0_4
  int v23; // edi
  int *v24; // rbx
  int v25; // ecx
  __int64 v27; // [rsp+20h] [rbp-A8h]
  int v29; // [rsp+D8h] [rbp+10h]
  char *v30; // [rsp+E0h] [rbp+18h]
  __int64 v31; // [rsp+E8h] [rbp+20h]

  v2 = 0;
  v3 = dword_1961996A4;
  v4 = a1;
  v5 = (char *)&unk_1915415E4;
  v30 = (char *)&unk_1915415E4;
  v6 = -(__int64)&unk_1915415E4;
  v27 = -(__int64)&unk_1915415E4;
  v7 = *((_DWORD *)&unk_1915415E4 + 5873 * v4 + 279 * a2);
  v8 = 23492 * v4 + 56;
  v31 = v8;
  v29 = v7;
  do
  {
    v9 = 0;
    v10 = v5;
    do
    {
      if ( !*((_DWORD *)v10 - 2) || *((_DWORD *)v10 - 1) || *(_DWORD *)v10 != v7 )
        goto LABEL_37;
      v11 = *((int *)v10 + 2);
      if ( (unsigned int)v11 <= 0x3FF )
      {
        dword_19025F0DC[1760 * v11] = 0;
        v5 = v30;
      }
      *((_DWORD *)v10 - 1) = 1;
      if ( v2 == (_DWORD)v4 )
      {
        v12 = &v5[v6];
        v13 = dword_19154118C;
        v14 = 0;
        v15 = dword_16D67D5EC;
        *v3 = (float)(*((float *)v10 + 19) + 1.0) * *v3;
        do
        {
          if ( *(v15 - 19) )
          {
            if ( v15[14] == v2 )
            {
              *v15 += *(_DWORD *)&v12[(_QWORD)v10 + 56];
              if ( v13 == 3 )
                sub_14003A560(v14);
            }
          }
          ++v14;
          v15 += 3597;
        }
        while ( v14 < 256 );
        if ( *((_DWORD *)v10 + 1) <= 1u )
          *(_OWORD *)(v10 + 84) = xmmword_1400F5C20;
        else
          *(_OWORD *)(v10 + 84) = xmmword_1400F5C38;
        strcpy(v10 + 100, "ccess");
        goto LABEL_26;
      }
      if ( *(int *)&v10[v8] > 0 )
      {
        v16 = *((_DWORD *)v10 + 1);
        *v3 = (float)(*((float *)v10 + 20) + 1.0) * *v3;
        if ( v16 <= 1 )
        {
          qmemcpy(v10 + 84, "Acquisition:  Failed", 20);
        }
        else
        {
          if ( v16 == 2 )
          {
            strcpy(v10 + 84, "Transaction:  Success");
LABEL_26:
            sub_14003A1E0(v2, v9);
            LODWORD(v4) = a1;
            v8 = v31;
            v6 = v27;
            goto LABEL_27;
          }
          qmemcpy(v10 + 84, "Transaction:  Failed", 20);
        }
        v10[104] = 0;
        goto LABEL_26;
      }
LABEL_27:
      v17 = *((_DWORD *)v10 + 17);
      if ( v17 > 0 )
      {
        if ( v2 == (_DWORD)v4 && v17 > *((_DWORD *)v10 + 18) )
          v17 = *((_DWORD *)v10 + 18);
        v18 = v17 - *((_DWORD *)v3 + 4);
        v19 = *((_DWORD *)v3 - 1);
        if ( v18 < 0 )
          v18 = 0;
        v3[4] = 0.0;
        if ( v19 > 0 )
          *v3 = *v3 - (float)((float)v18 / (float)v19);
        *((_DWORD *)v10 + 17) = 0;
      }
      v7 = v29;
      v5 = v30;
LABEL_37:
      ++v9;
      v10 += 1116;
    }
    while ( v9 < 16 );
    v8 -= 23492;
    v5 += 23492;
    v6 -= 23492;
    v31 = v8;
    ++v2;
    v30 = v5;
    v3 += 6;
    v27 = v6;
  }
  while ( v2 < 6 );
  v20 = 0;
  v21 = dword_1961996A4;
  do
  {
    v22 = *v21;
    if ( *v21 >= 10.0 )
    {
      if ( v22 > 500.0 )
      {
        v23 = 0;
        v24 = dword_16D67D62C;
        *v21 = v22 * 0.2;
        do
        {
          if ( *(v24 - 35) && *(v24 - 2) == v20 )
          {
            v25 = *v24;
            *((_DWORD *)v21 - 1) += 4 * *v24;
            *v24 = 5 * v25;
            sub_14003A560(v23);
          }
          ++v23;
          v24 += 3597;
        }
        while ( v23 < 256 );
      }
    }
    else
    {
      *v21 = 10.0;
    }
    ++v20;
    v21 += 6;
  }
  while ( v20 < 6 );
  return sub_14003A6A0();
}

