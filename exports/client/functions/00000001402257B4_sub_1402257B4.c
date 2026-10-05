/* Address: 0x1402257b4 | Name: sub_1402257B4 | Size: 48 bytes */
bool __fastcall MEMORY[0x1402257B4](char a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rax
  bool result; // al

  result = true;
  if ( (a1 & 4) == 0 )
  {
    if ( (a1 & 1) == 0 )
      return false;
    v2 = (a1 & 2) != 0 ? 0x8000000000000000uLL : 0x7FFFFFFFFFFFFFFFLL;
    if ( a2 <= v2 )
      return false;
  }
  return result;
}

