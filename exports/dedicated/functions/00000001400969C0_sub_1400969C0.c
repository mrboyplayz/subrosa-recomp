/* Address: 0x1400969c0 | Name: sub_1400969C0 | Size: 1391 bytes */
void __fastcall sub_1400969C0(signed int a1, int a2)
{
  __int64 v2; // rsi
  unsigned __int64 v4; // rdi
  __int64 v5; // r11
  int v6; // ecx
  int v7; // eax
  int *v8; // r9
  int v9; // eax
  int *v10; // r9
  int v11; // eax
  int *v12; // r9
  int v13; // eax
  int *v14; // r9
  int v15; // eax
  int *v16; // r9
  int v17; // eax
  int *v18; // r10
  int v19; // r8d
  int v20; // xmm1_4
  __int64 v21; // r8
  int v22; // eax
  __int64 v23; // r8
  __int64 v24; // rbp
  int v25; // esi
  int v26; // eax
  __int64 v27; // rdi
  int v28[4]; // [rsp+20h] [rbp-478h] BYREF
  _OWORD v29[2]; // [rsp+30h] [rbp-468h] BYREF
  int v30; // [rsp+50h] [rbp-448h]
  char Src[1024]; // [rsp+60h] [rbp-438h] BYREF

  v2 = a1;
  if ( (unsigned int)a1 <= 5 )
  {
    v4 = 23492LL * a1;
    if ( dword_1915414A4[v4 / 4] == -1 )
    {
      if ( dword_19154118C == 4 )
      {
        v5 = 3597LL * a2;
        v6 = dword_16D67D5F8[v5];
        if ( v6 <= 0 )
          v6 = 0;
        *((_DWORD *)&qword_17AE3AD40 + 5 * v2 + 1) = v6;
        if ( !dword_178C63948[0] && *((int *)&unk_178C63954 + 539 * v2) > 0 )
        {
          v7 = 0;
          if ( (dword_16D67D5F8[v5] - 1000) / 100 >= 0 )
            v7 = (dword_16D67D5F8[v5] - 1000) / 100;
          if ( v7 > 1000 )
            v7 = 1000;
          *((_DWORD *)&unk_178C63954 + 539 * v2) = dword_178C6394C + v7 * dword_178C6394C / 100;
        }
        if ( !dword_178C856BC )
        {
          v8 = (int *)((char *)&unk_178C856C8 + 2156 * v2);
          if ( *v8 > 0 )
          {
            v9 = 0;
            if ( (dword_16D67D5F8[v5] - 1000) / 100 >= 0 )
              v9 = (dword_16D67D5F8[v5] - 1000) / 100;
            if ( v9 > 1000 )
              v9 = 1000;
            *v8 = dword_178C856C0 + v9 * dword_178C856C0 / 100;
          }
        }
        if ( !dword_178CA7430 )
        {
          v10 = (int *)((char *)&unk_178CA743C + 2156 * v2);
          if ( *v10 > 0 )
          {
            v11 = 0;
            if ( (dword_16D67D5F8[v5] - 1000) / 100 >= 0 )
              v11 = (dword_16D67D5F8[v5] - 1000) / 100;
            if ( v11 > 1000 )
              v11 = 1000;
            *v10 = dword_178CA7434 + v11 * dword_178CA7434 / 100;
          }
        }
        if ( !dword_178CC91A4 )
        {
          v12 = (int *)((char *)&unk_178CC91B0 + 2156 * v2);
          if ( *v12 > 0 )
          {
            v13 = 0;
            if ( (dword_16D67D5F8[v5] - 1000) / 100 >= 0 )
              v13 = (dword_16D67D5F8[v5] - 1000) / 100;
            if ( v13 > 1000 )
              v13 = 1000;
            *v12 = dword_178CC91A8 + v13 * dword_178CC91A8 / 100;
          }
        }
        if ( !dword_178CEAF18 )
        {
          v14 = (int *)((char *)&unk_178CEAF24 + 2156 * v2);
          if ( *v14 > 0 )
          {
            v15 = 0;
            if ( (dword_16D67D5F8[v5] - 1000) / 100 >= 0 )
              v15 = (dword_16D67D5F8[v5] - 1000) / 100;
            if ( v15 > 1000 )
              v15 = 1000;
            *v14 = dword_178CEAF1C + v15 * dword_178CEAF1C / 100;
          }
        }
        if ( !dword_178D0CC8C )
        {
          v16 = (int *)((char *)&unk_178D0CC98 + 2156 * v2);
          if ( *v16 > 0 )
          {
            v17 = 0;
            if ( (dword_16D67D5F8[v5] - 1000) / 100 >= 0 )
              v17 = (dword_16D67D5F8[v5] - 1000) / 100;
            if ( v17 > 1000 )
              v17 = 1000;
            *v16 = dword_178D0CC90 + v17 * dword_178D0CC90 / 100;
          }
        }
        if ( !dword_178D2EA00 )
        {
          v18 = (int *)((char *)&unk_178D2EA0C + 2156 * v2);
          if ( *v18 > 0 )
          {
            v19 = 0;
            if ( (dword_16D67D5F8[v5] - 1000) / 100 >= 0 )
              v19 = (dword_16D67D5F8[v5] - 1000) / 100;
            if ( v19 > 1000 )
              v19 = 1000;
            *v18 = dword_178D2EA04 + v19 * dword_178D2EA04 / 100;
          }
        }
      }
      sub_140096130(v2);
      v20 = *(_DWORD *)((char *)&unk_191541478 + v4);
      v28[0] = *(_DWORD *)((char *)&unk_191541474 + v4);
      v28[2] = *(_DWORD *)((char *)&unk_19154147C + v4);
      v28[1] = v20;
      v30 = 1065353216;
      v29[0] = xmmword_1400F78B0;
      v29[1] = xmmword_1400F78B0;
      sub_140049C20((__int64)v29, (float *)v29 + 3, v21);
      v22 = sub_14003B080(25, v28, nullptr, (int *)v29);
      if ( v22 != -1 )
      {
        v23 = 7040LL * v22;
        *(_DWORD *)((char *)&unk_19025F338 + v23) = 0;
        *(_DWORD *)((char *)&unk_19025F220 + v23) = 1111 * (v2 + 1);
        sub_140039F50(v22);
      }
      dword_1915414A4[v4 / 4] = a2;
      sub_1400DBB30(Src, "%s is now manager of %s");
      if ( dword_163D75B60 )
      {
        v24 = -1;
        do
          ++v24;
        while ( Src[v24] );
        v25 = dword_196199564;
        if ( (int)v24 > 63 )
          LODWORD(v24) = 63;
        v26 = dword_191541414;
        v27 = (__int64)dword_196199564 << 7;
        *(_DWORD *)((char *)&unk_195999560 + v27) = 2;
        *(_DWORD *)((char *)&unk_195999564 + v27) = v26;
        memcpy(&byte_1959995A0[v27], Src, (int)v24);
        byte_1959995A0[v27 + (int)v24] = 0;
        *(int *)((char *)&dword_195999580 + v27) = v24;
        *(int *)((char *)&dword_195999584 + v27) = 0;
        *(int *)((char *)&dword_195999588 + v27) = -1;
        dword_196199564 = v25 + 1;
        *(_DWORD *)((char *)&unk_19599958C + v27) = 0;
        HIWORD(dword_196199564) = 0;
      }
    }
  }
}

