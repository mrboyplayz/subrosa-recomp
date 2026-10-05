/* Address: 0x140254358 | Name: wctomb | Size: 77 bytes */
__int64 __fastcall wctomb(_WORD *a1, unsigned __int16 a2)
{
  int v4; // eax
  int v5; // eax
  unsigned int v6; // ecx
  int SizeConverted; // [rsp+50h] [rbp+18h] BYREF

  SizeConverted = 0;
  v4 = sub_140258D34();
  v5 = wctomb_s_l(&SizeConverted, a1, v4, a2, nullptr);
  v6 = SizeConverted;
  if ( v5 )
    return (unsigned int)-1;
  return v6;
}

