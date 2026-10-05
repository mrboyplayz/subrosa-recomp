/* Address: 0x140262400 | Name: sub_140262400 | Size: 264 bytes */
void __fastcall sub_140262400(void **a1)
{
  if ( a1 )
  {
    free_crt_array_internal(a1, 7);
    free_crt_array_internal(a1 + 7, 7);
    free_crt_array_internal(a1 + 14, 12);
    free_crt_array_internal(a1 + 26, 12);
    free_crt_array_internal(a1 + 38, 2);
    free_base(a1[40]);
    free_base(a1[41]);
    free_base(a1[42]);
    free_crt_array_internal(a1 + 44, 7);
    free_crt_array_internal(a1 + 51, 7);
    free_crt_array_internal(a1 + 58, 12);
    free_crt_array_internal(a1 + 70, 12);
    free_crt_array_internal(a1 + 82, 2);
    free_base(a1[84]);
    free_base(a1[85]);
    free_base(a1[86]);
    free_base(a1[87]);
  }
}

