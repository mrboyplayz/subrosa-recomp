/* Address: 0x14026b2d0 | Name: _chsize | Size: 21 bytes */
int __cdecl chsize(int FileHandle, int Size)
{
  return -((unsigned int)chsize_s(FileHandle, Size) != 0);
}

