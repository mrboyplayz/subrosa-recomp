/* Address: 0x1400b4180 | Name: sub_1400B4180 | Size: 508 bytes */
void sub_1400B4180()
{
  int v0; // edi
  int v1; // eax
  int v2; // ebx
  char v3; // al
  int v4; // ecx
  __int64 v5; // rax
  __int128 v6; // xmm1
  int v7; // ecx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdi
  int *v12; // r8
  int v13; // eax
  int v14; // ecx
  _DWORD *v15; // rax
  int v16; // edx
  int v17; // [rsp+30h] [rbp+8h] BYREF

  v0 = qword_16D1ED470;
  if ( (int)qword_16D1ED470 < SHIDWORD(qword_16D1ED470) )
  {
    if ( (int)qword_16D1ED470 + 0x10000 >= (unsigned int)dword_16D1ED460 )
    {
      v1 = dword_197BD7278;
    }
    else
    {
      memcpy(&Src, (char *)Buffer + (int)qword_16D1ED470, 0x10000u);
      v1 = 0x10000;
      dword_197BD7278 = 0x10000;
    }
    v2 = 0;
    qword_197BD727C = 0;
    if ( v1 < 1 )
    {
      v3 = v17;
    }
    else
    {
      v3 = Src;
      LODWORD(qword_197BD727C) = 1;
    }
    if ( v3 == 6 )
    {
      sub_1400AFB00(&dword_19154118C, 4);
      v4 = qword_197BD727C;
      if ( (int)qword_197BD727C < 0x10000 && (int)qword_197BD727C + 32 <= dword_197BD7278 )
      {
        if ( SHIDWORD(qword_197BD727C) > 0 )
        {
          v4 = qword_197BD727C + 1;
          LODWORD(qword_197BD727C) = qword_197BD727C + 1;
          qword_197BD727C = (unsigned int)qword_197BD727C;
        }
        v5 = v4;
        v4 += 32;
        v6 = *(_OWORD *)(&Src + v5 + 16);
        *(_OWORD *)xmmword_191541190 = *(_OWORD *)(&Src + v5);
        xmmword_1915411A0 = v6;
      }
      v7 = v4 + 1;
      LODWORD(qword_16D1ED470) = v7 + v0;
      LODWORD(qword_197BD727C) = v7;
    }
    else
    {
      ++dword_191541414;
      sub_1400AFB00(&dword_1915413AC, 4);
      sub_1400AFB00(&qword_1915413B4, 24);
      sub_1400AFB00(&dword_178C5B8E0, 30);
      sub_1400E7230();
      sub_1400AFB00(&v17, 16);
      sub_1400AFB00(&dword_196199564, 16);
      if ( v17 > 0 )
      {
        v11 = (unsigned int)v17;
        do
        {
          sub_1400E5C70((unsigned int)dword_196199564, v8, v9, v10);
          ++dword_196199564;
          HIWORD(dword_196199564) = 0;
          --v11;
        }
        while ( v11 );
      }
      v12 = (int *)&unk_197FE75E4;
      LODWORD(qword_16D1ED470) = qword_197BD727C + 1 + qword_16D1ED470;
      LODWORD(qword_197BD727C) = qword_197BD727C + 1;
      do
      {
        v13 = v2 + 1;
        if ( !*(v12 - 4) )
          v13 = v2;
        v14 = v13 + 1;
        if ( !*v12 )
          v14 = v13;
        v15 = v12 + 8;
        v16 = v14 + 1;
        if ( !v12[4] )
          v16 = v14;
        v12 += 16;
        v2 = v16 + 1;
        if ( !*v15 )
          v2 = v16;
      }
      while ( (__int64)v12 < (__int64)&dword_197FEB5E4 );
      dword_16D1ED488 = v2;
    }
  }
}

