/* Address: 0x1400f1ce0 | Name: ?is_potentially_valid_image_base@@YA_NQEAX@Z | Size: 47 bytes */
bool __fastcall is_potentially_valid_image_base(char *a1)
{
  char *v1; // rax
  bool result; // al

  result = false;
  if ( a1 )
  {
    if ( *(_WORD *)a1 == 23117 )
    {
      v1 = &a1[*((int *)a1 + 15)];
      if ( *(_DWORD *)v1 == 17744 && *((_WORD *)v1 + 12) == 523 )
        return true;
    }
  }
  return result;
}

