/* Address: 0x14006f5a0 | Name: ui_select_value_candidate | Size: 432 bytes */
__int64 __fastcall ui_select_value_candidate(__int64 a1, int *a2, int a3)
{
  int v6; // eax
  int v7; // edx
  int v8; // r8d
  int v9; // r9d
  int v10; // eax
  int v11; // edi
  __int64 v12; // rbx
  bool v13; // zf

  v6 = sub_14006C670(a1, (unsigned int)((MEMORY[0x150F61084] << 8) + (MEMORY[0x150F610CC] << 16)));
  v10 = sub_140070380(v6, v7, v8, v9, HIDWORD(MEMORY[0x150F610D8]), MEMORY[0x150F610E8]);
  v11 = v10;
  if ( v10 != -1 )
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
    v12 = 122LL * v10;
    MEMORY[0x150F610D0] = v10;
    MEMORY[0x150F61040][v12 + 86] = 2;
    sub_14006F120((char *)&MEMORY[0x150F61228] + v12 * 4, a1);
    v13 = MEMORY[0x150F61040][v12 + 90] == 0;
    *(_QWORD *)&MEMORY[0x150F61040][v12 + 186] = a2;
    MEMORY[0x150F61040][v12 + 188] = a3;
    if ( v13 )
    {
      if ( !(_DWORD)MEMORY[0x151042650]
        && (_DWORD)MEMORY[0x1510426EC]
        && v11 == MEMORY[0x150F61180]
        && v11 == (_DWORD)MEMORY[0x150F61174] )
      {
        goto LABEL_14;
      }
      if ( (MEMORY[0x151040998] < 2 || MEMORY[0x150F61040][v12 + 93] == MEMORY[0x1510409A0])
        && MEMORY[0x150F61040][v12 + 92] )
      {
        MEMORY[0x150F61040][v12 + 92] = 0;
LABEL_14:
        *a2 = a3;
        return 1;
      }
    }
  }
  return 0;
}

