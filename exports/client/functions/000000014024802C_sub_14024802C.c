/* Address: 0x14024802c | Name: sub_14024802C | Size: 78 bytes */
void __fastcall sub_14024802C(__int16 ***a1)
{
  __int16 ***v1; // rdi
  __int16 ***v2; // rbx

  v1 = a1 + 1;
  v2 = a1;
  do
  {
    if ( *v2 != &off_140302420 )
      *v2 = (__int16 **)updatetlocinfoEx_nolock(v2, &off_140302420);
    ++v2;
  }
  while ( v2 != v1 );
}

