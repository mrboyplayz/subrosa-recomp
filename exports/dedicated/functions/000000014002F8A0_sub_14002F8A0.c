/* Address: 0x14002f8a0 | Name: sub_14002F8A0 | Size: 343 bytes */
__int64 sub_14002F8A0()
{
  _DWORD *v0; // rdi
  __int64 v1; // rsi
  char *v2; // rbx
  __int64 result; // rax
  int v4; // ecx
  int v5; // r8d
  int v6; // edx
  __int64 v7; // rax
  __int128 v8; // xmm0
  __int128 v9; // xmm1

  v0 = &unk_160F23920;
  v1 = 256;
  v2 = (char *)&unk_160F23928;
  do
  {
    result = sub_1400AFB00(v2 - 8, 1);
    if ( *v0 )
    {
      v4 = qword_197BD727C;
      if ( (int)qword_197BD727C < 0x10000 )
      {
        v5 = dword_197BD7278;
        result = (unsigned int)(qword_197BD727C + 4);
        v6 = HIDWORD(qword_197BD727C);
        if ( (int)result <= dword_197BD7278 )
        {
          if ( SHIDWORD(qword_197BD727C) > 0 )
          {
            v4 = qword_197BD727C + 1;
            v6 = 0;
            qword_197BD727C = (unsigned int)(qword_197BD727C + 1);
          }
          v7 = v4;
          v4 += 4;
          result = *(unsigned int *)((char *)&dword_197BC7200 + v7 + 65668);
          *(_DWORD *)v2 = result;
          LODWORD(qword_197BD727C) = v4;
        }
        if ( v4 < 0x10000 )
        {
          result = (unsigned int)(v4 + 32);
          if ( (int)result <= v5 )
          {
            if ( v6 > 0 )
            {
              ++v4;
              v6 = 0;
              qword_197BD727C = (unsigned int)v4;
            }
            result = v4;
            v4 += 32;
            v8 = *(_OWORD *)((char *)&dword_197BC7200 + result + 65668);
            v9 = *(_OWORD *)((char *)&dword_197BC7200 + result + 65684);
            LODWORD(qword_197BD727C) = v4;
            *(_OWORD *)(v2 + 4) = v8;
            *(_OWORD *)(v2 + 20) = v9;
          }
          if ( v4 < 0x10000 )
          {
            result = (unsigned int)(v4 + 4);
            if ( (int)result <= v5 )
            {
              if ( v6 > 0 )
              {
                ++v4;
                HIDWORD(qword_197BD727C) = 0;
                LODWORD(qword_197BD727C) = v4;
              }
              result = *(unsigned int *)((char *)&dword_197BC7200 + v4 + 65668);
              *((_DWORD *)v2 + 17) = result;
              LODWORD(qword_197BD727C) = v4 + 4;
            }
          }
        }
      }
    }
    v2 += 80;
    v0 += 20;
    --v1;
  }
  while ( v1 );
  return result;
}

