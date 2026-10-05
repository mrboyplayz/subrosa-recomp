/* Address: 0x140248a10 | Name: sub_140248A10 | Size: 118 bytes */
__int64 __fastcall sub_140248A10(unsigned int a1, __int64 a2)
{
  _QWORD v4[5]; // [rsp+0h] [rbp-158h] BYREF
  int v5; // [rsp+28h] [rbp-130h]
  _BYTE Locale[272]; // [rsp+30h] [rbp-128h] BYREF
  __int64 v7; // [rsp+140h] [rbp-18h]

  if ( a1 <= 5 )
  {
    if ( a2 )
    {
      v5 = 131;
      v4[4] = Locale;
      if ( (unsigned int)MEMORY[0x140259504](0, 0, a2) )
        sub_140249068(a1, Locale);
    }
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)v4 ^ v7);
}

