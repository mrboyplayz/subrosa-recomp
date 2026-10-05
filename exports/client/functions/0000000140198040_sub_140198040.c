/* Address: 0x140198040 | Name: sub_140198040 | Size: 70 bytes */
_BYTE *__fastcall sub_140198040(_BYTE *Block, char a2)
{
  bool v2; // zf

  v2 = (Block[8] & 1) == 0;
  *(_QWORD *)Block = &off_140279AC8;
  if ( !v2 )
    SteamAPI_UnregisterCallback();
  if ( (a2 & 1) != 0 )
    j_j_free(Block);
  return Block;
}

