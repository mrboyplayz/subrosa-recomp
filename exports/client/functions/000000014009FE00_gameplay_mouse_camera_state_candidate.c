/* Address: 0x14009fe00 | Name: gameplay_mouse_camera_state_candidate | Size: 4263 bytes */
// Candidate gameplay/menu mouse-camera state handler: uses SDL relative mouse mode/state and menu actions.
__int64 __fastcall gameplay_mouse_camera_state_candidate(int a1)
{
  __int64 v1; // r14
  int v2; // eax
  __int64 v3; // rdx
  __int64 v4; // r8
  int v5; // eax
  int i; // ebx
  int v7; // esi
  int *v8; // rdi
  _DWORD *v9; // rbx
  int v10; // eax
  _DWORD *v11; // rcx
  int v12; // edx
  __int64 v13; // r8
  int v14; // eax
  int v15; // ecx
  int v16; // ebp
  float v17; // xmm6_4
  int v18; // esi
  float v19; // xmm7_4
  int *v20; // rdi
  int *v21; // rbx
  const char *v22; // r8
  int v23; // eax
  int v24; // ecx
  _DWORD *v25; // rbx
  const char *v26; // rsi
  int j; // edi
  int v28; // eax
  int v29; // edx
  int v30; // r8d
  int v31; // r9d
  int v32; // ecx
  __int64 v33; // r10
  __int64 v34; // r9
  __int64 v35; // r8
  __int64 v36; // r9
  int v37; // r10d
  __int64 v38; // rcx
  __int64 v39; // rcx
  __int64 v40; // rdx
  __int64 v41; // rax
  int *v42; // rcx
  char *v43; // rdx
  __int128 v44; // xmm0
  __int128 v45; // xmm1
  __int128 v46; // xmm0
  __int128 v47; // xmm1
  __int128 v48; // xmm0
  __int128 v49; // xmm1
  __int128 v50; // xmm0
  __int128 v51; // xmm1
  __int64 v52; // rax
  __int64 v53; // r8
  __int128 v54; // xmm1
  __int128 v55; // xmm0
  __int128 v56; // xmm1
  int v57; // eax
  int v58; // eax
  unsigned __int64 v59; // rbx
  int v60; // r8d
  int v61; // edx
  char v62; // al
  int v63; // edx
  char v64; // r9
  __int64 v65; // rax
  __int64 v66; // rdx
  __int64 v67; // rax
  int v68; // edx
  __int64 v69; // rax
  int v70; // eax
  __int64 v72; // [rsp+0h] [rbp-2E8h] BYREF
  int v73; // [rsp+50h] [rbp-298h] BYREF
  int v74; // [rsp+54h] [rbp-294h] BYREF
  int v75; // [rsp+58h] [rbp-290h] BYREF
  int v76; // [rsp+5Ch] [rbp-28Ch] BYREF
  _BYTE v77[512]; // [rsp+60h] [rbp-288h] BYREF
  __int64 v78; // [rsp+260h] [rbp-88h]

  v1 = a1;
  sub_14003A0F0();
  if ( MEMORY[0x183EBFAA4] == 3 )
    return MEMORY[0x1401F8B20]((unsigned __int64)&v72 ^ v78);
  v2 = MEMORY[0x183EBFAA8];
  if ( !MEMORY[0x183EBFAA8] && (_DWORD)v1 != -1 )
  {
    sub_140118B70((unsigned int)v1);
    v2 = MEMORY[0x183EBFAA8];
  }
  v75 = 0;
  v76 = 0;
  if ( v2 != 1 )
    goto LABEL_73;
  MEMORY[0x18329CC24] = 1;
  switch ( MEMORY[0x183EBFCBC] )
  {
    case 0:
      MEMORY[0x150F610D8] = xmmword_140279800;
      MEMORY[0x150F610F4] = 41;
      if ( (unsigned int)ui_button_candidate("Return to Game") )
      {
        MEMORY[0x183EBFAA8] = 0;
        MEMORY[0x18329CC24] = 0;
        MEMORY[0x140198F0B](1, v3, v4);
        MEMORY[0x183EBFD5C] = 1;
        return MEMORY[0x1401F8B20]((unsigned __int64)&v72 ^ v78);
      }
      if ( MEMORY[0x1AD04ADC0] )
      {
        if ( (_DWORD)MEMORY[0x151E4614C] )
        {
          if ( MEMORY[0x1829F8BC0] )
          {
            MEMORY[0x150F610F4] = 12;
            if ( (unsigned int)ui_button_candidate("Invite") )
            {
              v5 = sub_1401988C0(4);
              MEMORY[0x1829F8FDC] = v5;
              for ( i = 0; i < MEMORY[0x1829F8FDC]; ++i )
              {
                sub_140198820(
                  0x140000000LL + 528LL * i + 1117753312,
                  (char *)&MEMORY[0x1829F8FEC] + 528 * i,
                  (unsigned int)i,
                  4);
                v5 = MEMORY[0x1829F8FDC];
              }
              v7 = 0;
              if ( v5 > 0 )
              {
                v8 = MEMORY[0x18329CED0];
                v9 = &MEMORY[0x1829F8FE8];
                do
                {
                  *v9 = sub_140198A10(*((_QWORD *)v9 - 1));
                  v9 += 132;
                  ++v7;
                  *v8++ = 0;
                }
                while ( v7 < MEMORY[0x1829F8FDC] );
              }
              MEMORY[0x183EBFCBC] = 1;
            }
          }
        }
      }
      MEMORY[0x150F610F4] = 16;
      if ( (_DWORD)v1 != -1 && (unsigned int)ui_button_candidate("Mute Player") )
      {
        v10 = 0;
        v11 = &MEMORY[0x151623978];
        MEMORY[0x18329C404] = 0;
        v12 = 0;
        v13 = 0;
        do
        {
          if ( *(v11 - 2886) && !*v11 && v13 != v1 )
          {
            MEMORY[0x18329C400][v10 + 2] = v12;
            v10 = ++MEMORY[0x18329C404];
          }
          ++v12;
          ++v13;
          v11 += 3597;
        }
        while ( v12 < 256 );
        MEMORY[0x183EBFCBC] = 3;
      }
      if ( MEMORY[0x183F7C540] != -1 )
      {
        if ( *((_DWORD *)&MEMORY[0x151620C94] + 3597 * MEMORY[0x183F7C540]) )
        {
          MEMORY[0x150F610F4] = 4;
          if ( (unsigned int)ui_button_candidate("Admin") )
          {
            MEMORY[0x1A8E3C9E0] = -1;
            MEMORY[0x183EBFCBC] = 2;
          }
        }
      }
      MEMORY[0x150F610F4] = 18;
      if ( (unsigned int)ui_button_candidate("Options") )
      {
        MEMORY[0x183EBFAA4] = 3;
        MEMORY[0x18329CC24] = 1;
      }
      MEMORY[0x150F610F4] = 8;
      if ( (unsigned int)ui_button_candidate("Exit Game") )
      {
        sub_140095FC0();
        MEMORY[0x183EBFAA4] = 0;
      }
      goto LABEL_67;
    case 1:
      MEMORY[0x150F610D8] = xmmword_1402797F0;
      MEMORY[0x150F610F4] = 41;
      v14 = ui_button_candidate("Back");
      v15 = MEMORY[0x183EBFCBC];
      v16 = 0;
      if ( v14 )
        v15 = 0;
      v17 = 128.0;
      v18 = 0;
      v19 = 64.0;
      MEMORY[0x183EBFCBC] = v15;
      *((_QWORD *)&MEMORY[0x150F610D8] + 1) = 0x41E0000043400000LL;
      if ( MEMORY[0x1829F8FDC] > 0 )
      {
        v20 = MEMORY[0x18329CED0];
        v21 = (int *)&MEMORY[0x1829F8FE8];
        do
        {
          *(float *)&MEMORY[0x150F610D8] = v17;
          *((float *)&MEMORY[0x150F610D8] + 1) = v19;
          if ( *v21 > 0 )
          {
            v22 = (char *)&MEMORY[0x1829F8FEC] + 528 * v18;
            if ( *v20 )
            {
              sub_140158AB0(v77, "Invited %s", v22);
              MEMORY[0x150F610FC] = 1;
            }
            else
            {
              sub_140158AB0(v77, "%s", v22);
            }
            ui_select_value_candidate(v77, &MEMORY[0x18329CC34], (unsigned int)v18);
            ++v16;
            v17 = v17 + 192.0;
            if ( (v16 & 3) == 0 )
            {
              v17 = 128.0;
              v19 = v19 + 28.0;
            }
          }
          ++v18;
          v21 += 132;
          ++v20;
        }
        while ( v18 < MEMORY[0x1829F8FDC] );
      }
      if ( MEMORY[0x18329CC34] != -1 )
      {
        sub_140198C10(*((_QWORD *)&MEMORY[0x1829F8FE0] + 66 * MEMORY[0x18329CC34]));
        MEMORY[0x18329CED0][MEMORY[0x18329CC34]] = 1;
        MEMORY[0x18329CC34] = -1;
      }
LABEL_67:
      v33 = MEMORY[0x183F7C540];
      v34 = MEMORY[0x1A8E3C9E0];
      if ( v75 && MEMORY[0x1A8E3C9E0] != -1 )
      {
        MEMORY[0x183EBFCBC] = 0;
        *((_DWORD *)&MEMORY[0x151620E28]
        + 3597 * MEMORY[0x183F7C540]
        + 21 * *((int *)&MEMORY[0x151620E14] + 3597 * MEMORY[0x183F7C540])) = 4;
        *((_DWORD *)&MEMORY[0x151620E2C] + 3597 * v33 + 21 * *((int *)&MEMORY[0x151620E14] + 3597 * v33)) = MEMORY[0x1A8E379E8][20 * v34];
        *((_DWORD *)&MEMORY[0x151620E30] + 3597 * v33 + 21 * *((int *)&MEMORY[0x151620E14] + 3597 * v33)) = MEMORY[0x1A8E3C9E4];
        *((_DWORD *)&MEMORY[0x151620E14] + 3597 * v33) = ((unsigned __int8)*((_DWORD *)&MEMORY[0x151620E14] + 3597 * v33)
                                                        + 1)
                                                       & 0x3F;
      }
      if ( v76 && (_DWORD)v34 != -1 )
      {
        MEMORY[0x183EBFCBC] = 0;
        *((_DWORD *)&MEMORY[0x151620E28] + 3597 * v33 + 21 * *((int *)&MEMORY[0x151620E14] + 3597 * v33)) = 5;
        *((_DWORD *)&MEMORY[0x151620E2C] + 3597 * v33 + 21 * *((int *)&MEMORY[0x151620E14] + 3597 * v33)) = MEMORY[0x1A8E379E8][20 * v34];
        *((_DWORD *)&MEMORY[0x151620E30] + 3597 * v33 + 21 * *((int *)&MEMORY[0x151620E14] + 3597 * v33)) = MEMORY[0x1A8E3C9E8];
        *((_DWORD *)&MEMORY[0x151620E14] + 3597 * v33) = ((unsigned __int8)*((_DWORD *)&MEMORY[0x151620E14] + 3597 * v33)
                                                        + 1)
                                                       & 0x3F;
      }
LABEL_73:
      if ( !MEMORY[0x18329CC24] )
      {
        MEMORY[0x183F7C6B8] = MEMORY[0x183F7C758];
        MEMORY[0x183F7C620] = MEMORY[0x183F7C6C0];
        MEMORY[0x183F7C630] = MEMORY[0x183F7C6D0];
        MEMORY[0x183F7C640] = MEMORY[0x183F7C6E0];
        MEMORY[0x183F7C650] = MEMORY[0x183F7C6F0];
        MEMORY[0x183F7C660] = MEMORY[0x183F7C700];
        MEMORY[0x183F7C670] = MEMORY[0x183F7C710];
        MEMORY[0x183F7C680] = MEMORY[0x183F7C720];
        MEMORY[0x183F7C690] = MEMORY[0x183F7C730];
        MEMORY[0x183F7C6A0] = MEMORY[0x183F7C740];
        MEMORY[0x183F7C6B0] = MEMORY[0x183F7C750];
        MEMORY[0x183F7C758] = MEMORY[0x140198F05](&v73, &v74);
        *(_QWORD *)&MEMORY[0x183F7C6C0] = 0x43A0000044000000LL;
        LODWORD(MEMORY[0x183F7C750]) = MEMORY[0x183F7C758] & 1;
        HIDWORD(MEMORY[0x183F7C750]) = ((unsigned __int8)MEMORY[0x183F7C758] >> 2) & 1;
        *((float *)&MEMORY[0x183F7C6C0] + 2) = (float)v73;
        *((float *)&MEMORY[0x183F7C6C0] + 3) = (float)v74;
        if ( MEMORY[0x18329CC28] )
        {
          MEMORY[0x183F7C758] = MEMORY[0x140198F05](&v74, &v73);
          *(_QWORD *)&MEMORY[0x183F7C6C0] = 0x43A0000044000000LL;
          LODWORD(MEMORY[0x183F7C750]) = MEMORY[0x183F7C758] & 1;
          HIDWORD(MEMORY[0x183F7C750]) = ((unsigned __int8)MEMORY[0x183F7C758] >> 2) & 1;
          *((float *)&MEMORY[0x183F7C6C0] + 2) = (float)v74;
          *((float *)&MEMORY[0x183F7C6C0] + 3) = (float)v73;
        }
      }
      break;
    case 2:
      MEMORY[0x150F610D8] = xmmword_1402797F0;
      MEMORY[0x150F610F4] = 41;
      v23 = ui_button_candidate("Back");
      v24 = MEMORY[0x183EBFCBC];
      if ( v23 )
        v24 = 0;
      MEMORY[0x183EBFCBC] = v24;
      *((_QWORD *)&MEMORY[0x150F610D8] + 1) = 0x41E0000043400000LL;
      if ( MEMORY[0x1A8E3C9E0] == -1 )
      {
        v25 = &MEMORY[0x1A8E37A2C];
        v26 = (const char *)&MEMORY[0x1A8E379EC];
        *(_QWORD *)&MEMORY[0x150F610D8] = 0x4280000043000000LL;
        for ( j = 0; j < 256; ++j )
        {
          if ( *(v25 - 19) )
          {
            sub_140158AB0(v77, "%s %03d-%04d", v26, *v25 / 0x2710u, *v25 % 0x2710u);
            ui_select_value_candidate(v77, &MEMORY[0x1A8E3C9E0], (unsigned int)j);
          }
          v26 += 80;
          v25 += 20;
        }
      }
      else
      {
        *(_QWORD *)&MEMORY[0x150F610D8] = 0x4300000042000000LL;
        ui_text_entry_candidate("Time", &MEMORY[0x1A8E3C9E4], 0, 100000000);
        *(_QWORD *)&MEMORY[0x150F610D8] = 0x4300000043A00000LL;
        sub_140158AB0(v77, "Ban %s", (const char *)&MEMORY[0x1A8E379EC] + 80 * MEMORY[0x1A8E3C9E0]);
        ui_select_value_candidate(v77, &v75, 1);
        *(_QWORD *)&MEMORY[0x150F610D8] = 0x4330000042000000LL;
        ui_text_entry_candidate("Rating", &MEMORY[0x1A8E3C9E8], 0, 10000);
        *(_QWORD *)&MEMORY[0x150F610D8] = 0x4330000043A00000LL;
        sub_140158AB0(v77, "Set Rating %s", (const char *)&MEMORY[0x1A8E379EC] + 80 * MEMORY[0x1A8E3C9E0]);
        ui_select_value_candidate(v77, &v76, 1);
      }
      goto LABEL_67;
    case 3:
      MEMORY[0x150F610D8] = xmmword_1402797E0;
      MEMORY[0x150F610F4] = 41;
      v28 = ui_button_candidate("Back");
      v32 = MEMORY[0x183EBFCBC];
      if ( v28 )
        v32 = 0;
      MEMORY[0x150F61110] = (__int64)sub_1400FE870;
      MEMORY[0x183EBFCBC] = v32;
      *((_QWORD *)&MEMORY[0x150F610D8] + 1) = 0x41E0000043400000LL;
      *(_QWORD *)&MEMORY[0x150F610D8] = 0x4280000043400000LL;
      MEMORY[0x150F61108] = 0;
      if ( (unsigned int)sub_1400707C0(
                           (unsigned int)"mutelist",
                           v29,
                           v30,
                           v31,
                           1111490560,
                           0,
                           (__int64)MEMORY[0x18329C400],
                           0,
                           0,
                           MEMORY[0x18329C404])
        && MEMORY[0x18329C400][0] >= 0
        && MEMORY[0x18329C400][0] < MEMORY[0x18329C404] )
      {
        sub_140117820((unsigned int)MEMORY[0x18329C400][MEMORY[0x18329C400][0] + 2]);
      }
      goto LABEL_67;
  }
  v35 = (unsigned int)MEMORY[0x1B0032404];
  v36 = 0;
  v37 = MEMORY[0x1B0032400][0];
  MEMORY[0x18329CC28] = MEMORY[0x18329CC24];
  MEMORY[0x18329CC4C] = 0;
  if ( MEMORY[0x1B0032404] != MEMORY[0x1B0032400][0] )
  {
    do
    {
      if ( (int)v36 < 32 )
      {
        MEMORY[0x18329CC50][5 * (int)v36] = MEMORY[0x1B0032408][5 * (int)v35];
        MEMORY[0x18329CC5C][5 * MEMORY[0x18329CC4C]] = MEMORY[0x1B0032410][5 * (int)v35];
        MEMORY[0x18329CC58][5 * MEMORY[0x18329CC4C]] = MEMORY[0x1B003240C][5 * (int)v35];
        MEMORY[0x18329CC60][5 * MEMORY[0x18329CC4C]] = MEMORY[0x1B0032414][5 * (int)v35];
        MEMORY[0x18329CC54][5 * MEMORY[0x18329CC4C]] = MEMORY[0x1B0032418][5 * (int)v35];
        v36 = (unsigned int)++MEMORY[0x18329CC4C];
      }
      v35 = ((_WORD)v35 + 1) & 0x3FF;
      MEMORY[0x1B0032404] = v35;
    }
    while ( (_DWORD)v35 != v37 );
  }
  if ( (_DWORD)v1 != -1 )
  {
    v38 = MEMORY[0x151620CFC][3597 * v1];
    if ( (_DWORD)v38 != -1 )
    {
      v39 = 7166 * v38;
      if ( MEMORY[0x18329E344][v39] > 0 && MEMORY[0x1832A4DD8][v39] > 0 )
      {
        v40 = MEMORY[0x1832A4DDC][v39];
        if ( (_DWORD)v40 != -1 && MEMORY[0x182BBB194][1760 * v40] == 39 )
        {
          sub_1400A1640((unsigned int)v1, v40, v35, v36);
          LODWORD(v36) = MEMORY[0x18329CC4C];
        }
      }
    }
  }
  v41 = 2;
  v42 = (int *)MEMORY[0x183F7C760];
  v43 = MEMORY[0x183F7C960];
  do
  {
    v42 += 32;
    v44 = *(_OWORD *)v43;
    v45 = *((_OWORD *)v43 + 1);
    v43 += 128;
    *((_OWORD *)v42 - 8) = v44;
    v46 = *((_OWORD *)v43 - 6);
    *((_OWORD *)v42 - 7) = v45;
    v47 = *((_OWORD *)v43 - 5);
    *((_OWORD *)v42 - 6) = v46;
    v48 = *((_OWORD *)v43 - 4);
    *((_OWORD *)v42 - 5) = v47;
    v49 = *((_OWORD *)v43 - 3);
    *((_OWORD *)v42 - 4) = v48;
    v50 = *((_OWORD *)v43 - 2);
    *((_OWORD *)v42 - 3) = v49;
    v51 = *((_OWORD *)v43 - 1);
    *((_OWORD *)v42 - 2) = v50;
    *((_OWORD *)v42 - 1) = v51;
    --v41;
  }
  while ( v41 );
  v52 = *((unsigned __int16 *)v43 + 32);
  v53 = 0;
  v54 = *((_OWORD *)v43 + 1);
  *(_OWORD *)v42 = *(_OWORD *)v43;
  v55 = *((_OWORD *)v43 + 2);
  *((_OWORD *)v42 + 1) = v54;
  v56 = *((_OWORD *)v43 + 3);
  *((_OWORD *)v42 + 2) = v55;
  *((_OWORD *)v42 + 3) = v56;
  *((_WORD *)v42 + 32) = v52;
  *((_BYTE *)v42 + 66) = v43[66];
  if ( (int)v36 > 0 )
  {
    v42 = MEMORY[0x18329CC58];
    do
    {
      if ( !*(v42 - 1) )
      {
        v43 = (char *)*v42;
        if ( (unsigned int)((_DWORD)v43 - 1) <= 0xFE )
        {
          v57 = *(v42 - 2);
          if ( v57 )
          {
            if ( v57 == 1 )
              MEMORY[0x183F7C960][(_QWORD)v43] = 0;
          }
          else
          {
            MEMORY[0x183F7C960][(_QWORD)v43] = 1;
          }
        }
      }
      v53 = (unsigned int)(v53 + 1);
      v42 += 5;
    }
    while ( (int)v53 < (int)v36 );
  }
  if ( MEMORY[0x183F7C989] )
  {
    MEMORY[0x183F7C989] = 0;
    MEMORY[0x183EBFAA8] = 1;
    MEMORY[0x18329CC24] = 1;
    MEMORY[0x183EBFD5C] = 0;
    MEMORY[0x140198F0B](0, v43, v53);
  }
  if ( MEMORY[0x144CBFAA4] )
    sub_1400A3970(v42, v43, v53);
  if ( (_DWORD)v1 != -1 )
  {
    sub_1400A3770((unsigned int)v1, v43, v53);
    if ( !MEMORY[0x183E93540] )
    {
      if ( MEMORY[0x183F7C988] && !MEMORY[0x183F7C788] )
      {
        MEMORY[0x183E93550] = 0;
        MEMORY[0x183E93540] = 1;
      }
      if ( MEMORY[0x183F7C977] && !MEMORY[0x183F7C777] )
      {
        v58 = MEMORY[0x183E93544] + 1;
        if ( MEMORY[0x183E93544] + 1 > 2 )
          v58 = 0;
        MEMORY[0x183E93544] = v58;
      }
    }
    v59 = 14388 * v1;
    v60 = *((_DWORD *)&MEMORY[0x151620DD0] + 3597 * v1);
    if ( v60 >= 0 )
    {
      v61 = MEMORY[0x151620DC4][v59 / 4];
      *(_DWORD *)((char *)&MEMORY[0x151620E28] + 84 * *(int *)((char *)&MEMORY[0x151620E14] + v59) + v59) = 0;
      *(_DWORD *)((char *)&MEMORY[0x151620E2C] + 84 * *(int *)((char *)&MEMORY[0x151620E14] + v59) + v59) = v61;
      *(_DWORD *)((char *)&MEMORY[0x151620E30] + 84 * *(int *)((char *)&MEMORY[0x151620E14] + v59) + v59) = v60;
      *(_OWORD *)((char *)&MEMORY[0x151620E3C] + 84 * *(int *)((char *)&MEMORY[0x151620E14] + v59) + v59) = *(_OWORD *)&MEMORY[0x151620DD4][v59];
      v62 = *(_DWORD *)((char *)&MEMORY[0x151620E14] + v59) + 1;
      *(_DWORD *)((char *)&MEMORY[0x151620DD0] + v59) = -1;
      *(_DWORD *)((char *)&MEMORY[0x151620E14] + v59) = v62 & 0x3F;
      MEMORY[0x151620DD4][v59] = 0;
      if ( (unsigned int)(MEMORY[0x151620DC4][v59 / 4] - 14) <= 5 && *((char *)&MEMORY[0x151620DD0] + v59) < 0 )
        MEMORY[0x151622774][v59 / 4] = 0;
      if ( (*(_DWORD *)((_BYTE *)&MEMORY[0x151620DD0] + v59) & 0x1000000) != 0 )
        MEMORY[0x151622774][v59 / 4] = 0;
    }
    if ( MEMORY[0x183F7C98B] )
    {
      if ( !MEMORY[0x183F7C78B] )
      {
        if ( MEMORY[0x18329CC24] || (MEMORY[0x18329CC24] = 1, !MEMORY[0x151620DC4][v59 / 4]) )
          MEMORY[0x18329CC24] = 0;
      }
    }
    if ( MEMORY[0x183F7C966] && !MEMORY[0x183F7C766] )
      MEMORY[0x183F79DF0] ^= 1u;
    if ( MEMORY[0x183F7C970] && !MEMORY[0x183F7C770] )
      MEMORY[0x183F79DF4] ^= 1u;
    v63 = MEMORY[0x18329CC38];
    MEMORY[0x18329CC3C] = MEMORY[0x18329CC38];
    MEMORY[0x18329CC40] = 0;
    v64 = MEMORY[0x183F7C960][MEMORY[0x18329DEE0]];
    if ( !v64 )
      v63 = 0;
    MEMORY[0x18329CC38] = v63;
    if ( !MEMORY[0x18329B180] )
    {
      HIDWORD(MEMORY[0x18329CC40]) = MEMORY[0x183F7C960][MEMORY[0x18329DEE8]] != 0;
      if ( !v64 || MEMORY[0x183F7C760][MEMORY[0x18329DEE0]] )
      {
        if ( !v63 )
          LODWORD(MEMORY[0x18329CC40]) = HIDWORD(MEMORY[0x183F7C750]) != 0;
      }
      else
      {
        MEMORY[0x18329CC38] = 1;
      }
    }
    v65 = MEMORY[0x151620CFC][v59 / 4];
    *(_DWORD *)((char *)&MEMORY[0x151620DB8] + v59) = 0;
    if ( (_DWORD)v65 == -1 || (v66 = 7166 * v65, MEMORY[0x18329E344][7166 * v65] <= 0) )
    {
      v68 = MEMORY[0x183EBFAAC];
      v69 = 3597 * v1;
      *(__int64 *)((char *)&MEMORY[0x151620D00] + 4 * v69) = 0;
      *(__int64 *)((char *)&MEMORY[0x151620D08] + 4 * v69) = 0;
      *(_DWORD *)((char *)&MEMORY[0x151620D80] + v59) = 0;
      *(_QWORD *)((char *)&MEMORY[0x151620D98] + v59) = 0;
      if ( (v68 == 3 || (unsigned int)(v68 - 5) <= 2 || v68 == 4 && *(_DWORD *)((char *)&MEMORY[0x151620C94] + v59))
        && !MEMORY[0x18329CC24] )
      {
        sub_140105180(1);
      }
    }
    else
    {
      v67 = MEMORY[0x18329E330][v66];
      *(_DWORD *)((char *)&MEMORY[0x151620DB8] + v59) = 1;
      if ( (_DWORD)v67 != -1 )
      {
        if ( MEMORY[0x192E9A688][24944 * MEMORY[0x15F2D9204][5210 * v67]] == 1 || MEMORY[0x18329E334][v66] )
          *(_DWORD *)((char *)&MEMORY[0x151620DB8] + v59) = 2;
        else
          *(_DWORD *)((char *)&MEMORY[0x151620DB8] + v59) = 3;
      }
    }
    v70 = *(_DWORD *)((char *)&MEMORY[0x151620DB8] + v59);
    switch ( v70 )
    {
      case 1:
        sub_1400A21B0((unsigned int)v1);
        break;
      case 2:
        sub_1400A0EB0((unsigned int)v1);
        break;
      case 3:
        sub_1400A1D20((unsigned int)v1);
        break;
    }
    *(_DWORD *)((char *)&MEMORY[0x151620DB8] + v59 + 4) = *(_DWORD *)((char *)&MEMORY[0x151620DB8] + v59);
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&v72 ^ v78);
}

