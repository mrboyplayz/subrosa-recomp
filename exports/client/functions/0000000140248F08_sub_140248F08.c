/* Address: 0x140248f08 | Name: sub_140248F08 | Size: 162 bytes */
void __fastcall sub_140248F08(_QWORD *Block)
{
  volatile signed __int32 *v2; // rcx
  void *v3; // rcx
  __int64 v4; // rcx

  if ( Block )
  {
    sub_140258B64(5);
    v2 = (volatile signed __int32 *)Block[1];
    if ( v2 )
    {
      if ( _InterlockedExchangeAdd(v2, 0xFFFFFFFF) == 1 )
      {
        v3 = (void *)Block[1];
        if ( v3 != &unk_1403025A0 )
          free_base(v3);
      }
    }
    sub_140258BB8(5);
    if ( *Block )
    {
      sub_140258B64(4);
      sub_140262A34(*Block);
      v4 = *Block;
      if ( *Block && !*(_DWORD *)(v4 + 16) && (__int16 **)v4 != &off_140302420 )
        sub_140262834(v4);
      sub_140258BB8(4);
    }
    free_base(Block);
  }
}

