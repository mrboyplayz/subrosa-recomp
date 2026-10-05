/* Address: 0x1400b79c0 | Name: sub_1400B79C0 | Size: 173 bytes */
__int64 sub_1400B79C0()
{
  char *v0; // rdi
  float *v1; // rbx
  __int64 v2; // rsi
  float v3; // xmm1_4
  __int64 result; // rax

  v0 = (char *)&unk_14024966C;
  v1 = (float *)&unk_14024961C;
  v2 = 0x2000;
  do
  {
    if ( *((_DWORD *)v1 - 7) )
    {
      if ( !*((_DWORD *)v1 - 5) )
      {
        v3 = v1[3] - 0.0027222224;
        v1[3] = v3;
        *(v1 - 1) = v1[2] + *(v1 - 1);
        *v1 = v3 + *v1;
        v1[1] = v1[4] + v1[1];
        result = sub_1400B7A70(v0 - 48, v0 - 12, v0, v0 + 36);
      }
    }
    v0 += 188;
    v1 += 47;
    --v2;
  }
  while ( v2 );
  return result;
}

