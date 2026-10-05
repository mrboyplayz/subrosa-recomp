/* Address: 0x140264940 | Name: ?fperrraise_with@@YAXHK@Z | Size: 141 bytes */
int __fastcall fperrraise_with(unsigned int a1, int a2)
{
  unsigned int v2; // ebx
  int v3; // edx
  int v4; // ecx
  unsigned int v5; // edx
  __int64 v6; // rcx
  int fp_status_word_from_exception_mask; // eax
  int *v8; // rax
  int Except; // [rsp+38h] [rbp+10h] BYREF

  Except = a2;
  v2 = a1 | 0x20;
  if ( (a1 & 0x18) == 0 )
    v2 = a1;
  v3 = (v2 >> 5) & 1 | 2;
  if ( (v2 & 0x10) == 0 )
    v3 = (v2 >> 5) & 1;
  v4 = v3 | 4;
  if ( (v2 & 8) == 0 )
    v4 = v3;
  v5 = v4 | 8;
  if ( (v2 & 4) == 0 )
    v5 = v4;
  v6 = v5 | 0x10;
  if ( (v2 & 1) == 0 )
    v6 = v5;
  fp_status_word_from_exception_mask = _acrt_fenv_get_fp_status_word_from_exception_mask(v6);
  Except |= fp_status_word_from_exception_mask;
  LODWORD(v8) = fesetexceptflag((const #69 *)&Except, 31);
  if ( (v2 & 1) != 0 )
  {
    v8 = errno();
    *v8 = 33;
  }
  else if ( (v2 & 0x1C) != 0 )
  {
    v8 = errno();
    *v8 = 34;
  }
  return (int)v8;
}

