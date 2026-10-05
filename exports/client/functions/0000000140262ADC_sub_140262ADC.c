/* Address: 0x140262adc | Name: sub_140262ADC | Size: 108 bytes */
__int64 sub_140262ADC()
{
  __int64 v0; // rax
  __int64 *v1; // rdi
  __int64 v2; // rbx

  v0 = sub_140255A70();
  v1 = (__int64 *)(v0 + 144);
  if ( (*(_DWORD *)(v0 + 936) & dword_140302B88) == 0 || (v2 = *v1) == 0 )
  {
    sub_140258B64(4);
    v2 = updatetlocinfoEx_nolock(v1, *(_QWORD *)&dword_140404A6C[19065667]);
    sub_140258BB8(4);
    if ( !v2 )
      abort();
  }
  return v2;
}

