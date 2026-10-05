/* Address: 0x140256e00 | Name: sub_140256E00 | Size: 111 bytes */
__int64 __fastcall sub_140256E00(unsigned __int16 a1, __int16 a2)
{
  __int16 v3; // ax
  __int64 CharType; // [rsp+30h] [rbp+8h] BYREF
  unsigned __int16 SrcStr; // [rsp+40h] [rbp+18h] BYREF

  if ( a1 != 0xFFFF )
  {
    if ( a1 < 0x100u )
    {
      v3 = *((_WORD *)off_140302598 + a1);
      return (unsigned __int16)(a2 & v3);
    }
    SrcStr = a1;
    LOWORD(CharType) = 0;
    if ( (unsigned int)MEMORY[0x140269844](1, &SrcStr, 1, &CharType) )
    {
      v3 = CharType;
      return (unsigned __int16)(a2 & v3);
    }
  }
  return 0;
}

