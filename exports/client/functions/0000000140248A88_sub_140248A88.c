/* Address: 0x140248a88 | Name: sub_140248A88 | Size: 1151 bytes */
__int64 __fastcall sub_140248A88(char *a1, #57 *a2, __int64 a3, #44 *a4, __int64 a5, _DWORD *a6)
{
  __int64 v9; // rax
  char v10; // r14
  __int64 v11; // r12
  __int64 v12; // rsi
  unsigned __int64 v13; // r15
  int v14; // edi
  unsigned __int16 *v15; // rax
  int v16; // edx
  int v17; // ecx
  #44 *v18; // rax
  int v19; // edx
  int v20; // ecx
  bool v21; // zf
  _DWORD *v22; // rdi
  int qualified_locale_downlevel; // eax
  unsigned __int64 v24; // rdi
  unsigned __int16 v25; // ax
  __int64 v26; // r8
  char *v27; // rdx
  int v28; // edx
  int v29; // ecx
  int v30; // ecx
  unsigned __int16 v31; // ax
  __int64 v32; // rdx
  __int64 v33; // [rsp+0h] [rbp-100h] BYREF
  __int64 v34; // [rsp+30h] [rbp-D0h] BYREF
  _DWORD *v35; // [rsp+38h] [rbp-C8h]
  #44 *v36; // [rsp+40h] [rbp-C0h]
  #44 *v37; // [rsp+48h] [rbp-B8h] BYREF
  __int64 MaxCount; // [rsp+50h] [rbp-B0h]
  __int64 v39; // [rsp+58h] [rbp-A8h]
  char v40; // [rsp+60h] [rbp-A0h]
  _DWORD *v41; // [rsp+68h] [rbp-98h]
  __int64 SizeInWords; // [rsp+70h] [rbp-90h]
  #57 *Destination; // [rsp+78h] [rbp-88h]
  _WORD v44[128]; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int16 v45; // [rsp+180h] [rbp+80h]
  unsigned __int16 v46; // [rsp+182h] [rbp+82h]
  unsigned __int16 v47; // [rsp+184h] [rbp+84h]
  __int16 v48; // [rsp+186h] [rbp+86h]
  __int64 v49; // [rsp+188h] [rbp+88h]
  _WORD Source[88]; // [rsp+1A0h] [rbp+A0h] BYREF
  __int64 v51; // [rsp+250h] [rbp+150h]

  SizeInWords = a3;
  Destination = a2;
  v34 = a5;
  v41 = a6;
  if ( a1 )
  {
    if ( *(_WORD *)a1 == 67 && !*((_WORD *)a1 + 1) )
    {
      if ( !(unsigned int)sub_140259444(a2, a3, L"C") )
      {
        *a6 = 0;
        return MEMORY[0x1401F8B20]((unsigned __int64)&v33 ^ v51);
      }
      goto LABEL_67;
    }
    v9 = sub_140255A70();
    v37 = a4;
    MaxCount = a5;
    v39 = v9 + 152;
    v10 = 0;
    v40 = 0;
    v35 = (_DWORD *)(v9 + 184);
    v36 = (#44 *)(v9 + 188);
    v11 = v9 + 450;
    if ( (unsigned int)sub_140260D80(a4, a5, v9 + 752, 85) )
      goto LABEL_67;
    v12 = -1;
    v13 = -1;
    v14 = 0;
    do
      ++v13;
    while ( *(_WORD *)&a1[2 * v13] );
    if ( v13 < 0x83 )
    {
      v15 = (unsigned __int16 *)v11;
      do
      {
        v16 = *(unsigned __int16 *)&a1[(_QWORD)v15 - v11];
        v17 = *v15 - v16;
        if ( v17 )
          break;
        ++v15;
      }
      while ( v16 );
      if ( !v17 )
        goto LABEL_66;
      v18 = v36;
      do
      {
        v19 = *(unsigned __int16 *)((char *)v18 + a1 - (char *)v36);
        v20 = *(unsigned __int16 *)v18 - v19;
        if ( v20 )
          break;
        v18 = (#44 *)((char *)v18 + 2);
      }
      while ( v19 );
      if ( !v20 )
        goto LABEL_66;
    }
    LOBYTE(v14) = (unsigned __int8)sub_14024F8BC() == 0;
    if ( (unsigned int)sub_14024877C(v44, a1) )
    {
      v22 = v35;
    }
    else
    {
      v21 = v14 == 0;
      v22 = v35;
      if ( v21 )
        qualified_locale_downlevel = sub_14026340C(v44, v35, v44);
      else
        qualified_locale_downlevel = _acrt_get_qualified_locale_downlevel(v44, v35, v44);
      if ( qualified_locale_downlevel )
      {
        sub_1402486D8(v11, 131, (__int64)v44);
        do
          ++v12;
        while ( Source[v12] );
        v10 = 1;
        if ( (unsigned int)sub_140260D80(a4, v34, Source, v12 + 1) )
          goto LABEL_68;
        v24 = v13 + 1;
        goto LABEL_61;
      }
    }
    if ( (unsigned int)sub_14024F408(a1) )
    {
      LODWORD(v34) = 0;
      if ( !(unsigned int)sub_14024F174(a1, 536875012, &v34, 2) || (v25 = v34, !(_DWORD)v34) )
        v25 = -535;
      *v22 = v25;
      v24 = v13 + 1;
      if ( (unsigned int)sub_140260D80(v11, 131, a1, v13 + 1) )
        goto LABEL_68;
      v26 = v13 + 1;
      v27 = a1;
      goto LABEL_60;
    }
    if ( !(unsigned __int8)parse_bcp47(v44, a1) || !(unsigned int)sub_14024F408(Source) )
    {
LABEL_51:
      if ( v10 || !(unsigned int)sub_140260D80(v39 + 600, 85, v37, MaxCount) )
        return MEMORY[0x1401F8B20]((unsigned __int64)&v33 ^ v51);
LABEL_67:
      sub_14024CFBC(0, 0, 0, 0, 0);
      __debugbreak();
    }
    if ( v45 )
    {
      v28 = v45 + 32;
      if ( (unsigned int)v45 - 65 > 0x19 )
        v28 = v45;
      if ( v28 != 117 )
        goto LABEL_50;
      v29 = v46 + 32;
      if ( (unsigned int)v46 - 65 > 0x19 )
        v29 = v46;
      if ( v29 != 116 )
        goto LABEL_50;
      v30 = v47 + 32;
      if ( (unsigned int)v47 - 65 > 0x19 )
        v30 = v47;
      if ( v30 != 102 || v48 != 56 || (_WORD)v49 )
      {
LABEL_50:
        if ( v48 != 45 || (_DWORD)v49 != 56 )
          goto LABEL_51;
      }
    }
    else
    {
      LODWORD(v34) = 0;
      if ( (unsigned int)sub_14024F174(Source, 536875012, &v34, 2) )
      {
        v31 = v34;
        if ( (_DWORD)v34 )
          goto LABEL_57;
      }
    }
    v31 = -535;
LABEL_57:
    *v22 = v31;
    v24 = v13 + 1;
    if ( (unsigned int)sub_140260D80(v11, 131, a1, v13 + 1) )
      goto LABEL_68;
    do
      ++v12;
    while ( Source[v12] );
    v27 = (char *)Source;
    v26 = v12 + 1;
LABEL_60:
    sub_1402484BC((__int64)&v37, (__int64)v27, v26);
    v10 = v40;
LABEL_61:
    if ( !*(_WORD *)a1 || v13 >= 0x83 )
    {
      *(_WORD *)v36 = 0;
      goto LABEL_66;
    }
    if ( !(unsigned int)sub_140260D80(v36, 131, a1, v24) )
    {
LABEL_66:
      v32 = SizeInWords;
      *v41 = *v35;
      if ( (unsigned int)sub_140259444(Destination, v32, v11) )
        goto LABEL_67;
      goto LABEL_51;
    }
LABEL_68:
    sub_14024CFBC(0, 0, 0, 0, 0);
    JUMPOUT(0x140248F06LL);
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&v33 ^ v51);
}

