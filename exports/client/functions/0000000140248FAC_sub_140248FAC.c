/* Address: 0x140248fac | Name: sub_140248FAC | Size: 187 bytes */
_QWORD *sub_140248FAC()
{
  __int64 v0; // rdi
  _QWORD *v1; // rbx
  _QWORD *v2; // rcx
  _QWORD **v4[2]; // [rsp+20h] [rbp-10h] BYREF
  char v5; // [rsp+50h] [rbp+20h] BYREF
  unsigned int v6; // [rsp+58h] [rbp+28h] BYREF
  unsigned int v7; // [rsp+60h] [rbp+30h] BYREF
  _QWORD *v8; // [rsp+68h] [rbp+38h] BYREF

  v0 = sub_140255A70();
  v1 = nullptr;
  v8 = (_QWORD *)calloc_base(1, 16);
  if ( v8 )
  {
    sub_140262ADC();
    sub_14025F580();
    *v8 = *(_QWORD *)(v0 + 144);
    v8[1] = *(_QWORD *)(v0 + 136);
    v4[0] = &v8;
    v6 = 4;
    v7 = 4;
    sub_140247D18((__int64)&v5, &v7, v4, &v6);
    v4[0] = &v8;
    v6 = 5;
    v7 = 5;
    sub_140247F30((__int64)&v5, &v7, (__int64)v4, &v6);
    v2 = v8;
    v8 = nullptr;
    v1 = v2;
  }
  free_base(nullptr);
  return v1;
}

