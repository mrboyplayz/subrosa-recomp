/* Address: 0x140239710 | Name: sub_140239710 | Size: 173 bytes */
char __fastcall sub_140239710(__int64 a1, _DWORD *a2, int a3)
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
                       (_WORD *)(a1 + 20),
                       (__int64)v7,
                       a3) )
  {
    v5 = 0;
  }
  else
  {
    if ( (unsigned int)strcpy_s(a2 + 5, 260, Source) )
    {
      sub_14024CFBC(0, 0, 0, 0, 0);
      JUMPOUT(0x1402397BCLL);
    }
    *a2 = *(_DWORD *)a1;
    a2[1] = *(_DWORD *)(a1 + 4);
    a2[2] = *(_DWORD *)(a1 + 8);
    a2[3] = *(_DWORD *)(a1 + 12);
    a2[4] = *(_DWORD *)(a1 + 16);
    v5 = 1;
  }
  if ( v11 )
    free_base(Source);
  return v5;
}

