/* Address: 0x140070060 | Name: ui_text_entry_candidate | Size: 403 bytes */
// Immediate-mode text entry helper. Widget type code 5; stores text buffer pointer and length bounds.
__int64 __fastcall ui_text_entry_candidate(__int64 a1, __int64 a2, int a3, int a4)
{
  int v8; // eax
  int v9; // edx
  int v10; // r8d
  int v11; // r9d
  int v12; // eax
  unsigned int v13; // edi
  __int64 v14; // rbx
  __int64 result; // rax

  v8 = sub_14006C670(a1, (unsigned int)((MEMORY[0x150F61084] << 8) + (MEMORY[0x150F610CC] << 16)));
  v12 = sub_140070380(v8, v9, v10, v11, HIDWORD(MEMORY[0x150F610D8]), MEMORY[0x150F610E8]);
  v13 = v12;
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
  v14 = 122LL * v12;
  MEMORY[0x150F610D0] = v12;
  MEMORY[0x150F61040][v14 + 86] = 5;
  *(_QWORD *)&MEMORY[0x150F61040][v14 + 188] = a2;
  MEMORY[0x150F61040][v14 + 190] = a3;
  MEMORY[0x150F61040][v14 + 191] = a4;
  MEMORY[0x151042A3C] = 24;
  result = sub_14006F120((char *)&MEMORY[0x150F61228] + v14 * 4, a1);
  if ( v13 == (_DWORD)MEMORY[0x150F61174] )
    return sub_140075A40(v13);
  return result;
}

