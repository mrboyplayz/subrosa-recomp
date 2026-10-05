/* Address: 0x1400baf70 | Name: sub_1400BAF70 | Size: 3407 bytes */
__int64 __fastcall sub_1400BAF70(unsigned int a1)
{
  int v1; // r14d
  int v2; // r12d
  __int64 v3; // r8
  int v4; // edx
  int v5; // eax
  int v6; // r9d
  int v7; // r11d
  int v8; // esi
  int v9; // r15d
  int v10; // r13d
  int v11; // ecx
  int v12; // edx
  int v13; // eax
  int v14; // ecx
  int v15; // edx
  int v16; // eax
  unsigned int v17; // ecx
  int v18; // edx
  __int64 result; // rax
  int v20; // ecx
  int v21; // edx
  bool v22; // cc
  int v23; // r8d
  int v24; // edx
  unsigned int v25; // ebx
  bool v26; // zf
  __int64 v27; // r12
  int v28; // edi
  int v29; // eax
  BOOL v30; // ecx
  __int64 v31; // r14
  __int64 v32; // rsi
  __int64 v33; // rdi
  int v34; // ebx
  __int64 v35; // rcx
  int *v36; // rsi
  int v37; // eax
  int v38; // r10d
  char *v39; // rdx
  char *v40; // rcx
  char *v41; // rcx
  int v42; // r9d
  char *v43; // rdx
  char *v44; // rcx
  char *v45; // rcx
  int v46; // ebx
  char *v47; // rdx
  char *v48; // rcx
  int v49; // ebx
  char *v50; // rcx
  __int64 v51; // rdx
  char v52; // al
  char *v53; // rcx
  __int64 v54; // rdx
  char v55; // al
  int *v56; // rax
  int v57; // edi
  int v58; // esi
  __int64 v59; // rcx
  char *v60; // rdx
  char v61; // al
  int v62; // r14d
  __int64 v63; // r8
  unsigned __int64 v64; // rsi
  char *v65; // rcx
  __int64 v66; // rcx
  int v67; // r8d
  int v68; // edx
  char *v69; // rcx
  char *v70; // rcx
  __int64 v71; // rdx
  char v72; // al
  __int64 v73; // rcx
  int v74; // r8d
  int v75; // edx
  char *v76; // rcx
  char *v77; // rcx
  __int64 v78; // rdx
  char v79; // al
  char *v80; // rdx
  char *v81; // rdx
  char *v82; // r8
  char v83; // al
  __int64 v84; // r14
  int v85; // xmm1_4
  int v86; // eax
  __int64 v87; // r15
  int v88; // edx
  int *v89; // rcx
  __int64 v90; // rbx
  __int64 v91; // r9
  __int64 v92; // rax
  char *v93; // r8
  char *v94; // rdx
  char v95; // al
  char *v96; // rcx
  __int64 v97; // rdx
  char v98; // al
  int v100; // [rsp+34h] [rbp-CCh]
  int v101; // [rsp+38h] [rbp-C8h]
  int v102[4]; // [rsp+40h] [rbp-C0h] BYREF
  _OWORD v103[2]; // [rsp+50h] [rbp-B0h] BYREF
  int v104; // [rsp+70h] [rbp-90h]
  char Buffer[4]; // [rsp+90h] [rbp-70h] BYREF
  char v106; // [rsp+48Fh] [rbp+38Fh] BYREF
  char v107[511]; // [rsp+490h] [rbp+390h] BYREF
  char v108; // [rsp+68Fh] [rbp+58Fh] BYREF
  _BYTE v109[512]; // [rsp+690h] [rbp+590h] BYREF
  char v110[512]; // [rsp+890h] [rbp+790h] BYREF

  v1 = dword_178CA7430;
  v2 = dword_178CC91A4;
  v3 = 2156LL * (int)a1;
  v4 = 256;
  v5 = dword_178C63948[0];
  v6 = *(_DWORD *)((char *)&unk_178C63958 + v3);
  v7 = *(_DWORD *)((char *)&unk_178C856CC + v3);
  v8 = *(_DWORD *)((char *)&unk_178CA7440 + v3);
  if ( v6 < 256 )
    v4 = *(_DWORD *)((char *)&unk_178C63958 + v3);
  v9 = *(_DWORD *)((char *)&unk_178CC91B4 + v3);
  v10 = *(_DWORD *)((char *)&unk_178CEAF28 + v3);
  if ( dword_178C63948[0] >= 256 )
    v5 = 256;
  v11 = *(_DWORD *)((char *)&unk_178C856CC + v3);
  if ( v4 <= v7 )
    v11 = v4;
  v12 = dword_178C856BC;
  if ( v5 <= dword_178C856BC )
    v12 = v5;
  v13 = *(_DWORD *)((char *)&unk_178CA7440 + v3);
  if ( v11 <= v8 )
    v13 = v11;
  v14 = dword_178CA7430;
  if ( v12 <= dword_178CA7430 )
    v14 = v12;
  v15 = *(_DWORD *)((char *)&unk_178CC91B4 + v3);
  if ( v13 <= v9 )
    v15 = v13;
  v16 = dword_178CC91A4;
  if ( v14 <= dword_178CC91A4 )
    v16 = v14;
  v17 = *(_DWORD *)((char *)&unk_178CEAF28 + v3);
  if ( v15 <= v10 )
    v17 = v15;
  v18 = dword_178CEAF18;
  if ( v16 <= dword_178CEAF18 )
    v18 = v16;
  result = *(unsigned int *)((char *)&unk_178D0CC9C + v3);
  v100 = *(_DWORD *)((char *)&unk_178D0CC9C + v3);
  if ( (int)v17 <= v100 )
    result = v17;
  v20 = dword_178D0CC8C;
  if ( v18 <= dword_178D0CC8C )
    v20 = v18;
  v21 = *(_DWORD *)((char *)&unk_178D2EA10 + v3);
  v22 = (int)result <= v21;
  v23 = v21;
  v101 = v21;
  v24 = dword_178D2EA00;
  if ( v22 )
    v23 = result;
  if ( v20 <= dword_178D2EA00 )
    v24 = v20;
  if ( v24 > 0 )
    return result;
  result = 0;
  v25 = 0;
  if ( v6 == v23 && dword_178C63948[0] == v24 )
  {
    *(_DWORD *)Buffer = 0;
    v25 = 1;
  }
  if ( v7 == v23 && dword_178C856BC == v24 )
  {
    result = v25++;
    *(_DWORD *)&Buffer[4 * result] = 1;
  }
  if ( v8 == v23 && v1 == v24 )
  {
    result = v25++;
    *(_DWORD *)&Buffer[4 * result] = 2;
  }
  if ( v9 == v23 )
  {
    v26 = v2 == v24;
    v27 = 3;
    if ( v26 )
    {
      result = v25++;
      *(_DWORD *)&Buffer[4 * result] = 3;
    }
  }
  else
  {
    v27 = 3;
  }
  if ( v10 == v23 && dword_178CEAF18 == v24 )
  {
    result = v25++;
    *(_DWORD *)&Buffer[4 * result] = 4;
  }
  if ( v100 == v23 && dword_178D0CC8C == v24 )
  {
    result = v25++;
    *(_DWORD *)&Buffer[4 * result] = 5;
  }
  if ( v101 == v23 && dword_178D2EA00 == v24 )
  {
    result = v25++;
    *(_DWORD *)&Buffer[4 * result] = 6;
  }
  if ( !v25 )
    return result;
  v28 = 0;
  do
  {
    v29 = rand();
    v30 = 1;
    v31 = *(int *)&Buffer[4 * (v29 % (int)v25)];
    if ( dword_191541494[0] > 0 )
      v30 = *((_DWORD *)&unk_178C63954 + 34653 * v31) <= 0;
    if ( dword_191547058 > 0 && *(int *)&byte_178C6417C[138612 * v31 + 68] > 0 )
      v30 = 0;
    if ( dword_19154CC1C > 0 && *(int *)&byte_178C6417C[138612 * v31 + 2224] > 0 )
      v30 = 0;
    if ( dword_1915527E0 > 0 && *(int *)&byte_178C6417C[138612 * v31 + 4380] > 0 )
      v30 = 0;
    if ( dword_1915583A4 > 0 && *(int *)&byte_178C6417C[138612 * v31 + 6536] > 0 )
      v30 = 0;
    if ( dword_19155DF68 > 0 && *(int *)&byte_178C6417C[138612 * v31 + 8692] > 0 )
      v30 = 0;
    ++v28;
  }
  while ( v28 < 100 && v30 );
  LODWORD(v103[0]) = 0;
  v32 = 64;
  *(_QWORD *)((char *)v103 + 4) = 0x200000001LL;
  do
  {
    v33 = rand() % 3;
    v34 = *((_DWORD *)v103 + v33);
    v35 = rand() % 3;
    *((_DWORD *)v103 + v33) = *((_DWORD *)v103 + v35);
    *((_DWORD *)v103 + v35) = v34;
    --v32;
  }
  while ( v32 );
  v109[0] = 0;
  v36 = (int *)v103;
  ++*((_DWORD *)&unk_178C63958 + 34653 * v31 + 539 * (int)a1);
  dword_17AE3AD4C[5 * a1] = 11;
  do
  {
    v37 = *v36;
    if ( !*v36 )
    {
      v107[0] = 0;
      v38 = rand() % 3;
      if ( v38 )
      {
        if ( v38 == 1 )
        {
          v39 = "the lab at %s and %s has made great strides. ";
        }
        else
        {
          if ( v38 != 2 )
            goto LABEL_84;
          v39 = "we are increasing development at the %s and %s laboratory. ";
        }
      }
      else
      {
        v39 = "the laboratory at %s and %s has the data. ";
      }
      sub_1400DBB30(Buffer, v39);
LABEL_84:
      v40 = &v106;
      do
        v26 = *++v40 == 0;
      while ( !v26 );
      strcpy(v40, Buffer);
      v41 = &v108;
      do
        v26 = *++v41 == 0;
      while ( !v26 );
      strcpy(v41, v107);
      goto LABEL_124;
    }
    if ( v37 == 1 )
    {
      v107[0] = 0;
      v42 = rand() % 3;
      if ( v42 )
      {
        if ( v42 == 1 )
        {
          v43 = "there are new developments in the %s project. ";
        }
        else
        {
          if ( v42 != 2 )
            goto LABEL_97;
          v43 = "the %s project will revolutionize the industry. ";
        }
      }
      else
      {
        v43 = "project %s has made progress in many areas. ";
      }
      sub_1400DBB30(Buffer, v43);
LABEL_97:
      v44 = &v106;
      do
        v26 = *++v44 == 0;
      while ( !v26 );
      strcpy(v44, Buffer);
      v45 = &v108;
      do
        v26 = *++v45 == 0;
      while ( !v26 );
      strcpy(v45, v107);
      goto LABEL_124;
    }
    if ( v37 != 2 )
      goto LABEL_124;
    v107[0] = 0;
    if ( (_DWORD)v31 == dword_178C63938 )
    {
      v49 = rand() % 2;
      sub_1400DBB30(Buffer, "this project is extremely high value. ");
      if ( v49 == 1 )
        sub_1400DBB30(Buffer, "this is a high priority project. ");
      v50 = &v106;
      do
        v26 = *++v50 == 0;
      while ( !v26 );
      v51 = 0;
      do
      {
        v52 = Buffer[v51];
        v50[v51++] = v52;
      }
      while ( v52 );
      goto LABEL_120;
    }
    v46 = rand() % 4;
    sub_1400DBB30(Buffer, "we are now adding coversheets to tps reports. ");
    switch ( v46 )
    {
      case 1:
        v47 = "the company picnic is next saturday. ";
        break;
      case 2:
        v47 = "next friday is hawaiian shirt day. ";
        break;
      case 3:
        v47 = "we need to create more synergy. ";
        break;
      default:
        goto LABEL_111;
    }
    sub_1400DBB30(Buffer, v47);
LABEL_111:
    v48 = &v106;
    do
      v26 = *++v48 == 0;
    while ( !v26 );
    strcpy(v48, Buffer);
LABEL_120:
    v53 = &v108;
    do
      v26 = *++v53 == 0;
    while ( !v26 );
    v54 = 0;
    do
    {
      v55 = v107[v54];
      v53[v54++] = v55;
    }
    while ( v55 );
LABEL_124:
    ++v36;
    --v27;
  }
  while ( v27 );
  v56 = dword_18EE07480;
  v57 = 0;
  while ( 1 )
  {
    v58 = -1;
    if ( !*v56 )
      break;
    ++v57;
    v56 += 290;
    if ( (__int64)v56 >= (__int64)dword_18F717480 )
    {
      v57 = -1;
      goto LABEL_131;
    }
  }
  if ( v57 != -1 )
  {
    v59 = 290LL * v57;
    dword_18EE07480[v59] = 1;
    dword_18EE07480[v59 + 257] = 0;
  }
LABEL_131:
  v60 = v109;
  do
  {
    v61 = *v60;
    v60[(_QWORD)dword_18EE07480 + 1160LL * v57 - (_QWORD)v109 + 4] = *v60;
    ++v60;
  }
  while ( v61 );
  sub_1400B0010(v57);
  v109[0] = 0;
  ++dword_178C6393C;
  sub_1400DBB30(v110, "INTEL%02d.CDE");
  if ( (rand() & 1) != 0 )
  {
    v84 = 56076LL * *((int *)&unk_163D95E80 + 259 * (rand() % dword_163D95E7C));
    v85 = *(_DWORD *)((char *)&unk_183A8A7B0 + v84);
    v102[0] = *(_DWORD *)((char *)&unk_183A8A7AC + v84);
    v102[2] = *(_DWORD *)((char *)&unk_183A8A7B4 + v84);
    v102[1] = v85;
    v104 = 1065353216;
    v103[0] = xmmword_1400F78B0;
    v103[1] = xmmword_1400F78B0;
    v86 = sub_14003B080(21, v102, nullptr, (int *)v103);
    v87 = v86;
    if ( v86 != -1 )
    {
      v88 = 0;
      v89 = (int *)&unk_18F7174C0;
      while ( *v89 )
      {
        ++v88;
        v89 += 2570;
        if ( (__int64)v89 >= (__int64)&dword_1901214C0 )
          goto LABEL_176;
      }
      v58 = v88;
      if ( v88 != -1 )
      {
        v90 = 10280LL * v88;
        memset((char *)&unk_18F7174C4 + v90, 0, 0x2824u);
        *(_DWORD *)((char *)&unk_18F7174C0 + v90) = 1;
        *(_DWORD *)((char *)&unk_18F7174C0 + v90 + 4) = 360;
      }
LABEL_176:
      v91 = 10280LL * v58;
      v92 = *(int *)((char *)&unk_18F7174C0 + v91 + 4108);
      *((_DWORD *)&unk_19025F3F4 + 1760 * v87) = v58;
      if ( (int)v92 < 256 )
      {
        *(_DWORD *)((char *)&unk_18F7174C0 + 24 * v92 + v91 + 4112) = v57;
        v93 = v110;
        v94 = (char *)&unk_18F7184D4 + 24 * *(int *)((char *)&unk_18F7174C0 + v91 + 4108) + v91;
        do
        {
          v95 = *v93++;
          *v94++ = v95;
        }
        while ( v95 );
        *(_DWORD *)((char *)&unk_18F7174C0 + 24 * (*(_DWORD *)((char *)&unk_18F7174C0 + v91 + 4108))++ + v91 + 4132) = 0;
      }
    }
    sub_1400DBB30(
      v107,
      "We have intercepted communications\nThe disk with the info in the lobby of the lab at\n%s and %s\nFilename: %s");
    v96 = &v108;
    do
      v26 = *++v96 == 0;
    while ( !v26 );
    v82 = v107;
    v97 = 0;
    do
    {
      v98 = v107[v97];
      v96[v97++] = v98;
    }
    while ( v98 );
    return sub_1400ED4A0(a1, v109, v82);
  }
  else
  {
    v62 = dword_178C5B8E0 + 216000;
    v63 = (int)sub_1400BA020(v110, v57, dword_178C5B8E0 + 216000);
    result = (unsigned int)(60 * (v62 / 3600 / 60));
    if ( (_DWORD)v63 != -1 )
    {
      v64 = 1532 * v63;
      if ( *((int *)&unk_16D4FD608 + 383 * v63) > 0 )
      {
        sub_1400DBB30(v107, "There is in a town car driving around the city with\nvaluable information.\n");
        v65 = &v108;
        do
          v26 = *++v65 == 0;
        while ( !v26 );
        strcpy(v65, v107);
        v66 = 34LL * dword_1839ABF0C[396 * dword_16D4FD60C[v64 / 4]];
        v67 = dword_183989EFC[v66];
        if ( v67 == -1 )
          v67 = dword_183989F04[v66];
        v68 = dword_183989F00[v66];
        if ( v68 == -1 )
          v68 = dword_183989F08[v66];
        if ( v67 != -1 && v68 != -1 )
        {
          v69 = &v108;
          do
            v26 = *++v69 == 0;
          while ( !v26 );
          strcpy(v69, "The car will be driving from ");
          sub_1400DBB30(v107, "%s and %s\n");
          v70 = &v108;
          do
            v26 = *++v70 == 0;
          while ( !v26 );
          v71 = 0;
          do
          {
            v72 = v107[v71];
            v70[v71++] = v72;
          }
          while ( v72 );
        }
        v73 = 34LL
            * dword_1839ABF0C[396 * *(int *)((char *)&unk_16D4FD5F8 + 20 * *(int *)((char *)&unk_16D4FD608 + v64) + v64)];
        v74 = dword_183989EFC[v73];
        if ( v74 == -1 )
          v74 = dword_183989F04[v73];
        v75 = dword_183989F00[v73];
        if ( v75 == -1 )
          v75 = dword_183989F08[v73];
        if ( v74 != -1 && v75 != -1 )
        {
          v76 = &v108;
          do
            v26 = *++v76 == 0;
          while ( !v26 );
          *(_DWORD *)v76 = 2125684;
          sub_1400DBB30(v107, "%s and %s.\n");
          v77 = &v108;
          do
            v26 = *++v77 == 0;
          while ( !v26 );
          v78 = 0;
          do
          {
            v79 = v107[v78];
            v77[v78++] = v79;
          }
          while ( v79 );
        }
        v80 = "This mission expires at %d:%02d AM.\n";
        if ( v62 >= 2592000 )
          v80 = "This mission expires at %d:%02d PM.\n";
        sub_1400DBB30(v107, v80);
        v81 = &v108;
        do
          v26 = *++v81 == 0;
        while ( !v26 );
        v82 = nullptr;
        do
        {
          v83 = v107[(_QWORD)v82];
          (v82++)[(_QWORD)v81] = v83;
        }
        while ( v83 );
        return sub_1400ED4A0(a1, v109, v82);
      }
    }
  }
  return result;
}

