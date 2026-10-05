/* Address: 0x1402697bc | Name: sub_1402697BC | Size: 135 bytes */
__int64 __fastcall sub_1402697BC(__m128i *a1, unsigned __int64 a2, const __m128i *a3, unsigned __int64 a4)
{
  int *v8; // rax
  unsigned int v9; // ebx

  if ( !a4 )
    return 0;
  if ( !a1 )
    goto LABEL_4;
  if ( a3 && a2 >= a4 )
  {
    MEMORY[0x1401FC920](a1, a3, a4);
    return 0;
  }
  MEMORY[0x1401FCD30](a1, 0, a2);
  if ( !a3 )
  {
LABEL_4:
    v8 = errno();
    v9 = 22;
LABEL_5:
    *v8 = v9;
    sub_14024CF6C();
    return v9;
  }
  if ( a2 < a4 )
  {
    v8 = errno();
    v9 = 34;
    goto LABEL_5;
  }
  return 22;
}

