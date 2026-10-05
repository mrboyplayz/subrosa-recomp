/* Address: 0x1400012c0 | Name: sub_1400012C0 | Size: 54 bytes */
int __fastcall sub_1400012C0(FILE *a1, __int64 a2)
{
  int result; // eax

  MEMORY[0x14020C4A8](a1, a2, 1);
  result = sub_14020BB2C(a1);
  if ( result != -1 )
    return sub_14020CFB8(result, a1);
  return result;
}

