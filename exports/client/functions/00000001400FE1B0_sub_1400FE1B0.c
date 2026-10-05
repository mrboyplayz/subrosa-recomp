/* Address: 0x1400fe1b0 | Name: sub_1400FE1B0 | Size: 1042 bytes */
__int64 sub_1400FE1B0()
{
  __int64 v0; // rdx
  __int64 v1; // r8
  __int64 v2; // rdx
  __int64 v3; // rcx
  char v4; // al
  int v5; // eax
  unsigned int v6; // ecx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  struct hostent *v11; // rax
  struct hostent *v12; // rdi
  _QWORD *v13; // rax
  unsigned int v14; // edx
  __int64 v15; // rbx
  int v16; // eax
  __int64 v17; // rdx
  int v18; // eax
  unsigned int v19; // ecx
  int v20; // eax
  unsigned int v21; // ecx
  int v22; // eax
  unsigned int v23; // ecx
  int v24; // eax
  unsigned int v25; // ecx
  bool v26; // zf
  unsigned int v27; // eax
  __int64 v29; // [rsp+0h] [rbp-248h] BYREF
  int v30; // [rsp+20h] [rbp-228h] BYREF
  int v31[3]; // [rsp+24h] [rbp-224h] BYREF
  char name[512]; // [rsp+30h] [rbp-218h] BYREF
  __int64 v33; // [rsp+230h] [rbp-18h]

  dword_140404A6C[70087070] = 1107296256;
  dword_140404A6C[70087068] = 1135083520;
  dword_140404A6C[70087067] = 1135607808;
  dword_140404A6C[70087069] = 1134559232;
  dword_140404A6C[70087074] = 7;
  if ( (unsigned int)ui_button_candidate((__int64)"Practice") )
  {
    MEMORY[0x140198F0B](1, v0, v1);
    dword_140404A6C[284024635] = MEMORY[0x140198F05](&v30, v31);
    dword_140404A6C[284024633] = dword_140404A6C[284024635] & 1;
    dword_140404A6C[284024598] = 1134559232;
    v3 = 0;
    dword_140404A6C[284024634] = (LOBYTE(dword_140404A6C[284024635]) >> 2) & 1;
    dword_140404A6C[283831312] = 0;
    dword_140404A6C[283831453] = 25200;
    *(float *)&dword_140404A6C[284024599] = (float)v30;
    dword_140404A6C[284024597] = 1140850688;
    *(float *)&dword_140404A6C[284024600] = (float)v31[0];
    do
    {
      v4 = *((_BYTE *)&dword_140404A6C[73991224] + v3);
      *((_BYTE *)&dword_140404A6C[456202458] + v3++) = v4;
    }
    while ( v4 );
    dword_140404A6C[456202722] = 1;
    dword_140404A6C[456202453] = 1;
    *(_QWORD *)&dword_140404A6C[73991608] = 0;
    sub_140095B00(v3, v2);
  }
  dword_140404A6C[70087074] = 22;
  v5 = ui_button_candidate((__int64)"Start Game");
  v6 = dword_140404A6C[283831310];
  dword_140404A6C[70087074] = 13;
  if ( v5 )
    v6 = 4;
  dword_140404A6C[283831310] = v6;
  if ( (unsigned int)ui_button_candidate((__int64)"Join Game") )
  {
    dword_140404A6C[456202453] = 0;
    MEMORY[0x1401FCD30](&dword_140404A6C[421831837], 0, 36112484);
    dword_140404A6C[283831447] = -1;
    dword_140404A6C[179662126] = MEMORY[0x140198F9B](v8, v7, v9, v10);
    dword_140404A6C[179662117] = 0;
    dword_140404A6C[179473694] = 0;
    dword_140404A6C[179473693] = 0;
    if ( MEMORY[0x140199037](name, 512) != -1 )
    {
      v11 = MEMORY[0x140199031](name);
      v12 = v11;
      if ( v11 )
      {
        v13 = *((_QWORD **)v11 + 3);
        v14 = dword_140404A6C[179473694];
        if ( *v13 )
        {
          v15 = 0;
          do
          {
            if ( v15 >= 16 )
              break;
            v16 = ntohl(*(unsigned int *)v13[v15]);
            v17 = (int)dword_140404A6C[179473694];
            ++v15;
            dword_140404A6C[2 * dword_140404A6C[179473694] + 179457309] = v16 | 0xFF;
            LOWORD(dword_140404A6C[2 * v17 + 179457310]) = dword_140404A6C[289301091];
            v14 = v17 + 1;
            dword_140404A6C[179473694] = v14;
            v13 = *((_QWORD **)v12 + 3);
          }
          while ( v13[v15] );
        }
        dword_140404A6C[179473693] = v14;
      }
    }
    dword_140404A6C[179662128] = 0;
    dword_140404A6C[179662129] = -1;
    dword_140404A6C[179662131] = 0;
    dword_140404A6C[179662127] = 0;
    dword_140404A6C[283831310] = 1;
  }
  dword_140404A6C[70087074] = 18;
  v18 = ui_button_candidate((__int64)"Options");
  v19 = dword_140404A6C[283831310];
  if ( v18 )
    v19 = 3;
  dword_140404A6C[283831310] = v19;
  v20 = ui_button_candidate((__int64)"Credits");
  v21 = dword_140404A6C[283831310];
  dword_140404A6C[70087074] = 41;
  if ( v20 )
    v21 = 6;
  dword_140404A6C[283831310] = v21;
  v22 = ui_button_candidate((__int64)"Exit");
  v23 = dword_140404A6C[283831311];
  if ( v22 )
    v23 = 2;
  dword_140404A6C[283831311] = v23;
  dword_140404A6C[70087067] = 1098907648;
  dword_140404A6C[70087068] = 1139277824;
  if ( (int)dword_140404A6C[70317962] < 16 )
  {
    dword_140404A6C[2 * dword_140404A6C[70317962] + 70317963] = dword_140404A6C[70087069];
    dword_140404A6C[2 * dword_140404A6C[70317962]++ + 70317964] = dword_140404A6C[70087070];
  }
  dword_140404A6C[70087069] = 1128267776;
  dword_140404A6C[70087070] = 1103101952;
  dword_140404A6C[70087074] = 6;
  v24 = ui_button_candidate((__int64)"Character");
  v25 = dword_140404A6C[283831310];
  v26 = v24 == 0;
  v27 = dword_140404A6C[70317962];
  if ( !v26 )
    v25 = 5;
  dword_140404A6C[283831310] = v25;
  if ( (int)dword_140404A6C[70317962] > 0 )
  {
    --dword_140404A6C[70317962];
    dword_140404A6C[70087069] = dword_140404A6C[2 * (v27 - 1) + 70317963];
    dword_140404A6C[70087070] = dword_140404A6C[2 * (v27 - 1) + 70317964];
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&v29 ^ v33);
}

