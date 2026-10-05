/* Address: 0x14006f8d0 | Name: ui_combo_box_candidate | Size: 1080 bytes */
// Immediate-mode combo-box helper. Widget type code 10; stores current index pointer, item table, and item count; mouse wheel changes selection.
__int64 __fastcall ui_combo_box_candidate(
        __int64 a1,
        __int64 a2,
        float a3,
        float a4,
        float a5,
        int a6,
        int *a7,
        __int64 a8,
        int a9,
        int a10)
{
  int v12; // eax
  int v13; // edx
  int v14; // r8d
  int v15; // r9d
  int v16; // eax
  int v17; // edi
  __int64 v18; // rbx
  int v19; // eax
  int v20; // r8d
  int v21; // r9d
  bool v22; // cc
  int *v23; // rcx
  bool v24; // sf
  int v25; // eax
  _DWORD *v26; // rcx
  int v27; // xmm2_4
  int v28; // xmm1_4
  int v29; // xmm6_4
  int v30; // eax
  int v31; // r8d
  int v32; // r9d
  int v33; // edi
  __int64 v34; // rdx
  int v35; // ecx
  int v36; // eax

  v12 = sub_14006C670(a1, (unsigned int)((MEMORY[0x150F61084] << 8) + (MEMORY[0x150F610CC] << 16)));
  v16 = sub_140070380(v12, v13, v14, v15, LODWORD(a5), MEMORY[0x150F610E8]);
  v17 = v16;
  if ( MEMORY[0x150F61118] )
  {
    *((float *)&MEMORY[0x150F610D8] + 1) = *((float *)&MEMORY[0x150F610D8] + 1) + (float)(a5 + 4.0);
  }
  else
  {
    *(float *)&MEMORY[0x150F61124] = a5 + 4.0;
    *(float *)&MEMORY[0x150F610D8] = *(float *)&MEMORY[0x150F610D8] + (float)(a4 + 4.0);
  }
  MEMORY[0x150F610D0] = v16;
  v18 = 122LL * v16;
  MEMORY[0x150F61040][v18 + 86] = 10;
  *(_QWORD *)&MEMORY[0x150F61040][v18 + 194] = a7;
  v19 = *a7;
  *(float *)&MEMORY[0x150F61040][v18 + 196] = a4;
  *(float *)&MEMORY[0x150F61040][v18 + 197] = a5;
  MEMORY[0x150F61040][v18 + 193] = v19;
  *(_QWORD *)&MEMORY[0x150F61040][v18 + 188] = a8;
  MEMORY[0x150F61040][v18 + 190] = a9;
  MEMORY[0x150F61040][v18 + 191] = a10;
  sub_14006F120((char *)&MEMORY[0x150F61228] + v18 * 4, a1);
  if ( v17 == MEMORY[0x150F61180] )
  {
    if ( MEMORY[0x150F61040][v18 + 191] <= 0 )
    {
      **(_DWORD **)&MEMORY[0x150F61040][v18 + 194] = 0;
    }
    else
    {
      v22 = MEMORY[0x160FC481C] <= 0;
      if ( MEMORY[0x160FC481C] < 0 )
      {
        do
        {
          --**(_DWORD **)&MEMORY[0x150F61040][v18 + 194];
          v23 = *(int **)&MEMORY[0x150F61040][v18 + 194];
          if ( *v23 < 0 )
            *v23 = MEMORY[0x150F61040][v18 + 191] - 1;
          v24 = MEMORY[0x160FC481C] + 1 < 0;
          v25 = ++MEMORY[0x160FC481C];
        }
        while ( v24 );
        v22 = v25 <= 0;
      }
      if ( !v22 )
      {
        do
        {
          ++**(_DWORD **)&MEMORY[0x150F61040][v18 + 194];
          v26 = *(_DWORD **)&MEMORY[0x150F61040][v18 + 194];
          if ( *v26 >= MEMORY[0x150F61040][v18 + 191] )
            *v26 = 0;
          --MEMORY[0x160FC481C];
        }
        while ( MEMORY[0x160FC481C] > 0 );
      }
    }
  }
  if ( !(_DWORD)MEMORY[0x151042650]
    && (_DWORD)MEMORY[0x1510426EC]
    && v17 == MEMORY[0x150F61180]
    && v17 == (_DWORD)MEMORY[0x150F61174] )
  {
    MEMORY[0x150F61040][v18 + 186] = 1;
  }
  if ( !MEMORY[0x150F61040][v18 + 186] )
    return (unsigned int)MEMORY[0x150F61040][v18 + 186];
  v27 = DWORD1(MEMORY[0x150F610D8]);
  v28 = MEMORY[0x150F610D8];
  if ( MEMORY[0x151042810] < 16 )
    *(_QWORD *)&MEMORY[0x150F61040][2 * MEMORY[0x151042810]++ + 230901] = MEMORY[0x150F610D8];
  v29 = MEMORY[0x150F61124];
  DWORD1(MEMORY[0x150F610D8]) = v27;
  LODWORD(MEMORY[0x150F610D8]) = v28;
  v30 = sub_140071C20((unsigned int)"cs_combobox", 0, v20, v21, *(float *)&MEMORY[0x150F610EC] + a3, 1095761920, 1792);
  *(_QWORD *)&MEMORY[0x150F610D8] = 0;
  v33 = v30;
  v34 = *(_QWORD *)&MEMORY[0x150F61040][v18 + 120];
  if ( v34 )
  {
    v35 = MEMORY[0x150F61040][v18 + 118];
    LODWORD(MEMORY[0x150F61108]) = MEMORY[0x150F61040][v18 + 117];
    HIDWORD(MEMORY[0x150F61108]) = v35;
    MEMORY[0x150F61110] = v34;
  }
  if ( (unsigned int)sub_1400707C0(a1, v34, v31, v32, LODWORD(a5), 0, (__int64)a7, a8, a9, a10) )
    MEMORY[0x150F61040][v18 + 186] = 0;
  sub_140077230();
  v36 = MEMORY[0x151042810];
  if ( MEMORY[0x151042810] > 0 )
  {
    --MEMORY[0x151042810];
    *(_QWORD *)&MEMORY[0x150F610D8] = *(_QWORD *)&MEMORY[0x150F61040][2 * v36 + 230899];
  }
  MEMORY[0x150F61124] = v29;
  if ( v33 != -1 && MEMORY[0x150F61168] == v33 )
    return (unsigned int)MEMORY[0x150F61040][v18 + 186];
  MEMORY[0x150F61040][v18 + 186] = 0;
  return 0;
}

