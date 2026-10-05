/* Address: 0x140256818 | Name: sub_140256818 | Size: 772 bytes */
int __fastcall sub_140256818(
        double *a1,
        char *a2,
        unsigned __int64 a3,
        char *a4,
        unsigned __int64 a5,
        int a6,
        unsigned int a7,
        unsigned __int64 a8,
        struct #68 *a9)
{
  unsigned __int64 v9; // rdi
  char *v10; // rbx
  int result; // eax
  bool v12; // r11
  double v13; // r8
  int v14; // edx
  unsigned __int64 v15; // rcx
  __int64 v16; // r8
  unsigned __int64 v17; // r9
  unsigned int v18; // edx
  double v19; // rcx
  _BOOL8 v20; // rcx
  __int64 v21; // rdx
  _QWORD v22[2]; // [rsp+50h] [rbp-18h] BYREF

  v9 = a3;
  v10 = a2;
  if ( !a2 || !a3 || !a4 || !a5 )
  {
    *errno() = 22;
    sub_14024CF6C();
    return 22;
  }
  v12 = a6 == 65 || (unsigned int)(a6 - 69) <= 2;
  if ( (a8 & 8) == 0 )
  {
    v13 = *a1;
    if ( ((*(_QWORD *)a1 >> 52) & 0x7FFLL) == 0x7FF )
    {
      v14 = 12;
      if ( (*(_QWORD *)&v13 & 0xFFFFFFFFFFFFFLL) != 0 )
      {
        if ( v13 < 0.0 && (*(_QWORD *)&v13 & 0xFFFFFFFFFFFFFLL) == 0x8000000000000LL )
          v15 = 12;
        else
          v15 = (-(__int64)((*(_QWORD *)&v13 & 0x8000000000000LL) != 0) & 0xFFFFFFFFFFFFFFFCuLL) + 8;
      }
      else
      {
        v15 = 0;
      }
      v16 = *(_QWORD *)&v13 >> 63;
      if ( v9 >= v16 + 4 )
      {
        v17 = -1;
        if ( (_BYTE)v16 )
        {
          *v10++ = 45;
          *v10 = 0;
          if ( v9 != -1 )
            --v9;
        }
        do
          ++v17;
        while ( *((_BYTE *)*(&off_14028B000 + 2 * !v12 + v15) + v17) );
        if ( (unsigned int)strcpy_s(v10, v9, (__int64)*(&off_14028B000 + 2 * !v12 + v15 + (v9 <= v17))) )
        {
          sub_14024CFBC();
          __debugbreak();
        }
        return 0;
      }
      else
      {
        *v10 = 0;
      }
      return v14;
    }
  }
  v18 = (a8 >> 4) & 1 | 2;
  switch ( a6 )
  {
    case 'A':
      return fp_format_a(a1, v10, v9, a4, a5, a7, v12, v18, a9);
    case 'E':
      return fp_format_e(a1, v10, v9, a4, a5, a7, v12, v18, a9);
    case 'F':
      goto LABEL_35;
    case 'G':
      return sub_140256604((__int64 *)a1, v10, v9, (__int64)a4, a5, a7, v12, v18, a9);
    case 'a':
      return fp_format_a(a1, v10, v9, a4, a5, a7, v12, v18, a9);
    case 'e':
      return fp_format_e(a1, v10, v9, a4, a5, a7, v12, v18, a9);
  }
  if ( a6 != 102 )
    return sub_140256604((__int64 *)a1, v10, v9, (__int64)a4, a5, a7, v12, v18, a9);
LABEL_35:
  v19 = *a1;
  v22[0] = 0;
  v22[1] = 0;
  _acrt_fltout(*(_QWORD *)&v19, a7, v22, a4, a5);
  v20 = LODWORD(v22[0]) == 45;
  v21 = v9 - v20;
  if ( v9 == -1 )
    v21 = -1;
  result = _acrt_fp_strflt_to_string(&v10[v20], v21, a7 + HIDWORD(v22[0]), v22);
  if ( !result )
    return fp_format_f_internal(v10, v9, a7, (struct _strflt *const)v22, 0, a9);
  *v10 = 0;
  return result;
}

