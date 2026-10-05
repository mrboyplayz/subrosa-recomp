/* Address: 0x1402629d4 | Name: sub_1402629D4 | Size: 54 bytes */
void __fastcall sub_1402629D4(void **Block)
{
  if ( Block && Block != (void **)&off_14028B0E0 && !*((_DWORD *)Block + 87) )
  {
    sub_140262400(Block);
    free_base(Block);
  }
}

