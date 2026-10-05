/* Address: 0x14024a074 | Name: sub_14024A074 | Size: 43 bytes */
int __cdecl sub_14024A074(int NewMode)
{
  __int64 v1; // rcx

  if ( (unsigned int)NewMode <= 1 )
    return _InterlockedExchange((volatile __int32 *)&dword_140404A6C[19065284], NewMode);
  *errno() = 22;
  sub_14024CF6C(v1);
  return -1;
}

