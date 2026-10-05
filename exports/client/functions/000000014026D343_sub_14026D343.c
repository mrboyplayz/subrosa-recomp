/* Address: 0x14026d343 | Name: sub_14026D343 | Size: 35 bytes */
// Microsoft VisualC v14 64bit runtime
// Microsoft VisualC v14 64bit runtime
__int64 sub_14026D343()
{
  __int64 result; // rax

  result = sub_1401FD83C();
  if ( *(int *)(result + 48) > 0 )
  {
    result = sub_1401FD83C();
    --*(_DWORD *)(result + 48);
  }
  return result;
}

