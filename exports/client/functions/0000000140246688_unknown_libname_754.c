/* Address: 0x140246688 | Name: unknown_libname_754 | Size: 65 bytes */
// Microsoft VisualC 64bit universal runtime
// Microsoft VisualC 64bit universal runtime
void __fastcall unknown_libname_754(void **Block)
{
  void *v1; // rax
  void **v3; // rdi

  if ( Block )
  {
    v1 = *Block;
    v3 = Block;
    while ( v1 )
    {
      free_base(v1);
      v1 = *++v3;
    }
    free_base(Block);
  }
}

