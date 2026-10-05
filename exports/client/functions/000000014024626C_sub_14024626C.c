/* Address: 0x14024626c | Name: sub_14024626C | Size: 59 bytes */
__int64 sub_14024626C()
{
  __int64 result; // rax

  result = *(_QWORD *)&dword_140404A6C[19064861];
  if ( !*(_QWORD *)&dword_140404A6C[19064861] )
  {
    if ( !*(_QWORD *)&dword_140404A6C[19064863]
      || (unsigned int)initialize_narrow_environment_0() && (unsigned int)sub_1402466DC() )
    {
      return 0;
    }
    else
    {
      return *(_QWORD *)&dword_140404A6C[19064861];
    }
  }
  return result;
}

