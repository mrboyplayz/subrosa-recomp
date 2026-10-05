/* Address: 0x140256418 | Name: ?fp_format_f@@YAHQEBNQEAD_K12HQEAU__crt_locale_pointers@@@Z | Size: 166 bytes */
__int64 __fastcall fp_format_f(
        const double *const a1,
        char *const a2,
        unsigned __int64 a3,
        char *const a4,
        unsigned __int64 a5,
        unsigned int a6,
        struct __crt_locale_pointers *const a7)
{
  __int64 v7; // rcx
  _BOOL8 v10; // rcx
  __int64 v11; // rdx
  __int64 result; // rax
  _QWORD v13[3]; // [rsp+30h] [rbp-18h] BYREF

  v7 = *(_QWORD *)a1;
  v13[0] = 0;
  v13[1] = 0;
  _acrt_fltout(v7, a6, v13, a4, a5);
  v10 = LODWORD(v13[0]) == 45;
  v11 = a3 - v10;
  if ( a3 == -1 )
    v11 = -1;
  result = _acrt_fp_strflt_to_string(&a2[v10], v11, a6 + HIDWORD(v13[0]), v13);
  if ( !(_DWORD)result )
    return fp_format_f_internal(a2, a3, a6, (struct _strflt *const)v13, 0, a7);
  *a2 = 0;
  return result;
}

