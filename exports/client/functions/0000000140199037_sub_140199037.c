/* Address: 0x140199037 | Name: sub_140199037 | Size: 6 bytes */
// attributes: thunk
int __stdcall MEMORY[0x140199037](char *name, int namelen)
{
  return gethostname(name, namelen);
}

