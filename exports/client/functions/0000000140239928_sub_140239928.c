/* Address: 0x140239928 | Name: sub_140239928 | Size: 179 bytes */
char __fastcall sub_140239928(__int64 a1, __int64 a2, int a3)
{
  char v5; // bl
  _QWORD v7[2]; // [rsp+30h] [rbp-38h] BYREF
  char *Source; // [rsp+40h] [rbp-28h]
  __int64 v9; // [rsp+48h] [rbp-20h]
  __int64 v10; // [rsp+50h] [rbp-18h]
  char v11; // [rsp+58h] [rbp-10h]

  v7[0] = 0;
  v7[1] = 0;
  Source = nullptr;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  if ( (unsigned int)__acrt_wcs_to_mbs_cp<__crt_win32_buffer_internal_dynamic_resizing>(
                       (_WORD *)(a1 + 36),
                       (__int64)v7,
                       a3) )
  {
    v5 = 0;
  }
  else
  {
    if ( (unsigned int)strcpy_s(a2 + 36, 260, Source) )
    {
      sub_14024CFBC(0, 0, 0, 0, 0);
      JUMPOUT(0x1402399DALL);
    }
    *(_DWORD *)a2 = *(_DWORD *)a1;
    *(_QWORD *)(a2 + 8) = *(_QWORD *)(a1 + 8);
    *(_QWORD *)(a2 + 16) = *(_QWORD *)(a1 + 16);
    *(_QWORD *)(a2 + 24) = *(_QWORD *)(a1 + 24);
    *(_DWORD *)(a2 + 32) = *(_DWORD *)(a1 + 32);
    v5 = 1;
  }
  if ( v11 )
    free_base(Source);
  return v5;
}

