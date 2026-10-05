/* Address: 0x140247e94 | Name: sub_140247E94 | Size: 110 bytes */
__int64 __fastcall sub_140247E94(__int64 a1, unsigned int *a2, __int64 a3, unsigned int *a4)
{
  unsigned int *i; // rbx

  sub_140258B64(*a2);
  for ( i = &dword_140404A6C[19065667]; i != &dword_140404A6C[19065669]; i += 2 )
  {
    if ( *(__int16 ***)i != &off_140302420 )
      *(_QWORD *)i = updatetlocinfoEx_nolock(i, &off_140302420);
  }
  return sub_140258BB8(*a4);
}

