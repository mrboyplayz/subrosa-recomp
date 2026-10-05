/* Address: 0x140246bf8 | Name: unknown_libname_766 | Size: 78 bytes */
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
__int64 unknown_libname_766()
{
  __int64 result; // rax

  result = *(_QWORD *)&dword_140404A6C[19064867];
  if ( !*(_QWORD *)&dword_140404A6C[19064867] )
  {
    result = *(_QWORD *)&dword_140404A6C[19064861];
    if ( !*(_QWORD *)&dword_140404A6C[19064861] )
    {
      if ( !*(_QWORD *)&dword_140404A6C[19064863]
        || (unsigned int)initialize_narrow_environment_0() && (unsigned int)sub_1402466DC() )
      {
        result = 0;
      }
      else
      {
        result = *(_QWORD *)&dword_140404A6C[19064861];
      }
    }
    *(_QWORD *)&dword_140404A6C[19064867] = result;
  }
  return result;
}

