/* Address: 0x1400fd300 | Name: sub_1400FD300 | Size: 2677 bytes */
__int64 sub_1400FD300()
{
  int v0; // eax
  __int64 v1; // rdx
  __int64 v2; // r9
  __int64 v3; // rcx
  int v4; // esi
  int v5; // edi
  __int64 v6; // r8
  unsigned int v7; // edx
  int v8; // eax
  __int64 v9; // rcx
  unsigned int v10; // ebx
  unsigned int v11; // r8d
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned int v17; // edi
  unsigned int v18; // eax
  __int64 v19; // rbx
  char v20; // r14
  signed int v21; // eax
  signed int v22; // ebx
  unsigned __int64 v23; // rcx
  unsigned int *v24; // r9
  int v25; // ebp
  int v26; // r15d
  __int64 v27; // rdx
  int v28; // r10d
  __int64 v29; // r8
  __int64 v30; // rax
  int v31; // edi
  __int64 v32; // rsi
  unsigned int *v33; // rbx
  unsigned int v34; // eax
  __int64 v35; // rcx
  __int64 v36; // rbx
  __int64 v37; // rdx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rcx
  __int64 v41; // rax
  __int64 v42; // rbx
  signed int v43; // ecx
  __int64 v44; // rax
  __int128 v45; // xmm0
  __int128 v46; // xmm1
  __int64 v47; // rdi
  __int64 v48; // rdx
  __int64 v49; // r8
  __int64 v50; // r9
  __int64 v51; // rcx
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rax
  int v55; // eax
  _DWORD *v56; // rbx
  __int64 v57; // rax
  __int64 v58; // rax
  unsigned int v59; // ecx
  __int64 v60; // rax
  __int64 v61; // rax
  __int64 v63; // [rsp+0h] [rbp-278h] BYREF
  char v64; // [rsp+20h] [rbp-258h]
  int v65; // [rsp+24h] [rbp-254h]
  _BYTE v66[512]; // [rsp+30h] [rbp-248h] BYREF
  __int64 v67; // [rsp+230h] [rbp-48h]

  dword_140404A6C[70087069] = 1126170624;
  dword_140404A6C[70087070] = 1101004800;
  dword_140404A6C[70087074] = 41;
  v0 = ui_button_candidate((__int64)"Back");
  v3 = dword_140404A6C[283831310];
  v4 = dword_140404A6C[179662127];
  v5 = 0;
  dword_140404A6C[70087069] = 1146880000;
  if ( v0 )
    v3 = 0;
  dword_140404A6C[283831310] = v3;
  dword_140404A6C[70087070] = 1105199104;
  dword_140404A6C[70087067] = 1082130432;
  dword_140404A6C[70087068] = 1113587712;
  do
  {
    v6 = (unsigned int)(v5 + 16 * v4);
    if ( (int)v6 < (int)dword_140404A6C[179662117] )
    {
      sub_140158AB0(v66, "Server %d", v6);
      v7 = dword_140404A6C[70087076];
      dword_140404A6C[70087080] = 0;
      dword_140404A6C[70087079] = v5 + 16 * dword_140404A6C[179662127];
      *(_QWORD *)&dword_140404A6C[70087081] = sub_1400CFC80;
      if ( dword_140404A6C[368 * dword_140404A6C[179662127] + 179473701 + 23 * v5] != dword_1402B231C )
        v7 = 1;
      dword_140404A6C[70087076] = v7;
      if ( (unsigned int)ui_button_candidate((__int64)v66) )
      {
        v8 = MEMORY[0x140198F9B](v3, v1, v6, v2);
        v4 = dword_140404A6C[179662127];
        dword_140404A6C[179662126] = v8 + 200;
        dword_140404A6C[179662129] = v5 + 16 * dword_140404A6C[179662127];
        v9 = 23LL * (v5 + 16 * dword_140404A6C[179662127]);
        v10 = dword_140404A6C[v9 + 179473723];
        v11 = dword_140404A6C[v9 + 179473712];
        dword_140404A6C[456202714] = dword_140404A6C[v9 + 179473713];
        LOWORD(dword_140404A6C[456202715]) = dword_140404A6C[v9 + 179473714];
        dword_140404A6C[456202719] = dword_140404A6C[v9 + 179473715];
        LOWORD(dword_140404A6C[456202720]) = dword_140404A6C[v9 + 179473716];
        dword_140404A6C[179662130] = v10;
        dword_140404A6C[284023066] = v11;
        sub_140050C80(&dword_140404A6C[284024493], &dword_140404A6C[284024494], v11);
        dword_140404A6C[283831310] = 2;
        *(_OWORD *)&dword_140404A6C[179662133] = 0;
        dword_140404A6C[179662132] = v10 == 0;
        *(_OWORD *)&dword_140404A6C[179662137] = 0;
        *(_OWORD *)&dword_140404A6C[179662141] = 0;
        *(_OWORD *)&dword_140404A6C[179662145] = 0;
      }
      else
      {
        v4 = dword_140404A6C[179662127];
      }
      *(float *)&dword_140404A6C[70087068] = *(float *)&dword_140404A6C[70087068] + -2.0;
    }
    ++v5;
  }
  while ( v5 < 16 );
  dword_140404A6C[70087069] = 1124073472;
  dword_140404A6C[70087067] = 1146945536;
  dword_140404A6C[70087070] = 1103101952;
  dword_140404A6C[70087068] = 1113587712;
  if ( v4 > 0 )
  {
    dword_140404A6C[70087074] = 75;
    v12 = ui_button_candidate((__int64)"Page Up");
    v4 = dword_140404A6C[179662127];
    if ( v12 )
      v4 = --dword_140404A6C[179662127];
  }
  dword_140404A6C[70087068] = 1140850688;
  if ( 16 * (v4 + 1) < (int)dword_140404A6C[179662117] )
  {
    dword_140404A6C[70087074] = 78;
    if ( (unsigned int)ui_button_candidate((__int64)"Page Down") )
      ++dword_140404A6C[179662127];
  }
  if ( dword_140404A6C[283831310] == 1 )
  {
    if ( !dword_140404A6C[179662131] )
      dword_140404A6C[179662131] = dword_140404A6C[179668277] == 2;
    if ( (unsigned int)MEMORY[0x140198F9B](v3, v1, v6, v2) - dword_140404A6C[179662126] <= 0xA )
    {
      v20 = v64;
    }
    else
    {
      v17 = MEMORY[0x140198F9B](v14, v13, v15, v16);
      dword_140404A6C[179662126] = v17;
      v18 = dword_140404A6C[179473694];
      if ( (int)dword_140404A6C[179473694] <= 0 )
      {
        v20 = v64;
      }
      else
      {
        v19 = (int)dword_140404A6C[179662128];
        if ( (int)dword_140404A6C[179662128] >= (int)dword_140404A6C[179473694] )
        {
          v20 = v64;
        }
        else
        {
          strcpy((char *)&dword_140404A6C[289301094], "7DFP");
          v20 = 0;
          *(_QWORD *)&dword_140404A6C[289301092] = 5;
          sub_140115D90(&dword_1402B231C, 8);
          v21 = dword_140404A6C[289301092];
          if ( (int)dword_140404A6C[289301092] < 0x10000 )
          {
            if ( (int)dword_140404A6C[289301093] > 0 )
            {
              v21 = dword_140404A6C[289301092] + 1;
              dword_140404A6C[289301093] = 0;
              ++dword_140404A6C[289301092];
            }
            *(unsigned int *)((char *)&dword_140404A6C[289301094] + v21) = v17;
            dword_140404A6C[289301092] += 4;
          }
          sub_140130350(dword_140404A6C[2 * v19 + 179457309], LOWORD(dword_140404A6C[2 * v19 + 179457310]), 0);
          v18 = dword_140404A6C[179473694];
          LODWORD(v19) = dword_140404A6C[179662128];
        }
        v22 = v19 + 1;
        if ( v22 >= (int)(v18 + 10) )
          v22 = 0;
        dword_140404A6C[179662128] = v22;
      }
      if ( dword_140404A6C[179662131] == 1 && dword_140404A6C[280649181] )
      {
        dword_140404A6C[289301094] = dword_1402B2658;
        *(_QWORD *)&dword_140404A6C[289301092] = 5;
        LOBYTE(dword_140404A6C[289301095]) = 74;
        sub_140130350(dword_140404A6C[280649181], LOWORD(dword_140404A6C[280649182]), 0);
      }
    }
    if ( dword_140404A6C[179668277] == 2 && (int)((__int64 (*)(void))sub_14011C760)() > 0 )
    {
      v25 = v65;
      v26 = v65;
      do
      {
        v27 = dword_140404A6C[289317484];
        v28 = dword_140404A6C[289317483];
        if ( (int)dword_140404A6C[289317484] >= 0x10000
          || (signed int)(dword_140404A6C[289317484] + 1) > (int)dword_140404A6C[289317483] )
        {
          v29 = dword_140404A6C[289317485];
        }
        else
        {
          v29 = dword_140404A6C[289317485];
          if ( (int)dword_140404A6C[289317485] > 0 )
          {
            LODWORD(v27) = ++dword_140404A6C[289317484];
            v29 = 0;
            dword_140404A6C[289317485] = 0;
          }
          v30 = (int)v27;
          v27 = (unsigned int)(v27 + 1);
          v20 = *((_BYTE *)&dword_140404A6C[289317486] + v30);
          dword_140404A6C[289317484] = v27;
        }
        if ( v20 == 1 )
        {
          v31 = 0;
          v32 = 0;
          if ( (int)dword_140404A6C[179662117] <= 0 )
          {
LABEL_53:
            v34 = ntohl(dword_140404A6C[289301087]);
            v35 = HIWORD(dword_140404A6C[289301086]);
            v36 = 23LL * (int)dword_140404A6C[179662117];
            dword_140404A6C[v36 + 179473713] = v34;
            LOWORD(dword_140404A6C[v36 + 179473714]) = ntohs(v35);
            sub_140115AE0(&dword_140404A6C[v36 + 179473701], 8);
            v40 = dword_140404A6C[289317484];
            if ( (int)dword_140404A6C[289317484] < 0x10000
              && (signed int)(dword_140404A6C[289317484] + 4) <= (int)dword_140404A6C[289317483] )
            {
              if ( (int)dword_140404A6C[289317485] > 0 )
              {
                LODWORD(v40) = dword_140404A6C[289317484] + 1;
                dword_140404A6C[289317485] = 0;
                ++dword_140404A6C[289317484];
              }
              v41 = (int)v40;
              v40 = (unsigned int)(v40 + 4);
              dword_140404A6C[v36 + 179473720] = *(unsigned int *)((char *)&dword_140404A6C[289317486] + v41);
              dword_140404A6C[289317484] = v40;
            }
            v42 = 23LL * (int)dword_140404A6C[179662117];
            dword_140404A6C[v42 + 179473720] = MEMORY[0x140198F9B](v40, v37, v38, v39)
                                             - dword_140404A6C[v42 + 179473720];
            sub_140115AE0(&dword_140404A6C[v42 + 179473721], 4);
            sub_140115AE0(&dword_140404A6C[v42 + 179473717], 8);
            sub_140115AE0(&dword_140404A6C[v42 + 179473719], 8);
            v43 = dword_140404A6C[289317484];
            v29 = dword_140404A6C[289317483];
            if ( (int)dword_140404A6C[289317484] >= 0x10000
              || (signed int)(dword_140404A6C[289317484] + 32) > (int)dword_140404A6C[289317483] )
            {
              v27 = dword_140404A6C[289317485];
            }
            else
            {
              v27 = dword_140404A6C[289317485];
              if ( (int)dword_140404A6C[289317485] > 0 )
              {
                v43 = dword_140404A6C[289317484] + 1;
                v27 = 0;
                ++dword_140404A6C[289317484];
                dword_140404A6C[289317485] = 0;
              }
              v44 = v43;
              v43 += 32;
              v45 = *(_OWORD *)((char *)&dword_140404A6C[289317486] + v44);
              v46 = *(_OWORD *)((char *)&dword_140404A6C[289317490] + v44);
              dword_140404A6C[289317484] = v43;
              *(_OWORD *)&dword_140404A6C[v42 + 179473704] = v45;
              *(_OWORD *)&dword_140404A6C[v42 + 179473708] = v46;
            }
            if ( v43 < 0x10000 && v43 + 4 <= (int)v29 )
            {
              if ( (int)v27 > 0 )
              {
                ++v43;
                v27 = 0;
                dword_140404A6C[289317484] = v43;
                dword_140404A6C[289317485] = 0;
              }
              v53 = v43;
              v43 += 4;
              dword_140404A6C[v42 + 179473712] = *(unsigned int *)((char *)&dword_140404A6C[289317486] + v53);
              dword_140404A6C[289317484] = v43;
            }
            if ( (int)dword_140404A6C[v42 + 179473701] >= 27 && v43 < 0x10000 )
            {
              if ( v43 + 4 <= (int)v29 )
              {
                if ( (int)v27 > 0 )
                {
                  ++v43;
                  v27 = 0;
                  dword_140404A6C[289317484] = v43;
                  dword_140404A6C[289317485] = 0;
                }
                v54 = v43;
                v43 += 4;
                dword_140404A6C[v42 + 179473715] = *(unsigned int *)((char *)&dword_140404A6C[289317486] + v54);
                dword_140404A6C[289317484] = v43;
              }
              if ( v43 < 0x10000 && v43 + 2 <= (int)v29 )
              {
                if ( (int)v27 > 0 )
                {
                  ++v43;
                  dword_140404A6C[289317485] = 0;
                  dword_140404A6C[289317484] = v43;
                }
                LOWORD(dword_140404A6C[v42 + 179473716]) = *(_WORD *)((char *)&dword_140404A6C[289317486] + v43);
                dword_140404A6C[289317484] = v43 + 2;
              }
            }
            v55 = dword_140404A6C[v42 + 179473701];
            if ( v55 >= 30 )
            {
              sub_140115AE0(&dword_140404A6C[v42 + 179473723], 1);
              v55 = dword_140404A6C[v42 + 179473701];
            }
            v23 = (unsigned __int64)&dword_140404A6C[v42 + 179473702];
            v56 = (_DWORD *)(0x140000000LL + v42 * 4 + 722108168);
            if ( v55 < 34 )
            {
              ++dword_140404A6C[179662117];
              *(_DWORD *)v23 = 0;
              *v56 = 0;
            }
            else
            {
              sub_140115AE0(v23, 8);
              sub_140115AE0(v56, 8);
              ++dword_140404A6C[179662117];
            }
          }
          else
          {
            v33 = &dword_140404A6C[179473714];
            while ( *(v33 - 1) != (unsigned int)ntohl(dword_140404A6C[289301087])
                 || *(_WORD *)v33 != (unsigned __int16)ntohs(HIWORD(dword_140404A6C[289301086])) )
            {
              ++v31;
              ++v32;
              v33 += 23;
              if ( v31 >= (int)dword_140404A6C[179662117] )
                goto LABEL_53;
            }
            v47 = 23LL * v31;
            sub_140115AE0(&dword_140404A6C[v47 + 179473701], 8);
            v51 = dword_140404A6C[289317484];
            if ( (int)dword_140404A6C[289317484] < 0x10000
              && (signed int)(dword_140404A6C[289317484] + 4) <= (int)dword_140404A6C[289317483] )
            {
              if ( (int)dword_140404A6C[289317485] > 0 )
              {
                LODWORD(v51) = dword_140404A6C[289317484] + 1;
                dword_140404A6C[289317485] = 0;
                ++dword_140404A6C[289317484];
              }
              v52 = (int)v51;
              v51 = (unsigned int)(v51 + 4);
              dword_140404A6C[v47 + 179473720] = *(unsigned int *)((char *)&dword_140404A6C[289317486] + v52);
              dword_140404A6C[289317484] = v51;
            }
            dword_140404A6C[23 * v32 + 179473720] = MEMORY[0x140198F9B](v51, v48, v49, v50)
                                                  - dword_140404A6C[23 * v32 + 179473720];
            sub_140115AE0(&dword_140404A6C[v47 + 179473721], 4);
            sub_140115AE0(&dword_140404A6C[v47 + 179473717], 8);
            sub_140115AE0(&dword_140404A6C[v47 + 179473719], 8);
          }
        }
        else if ( v20 == 74 )
        {
          dword_140404A6C[179662131] = 2;
          if ( (int)v27 < 0x10000 )
          {
            if ( (int)v27 + 4 <= (int)dword_140404A6C[289317483] )
            {
              if ( (int)v29 > 0 )
              {
                LODWORD(v27) = v27 + 1;
                dword_140404A6C[289317485] = 0;
                dword_140404A6C[289317484] = v27;
                v29 = 0;
              }
              v57 = (int)v27;
              v27 = (unsigned int)(v27 + 4);
              v25 = *(unsigned int *)((char *)&dword_140404A6C[289317486] + v57);
              dword_140404A6C[289317484] = v27;
            }
            if ( (int)v27 < 0x10000 && (int)v27 + 4 <= (int)dword_140404A6C[289317483] )
            {
              if ( (int)v29 > 0 )
              {
                LODWORD(v27) = v27 + 1;
                dword_140404A6C[289317485] = 0;
                dword_140404A6C[289317484] = v27;
                v29 = 0;
              }
              v58 = (int)v27;
              v27 = (unsigned int)(v27 + 4);
              v26 = *(unsigned int *)((char *)&dword_140404A6C[289317486] + v58);
              dword_140404A6C[289317484] = v27;
            }
          }
          v59 = v25 + dword_140404A6C[179473693];
          if ( (signed int)(v25 + dword_140404A6C[179473693]) > 0x2000 )
            v59 = 0x2000;
          dword_140404A6C[179473694] = v59;
          v23 = v26;
          if ( v26 < v26 + 128 )
          {
            v24 = &dword_140404A6C[2 * v26 + 179457310];
            do
            {
              if ( (int)v23 < v25 && (int)v23 < 0x2000 && (int)v27 < 0x10000 )
              {
                if ( (int)v27 + 4 <= v28 )
                {
                  if ( (int)v29 > 0 )
                  {
                    LODWORD(v27) = v27 + 1;
                    dword_140404A6C[289317485] = 0;
                    dword_140404A6C[289317484] = v27;
                    v29 = 0;
                  }
                  v60 = (int)v27;
                  v27 = (unsigned int)(v27 + 4);
                  *(v24 - 1) = *(unsigned int *)((char *)&dword_140404A6C[289317486] + v60);
                  dword_140404A6C[289317484] = v27;
                }
                if ( (int)v27 < 0x10000 && (int)v27 + 2 <= v28 )
                {
                  if ( (int)v29 > 0 )
                  {
                    LODWORD(v27) = v27 + 1;
                    dword_140404A6C[289317485] = 0;
                    dword_140404A6C[289317484] = v27;
                    v29 = 0;
                  }
                  v61 = (int)v27;
                  v27 = (unsigned int)(v27 + 2);
                  *(_WORD *)v24 = *(_WORD *)((char *)&dword_140404A6C[289317486] + v61);
                  dword_140404A6C[289317484] = v27;
                }
              }
              v23 = (unsigned int)(v23 + 1);
              v24 += 2;
            }
            while ( (int)v23 < v26 + 128 );
          }
        }
      }
      while ( (int)sub_14011C760(v23, v27, v29, v24) > 0 );
    }
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&v63 ^ v67);
}

