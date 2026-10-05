/* Address: 0x14008a330 | Name: sub_14008A330 | Size: 90 bytes */
int sub_14008A330()
{
  char Buffer[64]; // [rsp+20h] [rbp-58h] BYREF

  dword_16DD4B9C0 = 0;
  _chdir(byte_196ABD6C0);
  sub_1400DBB30(Buffer, "client2.csk");
  return _chdir(DstBuf);
}

