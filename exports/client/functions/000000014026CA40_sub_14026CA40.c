/* Address: 0x14026ca40 | Name: sub_14026CA40 | Size: 77 bytes */
__int64 __fastcall sub_14026CA40(__int64 a1)
{
  __int64 result; // rax

  result = MEMORY[0x14026CA90](0x140000000uLL);
  if ( (_DWORD)result )
  {
    result = MEMORY[0x14026C9F0](0x140000000uLL, a1 - 0x140000000LL);
    if ( result )
      return *(int *)(result + 36) >= 0;
  }
  return result;
}

