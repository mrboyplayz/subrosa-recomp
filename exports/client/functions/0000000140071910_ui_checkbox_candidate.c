/* Address: 0x140071910 | Name: ui_checkbox_candidate | Size: 390 bytes */
// Immediate-mode checkbox helper. Widget type code 1; stores int pointer and toggles value on activation.
__int64 __fastcall ui_checkbox_candidate(__int64 a1, _DWORD *a2)
{
  int v4; // eax
  int v5; // edx
  int v6; // r8d
  int v7; // r9d
  int v8; // eax
  int v9; // edi
  __int64 v10; // rbx

  v4 = sub_14006C670(a1, (unsigned int)((MEMORY[0x150F61084] << 8) + (MEMORY[0x150F610CC] << 16)));
  v8 = sub_140070380(v4, v5, v6, v7, HIDWORD(MEMORY[0x150F610D8]), MEMORY[0x150F610E8]);
  v9 = v8;
  if ( v8 == -1 )
    return 0;
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
  v10 = 122LL * v8;
  MEMORY[0x150F610D0] = v8;
  MEMORY[0x150F61040][v10 + 86] = 1;
  sub_14006F120((char *)&MEMORY[0x150F61228] + v10 * 4, a1);
  *(_QWORD *)&MEMORY[0x150F61040][v10 + 186] = a2;
  MEMORY[0x150F61040][v10 + 188] = 1;
  if ( (_DWORD)MEMORY[0x151042650]
    || !(_DWORD)MEMORY[0x1510426EC]
    || v9 != MEMORY[0x150F61180]
    || v9 != (_DWORD)MEMORY[0x150F61174] )
  {
    return 0;
  }
  *a2 ^= 1u;
  return 1;
}

