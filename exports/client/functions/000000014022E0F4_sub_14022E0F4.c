/* Address: 0x14022e0f4 | Name: sub_14022E0F4 | Size: 78 bytes */
__int64 __fastcall sub_14022E0F4(__int64 a1, __int64 a2)
{
  int v4; // eax
  unsigned int v5; // ebx

  do
  {
    v4 = getc_nolock(*(FILE **)a1);
    v5 = v4;
    if ( v4 == -1 )
      break;
    ++*(_QWORD *)(a1 + 8);
  }
  while ( (unsigned int)sub_140236ED8((unsigned __int8)v4, 8, a2) );
  return v5;
}

