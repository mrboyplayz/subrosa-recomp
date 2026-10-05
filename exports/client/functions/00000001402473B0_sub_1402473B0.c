/* Address: 0x1402473b0 | Name: sub_1402473B0 | Size: 111 bytes */
void __fastcall sub_1402473B0(unsigned __int64 a1)
{
  __int64 v1; // rdi
  void **v2; // rbx
  __int64 v3; // rsi

  v1 = 0;
  v2 = (void **)a1;
  v3 = a1 < a1 + 8;
  if ( a1 < a1 + 8 )
  {
    do
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)*v2, 0xFFFFFFFF) == 1 && *v2 != &unk_1403025A0 )
      {
        free_base(*v2);
        *v2 = &unk_1403025A0;
      }
      ++v2;
      ++v1;
    }
    while ( v1 != v3 );
  }
}

