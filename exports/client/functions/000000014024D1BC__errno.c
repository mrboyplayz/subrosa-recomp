/* Address: 0x14024d1bc | Name: _errno | Size: 32 bytes */
int *__cdecl errno()
{
  __int64 v0; // rax

  v0 = sub_140255BEC();
  if ( v0 )
    return (int *)(v0 + 32);
  else
    return (int *)&unk_1403022AC;
}

