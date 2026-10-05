/* Address: 0x1400feb50 | Name: ui_build_options_menu_candidate | Stack analysis corrected in export snapshot. */
// Candidate options menu builder: Back, Fullscreen, V-Sync, Frame Smoothing, Sprite Models, Invert Mouse, advanced inventory, audio selectors.
__int64 ui_build_options_menu_candidate()
{
  unsigned int v0; // eax
  int v1; // eax
  unsigned int v2; // ecx
  unsigned int *v3; // rcx
  char *v4; // rdx
  char v5; // al
  int v6; // r8d
  int v7; // ecx
  unsigned int v8; // edx
  __int64 v9; // r8
  int v10; // edx
  unsigned int v11; // ecx
  const char *v12; // r8
  char *v13; // rcx
  bool v14; // zf
  _QWORD *v15; // rax
  char *v16; // rcx
  const char *v17; // rdi
  const char *v18; // rbx
  const char *v19; // rax
  char *v20; // rcx
  _WORD *v21; // rcx
  int v22; // eax
  char *v23; // rcx
  char *v24; // rdx
  __int64 v26; // [rsp-20h] [rbp-15C0h] BYREF
  __int64 v27; // [rsp+0h] [rbp-15A0h]
  int v28; // [rsp+30h] [rbp-1570h]
  __int16 v29; // [rsp+34h] [rbp-156Ch]
  char v30; // [rsp+36h] [rbp-156Ah]
  __int16 v31; // [rsp+38h] [rbp-1568h]
  void *v32; // [rsp+40h] [rbp-1560h]
  char v33[1024]; // [rsp+1530h] [rbp-70h] BYREF
  char v34[4096]; // [rsp+1930h] [rbp+390h] BYREF
  __int64 v35; // [rsp+2930h] [rbp+1390h]

  v0 = dword_140404A6C[70087074];
  if ( !dword_140404A6C[18215638] )
    v0 = 41;
  dword_140404A6C[70087074] = v0;
  dword_140404A6C[70087069] = 1126170624;
  dword_140404A6C[70087070] = 1101004800;
  v1 = ui_button_candidate("Back");
  v2 = dword_140404A6C[283831310];
  if ( v1 )
    v2 = 0;
  dword_140404A6C[70087067] = 1082130432;
  dword_140404A6C[283831310] = v2;
  dword_140404A6C[70087069] = 1131413504;
  dword_140404A6C[70087070] = 1107296256;
  dword_140404A6C[70087068] = 1115684864;
  if ( (unsigned int)ui_checkbox_candidate("Fullscreen", &dword_140404A6C[137297766]) )
    MEMORY[0x140198EDB]();
  if ( (unsigned int)ui_checkbox_candidate("V-Sync", &dword_140404A6C[73991643]) )
    MEMORY[0x140198EED]();
  ui_checkbox_candidate("Frame Smoothing", &dword_140404A6C[73991654]);
  ui_checkbox_candidate("Sprite Models", &dword_140404A6C[73991655]);
  sub_140071640(Parameters);
  sub_140071640(Parameters);
  ui_checkbox_candidate("Invert Mouse", &dword_140404A6C[73991627]);
  ui_checkbox_candidate("Use advanced inventory", &dword_140404A6C[73991653]);
  dword_140404A6C[70087067] = 1140850688;
  dword_140404A6C[70087068] = 1115684864;
  ui_int_slider_candidate("Sound Volume", (int *)&dword_140404A6C[73991612], 0, 100, 10);
  ui_combo_box_candidate(
    "Audio Output",
    240.0,
    256.0,
    240.0,
    0x42000000u,
    0,
    &dword_140404A6C[18198668],
    (__int64)&dword_140404A6C[18198670],
    0x200u,
    dword_140404A6C[18198669]);
  sub_140071640(Parameters);
  ui_combo_box_candidate(
    "Audio Input",
    240.0,
    256.0,
    240.0,
    0x42000000u,
    0,
    &dword_140404A6C[18206863],
    (__int64)&dword_140404A6C[18206865],
    0x200u,
    dword_140404A6C[18206864]);
  sub_140071640(Parameters);
  ui_checkbox_candidate("Use Push to Talk", &dword_140404A6C[73991638]);
  if ( !dword_140404A6C[73991638] )
    ui_text_entry_candidate("Voice Min", (__int64)&dword_140404A6C[73991636], 0x10u, 0x4000u);
  v33[0] = 0;
  if ( dword_140404A6C[18215638] )
  {
    strcpy(v33, "Press a key or mouse button");
  }
  else if ( dword_140404A6C[73991639] )
  {
    v3 = &dword_140404A6C[4 * dword_140404A6C[73991639] + 83175925];
    v4 = (char *)(v33 - (char *)v3);
    do
    {
      v5 = *(_BYTE *)v3;
      *((_BYTE *)v3 + (_QWORD)v4) = *(_BYTE *)v3;
      v3 = (unsigned int *)((char *)v3 + 1);
    }
    while ( v5 );
  }
  else if ( dword_140404A6C[73991640] )
  {
    switch ( dword_140404A6C[73991640] )
    {
      case 1u:
        v6 = 1;
        break;
      case 2u:
        v6 = 2;
        break;
      case 4u:
        v6 = 3;
        break;
      case 8u:
        v6 = 4;
        break;
      case 0x10u:
        v6 = 5;
        break;
      case 0x20u:
        v6 = 6;
        break;
      case 0x40u:
        v6 = 7;
        break;
      default:
        v6 = 0;
        if ( dword_140404A6C[73991640] == 128 )
          v6 = 8;
        break;
    }
    sub_140158AB0(v33, "Mouse %d", v6);
  }
  ui_select_value_candidate((unsigned __int8 *)v33, (int *)&dword_140404A6C[18215638], 1);
  if ( dword_140404A6C[18215638] )
  {
    v7 = dword_140404A6C[468760166];
    if ( dword_140404A6C[468760166] != dword_140404A6C[468760165] )
    {
      v8 = dword_140404A6C[73991639];
      while ( !dword_140404A6C[5 * v7 + 468760167] )
      {
        if ( dword_140404A6C[5 * v7 + 468760168] == 41 )
          goto LABEL_45;
LABEL_46:
        v7 = ((_WORD)v7 + 1) & 0x3FF;
        dword_140404A6C[468760166] = v7;
        if ( v7 == dword_140404A6C[468760165] )
          goto LABEL_47;
      }
      v9 = (int)dword_140404A6C[5 * v7 + 468760168];
      if ( (int)v9 < 323 )
      {
        if ( LOBYTE(dword_140404A6C[4 * v9 + 83175925]) )
          v8 = dword_140404A6C[5 * v7 + 468760168];
        dword_140404A6C[73991639] = v8;
      }
LABEL_45:
      dword_140404A6C[18215638] = 0;
      goto LABEL_46;
    }
LABEL_47:
    v10 = 0;
    v11 = 1;
    do
    {
      if ( (dword_140404A6C[468760163] & v11) == v11 )
      {
        if ( (unsigned int)v10 >= 3 )
        {
          dword_140404A6C[73991639] = 0;
          dword_140404A6C[73991640] = v11;
        }
        dword_140404A6C[18215638] = 0;
      }
      ++v10;
      v11 = __ROL4__(v11, 1);
    }
    while ( v10 < 16 );
  }
  sub_140071640(Parameters);
  sub_140071640(Parameters);
  ui_text_entry_candidate("Port", (__int64)&dword_140404A6C[73991093], 0, 0xFFFFu);
  ui_text_entry_candidate("Bandwidth", (__int64)&dword_140404A6C[73991094], 0x2710u, 0x3B9ACA00u);
  sub_140071640(Parameters);
  if ( (unsigned int)ui_button_candidate("Copy System Info") )
  {
    LOBYTE(dword_140404A6C[83177973]) = 0;
    v12 = (const char *)MEMORY[0x140198E51]();
    v13 = (char *)&dword_140404A6C[83177972] + 3;
    do
      v14 = *++v13 == 0;
    while ( !v14 );
    strcpy(v13, v12);
    v15 = (_QWORD *)((char *)&dword_140404A6C[83177972] + 3);
    do
    {
      v14 = *((_BYTE *)v15 + 1) == 0;
      v15 = (_QWORD *)((char *)v15 + 1);
    }
    while ( !v14 );
    v16 = (char *)&dword_140404A6C[83177972] + 3;
    *v15 = 0x7469622D343620LL;
    do
      v14 = *++v16 == 0;
    while ( !v14 );
    strcpy(v16, "\n\n");
    v17 = (const char *)qword_140302FA8(7936);
    v18 = (const char *)qword_140302FA8(7937);
    v19 = (const char *)qword_140302FA8(7938);
    sub_140158AB0(v34, "GL_VENDOR: %s\nGL_RENDERER: %s\nGL_VERSION: %s\n", v17, v18, v19);
    v20 = (char *)&dword_140404A6C[83177972] + 3;
    do
      v14 = *++v20 == 0;
    while ( !v14 );
    strcpy(v20, v34);
    v21 = (_WORD *)((char *)&dword_140404A6C[83177972] + 3);
    do
    {
      v14 = *((_BYTE *)v21 + 1) == 0;
      v21 = (_WORD *)((char *)v21 + 1);
    }
    while ( !v14 );
    *v21 = 10;
    v22 = MEMORY[0x140198EB1]();
    sub_140158AB0(v34, "RAM: %d MB\n", v22);
    v23 = (char *)&dword_140404A6C[83177972] + 3;
    do
      v14 = *++v23 == 0;
    while ( !v14 );
    strcpy(v23, v34);
    if ( (unsigned int)MEMORY[0x140198EAB]() )
    {
      v24 = (char *)&dword_140404A6C[83177972] + 3;
      do
        v14 = *++v24 == 0;
      while ( !v14 );
      strcpy(v24, "SSE2\n");
    }
    MEMORY[0x140198EA5]();
  }
  if ( dword_140404A6C[18198667] != dword_140404A6C[18198668] )
  {
    if ( dword_140404A6C[7] )
    {
      MEMORY[0x140198E8D]();
      MEMORY[0x140198E9F]();
    }
    MEMORY[0x140198E57]();
    v28 = 48000;
    v29 = -32480;
    v30 = 2;
    v32 = sub_140069400;
    v31 = 1024;
    LODWORD(v27) = 0;
    dword_140404A6C[7] = MEMORY[0x140198E87]();
    if ( dword_140404A6C[7] )
      MEMORY[0x140198E8D]();
    dword_140404A6C[18198667] = dword_140404A6C[18198668];
  }
  if ( dword_140404A6C[18206862] != dword_140404A6C[18206863] )
  {
    if ( dword_140404A6C[196619] )
    {
      MEMORY[0x140198E8D]();
      MEMORY[0x140198E9F]();
    }
    MEMORY[0x140198E57]();
    v28 = 48000;
    v29 = -32752;
    v30 = 1;
    v32 = sub_14006A380;
    v31 = 1024;
    LODWORD(v27) = 0;
    dword_140404A6C[196619] = MEMORY[0x140198E87]();
    if ( dword_140404A6C[196619] )
      MEMORY[0x140198E8D]();
    dword_140404A6C[18206862] = dword_140404A6C[18206863];
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&v26 ^ v35);
}

