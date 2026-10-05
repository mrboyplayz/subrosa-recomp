/* Address: 0x1400ef451 | Name: gethostname | Size: 6 bytes */
// attributes: thunk
int __stdcall gethostname(char *name, int namelen)
{
  return __imp_gethostname(name, namelen);
}

