/* Address: 0x1401980e0 | Name: sub_1401980E0 | Size: 70 bytes */
_BYTE *__fastcall sub_1401980E0(_BYTE *Block, char a2)
{
  bool v2; // zf

  v2 = (Block[8] & 1) == 0;
  *(_QWORD *)Block = &off_140279B18;
  if ( !v2 )
    SteamAPI_UnregisterCallback();
  if ( (a2 & 1) != 0 )
    j_j_free(Block);
  return Block;
}

