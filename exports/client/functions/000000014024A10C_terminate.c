/* Address: 0x14024a10c | Name: terminate | Size: 32 bytes */
void __noreturn terminate()
{
  void (*v0)(void); // rax

  v0 = *(void (**)(void))(sub_140255A70() + 24);
  if ( v0 )
    v0();
  abort();
}

