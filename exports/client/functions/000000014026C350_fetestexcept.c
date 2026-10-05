/* Address: 0x14026c350 | Name: fetestexcept | Size: 33 bytes */
int __cdecl fetestexcept(int Flags)
{
  int Except; // [rsp+38h] [rbp+10h] BYREF

  Except = 0;
  fegetexceptflag((fexcept_t *)&Except, Flags);
  return Except & 0x1F;
}

