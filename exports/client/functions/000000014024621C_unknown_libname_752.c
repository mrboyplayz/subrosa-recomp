/* Address: 0x14024621c | Name: unknown_libname_752 | Size: 78 bytes */
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64 unknown_libname_752()
{
  __int64 result; // rax

  result = *(_QWORD *)&dword_140404A6C[19064865];
  if ( !*(_QWORD *)&dword_140404A6C[19064865] )
  {
    result = *(_QWORD *)&dword_140404A6C[19064863];
    if ( !*(_QWORD *)&dword_140404A6C[19064863] )
    {
      if ( !*(_QWORD *)&dword_140404A6C[19064861] || (unsigned int)sub_140246350() && (unsigned int)sub_1402467B0() )
        result = 0;
      else
        result = *(_QWORD *)&dword_140404A6C[19064863];
    }
    *(_QWORD *)&dword_140404A6C[19064865] = result;
  }
  return result;
}

