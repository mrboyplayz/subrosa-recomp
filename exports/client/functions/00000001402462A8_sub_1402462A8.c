/* Address: 0x1402462a8 | Name: sub_1402462A8 | Size: 59 bytes */
__int64 sub_1402462A8()
{
  __int64 result; // rax

  result = *(_QWORD *)&dword_140404A6C[19064863];
  if ( !*(_QWORD *)&dword_140404A6C[19064863] )
  {
    if ( !*(_QWORD *)&dword_140404A6C[19064861] || (unsigned int)sub_140246350() && (unsigned int)sub_1402467B0() )
      return 0;
    else
      return *(_QWORD *)&dword_140404A6C[19064863];
  }
  return result;
}

