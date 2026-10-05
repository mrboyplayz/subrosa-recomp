/* Address: 0x1400dbb90 | Name: sub_1400DBB90 | Size: 350 bytes */
int __fastcall sub_1400DBB90(char *Buffer, unsigned int a2)
{
  if ( (int)a2 >= 1000000000 )
    return sub_1400DBB30(
             Buffer,
             "%d,%03d,%03d,%03d",
             a2 / 0x3B9ACA00,
             (int)(a2 / 0xF4240) % 1000,
             (int)(a2 / 0x3E8) % 1000,
             a2 % 0x3E8);
  if ( (int)a2 >= 1000000 )
    return sub_1400DBB30(Buffer, "%d,%03d,%03d", a2 / 0xF4240, (int)(a2 / 0x3E8) % 1000, a2 % 0x3E8);
  if ( (int)a2 < 1000 )
    return sub_1400DBB30(Buffer, "%d", a2);
  return sub_1400DBB30(Buffer, "%d,%03d", a2 / 0x3E8, a2 % 0x3E8);
}

