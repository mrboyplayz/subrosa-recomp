/* Address: 0x140262a0c | Name: sub_140262A0C | Size: 37 bytes */
__int64 __fastcall MEMORY[0x140262A0C](__int64 a1)
{
  if ( !a1 || (_UNKNOWN **)a1 == &off_14028B0E0 )
    return 0x7FFFFFFF;
  else
    return (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(a1 + 348));
}

