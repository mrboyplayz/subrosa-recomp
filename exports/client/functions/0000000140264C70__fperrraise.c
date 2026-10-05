/* Address: 0x140264c70 | Name: _fperrraise | Size: 179 bytes */
void __cdecl fperrraise(int Except)
{
  unsigned int v2; // edi
  int v3; // edx
  int v4; // ecx
  unsigned int v5; // r8d
  __int64 v6; // rcx
  int fp_status_word_from_exception_mask; // eax
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF
  __int64 Excepta; // [rsp+38h] [rbp+10h] BYREF

  fegetexceptflag((fexcept_t *)&Excepta, 31);
  LODWORD(v8) = Excepta;
  v2 = Except | 0x20;
  if ( (Except & 0x18) == 0 )
    v2 = Except;
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
  LODWORD(v8) = fp_status_word_from_exception_mask | v8;
  fesetexceptflag((const #69 *)&v8, 31);
  if ( (v2 & 1) != 0 )
  {
    *errno() = 33;
  }
  else if ( (v2 & 0x1C) != 0 )
  {
    *errno() = 34;
  }
}

