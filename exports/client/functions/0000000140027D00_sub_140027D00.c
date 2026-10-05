/* Address: 0x140027d00 | Name: sub_140027D00 | Size: 2695 bytes */
__int64 sub_140027D00()
{
  int v0; // eax
  int v1; // edi
  int v2; // r9d
  int v3; // edx
  __int64 v4; // rbx
  int v5; // r10d
  __int64 v6; // r11
  int v7; // r8d
  unsigned int *v8; // rcx
  __int128 v9; // xmm0
  unsigned int v10; // r10d
  int v11; // ebx
  unsigned int v12; // r9d
  unsigned int v13; // edx
  __int64 v14; // rax
  unsigned int *v15; // rcx
  int v16; // r13d
  unsigned int v17; // esi
  unsigned int v18; // ebp
  __int64 v19; // r15
  __int64 v20; // r12
  int v21; // r11d
  __int64 v22; // r14
  int v23; // edi
  __int64 v24; // r10
  unsigned int *v25; // r8
  int v26; // edx
  int v27; // ebx
  __int64 v28; // rcx
  int v29; // eax
  int v30; // ebx
  __int64 v31; // rdx
  __int64 v32; // rcx
  unsigned int v33; // edx
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rcx
  int v38; // [rsp+30h] [rbp+8h]

  v0 = dword_140404A6C[460788389];
  v1 = 0;
  v2 = dword_140404A6C[460788388];
  v3 = dword_140404A6C[460788387];
  if ( (int)dword_140404A6C[460788389] > 0 )
  {
    v4 = 0;
    do
    {
      v5 = 0;
      v6 = 0;
      if ( v2 >= 0 )
      {
        do
        {
          v7 = 0;
          if ( v3 >= 0 )
          {
            v8 = &dword_140404A6C[960 * v4 + 464720760 + 960 * v6];
            do
            {
              v9 = *(_OWORD *)(v8 - 3932367);
              ++v7;
              v8 += 15;
              *(_OWORD *)(v8 - 15) = v9;
              *(_OWORD *)(v8 - 11) = *(_OWORD *)(v8 - 3932378);
              *(_OWORD *)(v8 - 7) = *(_OWORD *)(v8 - 3932374);
              *(_QWORD *)(v8 - 3) = *((_QWORD *)v8 - 1966185);
              *(v8 - 1) = *(v8 - 3932368);
              v3 = dword_140404A6C[460788387];
            }
            while ( v7 <= (int)dword_140404A6C[460788387] );
            v2 = dword_140404A6C[460788388];
          }
          ++v5;
          ++v6;
        }
        while ( v5 <= v2 );
        v0 = dword_140404A6C[460788389];
      }
      ++v1;
      v4 += 64;
    }
    while ( v1 < v0 );
  }
  v10 = v3;
  if ( v3 < (unsigned int)v2 )
    v10 = v2;
  v11 = 0;
  if ( v0 > 0 )
  {
    do
    {
      v12 = 0;
      do
      {
        v13 = 0;
        do
        {
          v14 = ((((__int64)v11 << 6) + (int)v12) << 6) + (int)v13++;
          v15 = &dword_140404A6C[15 * v14 + 460788393];
          *(_OWORD *)v15 = 0;
          *((_OWORD *)v15 + 1) = 0;
          *((_OWORD *)v15 + 2) = 0;
          *((_QWORD *)v15 + 6) = 0;
          v15[14] = 0;
        }
        while ( v13 <= v10 );
        ++v12;
      }
      while ( v12 <= v10 );
      v0 = dword_140404A6C[460788389];
      ++v11;
    }
    while ( v11 < (int)dword_140404A6C[460788389] );
    v2 = dword_140404A6C[460788388];
    v3 = dword_140404A6C[460788387];
  }
  v16 = 0;
  *(_QWORD *)&dword_140404A6C[468652924] = *(_QWORD *)&dword_140404A6C[464720557];
  *(_QWORD *)&dword_140404A6C[468652930] = *(_QWORD *)&dword_140404A6C[464720563];
  *(_QWORD *)&dword_140404A6C[468652936] = *(_QWORD *)&dword_140404A6C[464720569];
  *(_QWORD *)&dword_140404A6C[468652942] = *(_QWORD *)&dword_140404A6C[464720575];
  *(_QWORD *)&dword_140404A6C[468652948] = *(_QWORD *)&dword_140404A6C[464720581];
  *(_QWORD *)&dword_140404A6C[468652954] = *(_QWORD *)&dword_140404A6C[464720587];
  *(_QWORD *)&dword_140404A6C[468652960] = *(_QWORD *)&dword_140404A6C[464720593];
  *(_QWORD *)&dword_140404A6C[468652966] = *(_QWORD *)&dword_140404A6C[464720599];
  *(_QWORD *)&dword_140404A6C[468652972] = *(_QWORD *)&dword_140404A6C[464720605];
  *(_QWORD *)&dword_140404A6C[468652978] = *(_QWORD *)&dword_140404A6C[464720611];
  *(_QWORD *)&dword_140404A6C[468652984] = *(_QWORD *)&dword_140404A6C[464720617];
  *(_QWORD *)&dword_140404A6C[468652990] = *(_QWORD *)&dword_140404A6C[464720623];
  *(_QWORD *)&dword_140404A6C[468652996] = *(_QWORD *)&dword_140404A6C[464720629];
  *(_QWORD *)&dword_140404A6C[468653002] = *(_QWORD *)&dword_140404A6C[464720635];
  *(_QWORD *)&dword_140404A6C[468653008] = *(_QWORD *)&dword_140404A6C[464720641];
  *(_QWORD *)&dword_140404A6C[468653014] = *(_QWORD *)&dword_140404A6C[464720647];
  v38 = 0;
  *(_OWORD *)&dword_140404A6C[468652920] = *(_OWORD *)&dword_140404A6C[464720553];
  *(_OWORD *)&dword_140404A6C[468652926] = *(_OWORD *)&dword_140404A6C[464720559];
  *(_OWORD *)&dword_140404A6C[468652932] = *(_OWORD *)&dword_140404A6C[464720565];
  *(_OWORD *)&dword_140404A6C[468652938] = *(_OWORD *)&dword_140404A6C[464720571];
  *(_OWORD *)&dword_140404A6C[468652944] = *(_OWORD *)&dword_140404A6C[464720577];
  *(_OWORD *)&dword_140404A6C[468652950] = *(_OWORD *)&dword_140404A6C[464720583];
  *(_OWORD *)&dword_140404A6C[468652956] = *(_OWORD *)&dword_140404A6C[464720589];
  *(_OWORD *)&dword_140404A6C[468652962] = *(_OWORD *)&dword_140404A6C[464720595];
  *(_OWORD *)&dword_140404A6C[468652968] = *(_OWORD *)&dword_140404A6C[464720601];
  *(_OWORD *)&dword_140404A6C[468652974] = *(_OWORD *)&dword_140404A6C[464720607];
  *(_OWORD *)&dword_140404A6C[468652980] = *(_OWORD *)&dword_140404A6C[464720613];
  *(_OWORD *)&dword_140404A6C[468652986] = *(_OWORD *)&dword_140404A6C[464720619];
  *(_OWORD *)&dword_140404A6C[468652992] = *(_OWORD *)&dword_140404A6C[464720625];
  *(_OWORD *)&dword_140404A6C[468652998] = *(_OWORD *)&dword_140404A6C[464720631];
  *(_OWORD *)&dword_140404A6C[468653004] = *(_OWORD *)&dword_140404A6C[464720637];
  *(_OWORD *)&dword_140404A6C[468653010] = *(_OWORD *)&dword_140404A6C[464720643];
  if ( v0 > 0 )
  {
    v17 = dword_140404A6C[19928871];
    v18 = dword_140404A6C[19928870];
    v19 = 0;
    v20 = 0;
    do
    {
      v21 = 0;
      v22 = 0;
      if ( v2 >= 0 )
      {
        do
        {
          v23 = 0;
          if ( v3 >= 0 )
          {
            v24 = v20;
            v25 = &dword_140404A6C[960 * v19 + 464720766 + 960 * v22];
            do
            {
              if ( v21 < v2 )
              {
                v26 = *(v25 - 5);
                v27 = v2 - v21 - 1;
                if ( (v26 & 0xE0000000) == 0x80000000 )
                {
                  v26 = (unsigned __int16)v26;
                  v27 = v2 - v21 - dword_140404A6C[58 * (unsigned __int16)v26 + 20074647];
                  if ( (unsigned __int16)v26 >= v18 && (unsigned __int16)v26 < v17 )
                  {
                    v26 = (unsigned __int16)v26 + 1;
                    if ( (v26 & 3) == 0 )
                      v26 -= 4;
                  }
                  v26 |= 0x80000000;
                }
                v28 = 15 * (v24 + v27);
                if ( !dword_140404A6C[v28 + 460788394] )
                {
                  dword_140404A6C[v28 + 460788394] = v26;
                  LOWORD(dword_140404A6C[v28 + 460788399]) = *(_WORD *)v25;
                  HIWORD(dword_140404A6C[v28 + 460788400]) = *((_WORD *)v25 + 2);
                  LOWORD(dword_140404A6C[v28 + 460788401]) = *((_WORD *)v25 + 3);
                  HIWORD(dword_140404A6C[v28 + 460788399]) = *((_WORD *)v25 + 4);
                  LOWORD(dword_140404A6C[v28 + 460788400]) = *((_WORD *)v25 + 1);
                  HIWORD(dword_140404A6C[v28 + 460788401]) = *((_WORD *)v25 + 5);
                  LOWORD(dword_140404A6C[v28 + 460788402]) = *((_WORD *)v25 + 6);
                  HIWORD(dword_140404A6C[v28 + 460788402]) = *((_WORD *)v25 + 7);
                  v2 = dword_140404A6C[460788388];
                }
                v29 = *(v25 - 4);
                v30 = v2 - v21 - 1;
                if ( (v29 & 0xE0000000) == 0x80000000 )
                {
                  v29 = (unsigned __int16)v29;
                  v30 = v2 - v21 - dword_140404A6C[58 * (unsigned __int16)v29 + 20074647];
                  if ( (unsigned __int16)v29 >= v18 && (unsigned __int16)v29 < v17 )
                  {
                    v29 = (unsigned __int16)v29 + 1;
                    if ( (v29 & 3) == 0 )
                      v29 -= 4;
                  }
                  v29 |= 0x80000000;
                }
                v31 = 15 * (v24 + v30);
                if ( !dword_140404A6C[v31 + 460788395] )
                {
                  dword_140404A6C[v31 + 460788395] = v29;
                  LOWORD(dword_140404A6C[v31 + 460788403]) = *((_WORD *)v25 + 8);
                  HIWORD(dword_140404A6C[v31 + 460788404]) = *((_WORD *)v25 + 10);
                  LOWORD(dword_140404A6C[v31 + 460788405]) = *((_WORD *)v25 + 11);
                  HIWORD(dword_140404A6C[v31 + 460788403]) = *((_WORD *)v25 + 12);
                  LOWORD(dword_140404A6C[v31 + 460788404]) = *((_WORD *)v25 + 9);
                  HIWORD(dword_140404A6C[v31 + 460788405]) = *((_WORD *)v25 + 13);
                  LOWORD(dword_140404A6C[v31 + 460788406]) = *((_WORD *)v25 + 14);
                  HIWORD(dword_140404A6C[v31 + 460788406]) = *((_WORD *)v25 + 15);
                  v2 = dword_140404A6C[460788388];
                }
                if ( (v29 & 0xE0000000) == 0x80000000 )
                {
                  v32 = v24 + v2 - v21;
                  if ( !dword_140404A6C[15 * v32 + 460788380] )
                  {
                    dword_140404A6C[15 * v32 + 460788380] = -1073741824;
                    v2 = dword_140404A6C[460788388];
                  }
                }
                dword_140404A6C[15 * v24 + 460788378 + 15 * (v2 - v21)] = *(v25 - 6);
                dword_140404A6C[15 * v24 + 460788381 + 15 * (dword_140404A6C[460788388] - v21)] = *(v25 - 2);
                dword_140404A6C[15 * v24 + 460788383 + 15 * (dword_140404A6C[460788388] - v21)] = *(v25 - 1);
                v33 = v25[8];
                v34 = 15 * (v24 + dword_140404A6C[460788388] - v21);
                if ( v33 )
                {
                  dword_140404A6C[v34 + 460788392] = v33;
                  dword_140404A6C[15 * v24 + 460788392 + 15 * (dword_140404A6C[460788388] - v21)] &= 0xFCFFFFFF;
                  dword_140404A6C[15 * v24 + 460788392 + 15 * (dword_140404A6C[460788388] - v21)] |= ((v33 & 0xFF000000) + 0x1000000) & 0x3000000;
                }
                else
                {
                  dword_140404A6C[v34 + 460788392] = 0;
                }
                v2 = dword_140404A6C[460788388];
              }
              ++v23;
              v35 = v24 + v2 - v21;
              v24 += 64;
              v36 = 15 * v35;
              LODWORD(v35) = *(v25 - 3);
              v25 += 15;
              dword_140404A6C[v36 + 460788397] = v35;
              v3 = dword_140404A6C[460788387];
              v2 = dword_140404A6C[460788388];
            }
            while ( v23 <= (int)dword_140404A6C[460788387] );
          }
          ++v21;
          ++v22;
        }
        while ( v21 <= v2 );
        v0 = dword_140404A6C[460788389];
        v16 = v38;
      }
      ++v16;
      v20 += 4096;
      v19 += 64;
      v38 = v16;
    }
    while ( v16 < v0 );
  }
  dword_140404A6C[464720556] = dword_140404A6C[468652925];
  dword_140404A6C[464720553] = v2 - dword_140404A6C[468652922] - dword_140404A6C[468652925];
  dword_140404A6C[464720555] = dword_140404A6C[468652920];
  dword_140404A6C[464720558] = dword_140404A6C[468652923];
  dword_140404A6C[464720562] = dword_140404A6C[468652931];
  dword_140404A6C[464720559] = v2 - dword_140404A6C[468652928] - dword_140404A6C[468652931];
  dword_140404A6C[464720561] = dword_140404A6C[468652926];
  dword_140404A6C[464720564] = dword_140404A6C[468652929];
  dword_140404A6C[464720568] = dword_140404A6C[468652937];
  dword_140404A6C[464720565] = v2 - dword_140404A6C[468652937] - dword_140404A6C[468652934];
  dword_140404A6C[464720567] = dword_140404A6C[468652932];
  dword_140404A6C[464720570] = dword_140404A6C[468652935];
  dword_140404A6C[464720574] = dword_140404A6C[468652943];
  dword_140404A6C[464720571] = v2 - dword_140404A6C[468652943] - dword_140404A6C[468652940];
  dword_140404A6C[464720573] = dword_140404A6C[468652938];
  dword_140404A6C[464720576] = dword_140404A6C[468652941];
  dword_140404A6C[464720580] = dword_140404A6C[468652949];
  dword_140404A6C[464720577] = v2 - dword_140404A6C[468652949] - dword_140404A6C[468652946];
  dword_140404A6C[464720579] = dword_140404A6C[468652944];
  dword_140404A6C[464720582] = dword_140404A6C[468652947];
  dword_140404A6C[464720586] = dword_140404A6C[468652955];
  dword_140404A6C[464720583] = v2 - dword_140404A6C[468652955] - dword_140404A6C[468652952];
  dword_140404A6C[464720585] = dword_140404A6C[468652950];
  dword_140404A6C[464720588] = dword_140404A6C[468652953];
  dword_140404A6C[464720592] = dword_140404A6C[468652961];
  dword_140404A6C[464720589] = v2 - dword_140404A6C[468652961] - dword_140404A6C[468652958];
  dword_140404A6C[464720591] = dword_140404A6C[468652956];
  dword_140404A6C[464720594] = dword_140404A6C[468652959];
  dword_140404A6C[464720598] = dword_140404A6C[468652967];
  dword_140404A6C[464720595] = v2 - dword_140404A6C[468652967] - dword_140404A6C[468652964];
  dword_140404A6C[464720597] = dword_140404A6C[468652962];
  dword_140404A6C[464720600] = dword_140404A6C[468652965];
  dword_140404A6C[464720604] = dword_140404A6C[468652973];
  dword_140404A6C[460788387] = v2;
  dword_140404A6C[464720601] = v2 - dword_140404A6C[468652973] - dword_140404A6C[468652970];
  dword_140404A6C[464720603] = dword_140404A6C[468652968];
  dword_140404A6C[464720606] = dword_140404A6C[468652971];
  dword_140404A6C[464720610] = dword_140404A6C[468652979];
  dword_140404A6C[464720607] = v2 - dword_140404A6C[468652979] - dword_140404A6C[468652976];
  dword_140404A6C[464720609] = dword_140404A6C[468652974];
  dword_140404A6C[464720612] = dword_140404A6C[468652977];
  dword_140404A6C[464720616] = dword_140404A6C[468652985];
  dword_140404A6C[464720613] = v2 - dword_140404A6C[468652985] - dword_140404A6C[468652982];
  dword_140404A6C[464720615] = dword_140404A6C[468652980];
  dword_140404A6C[464720618] = dword_140404A6C[468652983];
  dword_140404A6C[464720622] = dword_140404A6C[468652991];
  dword_140404A6C[464720619] = v2 - dword_140404A6C[468652991] - dword_140404A6C[468652988];
  dword_140404A6C[464720621] = dword_140404A6C[468652986];
  dword_140404A6C[464720624] = dword_140404A6C[468652989];
  dword_140404A6C[464720628] = dword_140404A6C[468652997];
  dword_140404A6C[464720625] = v2 - dword_140404A6C[468652997] - dword_140404A6C[468652994];
  dword_140404A6C[464720627] = dword_140404A6C[468652992];
  dword_140404A6C[464720630] = dword_140404A6C[468652995];
  dword_140404A6C[464720634] = dword_140404A6C[468653003];
  dword_140404A6C[464720631] = v2 - dword_140404A6C[468653000] - dword_140404A6C[468653003];
  dword_140404A6C[464720633] = dword_140404A6C[468652998];
  dword_140404A6C[464720636] = dword_140404A6C[468653001];
  dword_140404A6C[464720640] = dword_140404A6C[468653009];
  dword_140404A6C[464720637] = v2 - dword_140404A6C[468653006] - dword_140404A6C[468653009];
  dword_140404A6C[464720639] = dword_140404A6C[468653004];
  dword_140404A6C[464720642] = dword_140404A6C[468653007];
  dword_140404A6C[464720646] = dword_140404A6C[468653015];
  dword_140404A6C[464720643] = v2 - dword_140404A6C[468653012] - dword_140404A6C[468653015];
  dword_140404A6C[464720645] = dword_140404A6C[468653010];
  dword_140404A6C[464720648] = dword_140404A6C[468653013];
  dword_140404A6C[460788388] = v3;
  return dword_140404A6C[468653013];
}

