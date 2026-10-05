/* Address: 0x1402472a0 | Name: initialize_pointers | Size: 61 bytes */
char initialize_pointers()
{
  __int64 v0; // rbx

  v0 = _security_cookie;
  sub_14024CE80(_security_cookie);
  sub_140260BDC(v0);
  MEMORY[0x14025BC1C](v0);
  sub_1402477E0(v0);
  sub_1402455D8(v0);
  return 1;
}

