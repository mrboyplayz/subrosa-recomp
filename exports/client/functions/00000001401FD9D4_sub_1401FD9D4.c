/* Address: 0x1401fd9d4 | Name: sub_1401FD9D4 | Size: 50 bytes */
char sub_1401FD9D4()
{
  if ( (unsigned int)sub_140206708(&dword_140404A6C[19064537], 4000, 0) )
  {
    ++dword_140404A6C[19064547];
    return 1;
  }
  else
  {
    _acrt_uninitialize_locks();
    return 0;
  }
}

