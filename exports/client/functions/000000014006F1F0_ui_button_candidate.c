/* Address: 0x14006f1f0 | Name: ui_button_candidate | Size: 387 bytes */
// Immediate-mode button helper. Widget type code 0; returns true on active click/press interaction.
__int64 __fastcall ui_button_candidate(__int64 a1)
{
  int v2; // eax
  int v3; // edx
  int v4; // r8d
  int v5; // r9d
  int v6; // eax
  int v7; // ebx
  __int64 v8; // rdi

  v2 = sub_14006C670(a1, (unsigned int)((MEMORY[0x150F61084] << 8) + (MEMORY[0x150F610CC] << 16)));
  v6 = sub_140070380(v2, v3, v4, v5, HIDWORD(MEMORY[0x150F610D8]), MEMORY[0x150F610E8]);
  v7 = v6;
  if ( v6 != -1 )
  {
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
    v8 = 122LL * v6;
    MEMORY[0x150F610D0] = v6;
    MEMORY[0x150F61040][v8 + 86] = 0;
    sub_14006F120((char *)&MEMORY[0x150F61228] + v8 * 4, a1);
    if ( !MEMORY[0x150F61040][v8 + 90] )
    {
      if ( !(_DWORD)MEMORY[0x151042650]
        && (_DWORD)MEMORY[0x1510426EC]
        && v7 == MEMORY[0x150F61180]
        && v7 == (_DWORD)MEMORY[0x150F61174] )
      {
        return 1;
      }
      if ( MEMORY[0x150F61040][v8 + 92] )
      {
        MEMORY[0x150F61040][v8 + 92] = 0;
        return 1;
      }
      if ( v7 == MEMORY[0x150F61188] && MEMORY[0x150F6118C] )
        return 1;
    }
  }
  return 0;
}

