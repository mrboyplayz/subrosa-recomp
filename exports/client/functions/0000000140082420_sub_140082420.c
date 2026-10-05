/* Address: 0x140082420 | Name: sub_140082420 | Size: 9520 bytes */
__int64 sub_140082420()
{
  __int64 v0; // rbx
  __int64 v1; // r8
  unsigned int v2; // eax
  __int64 v3; // rbp
  __int64 v4; // r8
  __int64 v5; // r8
  int v6; // eax
  float v7; // xmm8_4
  __int64 v8; // rax
  __int64 v9; // r9
  __m128i v10; // xmm8
  unsigned int i; // ebx
  __int64 v12; // rcx
  int v13; // eax
  char *v14; // rcx
  char *v15; // rdx
  float v16; // xmm0_4
  char v17; // al
  __int64 v18; // rbx
  __m128i v19; // xmm8
  __int64 v20; // rax
  __int64 v21; // r9
  __int64 v22; // rdi
  char *v23; // rcx
  int v24; // edi
  unsigned int *v25; // rbx
  __int64 v26; // rsi
  int v27; // eax
  __int64 v28; // r9
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // rax
  __int64 v32; // r8
  __int64 v33; // rax
  __int64 v34; // r9
  __int64 v35; // rdx
  __m128i v36; // xmm6
  __int64 v37; // r8
  __int64 v38; // rcx
  __int64 v39; // r9
  __int64 v40; // rdx
  __m128i v41; // xmm6
  __int64 v42; // r8
  __int64 v43; // rcx
  __int64 v44; // rcx
  __m128i v45; // xmm6
  __int64 v46; // r9
  __int64 v47; // r8
  __int64 v48; // rdx
  __int64 v49; // rcx
  __m128i v50; // xmm2
  __m128i v51; // xmm6
  const char *v52; // rcx
  __int64 v53; // rcx
  const char *v54; // rcx
  __int64 v55; // r9
  __int64 v56; // r8
  __int64 v57; // rdx
  __m128i v58; // xmm8
  __m128i v59; // xmm6
  int v60; // r8d
  int v61; // r9d
  __int64 v62; // rcx
  int v63; // ecx
  const char *v64; // rcx
  int v65; // edx
  int v66; // r9d
  int v67; // r8d
  bool v68; // zf
  __m128i v69; // xmm10
  unsigned int j; // edi
  __int64 v71; // rdx
  unsigned int v72; // r8d
  int v73; // eax
  int v74; // xmm6_4
  float v75; // xmm8_4
  signed int v76; // eax
  __int64 v77; // rcx
  __int64 v78; // rax
  __int64 v79; // rcx
  signed int v80; // eax
  unsigned int *v81; // rcx
  signed __int64 v82; // rdx
  char v83; // al
  __int64 v85; // [rsp+0h] [rbp-558h] BYREF
  __int64 v86; // [rsp+20h] [rbp-538h]
  int v87; // [rsp+28h] [rbp-530h]
  int v88; // [rsp+30h] [rbp-528h]
  int v89; // [rsp+38h] [rbp-520h]
  int v90; // [rsp+40h] [rbp-518h]
  unsigned int *v91; // [rsp+48h] [rbp-510h]
  unsigned int *v92; // [rsp+50h] [rbp-508h]
  int v93; // [rsp+58h] [rbp-500h]
  int v94; // [rsp+60h] [rbp-4F8h]
  __int64 v95; // [rsp+70h] [rbp-4E8h]
  _BYTE v96[1024]; // [rsp+80h] [rbp-4D8h] BYREF
  __int64 v97; // [rsp+480h] [rbp-D8h]

  v0 = (int)dword_140404A6C[284024501];
  if ( dword_140404A6C[284024501] == -1 )
    return MEMORY[0x1401F8B20]((unsigned __int64)&v85 ^ v97);
  if ( dword_140404A6C[283831312] == 7 )
  {
    if ( dword_140404A6C[283831448] != 2
      || (int)dword_140404A6C[283831451] >= (signed int)(60 * dword_140404A6C[284022502]) )
    {
      goto LABEL_13;
    }
    LODWORD(v91) = dword_140404A6C[284022502] - (signed int)dword_140404A6C[283831451] / 60;
    v90 = 1065353216;
    v89 = 1065353216;
    v88 = 1065353216;
    v87 = 1065353216;
    sub_14006D930(
      "Start in /i",
      (unsigned int)_mm_cvtsi128_si32((__m128i)0x44000000u),
      (unsigned int)_mm_cvtsi128_si32((__m128i)0x41800000u),
      (unsigned int)_mm_cvtsi128_si32((__m128i)0x41C00000u),
      33);
  }
  if ( dword_140404A6C[283831312] == 6 && dword_140404A6C[283831448] == 2 && dword_140404A6C[284024376] )
  {
    unk_140404050(3553, dword_140404A6C[451221642]);
    sub_14006CFF0(
      0.0,
      0.0,
      v1,
      576.0,
      0,
      1031798784,
      1031798784,
      1031798784,
      COERCE_INT(1.0 - (float)((float)(int)dword_140404A6C[283831450] * 0.0033333334)));
    v2 = dword_140404A6C[284024376];
    if ( dword_140404A6C[284024376] == 1 )
    {
      v90 = 1065353216;
      v89 = 1065353216;
      v88 = 1065353216;
      v87 = 1065353216;
      sub_14006D930(
        "Success",
        (unsigned int)_mm_cvtsi128_si32((__m128i)0x44000000u),
        (unsigned int)_mm_cvtsi128_si32((__m128i)0x43A00000u),
        (unsigned int)_mm_cvtsi128_si32((__m128i)0x42200000u),
        1);
      v2 = dword_140404A6C[284024376];
    }
    if ( v2 == 2 )
    {
      v90 = 1065353216;
      v89 = 1065353216;
      v88 = 1065353216;
      v87 = 1065353216;
      sub_14006D930(
        "Failed",
        (unsigned int)_mm_cvtsi128_si32((__m128i)0x44000000u),
        (unsigned int)_mm_cvtsi128_si32((__m128i)0x43A00000u),
        (unsigned int)_mm_cvtsi128_si32((__m128i)0x42200000u),
        1);
    }
  }
LABEL_13:
  v3 = 14388 * v0;
  v95 = 14388 * v0;
  if ( dword_140404A6C[3597 * v0 + 71856342] == 2 || dword_140404A6C[283831448] == 3 )
  {
    unk_140404050(3553, dword_140404A6C[451221642]);
    sub_14006CFF0(0.0, 0.0, v4, 576.0, 0, 1031798784, 1031798784, 1031798784, 1065353216);
  }
  if ( dword_140404A6C[284021985] )
  {
    if ( dword_140404A6C[283831312] == 5 && dword_140404A6C[283831448] != 2 )
      goto LABEL_34;
    unk_140404050(3553, dword_140404A6C[451221642]);
    sub_14006CFF0(
      COERCE_DOUBLE(1140850688),
      COERCE_DOUBLE(1107296256),
      v5,
      512.0,
      0,
      1061158912,
      1061158912,
      1061158912,
      1065353216);
  }
  if ( dword_140404A6C[283831312] != 5 )
    goto LABEL_43;
  if ( dword_140404A6C[283831448] == 2 && (int)dword_140404A6C[283831451] < 600 && dword_140404A6C[284024501] != -1 )
  {
    v6 = dword_140404A6C[3597 * dword_140404A6C[284024501] + 71856286];
    if ( v6 != -1 && v6 < 3 )
    {
      v7 = fminf((float)(600 - dword_140404A6C[283831451]) * 0.0055555557, 1.0);
      if ( v6 )
      {
        if ( v6 == 1 )
        {
          v90 = LODWORD(v7);
          v89 = 0;
          v88 = 0;
          v87 = 1061158912;
          sub_14006D930(
            "You are the Eliminator",
            (unsigned int)_mm_cvtsi128_si32((__m128i)0x44000000u),
            (unsigned int)_mm_cvtsi128_si32((__m128i)0x43880000u),
            (unsigned int)_mm_cvtsi128_si32((__m128i)0x42000000u),
            33);
        }
        else if ( v6 == 2 )
        {
          v90 = LODWORD(v7);
          v89 = 1065353216;
          v88 = 1061158912;
          v87 = 1061158912;
          sub_14006D930(
            "You are the Protector",
            (unsigned int)_mm_cvtsi128_si32((__m128i)0x44000000u),
            (unsigned int)_mm_cvtsi128_si32((__m128i)0x43880000u),
            (unsigned int)_mm_cvtsi128_si32((__m128i)0x42000000u),
            33);
          v8 = dword_140404A6C[284022462];
          v9 = (unsigned int)_mm_cvtsi128_si32((__m128i)0x42000000u);
          if ( dword_140404A6C[284022462] > 0xFF )
            v8 = 0;
          v91 = &dword_140404A6C[3597 * v8 + 71856254];
          v90 = LODWORD(v7);
          v89 = 1065353216;
          v88 = 1061158912;
          v87 = 1061158912;
          sub_14006D930(
            "The Savior is /s",
            (unsigned int)_mm_cvtsi128_si32((__m128i)0x44000000u),
            (unsigned int)_mm_cvtsi128_si32((__m128i)0x43980000u),
            v9,
            33);
        }
      }
      else
      {
        v90 = LODWORD(v7);
        v89 = 1061158912;
        v88 = 1061158912;
        v87 = 1061158912;
        sub_14006D930(
          "You are a Civilian",
          (unsigned int)_mm_cvtsi128_si32((__m128i)0x44000000u),
          (unsigned int)_mm_cvtsi128_si32((__m128i)0x43880000u),
          (unsigned int)_mm_cvtsi128_si32((__m128i)0x42000000u),
          33);
      }
    }
  }
LABEL_34:
  v10 = (__m128i)0x42A00000u;
  if ( dword_140404A6C[283831448] == 2 )
  {
    for ( i = (unsigned __int8)(LOBYTE(dword_140404A6C[346706173]) + 1);
          i != LOBYTE(dword_140404A6C[346706173]);
          i = (unsigned __int8)(i + 1) )
    {
      v12 = 38LL * i;
      if ( dword_140404A6C[v12 + 346696445] == 3 )
      {
        v13 = dword_140404A6C[v12 + 346696447];
        if ( v13 > 0 && (int)dword_140404A6C[v12 + 346696448] > 0 )
        {
          v14 = (char *)(0x140000000LL + v12 * 4 + 1390999160);
          v15 = (char *)((char *)&dword_140404A6C[18601357] - v14);
          v16 = (float)v13 * 0.0049999999;
          do
          {
            v17 = *v14;
            v15[(_QWORD)v14] = *v14;
            ++v14;
          }
          while ( v17 );
          v90 = LODWORD(v16);
          v89 = 1065353216;
          v88 = 1061158912;
          v87 = 1061158912;
          sub_14006D930(
            &dword_140404A6C[18601357],
            (unsigned int)_mm_cvtsi128_si32((__m128i)0x44000000u),
            (unsigned int)_mm_cvtsi128_si32(v10),
            (unsigned int)_mm_cvtsi128_si32((__m128i)0x41C00000u),
            97);
          *(float *)v10.m128i_i32 = *(float *)v10.m128i_i32 + 24.0;
        }
      }
    }
  }
LABEL_43:
  if ( dword_140404A6C[283831312] - 3 > 2
    || !dword_140404A6C[284021985]
    || dword_140404A6C[283831312] == 5 && dword_140404A6C[283831448] != 2 )
  {
    goto LABEL_105;
  }
  if ( dword_140404A6C[284024501] == -1 )
    goto LABEL_105;
  v18 = (int)dword_140404A6C[3597 * dword_140404A6C[284024501] + 71856286];
  if ( (_DWORD)v18 == -1 )
    goto LABEL_105;
  v19 = (__m128i)0x42A00000u;
  if ( dword_140404A6C[283831312] != 5 )
    goto LABEL_58;
  switch ( (_DWORD)v18 )
  {
    case 0:
      v90 = 1065353216;
      v89 = 0;
      v88 = 0;
      v87 = 0;
      sub_14006D930(
        "You are a Civilian",
        (unsigned int)_mm_cvtsi128_si32((__m128i)0x44020000u),
        (unsigned int)_mm_cvtsi128_si32((__m128i)0x42A00000u),
        (unsigned int)_mm_cvtsi128_si32((__m128i)0x41800000u),
        0);
      v19 = (__m128i)0x42E00000u;
LABEL_58:
      if ( dword_140404A6C[283831312] == 4 && dword_140404A6C[284024501] != -1 )
      {
        v90 = 1065353216;
        v89 = 0;
        v22 = 3597LL * (int)dword_140404A6C[284024501];
        v88 = 0;
        v87 = 0;
        sub_14006D930(
          &dword_140404A6C[v22 + 71856254],
          (unsigned int)_mm_cvtsi128_si32((__m128i)0x44020000u),
          (unsigned int)_mm_cvtsi128_si32((__m128i)0x42400000u),
          (unsigned int)_mm_cvtsi128_si32((__m128i)0x41800000u),
          0);
        sub_140158AB0(
          v96,
          "%03d-%04d",
          dword_140404A6C[v22 + 71856265] / 0x2710,
          dword_140404A6C[v22 + 71856265] % 0x2710);
        v90 = 1065353216;
        v89 = 0;
        v88 = 0;
        v87 = 0;
        sub_14006D930(
          v96,
          (unsigned int)_mm_cvtsi128_si32((__m128i)0x44020000u),
          (unsigned int)_mm_cvtsi128_si32((__m128i)0x42800000u),
          (unsigned int)_mm_cvtsi128_si32((__m128i)0x41800000u),
          0);
        LODWORD(v91) = dword_140404A6C[v22 + 71856275];
        v90 = 1065353216;
        v89 = 0;
        v88 = 0;
        v87 = 0;
        sub_14006D930(
          "Corporate rating: /i",
          (unsigned int)_mm_cvtsi128_si32((__m128i)0x44020000u),
          (unsigned int)_mm_cvtsi128_si32((__m128i)0x42A00000u),
          (unsigned int)_mm_cvtsi128_si32((__m128i)0x41800000u),
          0);
        if ( (unsigned int)v18 <= 5 )
        {
          v23 = off_1402B2890[v18];
          v90 = 1065353216;
          v89 = 0;
          v88 = 0;
          v87 = 0;
          sub_14006D930(
            v23,
            (unsigned int)_mm_cvtsi128_si32((__m128i)0x44020000u),
            (unsigned int)_mm_cvtsi128_si32((__m128i)0x42E00000u),
            (unsigned int)_mm_cvtsi128_si32((__m128i)0x41800000u),
            0);
          LODWORD(v91) = dword_140404A6C[v22 + 71856273];
          v90 = 1065353216;
          v89 = 0;
          v88 = 0;
          v87 = 0;
          sub_14006D930(
            "$/I",
            (unsigned int)_mm_cvtsi128_si32((__m128i)0x44020000u),
            (unsigned int)_mm_cvtsi128_si32((__m128i)0x43000000u),
            (unsigned int)_mm_cvtsi128_si32((__m128i)0x41800000u),
            0);
          LODWORD(v91) = dword_140404A6C[v22 + 71856274];
          v90 = 1065353216;
          v89 = 0;
          v88 = 0;
          v87 = 0;
          sub_14006D930(
            "Budget: $/I",
            (unsigned int)_mm_cvtsi128_si32((__m128i)0x442A0000u),
            (unsigned int)_mm_cvtsi128_si32((__m128i)0x43000000u),
            (unsigned int)_mm_cvtsi128_si32((__m128i)0x41800000u),
            0);
        }
      }
      break;
    case 1:
      v90 = 1065353216;
      v89 = 0;
      v88 = 0;
      v87 = 0;
      sub_14006D930(
        "You are the Eliminator",
        (unsigned int)_mm_cvtsi128_si32((__m128i)0x44020000u),
        (unsigned int)_mm_cvtsi128_si32((__m128i)0x42A00000u),
        (unsigned int)_mm_cvtsi128_si32((__m128i)0x41800000u),
        0);
      v19 = (__m128i)0x42E00000u;
      goto LABEL_58;
    case 2:
      v90 = 1065353216;
      v89 = 0;
      v88 = 0;
      v87 = 0;
      sub_14006D930(
        "You are the Protector",
        (unsigned int)_mm_cvtsi128_si32((__m128i)0x44020000u),
        (unsigned int)_mm_cvtsi128_si32((__m128i)0x42A00000u),
        (unsigned int)_mm_cvtsi128_si32((__m128i)0x41800000u),
        0);
      v20 = dword_140404A6C[284022462];
      v21 = (unsigned int)_mm_cvtsi128_si32((__m128i)0x41800000u);
      if ( dword_140404A6C[284022462] > 0xFF )
        v20 = 0;
      v91 = &dword_140404A6C[3597 * v20 + 71856254];
      v90 = 1065353216;
      v89 = 0;
      v88 = 0;
      v87 = 0;
      sub_14006D930(
        "The Savior is /s",
        (unsigned int)_mm_cvtsi128_si32((__m128i)0x44020000u),
        (unsigned int)_mm_cvtsi128_si32((__m128i)0x42E00000u),
        v21,
        0);
      v19 = (__m128i)0x43100000u;
      goto LABEL_58;
  }
  if ( dword_140404A6C[283831312] == 3 && (unsigned int)v18 <= 2 )
  {
    *(float *)v19.m128i_i32 = *(float *)v19.m128i_i32 + 16.0;
    v91 = (unsigned int *)off_1402B2890[v18];
    sub_14006D930(
      "/s",
      (unsigned int)_mm_cvtsi128_si32((__m128i)0x44020000u),
      (unsigned int)_mm_cvtsi128_si32(v19),
      (unsigned int)_mm_cvtsi128_si32((__m128i)0x41800000u),
      0);
    v90 = 1065353216;
    *(float *)v19.m128i_i32 = *(float *)v19.m128i_i32 + 32.0;
    v89 = 0;
    v88 = 0;
    v87 = 0;
    sub_14006D930(
      "Missions:",
      (unsigned int)_mm_cvtsi128_si32((__m128i)0x44020000u),
      (unsigned int)_mm_cvtsi128_si32(v19),
      (unsigned int)_mm_cvtsi128_si32((__m128i)0x41800000u),
      0);
    *(float *)v19.m128i_i32 = *(float *)v19.m128i_i32 + 32.0;
    v24 = 0;
    v25 = &dword_140404A6C[5873 * v18 + 283831606];
    v26 = 16;
    do
    {
      if ( *(v25 - 18) )
      {
        v27 = *(v25 - 15);
        if ( !v27 )
        {
          sub_14006D930(
            "Acquisition:",
            (unsigned int)_mm_cvtsi128_si32((__m128i)0x44020000u),
            (unsigned int)_mm_cvtsi128_si32(v19),
            (unsigned int)_mm_cvtsi128_si32((__m128i)0x41800000u),
            0);
          *(float *)v19.m128i_i32 = *(float *)v19.m128i_i32 + 16.0;
          sub_14006D930(
            "We have received reports that Megacorp has disks containing",
            (unsigned int)_mm_cvtsi128_si32((__m128i)0x44020000u),
            (unsigned int)_mm_cvtsi128_si32(v19),
            (unsigned int)_mm_cvtsi128_si32((__m128i)0x41800000u),
            0);
          v90 = 1065353216;
          *(float *)v19.m128i_i32 = *(float *)v19.m128i_i32 + 16.0;
          v89 = 0;
          v88 = 0;
          v87 = 0;
          sub_14006D930(
            "information that will be beneficial to one of our subsidiaries.",
            (unsigned int)_mm_cvtsi128_si32((__m128i)0x44020000u),
            (unsigned int)_mm_cvtsi128_si32(v19),
            (unsigned int)_mm_cvtsi128_si32((__m128i)0x41800000u),
            0);
          *(float *)v19.m128i_i32 = *(float *)v19.m128i_i32 + 16.0;
          v28 = (unsigned int)_mm_cvtsi128_si32((__m128i)0x41800000u);
          v29 = (unsigned int)_mm_cvtsi128_si32((__m128i)0x44020000u);
          v30 = (unsigned int)_mm_cvtsi128_si32(v19);
          if ( *v25 == -1 )
          {
            v90 = 1065353216;
            v89 = 0;
            v88 = 0;
            v87 = 0;
            sub_14006D930("We do not know where the disk is located.", v29, v30, v28, 0);
            *(float *)v19.m128i_i32 = *(float *)v19.m128i_i32 + 16.0;
          }
          else
          {
            v91 = &dword_140404A6C[1268 * *(v25 - 3) + 278521297];
            v90 = 1065353216;
            v89 = 0;
            v88 = 0;
            v87 = 0;
            sub_14006D930("The /s is in a building near the", v29, v30, v28, 0);
            v31 = (int)*v25;
            *(float *)v19.m128i_i32 = *(float *)v19.m128i_i32 + 16.0;
            v32 = (int)dword_140404A6C[14019 * v31 + 225641321];
            if ( (_DWORD)v32 != -1 )
            {
              v33 = (int)dword_140404A6C[14019 * v31 + 225641322];
              if ( (_DWORD)v33 != -1 )
              {
                v92 = &dword_140404A6C[396 * v33 + 225426047];
                v91 = &dword_140404A6C[396 * v32 + 225426047];
                v90 = 1065353216;
                v89 = 0;
                v88 = 0;
                v87 = 0;
                sub_14006D930(
                  "/s and /s intersection",
                  (unsigned int)_mm_cvtsi128_si32((__m128i)0x44020000u),
                  (unsigned int)_mm_cvtsi128_si32(v19),
                  (unsigned int)_mm_cvtsi128_si32((__m128i)0x41800000u),
                  0);
              }
            }
          }
          *(float *)v19.m128i_i32 = *(float *)v19.m128i_i32 + 16.0;
          LODWORD(v91) = *(v25 - 2);
          v90 = 1065353216;
          v89 = 0;
          v88 = 0;
          v87 = 0;
          sub_14006D930(
            "Value:               $/i Bonus",
            (unsigned int)_mm_cvtsi128_si32((__m128i)0x44020000u),
            (unsigned int)_mm_cvtsi128_si32(v19),
            (unsigned int)_mm_cvtsi128_si32((__m128i)0x41800000u),
            0);
          *(float *)v19.m128i_i32 = *(float *)v19.m128i_i32 + 16.0;
          LODWORD(v91) = (int)(float)((float)(int)(*(v25 - 2) + 1) * 0.0024999999);
          v90 = 1065353216;
          v89 = 0;
          v88 = 0;
          v87 = 0;
          sub_14006D930(
            "Estimated stock increase:         /i%",
            (unsigned int)_mm_cvtsi128_si32((__m128i)0x44020000u),
            (unsigned int)_mm_cvtsi128_si32(v19),
            (unsigned int)_mm_cvtsi128_si32((__m128i)0x41800000u),
            0);
          v27 = *(v25 - 15);
          *(float *)v19.m128i_i32 = *(float *)v19.m128i_i32 + 16.0;
        }
        if ( v27 == 1 )
        {
          sub_14006D930(
            "Acquisition:",
            (unsigned int)_mm_cvtsi128_si32((__m128i)0x44020000u),
            (unsigned int)_mm_cvtsi128_si32(v19),
            (unsigned int)_mm_cvtsi128_si32((__m128i)0x41800000u),
            0);
          *(float *)v19.m128i_i32 = *(float *)v19.m128i_i32 + 16.0;
          sub_14006D930(
            "We have received reports that Megacorp has disks containing",
            (unsigned int)_mm_cvtsi128_si32((__m128i)0x44020000u),
            (unsigned int)_mm_cvtsi128_si32(v19),
            (unsigned int)_mm_cvtsi128_si32((__m128i)0x41800000u),
            0);
          v90 = 1065353216;
          *(float *)v19.m128i_i32 = *(float *)v19.m128i_i32 + 16.0;
          v89 = 0;
          v88 = 0;
          v87 = 0;
          sub_14006D930(
            "information that will be beneficial to one of our subsidiaries.",
            (unsigned int)_mm_cvtsi128_si32((__m128i)0x44020000u),
            (unsigned int)_mm_cvtsi128_si32(v19),
            (unsigned int)_mm_cvtsi128_si32((__m128i)0x41800000u),
            0);
          *(float *)v19.m128i_i32 = *(float *)v19.m128i_i32 + 16.0;
          v91 = &dword_140404A6C[1268 * *(v25 - 3) + 278521297];
          v90 = 1065353216;
          v89 = 0;
          v88 = 0;
          v87 = 0;
          sub_14006D930(
            "The /s is in a town car driving around the city.",
            (unsigned int)_mm_cvtsi128_si32((__m128i)0x44020000u),
            (unsigned int)_mm_cvtsi128_si32(v19),
            (unsigned int)_mm_cvtsi128_si32((__m128i)0x41800000u),
            0);
          *(float *)v19.m128i_i32 = *(float *)v19.m128i_i32 + 16.0;
          LODWORD(v91) = *(v25 - 2);
          v90 = 1065353216;
          v89 = 0;
          v88 = 0;
          v87 = 0;
          sub_14006D930(
            "Value:               $/i Bonus",
            (unsigned int)_mm_cvtsi128_si32((__m128i)0x44020000u),
            (unsigned int)_mm_cvtsi128_si32(v19),
            (unsigned int)_mm_cvtsi128_si32((__m128i)0x41800000u),
            0);
          v27 = *(v25 - 15);
          *(float *)v19.m128i_i32 = *(float *)v19.m128i_i32 + 16.0;
        }
        if ( v27 == 2 )
        {
          v90 = 1065353216;
          v89 = 0;
          v88 = 0;
          v87 = 0;
          sub_14006D930(
            "Transaction:",
            (unsigned int)_mm_cvtsi128_si32((__m128i)0x44020000u),
            (unsigned int)_mm_cvtsi128_si32(v19),
            (unsigned int)_mm_cvtsi128_si32((__m128i)0x41800000u),
            0);
          v68 = *v25 == -1;
          *(float *)v19.m128i_i32 = *(float *)v19.m128i_i32 + 16.0;
          v90 = 1065353216;
          v89 = 0;
          v88 = 0;
          v87 = 0;
          v36 = v19;
          v34 = (unsigned int)_mm_cvtsi128_si32((__m128i)0x41800000u);
          v35 = (unsigned int)_mm_cvtsi128_si32((__m128i)0x44020000u);
          *(float *)v36.m128i_i32 = *(float *)v19.m128i_i32 + 16.0;
          v37 = (unsigned int)_mm_cvtsi128_si32(v19);
          v86 = 0;
          if ( v68 )
          {
            sub_14006D930("We have acquired a disk that has information that can be", v35, v37, v34, v86);
            v90 = 1065353216;
            v89 = 0;
            v88 = 0;
            v19 = v36;
            v87 = 0;
            sub_14006D930(
              "traded for money with another corporation.",
              (unsigned int)_mm_cvtsi128_si32((__m128i)0x44020000u),
              (unsigned int)_mm_cvtsi128_si32(v36),
              (unsigned int)_mm_cvtsi128_si32((__m128i)0x41800000u),
              0);
            *(float *)v19.m128i_i32 = *(float *)v36.m128i_i32 + 16.0;
          }
          else
          {
            sub_14006D930("One of our agents has acquired a disk that has information", v35, v37, v34, v86);
            v90 = 1065353216;
            v89 = 0;
            v88 = 0;
            v19 = v36;
            v87 = 0;
            sub_14006D930(
              "wanted by another corporation.  The disk is in a briefcase.",
              (unsigned int)_mm_cvtsi128_si32((__m128i)0x44020000u),
              (unsigned int)_mm_cvtsi128_si32(v36),
              (unsigned int)_mm_cvtsi128_si32((__m128i)0x41800000u),
              0);
            *(float *)v19.m128i_i32 = *(float *)v36.m128i_i32 + 16.0;
            v91 = &dword_140404A6C[19 * *v25 + 487148759];
            v90 = 1065353216;
            v89 = 0;
            v88 = 0;
            v87 = 0;
            sub_14006D930(
              "Dead drop location: /s",
              (unsigned int)_mm_cvtsi128_si32((__m128i)0x44020000u),
              (unsigned int)_mm_cvtsi128_si32(v19),
              (unsigned int)_mm_cvtsi128_si32((__m128i)0x41800000u),
              0);
            *(float *)v19.m128i_i32 = (float)(*(float *)v36.m128i_i32 + 16.0) + 32.0;
          }
          v90 = 1065353216;
          v89 = 0;
          v88 = 0;
          v87 = 0;
          sub_14006D930(
            "Negotiate the best terms and execute the deal.",
            (unsigned int)_mm_cvtsi128_si32((__m128i)0x44020000u),
            (unsigned int)_mm_cvtsi128_si32(v19),
            (unsigned int)_mm_cvtsi128_si32((__m128i)0x41800000u),
            0);
          *(float *)v19.m128i_i32 = *(float *)v19.m128i_i32 + 16.0;
          v38 = 1268LL * (int)*(v25 - 3);
          LODWORD(v92) = *(v25 - 2);
          v91 = &dword_140404A6C[v38 + 278521297];
          v90 = 1065353216;
          v89 = 0;
          v88 = 0;
          v87 = 0;
          sub_14006D930(
            "/s value:               $/i Bonus",
            (unsigned int)_mm_cvtsi128_si32((__m128i)0x44020000u),
            (unsigned int)_mm_cvtsi128_si32(v19),
            (unsigned int)_mm_cvtsi128_si32((__m128i)0x41800000u),
            0);
          v27 = *(v25 - 15);
          *(float *)v19.m128i_i32 = *(float *)v19.m128i_i32 + 16.0;
        }
        if ( v27 == 3 || v27 == 4 )
        {
          v90 = 1065353216;
          v89 = 0;
          v88 = 0;
          v87 = 0;
          sub_14006D930(
            "Transaction:",
            (unsigned int)_mm_cvtsi128_si32((__m128i)0x44020000u),
            (unsigned int)_mm_cvtsi128_si32(v19),
            (unsigned int)_mm_cvtsi128_si32((__m128i)0x41800000u),
            0);
          *(float *)v19.m128i_i32 = *(float *)v19.m128i_i32 + 16.0;
          v91 = (unsigned int *)off_1402B2890[*(v25 - 11)];
          sub_14006D930(
            "We have received reports that /s has acquired a disk",
            (unsigned int)_mm_cvtsi128_si32((__m128i)0x44020000u),
            (unsigned int)_mm_cvtsi128_si32(v19),
            (unsigned int)_mm_cvtsi128_si32((__m128i)0x41800000u),
            0);
          v90 = 1065353216;
          *(float *)v19.m128i_i32 = *(float *)v19.m128i_i32 + 16.0;
          v89 = 0;
          v88 = 0;
          v87 = 0;
          sub_14006D930(
            "containing information that will be beneficial to one of our",
            (unsigned int)_mm_cvtsi128_si32((__m128i)0x44020000u),
            (unsigned int)_mm_cvtsi128_si32(v19),
            (unsigned int)_mm_cvtsi128_si32((__m128i)0x41800000u),
            0);
          v68 = *(v25 - 15) == 3;
          *(float *)v19.m128i_i32 = *(float *)v19.m128i_i32 + 16.0;
          v90 = 1065353216;
          v89 = 0;
          v88 = 0;
          v87 = 0;
          v41 = v19;
          v39 = (unsigned int)_mm_cvtsi128_si32((__m128i)0x41800000u);
          v40 = (unsigned int)_mm_cvtsi128_si32((__m128i)0x44020000u);
          *(float *)v41.m128i_i32 = *(float *)v19.m128i_i32 + 16.0;
          v42 = (unsigned int)_mm_cvtsi128_si32(v19);
          v86 = 0;
          if ( v68 )
          {
            sub_14006D930("subsidiaries.  Negotiate the best terms and execute the deal.", v40, v42, v39, v86);
            LODWORD(v91) = v25[1];
            v90 = 1065353216;
            v89 = 0;
            v88 = 0;
            v19 = v41;
            v87 = 0;
            sub_14006D930(
              "You have been provided with $/i.",
              (unsigned int)_mm_cvtsi128_si32((__m128i)0x44020000u),
              (unsigned int)_mm_cvtsi128_si32(v41),
              (unsigned int)_mm_cvtsi128_si32((__m128i)0x41800000u),
              0);
            *(float *)v19.m128i_i32 = *(float *)v41.m128i_i32 + 16.0;
          }
          else
          {
            sub_14006D930("subsidiaries.  Acquire the disk by any means neccessary.", v40, v42, v39, v86);
            v19 = v41;
          }
          v43 = 1268LL * (int)*(v25 - 3);
          LODWORD(v92) = *(v25 - 2);
          v91 = &dword_140404A6C[v43 + 278521297];
          v90 = 1065353216;
          v89 = 0;
          v88 = 0;
          v87 = 0;
          sub_14006D930(
            "/s value:               $/i Bonus",
            (unsigned int)_mm_cvtsi128_si32((__m128i)0x44020000u),
            (unsigned int)_mm_cvtsi128_si32(v19),
            (unsigned int)_mm_cvtsi128_si32((__m128i)0x41800000u),
            0);
          v27 = *(v25 - 15);
          *(float *)v19.m128i_i32 = *(float *)v19.m128i_i32 + 16.0;
        }
        if ( v27 == 7 )
        {
          sub_14006D930(
            "Double Disk:",
            (unsigned int)_mm_cvtsi128_si32((__m128i)0x44020000u),
            (unsigned int)_mm_cvtsi128_si32(v19),
            (unsigned int)_mm_cvtsi128_si32((__m128i)0x41800000u),
            0);
          v90 = 1065353216;
          *(float *)v19.m128i_i32 = *(float *)v19.m128i_i32 + 16.0;
          v89 = 0;
          v88 = 0;
          v87 = 0;
          sub_14006D930(
            "We have acquired a disk that contains some of the data",
            (unsigned int)_mm_cvtsi128_si32((__m128i)0x44020000u),
            (unsigned int)_mm_cvtsi128_si32(v19),
            (unsigned int)_mm_cvtsi128_si32((__m128i)0x41800000u),
            0);
          *(float *)v19.m128i_i32 = *(float *)v19.m128i_i32 + 16.0;
          v91 = (unsigned int *)off_1402B2890[*(v25 - 11)];
          sub_14006D930(
            "that /s is seeking.",
            (unsigned int)_mm_cvtsi128_si32((__m128i)0x44020000u),
            (unsigned int)_mm_cvtsi128_si32(v19),
            (unsigned int)_mm_cvtsi128_si32((__m128i)0x41800000u),
            0);
          v90 = 1065353216;
          *(float *)v19.m128i_i32 = *(float *)v19.m128i_i32 + 32.0;
          v89 = 0;
          v88 = 0;
          v87 = 0;
          sub_14006D930(
            "Negotiate the best terms and execute the deal.",
            (unsigned int)_mm_cvtsi128_si32((__m128i)0x44020000u),
            (unsigned int)_mm_cvtsi128_si32(v19),
            (unsigned int)_mm_cvtsi128_si32((__m128i)0x41800000u),
            0);
          *(float *)v19.m128i_i32 = *(float *)v19.m128i_i32 + 16.0;
          v44 = 1268LL * (int)*(v25 - 3);
          LODWORD(v92) = *(v25 - 2);
          v91 = &dword_140404A6C[v44 + 278521297];
          v90 = 1065353216;
          v89 = 0;
          v88 = 0;
          v87 = 0;
          sub_14006D930(
            "/ss value:               $/i Bonus",
            (unsigned int)_mm_cvtsi128_si32((__m128i)0x44020000u),
            (unsigned int)_mm_cvtsi128_si32(v19),
            (unsigned int)_mm_cvtsi128_si32((__m128i)0x41800000u),
            0);
          v27 = *(v25 - 15);
          *(float *)v19.m128i_i32 = *(float *)v19.m128i_i32 + 16.0;
        }
        if ( v27 == 8 || v27 == 9 )
        {
          v90 = 1065353216;
          v89 = 0;
          v88 = 0;
          v87 = 0;
          sub_14006D930(
            "Double Disk:",
            (unsigned int)_mm_cvtsi128_si32((__m128i)0x44020000u),
            (unsigned int)_mm_cvtsi128_si32(v19),
            (unsigned int)_mm_cvtsi128_si32((__m128i)0x41800000u),
            0);
          *(float *)v19.m128i_i32 = *(float *)v19.m128i_i32 + 16.0;
          v91 = (unsigned int *)off_1402B2890[*(v25 - 11)];
          v90 = 1065353216;
          v89 = 0;
          v88 = 0;
          v87 = 0;
          sub_14006D930(
            "We have received reports that /s and",
            (unsigned int)_mm_cvtsi128_si32((__m128i)0x44020000u),
            (unsigned int)_mm_cvtsi128_si32(v19),
            (unsigned int)_mm_cvtsi128_si32((__m128i)0x41800000u),
            0);
          *(float *)v19.m128i_i32 = *(float *)v19.m128i_i32 + 16.0;
          v91 = (unsigned int *)off_1402B2890[*(v25 - 10)];
          sub_14006D930(
            "/s have each acquired a disk containing",
            (unsigned int)_mm_cvtsi128_si32((__m128i)0x44020000u),
            (unsigned int)_mm_cvtsi128_si32(v19),
            (unsigned int)_mm_cvtsi128_si32((__m128i)0x41800000u),
            0);
          *(float *)v19.m128i_i32 = *(float *)v19.m128i_i32 + 16.0;
          sub_14006D930(
            "part of the data for a new technology we need.",
            (unsigned int)_mm_cvtsi128_si32((__m128i)0x44020000u),
            (unsigned int)_mm_cvtsi128_si32(v19),
            (unsigned int)_mm_cvtsi128_si32((__m128i)0x41800000u),
            0);
          *(float *)v19.m128i_i32 = *(float *)v19.m128i_i32 + 16.0;
          v89 = 0;
          v88 = 0;
          v87 = 0;
          sub_14006D930(
            "We require both disks, one alone is worthless.",
            (unsigned int)_mm_cvtsi128_si32((__m128i)0x44020000u),
            (unsigned int)_mm_cvtsi128_si32(v19),
            (unsigned int)_mm_cvtsi128_si32((__m128i)0x41800000u),
            0);
          *(float *)v19.m128i_i32 = *(float *)v19.m128i_i32 + 32.0;
          v90 = 1065353216;
          v45 = v19;
          *(float *)v45.m128i_i32 = *(float *)v19.m128i_i32 + 16.0;
          v68 = *(v25 - 15) == 8;
          v89 = 0;
          v88 = 0;
          v87 = 0;
          v86 = 0;
          v46 = (unsigned int)_mm_cvtsi128_si32((__m128i)0x41800000u);
          v47 = (unsigned int)_mm_cvtsi128_si32(v19);
          v48 = (unsigned int)_mm_cvtsi128_si32((__m128i)0x44020000u);
          if ( v68 )
          {
            sub_14006D930("Negotiate the best terms and execute the deal.", v48, v47, v46, v86);
            LODWORD(v91) = v25[1];
            v90 = 1065353216;
            v89 = 0;
            v88 = 0;
            v19 = v45;
            v87 = 0;
            sub_14006D930(
              "You have been provided with $/i.",
              (unsigned int)_mm_cvtsi128_si32((__m128i)0x44020000u),
              (unsigned int)_mm_cvtsi128_si32(v45),
              (unsigned int)_mm_cvtsi128_si32((__m128i)0x41800000u),
              0);
            *(float *)v19.m128i_i32 = *(float *)v45.m128i_i32 + 16.0;
          }
          else
          {
            sub_14006D930("Acquire the disks by any means neccessary.", v48, v47, v46, v86);
            v19 = v45;
          }
          v49 = 1268LL * (int)*(v25 - 3);
          LODWORD(v92) = *(v25 - 2);
          v91 = &dword_140404A6C[v49 + 278521297];
          v90 = 1065353216;
          v89 = 0;
          v88 = 0;
          v87 = 0;
          sub_14006D930(
            "/ss value:               $/i Bonus",
            (unsigned int)_mm_cvtsi128_si32((__m128i)0x44020000u),
            (unsigned int)_mm_cvtsi128_si32(v19),
            (unsigned int)_mm_cvtsi128_si32((__m128i)0x41800000u),
            0);
          v27 = *(v25 - 15);
          *(float *)v19.m128i_i32 = *(float *)v19.m128i_i32 + 16.0;
        }
        if ( (unsigned int)(v27 - 5) <= 1 )
        {
          v90 = 1065353216;
          v89 = 0;
          v88 = 0;
          v87 = 0;
          sub_14006D930(
            "Three-way Deal:",
            (unsigned int)_mm_cvtsi128_si32((__m128i)0x44020000u),
            (unsigned int)_mm_cvtsi128_si32(v19),
            (unsigned int)_mm_cvtsi128_si32((__m128i)0x41800000u),
            0);
          *(float *)v19.m128i_i32 = *(float *)v19.m128i_i32 + 16.0;
          v91 = (unsigned int *)off_1402B2890[*(v25 - 11)];
          sub_14006D930(
            "We have received reports that /s has acquired a disk",
            (unsigned int)_mm_cvtsi128_si32((__m128i)0x44020000u),
            (unsigned int)_mm_cvtsi128_si32(v19),
            (unsigned int)_mm_cvtsi128_si32((__m128i)0x41800000u),
            0);
          v90 = 1065353216;
          *(float *)v19.m128i_i32 = *(float *)v19.m128i_i32 + 16.0;
          v89 = 0;
          v88 = 0;
          v87 = 0;
          sub_14006D930(
            "containing information that will be beneficial to one of our",
            (unsigned int)_mm_cvtsi128_si32((__m128i)0x44020000u),
            (unsigned int)_mm_cvtsi128_si32(v19),
            (unsigned int)_mm_cvtsi128_si32((__m128i)0x41800000u),
            0);
          *(float *)v19.m128i_i32 = *(float *)v19.m128i_i32 + 16.0;
          v51 = v19;
          v50 = v19;
          *(float *)v51.m128i_i32 = *(float *)v19.m128i_i32 + 16.0;
          if ( *(v25 - 15) == 5 )
          {
            v90 = 1065353216;
            v89 = 0;
            v88 = 0;
            v87 = 0;
            sub_14006D930(
              "subsidiaries.  We have a disk to trade with another",
              (unsigned int)_mm_cvtsi128_si32((__m128i)0x44020000u),
              (unsigned int)_mm_cvtsi128_si32(v19),
              (unsigned int)_mm_cvtsi128_si32((__m128i)0x41800000u),
              0);
            v19 = v51;
            v52 = "corporation.  Execute the deal.";
            *(float *)v19.m128i_i32 = *(float *)v51.m128i_i32 + 16.0;
            v50 = v51;
          }
          else
          {
            v19 = v51;
            v52 = "subsidiaries.  Acquire the disk by any means neccessary.";
          }
          v90 = 1065353216;
          v89 = 0;
          v88 = 0;
          v87 = 0;
          sub_14006D930(
            v52,
            (unsigned int)_mm_cvtsi128_si32((__m128i)0x44020000u),
            (unsigned int)_mm_cvtsi128_si32(v50),
            (unsigned int)_mm_cvtsi128_si32((__m128i)0x41800000u),
            0);
          v53 = 1268LL * (int)*(v25 - 3);
          LODWORD(v92) = *(v25 - 2);
          v91 = &dword_140404A6C[v53 + 278521297];
          v90 = 1065353216;
          v89 = 0;
          v88 = 0;
          v87 = 0;
          sub_14006D930(
            "/s value:               $/i Bonus",
            (unsigned int)_mm_cvtsi128_si32((__m128i)0x44020000u),
            (unsigned int)_mm_cvtsi128_si32(v19),
            (unsigned int)_mm_cvtsi128_si32((__m128i)0x41800000u),
            0);
          *(float *)v19.m128i_i32 = *(float *)v19.m128i_i32 + 16.0;
        }
        ++v24;
      }
      v25 += 279;
      --v26;
    }
    while ( v26 );
    v3 = v95;
    if ( !v24 )
    {
      v54 = "Lunch break";
      v90 = 1065353216;
      v89 = 0;
      v88 = 0;
      v87 = 0;
      v55 = (unsigned int)_mm_cvtsi128_si32((__m128i)0x41800000u);
      v56 = (unsigned int)_mm_cvtsi128_si32(v19);
      v57 = (unsigned int)_mm_cvtsi128_si32((__m128i)0x44020000u);
      v86 = 0;
      if ( dword_140404A6C[179992853] - 2592000 > 0x34BBF )
        v54 = "No current missions";
      sub_14006D930(v54, v57, v56, v55, v86);
    }
  }
LABEL_105:
  v58 = (__m128i)0x447F0000u;
  v59 = (__m128i)0x40800000u;
  if ( dword_140404A6C[283831312] == 4 )
  {
    v60 = (signed int)dword_140404A6C[179992853] / 3600 / 60 % -12;
    if ( !v60 )
      v60 = 12;
    v61 = (signed int)dword_140404A6C[179992853] / 3600 % 60;
    v93 = v61 % 10;
    LODWORD(v92) = v61 / 10 % 6;
    LODWORD(v91) = v60;
    v90 = 1065353216;
    v89 = 1065353216;
    v88 = 1065353216;
    v87 = 1065353216;
    sub_14006D930(
      "/i:/i/i",
      (unsigned int)_mm_cvtsi128_si32((__m128i)0x447F0000u),
      (unsigned int)_mm_cvtsi128_si32((__m128i)0x40800000u),
      (unsigned int)_mm_cvtsi128_si32((__m128i)0x41C00000u),
      2);
    LODWORD(v91) = dword_140404A6C[3597 * dword_140404A6C[284024501] + 71856272];
    v90 = 1065353216;
    v89 = 1065353216;
    v88 = 1065353216;
    v87 = 1065353216;
    sub_14006D930(
      "$/I",
      (unsigned int)_mm_cvtsi128_si32((__m128i)0x40800000u),
      (unsigned int)_mm_cvtsi128_si32((__m128i)0x40800000u),
      (unsigned int)_mm_cvtsi128_si32((__m128i)0x41C00000u),
      0);
    if ( (int)dword_140404A6C[3597 * dword_140404A6C[284024501] + 71856276] > 0 )
    {
      LODWORD(v91) = dword_140404A6C[3597 * dword_140404A6C[284024501] + 71856276];
      v90 = 1065353216;
      v89 = 0;
      v88 = 0;
      v87 = 1065353216;
      sub_14006D930(
        "Wanted Level:/i",
        (unsigned int)_mm_cvtsi128_si32((__m128i)0x44400000u),
        (unsigned int)_mm_cvtsi128_si32((__m128i)0x40800000u),
        (unsigned int)_mm_cvtsi128_si32((__m128i)0x41C00000u),
        0);
    }
    v58 = (__m128i)0x44000000u;
    v59 = (__m128i)0x43A80000u;
    v62 = 3597LL * (int)dword_140404A6C[284024501];
    if ( dword_140404A6C[v62 + 71856342] == 1 )
    {
      v63 = dword_140404A6C[v62 + 71856291];
      if ( v63 > 0 )
      {
        LODWORD(v91) = v63 / 60;
        v90 = 1065353216;
        v89 = 1065353216;
        v88 = 1065353216;
        v87 = 1065353216;
        sub_14006D930(
          "Respawn in /i",
          (unsigned int)_mm_cvtsi128_si32((__m128i)0x44000000u),
          (unsigned int)_mm_cvtsi128_si32((__m128i)0x43A80000u),
          (unsigned int)_mm_cvtsi128_si32((__m128i)0x41C00000u),
          1);
      }
    }
  }
  if ( dword_140404A6C[283831312] == 2 )
  {
    if ( dword_140404A6C[283831448] == 1 )
    {
      v93 = (signed int)dword_140404A6C[283831450] / 60 % 10;
      LODWORD(v92) = (signed int)dword_140404A6C[283831450] / 60 / 10 % 6;
      LODWORD(v91) = (signed int)dword_140404A6C[283831450] / 60 / 60;
      v90 = 1065353216;
      v89 = 1065353216;
      v88 = 1065353216;
      v87 = 1065353216;
      sub_14006D930(
        "Start: /i:/i/i",
        (unsigned int)_mm_cvtsi128_si32(v58),
        (unsigned int)_mm_cvtsi128_si32(v59),
        (unsigned int)_mm_cvtsi128_si32((__m128i)0x41C00000u),
        2);
    }
    else
    {
      if ( dword_140404A6C[283831448] != 2 )
        goto LABEL_133;
      if ( (int)dword_140404A6C[284022086] <= 0 )
      {
        v90 = 1065353216;
        v89 = 1065353216;
        v88 = 1065353216;
        v87 = 1065353216;
        sub_14006D930(
          "Get Ready",
          (unsigned int)_mm_cvtsi128_si32(v58),
          (unsigned int)_mm_cvtsi128_si32(v59),
          (unsigned int)_mm_cvtsi128_si32((__m128i)0x41C00000u),
          2);
      }
      else
      {
        v94 = (signed int)dword_140404A6C[284022086] / 6 % 10;
        v93 = (signed int)dword_140404A6C[284022086] / 60 % 10;
        LODWORD(v92) = (signed int)dword_140404A6C[284022086] / 60 / 10 % 6;
        LODWORD(v91) = (signed int)dword_140404A6C[284022086] / 60 / 60;
        v90 = 1065353216;
        v89 = 1065353216;
        v88 = 1065353216;
        v87 = 1065353216;
        sub_14006D930(
          "/i:/i/i./i",
          (unsigned int)_mm_cvtsi128_si32(v58),
          (unsigned int)_mm_cvtsi128_si32(v59),
          (unsigned int)_mm_cvtsi128_si32((__m128i)0x41C00000u),
          2);
      }
    }
  }
  if ( ((dword_140404A6C[283831312] - 3) & 0xFFFFFFF9) != 0 || dword_140404A6C[283831312] == 9 )
    goto LABEL_133;
  dword_140404A6C[438291413] = 1;
  switch ( dword_140404A6C[283831448] )
  {
    case 0u:
      v93 = (signed int)dword_140404A6C[283831450] / 60 % 10;
      v64 = "Start: /i:/i/i";
      LODWORD(v92) = (signed int)dword_140404A6C[283831450] / 60 / 10 % 6;
      v65 = (unsigned __int64)(2290649225LL * ((signed int)dword_140404A6C[283831450] / 60)) >> 32;
LABEL_131:
      LODWORD(v91) = ((unsigned int)v65 >> 31) + (v65 >> 5);
      v90 = 1065353216;
      v89 = 1065353216;
      v88 = 1065353216;
      v87 = 1065353216;
      sub_14006D930(
        v64,
        (unsigned int)_mm_cvtsi128_si32(v58),
        (unsigned int)_mm_cvtsi128_si32(v59),
        (unsigned int)_mm_cvtsi128_si32((__m128i)0x41C00000u),
        2);
      break;
    case 1u:
      v66 = (signed int)dword_140404A6C[283831450] / 60;
      v67 = (signed int)dword_140404A6C[283831450] / 60 / 10;
      v93 = (signed int)dword_140404A6C[283831450] / 60 % 10;
      v64 = "Start: /i:/i/i";
LABEL_130:
      LODWORD(v92) = v67 % 6;
      v65 = (unsigned __int64)(2290649225LL * v66) >> 32;
      goto LABEL_131;
    case 2u:
      v66 = (signed int)dword_140404A6C[283831450] / 60;
      v67 = (signed int)dword_140404A6C[283831450] / 60 / 10;
      v93 = (signed int)dword_140404A6C[283831450] / 60 % 10;
      v64 = "/i:/i/i";
      goto LABEL_130;
    case 3u:
      v66 = (signed int)dword_140404A6C[283831450] / 60;
      v67 = (signed int)dword_140404A6C[283831450] / 60 / 10;
      v93 = (signed int)dword_140404A6C[283831450] / 60 % 10;
      v64 = "Restart: /i:/i/i";
      goto LABEL_130;
  }
  dword_140404A6C[438291413] = 0;
LABEL_133:
  if ( dword_140404A6C[283831448] == 1 )
    v68 = *(unsigned int *)((char *)&dword_140404A6C[71856342] + v3) == 2;
  else
    v68 = dword_140404A6C[283831448] == 3;
  if ( v68
    || ((dword_140404A6C[283831312] - 3) & 0xFFFFFFFB) == 0
    && !dword_140404A6C[280648133]
    && HIBYTE(dword_140404A6C[284024767]) )
  {
    if ( dword_140404A6C[283831312] == 5 )
    {
      sub_140084EB0();
    }
    else if ( dword_140404A6C[283831312] == 7 )
    {
      sub_14008B050();
    }
    else
    {
      sub_14008A110();
    }
  }
  v69 = (__m128i)0x43C80000u;
  dword_140404A6C[438291413] = 2;
  for ( j = (unsigned __int8)(LOBYTE(dword_140404A6C[346706173]) + 1);
        j != LOBYTE(dword_140404A6C[346706173]);
        j = (unsigned __int8)(j + 1) )
  {
    v71 = 38LL * j;
    v72 = dword_140404A6C[v71 + 346696445];
    if ( (v72 & 0xFFFFFFF9) == 0 && v72 != 2 )
    {
      v73 = dword_140404A6C[v71 + 346696447];
      if ( v73 > 0 && (int)dword_140404A6C[v71 + 346696448] > 0 )
      {
        v74 = 1065353216;
        v75 = (float)v73 * 0.0049999999;
        if ( v72 == 6 )
        {
          if ( dword_140404A6C[284024501] == dword_140404A6C[v71 + 346696449] )
          {
            v76 = -1;
            goto LABEL_167;
          }
        }
        else if ( dword_140404A6C[283831448] == 3
               || dword_140404A6C[284024501] == -1
               || (v78 = (int)dword_140404A6C[3597 * dword_140404A6C[284024501] + 71856292], (_DWORD)v78 == -1)
               || (int)dword_140404A6C[7166 * v78 + 280651318] <= 0
               || dword_140404A6C[v71 + 346696449] == -1 )
        {
          v76 = -1;
          if ( v72 == 1 )
          {
            v79 = (int)dword_140404A6C[v71 + 346696449];
            if ( (_DWORD)v79 != -1 )
              v76 = dword_140404A6C[7166 * v79 + 280651305];
LABEL_167:
            v77 = v76;
            if ( v76 != -1 )
            {
LABEL_168:
              if ( v72 != 6 )
              {
                sub_140158AB0(
                  &dword_140404A6C[18601357],
                  "%s: %s",
                  (const char *)&dword_140404A6C[3597 * v77 + 71856254],
                  (const char *)&dword_140404A6C[v71 + 346696451]);
LABEL_172:
                if ( dword_140404A6C[38 * j + 346696445] == 6 )
                  v74 = 0;
                v90 = LODWORD(v75);
                v89 = v74;
                v88 = v74;
                v87 = 1065353216;
                sub_14006D930(
                  &dword_140404A6C[18601357],
                  (unsigned int)_mm_cvtsi128_si32((__m128i)0x40800000u),
                  (unsigned int)_mm_cvtsi128_si32(v69),
                  (unsigned int)_mm_cvtsi128_si32((__m128i)0x41A00000u),
                  96);
                *(float *)v69.m128i_i32 = *(float *)v69.m128i_i32 + 20.0;
                continue;
              }
            }
LABEL_170:
            v81 = &dword_140404A6C[v71 + 346696451];
            v82 = (char *)&dword_140404A6C[18601357] - (char *)&dword_140404A6C[v71 + 346696451];
            do
            {
              v83 = *(_BYTE *)v81;
              *((_BYTE *)v81 + v82) = *(_BYTE *)v81;
              v81 = (unsigned int *)((char *)v81 + 1);
            }
            while ( v83 );
            goto LABEL_172;
          }
          if ( v72 )
            goto LABEL_167;
          v80 = dword_140404A6C[v71 + 346696449];
          if ( v80 == -1 )
            goto LABEL_170;
          v77 = v80;
          if ( !dword_140404A6C[v80 + 284023074] )
            goto LABEL_168;
        }
      }
    }
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&v85 ^ v97);
}

