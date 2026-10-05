/* Address: 0x140261fc8 | Name: ?free_crt_array_internal@@YAXQEAPEBX_K@Z | Size: 88 bytes */
void __fastcall free_crt_array_internal(void **a1, __int64 a2)
{
  __int64 v2; // rdi
  void **v3; // rbx
  __int64 v4; // rsi

  v2 = 0;
  v3 = a1;
  v4 = a2 & 0x1FFFFFFFFFFFFFFFLL;
  if ( a1 > &a1[a2] )
    v4 = 0;
  if ( v4 )
  {
    do
    {
      free_base(*v3);
      ++v2;
      ++v3;
    }
    while ( v2 != v4 );
  }
}

