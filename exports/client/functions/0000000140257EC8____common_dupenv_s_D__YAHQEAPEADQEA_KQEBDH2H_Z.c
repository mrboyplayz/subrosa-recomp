/* Address: 0x140257ec8 | Name: ??$common_dupenv_s@D@@YAHQEAPEADQEA_KQEBDH2H@Z | Size: 242 bytes */
__int64 __fastcall common_dupenv_s<char>(_QWORD *a1, __int64 *a2, __int64 a3)
{
  unsigned int v6; // ebx
  __int64 v7; // rax
  __int64 v8; // r15
  __int64 v9; // rdi
  __int64 v10; // rdi
  _BYTE *v11; // rax

  sub_140258B64(11);
  v6 = 0;
  if ( !a1 )
    goto LABEL_2;
  *a1 = 0;
  if ( a2 )
    *a2 = 0;
  if ( a3 )
  {
    v7 = sub_140258328(a3);
    v8 = v7;
    if ( v7 )
    {
      v9 = -1;
      do
        ++v9;
      while ( *(_BYTE *)(v7 + v9) );
      v10 = v9 + 1;
      v11 = (_BYTE *)j__calloc_base(v10);
      *a1 = v11;
      if ( v11 )
      {
        if ( (unsigned int)strcpy_s(v11, v10, v8) )
        {
          sub_14024CFBC();
          __debugbreak();
          JUMPOUT(0x140257FBALL);
        }
        if ( a2 )
          *a2 = v10;
      }
      else
      {
        *errno() = 12;
        v6 = 12;
      }
    }
  }
  else
  {
LABEL_2:
    v6 = 22;
    *errno() = 22;
    sub_14024CF6C();
  }
  sub_140258BB8(11);
  return v6;
}

