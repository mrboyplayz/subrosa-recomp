/* Address: 0x140232638 | Name: sub_140232638 | Size: 32 bytes */
int __fastcall sub_140232638(__int64 a1)
{
  int result; // eax

  result = getc_nolock(*(FILE **)a1);
  if ( result != -1 )
    ++*(_QWORD *)(a1 + 8);
  return result;
}

