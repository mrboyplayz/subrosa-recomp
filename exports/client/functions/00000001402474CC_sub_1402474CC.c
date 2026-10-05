/* Address: 0x1402474cc | Name: sub_1402474CC | Size: 53 bytes */
char __fastcall sub_1402474CC(char a1)
{
  if ( !a1 )
    return sub_140260B28(&off_140289FB0, L"Runtime Error!\n\nProgram: ");
  if ( *(_QWORD *)&dword_140404A6C[19064593] )
    flushall();
  return 1;
}

