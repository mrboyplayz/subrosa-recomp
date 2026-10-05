/* Address: 0x1401f90e0 | Name: sub_1401F90E0 | Size: 58 bytes */
__int64 __fastcall sub_1401F90E0(__int64 a1)
{
  int v2; // eax
  __int64 v3; // rdx

  if ( *(_QWORD *)&dword_140404A6C[19064477] == -1 )
    v2 = sub_14024718C();
  else
    v2 = sub_140247200(&dword_140404A6C[19064477], a1);
  v3 = 0;
  if ( !v2 )
    return a1;
  return v3;
}

