/* Address: 0x140260f70 | Name: sub_140260F70 | Size: 80 bytes */
void __fastcall sub_140260F70(char *Block)
{
  char *v1; // rsi
  char *v3; // rdi

  if ( Block )
  {
    v1 = Block + 4608;
    v3 = Block;
    do
    {
      ((void (__fastcall *)(char *))DeleteCriticalSection)(v3);
      v3 += 72;
    }
    while ( v3 != v1 );
    free_base(Block);
  }
}

