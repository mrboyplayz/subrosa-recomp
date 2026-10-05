/* Address: 0x14025a848 | Name: sub_14025A848 | Size: 103 bytes */
__int64 __fastcall sub_14025A848(
        unsigned __int64 a1,
        char *a2,
        unsigned __int64 a3,
        unsigned int a4,
        unsigned __int8 a5)
{
  int *v5; // rax
  unsigned int v6; // ebx

  if ( !a2 || !a3 )
    goto LABEL_2;
  *a2 = 0;
  if ( a3 <= (unsigned __int64)a5 + 1 )
  {
    v5 = errno();
    v6 = 34;
    goto LABEL_3;
  }
  if ( a4 - 2 > 0x22 )
  {
LABEL_2:
    v5 = errno();
    v6 = 22;
LABEL_3:
    *v5 = v6;
    sub_14024CF6C();
    return v6;
  }
  return sub_14025A5CC(a1, a2, a3, a4, a5);
}

