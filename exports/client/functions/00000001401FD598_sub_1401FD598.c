/* Address: 0x1401fd598 | Name: sub_1401FD598 | Size: 42 bytes */
_QWORD *sub_1401FD598()
{
  _QWORD *result; // rax
  _QWORD *v1; // rbx

  result = (_QWORD *)((__int64 (*)(void))InterlockedFlushSList)();
  if ( result )
  {
    do
    {
      v1 = (_QWORD *)*result;
      free(result);
      result = v1;
    }
    while ( v1 );
  }
  return result;
}

