/* Address: 0x14020aa94 | Name: sub_14020AA94 | Size: 54 bytes */
__int64 __fastcall sub_14020AA94(FH4::UWMap4 *this, unsigned __int8 **a2)
{
  unsigned __int8 *v2; // rdi
  __int64 result; // rax

  v2 = *a2;
  MEMORY[0x14020A9E4](this, a2);
  result = *((unsigned int *)this + 4);
  *a2 = &v2[-result];
  return result;
}

