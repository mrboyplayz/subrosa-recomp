/* Address: 0x140046730 | Name: sub_140046730 | Size: 270 bytes */
void sub_140046730()
{
  int v0; // edi
  int *v1; // rbx
  int v2; // xmm1_4
  int v3; // xmm0_4
  int v4[4]; // [rsp+30h] [rbp-58h] BYREF
  _OWORD v5[2]; // [rsp+40h] [rbp-48h] BYREF
  int v6; // [rsp+60h] [rbp-28h]

  v0 = 0;
  if ( dword_16E565CC0 > 0 )
  {
    v1 = dword_16E565CD0;
    do
    {
      v2 = *v1;
      v4[0] = *(v1 - 2);
      *(float *)&v3 = *((float *)v1 - 1) + 2.0;
      v4[2] = v2;
      v5[0] = xmmword_1400F78B0;
      v6 = 1065353216;
      v5[1] = xmmword_1400F78B0;
      v4[1] = v3;
      sub_140049C20(v5, &dword_140146A28);
      v1 += 5;
      *((_DWORD *)&unk_16E6A8C18 + 5210 * (int)sub_1400414B0(13, v4, nullptr, (int *)v5, 1)) = v0++;
    }
    while ( v0 < dword_16E565CC0 );
  }
}

