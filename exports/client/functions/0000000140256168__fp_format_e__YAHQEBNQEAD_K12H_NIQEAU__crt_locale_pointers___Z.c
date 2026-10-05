/* Address: 0x140256168 | Name: ?fp_format_e@@YAHQEBNQEAD_K12H_NIQEAU__crt_locale_pointers@@@Z | Size: 219 bytes */
int __fastcall fp_format_e(
        const double *const a1,
        char *const a2,
        unsigned __int64 a3,
        char *const a4,
        unsigned __int64 a5,
        int a6,
        bool a7,
        unsigned int a8,
        struct __crt_locale_pointers *const a9)
{
  __int64 v10; // rax
  __int64 v11; // rcx
  _BOOL8 v13; // rcx
  _BOOL8 v14; // rax
  __int64 v15; // rdx
  int result; // eax
  _DWORD v17[6]; // [rsp+40h] [rbp-18h] BYREF

  v10 = a5;
  v11 = *(_QWORD *)a1;
  if ( (unsigned __int64)(unsigned int)(a6 + 2) + 1 < a5 )
    v10 = (unsigned int)(a6 + 2) + 1LL;
  _acrt_fltout(v11, (unsigned int)(a6 + 1), v17, a4, v10);
  v13 = v17[0] == 45;
  v14 = a6 > 0;
  v15 = a3 - v14 - v13;
  if ( a3 == -1 )
    v15 = -1;
  result = _acrt_fp_strflt_to_string(&a2[v14 + v13], v15, (unsigned int)(a6 + 1), v17);
  if ( !result )
    return fp_format_e_internal(a2, a3, a6, a7, a8, (struct _strflt *const)v17, 0, a9);
  *a2 = 0;
  return result;
}

