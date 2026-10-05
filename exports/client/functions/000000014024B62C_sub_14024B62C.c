/* Address: 0x14024b62c | Name: sub_14024B62C | Size: 227 bytes */
__m128i *__fastcall sub_14024B62C(__int64 *a1)
{
  __m128i *v1; // rdi
  __int64 v3; // rcx
  __m128i *v4; // rax
  unsigned __int64 v5; // rsi
  __int64 v6; // r14
  unsigned __int64 v7; // rbp
  __int64 v8; // rcx
  __int64 v9; // rax

  v1 = (__m128i *)a1[2];
  if ( v1 )
  {
    v3 = a1[4];
    if ( v3 )
    {
      if ( *((_BYTE *)a1 + 40) )
        goto LABEL_14;
      v4 = (__m128i *)j__malloc_base(v3);
      v5 = a1[3];
      v1 = v4;
      v6 = a1[2];
      v7 = a1[4];
      if ( !v5 )
        goto LABEL_14;
      if ( !v4 )
        goto LABEL_6;
      if ( v6 && v7 >= v5 )
      {
        MEMORY[0x1401FC920](v4, (const __m128i *)a1[2], a1[3]);
      }
      else
      {
        MEMORY[0x1401FCD30](v4, 0, a1[4]);
        if ( !v6 )
        {
LABEL_6:
          *errno() = 22;
LABEL_13:
          sub_14024CF6C(v8);
          goto LABEL_14;
        }
        if ( v7 < v5 )
        {
          *errno() = 34;
          goto LABEL_13;
        }
      }
LABEL_14:
      v9 = *a1;
      a1[4] = 0;
      a1[2] = v9;
      a1[3] = a1[1];
      return v1;
    }
  }
  return nullptr;
}

