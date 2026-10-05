/* Address: 0x140071440 | Name: ui_int_slider_candidate | Size: 509 bytes */
// Immediate-mode integer slider helper. Widget type code 11; stores int pointer, min, max, and step.
__int64 __fastcall ui_int_slider_candidate(__int64 a1, int *a2, int a3, int a4, int a5)
{
  int v9; // eax
  int v10; // edx
  int v11; // r8d
  int v12; // r9d
  int v13; // eax
  unsigned int v14; // edi
  __int64 v15; // rsi
  int v16; // ecx

  v9 = sub_14006C670(a1, (unsigned int)((MEMORY[0x150F61084] << 8) + (MEMORY[0x150F610CC] << 16)));
  v13 = sub_140070380(v9, v10, v11, v12, HIDWORD(MEMORY[0x150F610D8]), MEMORY[0x150F610E8]);
  v14 = v13;
  if ( MEMORY[0x150F61118] )
  {
    *((float *)&MEMORY[0x150F610D8] + 1) = *((float *)&MEMORY[0x150F610D8] + 1)
                                         + (float)(*((float *)&MEMORY[0x150F610D8] + 3) + 4.0);
  }
  else
  {
    *(float *)&MEMORY[0x150F610D8] = *(float *)&MEMORY[0x150F610D8]
                                   + (float)(*((float *)&MEMORY[0x150F610D8] + 2) + 4.0);
    *(float *)&MEMORY[0x150F61124] = *((float *)&MEMORY[0x150F610D8] + 3) + 4.0;
  }
  v15 = 122LL * v13;
  MEMORY[0x150F610D0] = v13;
  MEMORY[0x150F61040][v15 + 86] = 11;
  sub_14006F120((char *)&MEMORY[0x150F61228] + v15 * 4, a1);
  MEMORY[0x150F61040][v15 + 190] = a5;
  *(_QWORD *)&MEMORY[0x150F61040][v15 + 186] = a2;
  MEMORY[0x150F61040][v15 + 188] = a3;
  MEMORY[0x150F61040][v15 + 189] = a4;
  MEMORY[0x150F61040][v15 + 191] = 1098907648;
  if ( v14 == (_DWORD)MEMORY[0x150F61174] )
  {
    v16 = (int)(float)((float)((float)((float)((float)(*(float *)&MEMORY[0x1B0032360]
                                                     - *(float *)&MEMORY[0x150F61040][v15 + 105])
                                             - 8.0)
                                     / (float)(*(float *)&MEMORY[0x150F61040][v15 + 98] - 16.0))
                             * fmaxf((float)(a4 - a3), 1.0))
                     + 0.5);
    if ( MEMORY[0x151041AA0] && a5 )
      v16 = (a5 >> 1) + v16 - ((a5 >> 1) + v16) % a5;
    if ( v16 + a3 >= a3 )
      a3 += v16;
    if ( a3 > a4 )
      a3 = a4;
    *a2 = a3;
  }
  return v14;
}

