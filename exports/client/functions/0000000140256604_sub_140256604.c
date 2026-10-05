/* Address: 0x140256604 | Name: sub_140256604 | Size: 306 bytes */
__int64 __fastcall sub_140256604(
        __int64 *a1,
        char *a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6,
        char a7,
        unsigned int a8,
        struct #68 *a9)
{
  __int64 v9; // rcx
  _BOOL8 v12; // rcx
  int v13; // r14d
  __int64 v14; // rdx
  char *v15; // rbx
  __int64 result; // rax
  int v17; // eax
  _QWORD v19[3]; // [rsp+40h] [rbp-18h] BYREF

  v9 = *a1;
  v19[0] = 0;
  v19[1] = 0;
  _acrt_fltout(v9, a6, v19, a4, a5);
  v12 = LODWORD(v19[0]) == 45;
  v13 = HIDWORD(v19[0]) - 1;
  v14 = a3 - v12;
  v15 = &a2[v12];
  if ( a3 == -1 )
    v14 = -1;
  result = _acrt_fp_strflt_to_string(&a2[v12], v14, a6, v19);
  if ( (_DWORD)result )
  {
    *a2 = 0;
  }
  else
  {
    v17 = HIDWORD(v19[0]) - 1;
    if ( HIDWORD(v19[0]) - 1 < -4 || v17 >= (int)a6 )
    {
      return fp_format_e_internal(a2, a3, a6, a7, a8, (struct _strflt *const)v19, 1, a9);
    }
    else
    {
      if ( v13 < v17 )
      {
        while ( *v15++ )
          ;
        *(v15 - 2) = 0;
      }
      return fp_format_f_internal(a2, a3, a6, (struct _strflt *const)v19, 1, a9);
    }
  }
  return result;
}

