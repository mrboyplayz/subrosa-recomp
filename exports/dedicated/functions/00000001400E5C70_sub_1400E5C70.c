/* Address: 0x1400e5c70 | Name: sub_1400E5C70 | Size: 4930 bytes */
__int64 __fastcall sub_1400E5C70(int a1)
{
  __int64 v1; // rsi
  int *v2; // r15
  __int64 result; // rax
  int v4; // eax
  _DWORD *v5; // r12
  int v6; // r13d
  _DWORD *v7; // rbx
  int *v8; // r15
  int v9; // eax
  int v10; // eax
  int v11; // edi
  _BYTE *v12; // rbx
  int v13; // r14d
  int v14; // eax
  int v15; // ebx
  int v16; // ebp
  int v17; // edi
  __int64 v18; // rax
  __int64 v19; // xmm0_8
  __int64 v20; // rax
  __int64 v21; // xmm0_8
  int v22; // eax
  int v23; // eax
  int v24; // eax
  _DWORD *v25; // r15
  int v26; // eax
  int v27; // edx
  __int64 v28; // r10
  int v29; // r8d
  char v30; // r9
  int v31; // eax
  unsigned int *v32; // r15
  int v33; // r8d
  int v34; // r10d
  char v35; // r9
  int v36; // eax
  _DWORD *v37; // r12
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // xmm0_8
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  int v47; // eax
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // rax
  size_t v56; // r14
  __int64 v57; // rax
  __int64 v58; // xmm0_8
  __int64 v59; // rax
  __int64 v60; // rax
  __int64 v61; // rax
  __int64 v62; // rax
  __int64 v63; // rax
  __int64 v64; // rax
  __int64 v65; // rax
  __int64 v66; // rax
  int v67; // r9d
  char v68; // r8
  int v69; // eax
  __int64 v70; // rax
  __int64 v71; // xmm0_8
  __int64 v72; // rax
  __int64 v73; // xmm0_8
  __int64 v74; // rax
  __int64 v75; // rax
  int v76; // ecx
  int v77; // [rsp+70h] [rbp+8h] BYREF
  _DWORD *v78; // [rsp+78h] [rbp+10h]
  char *v79; // [rsp+80h] [rbp+18h]
  _DWORD *v80; // [rsp+88h] [rbp+20h]

  v1 = (__int64)a1 << 7;
  v2 = (int *)((char *)&unk_195999560 + v1);
  v79 = (char *)&unk_195999560 + v1;
  result = sub_1400AFB00((char *)&unk_195999560 + v1, 6);
  if ( *(_DWORD *)((char *)&unk_195999560 + v1) != 23 )
  {
    sub_1400AFB00((char *)&unk_195999564 + v1, 28);
    v4 = *v2;
    v5 = (int *)((char *)&dword_195999580 + v1);
    v6 = 10;
    if ( !*v2 )
    {
      sub_1400AFB00((int *)((char *)&dword_195999580 + v1), 4);
      sub_1400AFB00((int *)((char *)dword_195999584 + v1), 10);
      sub_140049520((char *)&qword_195999568 + v1, 4, 3);
      sub_140049520((char *)&qword_195999574 + v1, 4, 3);
      v4 = *v2;
    }
    if ( v4 == 1 )
    {
      sub_1400AFB00((int *)((char *)&dword_195999580 + v1), 4);
      v7 = (int *)((char *)dword_195999584 + v1);
      v78 = (int *)((char *)dword_195999584 + v1);
      sub_1400AFB00((int *)((char *)dword_195999584 + v1), 6);
      sub_140049520((char *)&qword_195999568 + v1, 4, 3);
      sub_140049520((char *)&qword_195999574 + v1, 4, 3);
      v4 = *v2;
    }
    else
    {
      v7 = (int *)((char *)dword_195999584 + v1);
      v78 = (int *)((char *)dword_195999584 + v1);
    }
    if ( v4 == 2 )
    {
      v8 = (int *)((char *)&dword_195999580 + v1);
      sub_1400AFB00((int *)((char *)&dword_195999580 + v1), 6);
      sub_1400AFB00(v7, 4);
      sub_1400AFB00(&v77, 10);
      v9 = v77;
      if ( v77 == 1023 )
        v9 = -1;
      *(int *)((char *)dword_195999588 + v1) = v9;
      sub_1400AFB00((char *)&unk_19599958C + v1, 4);
      v10 = *v8;
      v11 = 0;
      if ( *v8 <= 0 )
      {
        LOBYTE(v13) = v77;
      }
      else
      {
        v12 = &byte_1959995A0[v1];
        do
        {
          sub_1400AFB00(&v77, 7);
          LOBYTE(v13) = v77;
          ++v11;
          *v12++ = v77;
          v10 = *v8;
        }
        while ( v11 < *v8 );
        v7 = v78;
      }
      v2 = (int *)v79;
      byte_1959995A0[v1 + v10] = 0;
      v4 = *v2;
    }
    else
    {
      LOBYTE(v13) = v77;
    }
    if ( v4 == 3 )
    {
      sub_1400AFB00((int *)((char *)&dword_195999580 + v1), 10);
      sub_1400AFB00(v7, 8);
      sub_1400AFB00(&v77, 4);
      v14 = v77;
      if ( v77 == 15 )
        v14 = -1;
      *(int *)((char *)dword_195999588 + v1) = v14;
    }
    if ( *v2 == 4 )
    {
      sub_1400AFB00((int *)((char *)&dword_195999580 + v1), 10);
      sub_1400AFB00(v7, 4);
      sub_1400AFB00((int *)((char *)dword_195999588 + v1), 10);
      v15 = qword_197BD727C;
      v16 = dword_197BD7278;
      v17 = HIDWORD(qword_197BD727C);
      if ( (int)qword_197BD727C < 0x10000 )
      {
        if ( (int)qword_197BD727C + 12 <= dword_197BD7278 )
        {
          if ( SHIDWORD(qword_197BD727C) > 0 )
          {
            v15 = qword_197BD727C + 1;
            v17 = 0;
            qword_197BD727C = (unsigned int)(qword_197BD727C + 1);
          }
          v18 = v15;
          v15 += 12;
          v19 = *(_QWORD *)(&Src + v18);
          LODWORD(v18) = *(_DWORD *)((char *)&unk_197BD728C + v18);
          *(__int64 *)((char *)&qword_195999568 + v1) = v19;
          *(int *)((char *)&dword_195999570 + v1) = v18;
          LODWORD(qword_197BD727C) = v15;
        }
        if ( v15 < 0x10000 && v15 + 12 <= v16 )
        {
          if ( v17 > 0 )
          {
            ++v15;
            v17 = 0;
            qword_197BD727C = (unsigned int)v15;
          }
          v20 = v15;
          v15 += 12;
          v21 = *(_QWORD *)(&Src + v20);
          LODWORD(v20) = *(_DWORD *)((char *)&unk_197BD728C + v20);
          *(__int64 *)((char *)&qword_195999574 + v1) = v21;
          *(int *)((char *)&dword_19599957C + v1) = v20;
          LODWORD(qword_197BD727C) = v15;
        }
      }
    }
    else
    {
      v17 = HIDWORD(qword_197BD727C);
      v15 = qword_197BD727C;
      v16 = dword_197BD7278;
    }
    v22 = *v2;
    if ( *v2 == 5 )
    {
      sub_1400AFB00(v5, 20);
      sub_1400AFB00(&v77, 10);
      v23 = v77;
      if ( v77 == 1023 )
        v23 = -1;
      *(int *)((char *)dword_195999584 + v1) = v23;
      sub_1400AFB00(&v77, 10);
      v24 = v77;
      if ( v77 == 1023 )
        v24 = -1;
      v25 = (_DWORD *)((char *)&unk_19599958C + v1);
      *(int *)((char *)dword_195999588 + v1) = v24;
      sub_1400AFB00((char *)&unk_19599958C + v1, 4);
      v22 = *(_DWORD *)((char *)&unk_195999560 + v1);
      v15 = qword_197BD727C;
      v17 = HIDWORD(qword_197BD727C);
      v16 = dword_197BD7278;
    }
    else
    {
      v25 = (_DWORD *)((char *)&unk_19599958C + v1);
    }
    if ( v22 == 6 )
    {
      sub_1400AFB00(v5, 10);
      sub_1400AFB00(v78, 3);
      sub_1400AFB00((int *)((char *)dword_195999588 + v1), 16);
      sub_1400AFB00(v25, 2);
      v22 = *(_DWORD *)((char *)&unk_195999560 + v1);
      v15 = qword_197BD727C;
      v17 = HIDWORD(qword_197BD727C);
      v16 = dword_197BD7278;
    }
    v80 = (int *)((char *)&dword_195999580 + v1);
    if ( v22 == 7 )
    {
      sub_1400AFB00(v5, 16);
      sub_1400AFB00(&v77, 10);
      v26 = v77;
      v27 = qword_197BD727C;
      if ( v77 == 1023 )
        v26 = -1;
      *(int *)((char *)dword_195999584 + v1) = v26;
      if ( v27 < 0x10000 && v27 + 4 <= dword_197BD7278 )
      {
        if ( SHIDWORD(qword_197BD727C) > 0 )
        {
          ++v27;
          HIDWORD(qword_197BD727C) = 0;
          LODWORD(qword_197BD727C) = v27;
        }
        *(int *)((char *)dword_195999588 + v1) = *(_DWORD *)(&Src + v27);
        LODWORD(qword_197BD727C) = v27 + 4;
      }
      sub_1400AFB00(v25, 24);
      v16 = dword_197BD7278;
      v17 = HIDWORD(qword_197BD727C);
      v28 = 0;
      v15 = qword_197BD727C;
      do
      {
        v29 = 7;
        if ( v15 < 0x10000 && v15 <= v16 )
        {
          v13 = 0;
          v30 = 0;
          while ( 1 )
          {
            v31 = 8 - v17;
            v13 |= (~(-1 << v29) & ((unsigned __int8)*(&Src + v15) >> SBYTE4(qword_197BD727C))) << v30;
            if ( v29 < (unsigned int)(8 - v17) )
              break;
            if ( v29 == v31 )
            {
              LODWORD(qword_197BD727C) = ++v15;
              v17 = 0;
              goto LABEL_60;
            }
            ++v15;
            v17 = 0;
            v29 -= v31;
            v30 += v31;
            qword_197BD727C = (unsigned int)v15;
            if ( v29 <= 0 )
              goto LABEL_61;
          }
          v17 += v29;
LABEL_60:
          HIDWORD(qword_197BD727C) = v17;
        }
LABEL_61:
        byte_1959995A0[v1 + v28++] = v13;
      }
      while ( v28 < 31 );
      v32 = (unsigned int *)v79;
      byte_1959995BE[v1 + 1] = 0;
      v22 = *v32;
    }
    else
    {
      v32 = (unsigned int *)v79;
    }
    if ( v22 == 17 )
    {
      sub_1400AFB00((_DWORD *)(0x140000000LL + v1 + 1436128640), 10);
      sub_1400AFB00(v78, 1);
      v15 = qword_197BD727C;
      v33 = 8;
      v16 = dword_197BD7278;
      if ( (int)qword_197BD727C >= 0x10000 || (int)qword_197BD727C + 1 > dword_197BD7278 )
      {
        v34 = v77;
        v17 = HIDWORD(qword_197BD727C);
      }
      else
      {
        v17 = HIDWORD(qword_197BD727C);
        v34 = 0;
        v35 = 0;
        while ( 1 )
        {
          v36 = 8 - v17;
          v34 |= (~(-1 << v33) & ((unsigned __int8)*(&Src + v15) >> SBYTE4(qword_197BD727C))) << v35;
          if ( v33 < (unsigned int)(8 - v17) )
            break;
          if ( v33 == v36 )
          {
            ++v15;
            v17 = 0;
            qword_197BD727C = (unsigned int)v15;
            goto LABEL_75;
          }
          ++v15;
          v17 = 0;
          v33 -= v36;
          v35 += v36;
          qword_197BD727C = (unsigned int)v15;
          if ( v33 <= 0 )
            goto LABEL_75;
        }
        v17 += v33;
        HIDWORD(qword_197BD727C) = v17;
      }
LABEL_75:
      if ( v34 == 255 )
        v34 = -1;
      *(int *)((char *)dword_195999588 + v1) = v34;
    }
    v37 = v80;
    if ( *v32 == 8 )
    {
      sub_1400AFB00(v80, 8);
      v15 = qword_197BD727C;
      v16 = dword_197BD7278;
      v17 = HIDWORD(qword_197BD727C);
      if ( (int)qword_197BD727C < 0x10000 )
      {
        if ( (int)qword_197BD727C + 4 <= dword_197BD7278 )
        {
          if ( SHIDWORD(qword_197BD727C) > 0 )
          {
            v15 = qword_197BD727C + 1;
            v17 = 0;
            qword_197BD727C = (unsigned int)(qword_197BD727C + 1);
          }
          v38 = v15;
          v15 += 4;
          *(int *)((char *)dword_195999584 + v1) = *(_DWORD *)(&Src + v38);
          LODWORD(qword_197BD727C) = v15;
        }
        if ( v15 < 0x10000 )
        {
          if ( v15 + 4 <= v16 )
          {
            if ( v17 > 0 )
            {
              ++v15;
              v17 = 0;
              qword_197BD727C = (unsigned int)v15;
            }
            v39 = v15;
            v15 += 4;
            *(int *)((char *)dword_195999588 + v1) = *(_DWORD *)(&Src + v39);
            LODWORD(qword_197BD727C) = v15;
          }
          if ( v15 < 0x10000 && v15 + 4 <= v16 )
          {
            if ( v17 > 0 )
            {
              ++v15;
              v17 = 0;
              qword_197BD727C = (unsigned int)v15;
            }
            v40 = v15;
            v15 += 4;
            *(_DWORD *)((char *)&unk_19599958C + v1) = *(_DWORD *)(&Src + v40);
            LODWORD(qword_197BD727C) = v15;
          }
        }
      }
    }
    if ( *v32 == 9 )
    {
      sub_1400AFB00(v37, 8);
      v15 = qword_197BD727C;
      v16 = dword_197BD7278;
      v17 = HIDWORD(qword_197BD727C);
      if ( (int)qword_197BD727C < 0x10000 )
      {
        if ( (int)qword_197BD727C + 12 <= dword_197BD7278 )
        {
          if ( SHIDWORD(qword_197BD727C) > 0 )
          {
            v15 = qword_197BD727C + 1;
            v17 = 0;
            qword_197BD727C = (unsigned int)(qword_197BD727C + 1);
          }
          v41 = v15;
          v15 += 12;
          v42 = *(_QWORD *)(&Src + v41);
          LODWORD(v41) = *(_DWORD *)((char *)&unk_197BD728C + v41);
          *(__int64 *)((char *)&qword_195999568 + v1) = v42;
          *(int *)((char *)&dword_195999570 + v1) = v41;
          LODWORD(qword_197BD727C) = v15;
        }
        if ( v15 < 0x10000 )
        {
          if ( v15 + 4 <= v16 )
          {
            if ( v17 > 0 )
            {
              ++v15;
              v17 = 0;
              qword_197BD727C = (unsigned int)v15;
            }
            v43 = v15;
            v15 += 4;
            *(int *)((char *)dword_195999590 + v1) = *(_DWORD *)(&Src + v43);
            LODWORD(qword_197BD727C) = v15;
          }
          if ( v15 < 0x10000 && v15 + 4 <= v16 )
          {
            if ( v17 > 0 )
            {
              ++v15;
              v17 = 0;
              qword_197BD727C = (unsigned int)v15;
            }
            v44 = v15;
            v15 += 4;
            *(int *)((char *)&dword_195999594 + v1) = *(_DWORD *)(&Src + v44);
            LODWORD(qword_197BD727C) = v15;
          }
        }
      }
    }
    if ( *v32 == 19 )
    {
      sub_1400AFB00(v37, 8);
      sub_1400AFB00((_DWORD *)(0x140000000LL + v1 + 1436128644), 16);
      v15 = qword_197BD727C;
      v16 = dword_197BD7278;
      v17 = HIDWORD(qword_197BD727C);
      if ( (int)qword_197BD727C < 0x10000 )
      {
        if ( (int)qword_197BD727C + 4 <= dword_197BD7278 )
        {
          if ( SHIDWORD(qword_197BD727C) > 0 )
          {
            v15 = qword_197BD727C + 1;
            v17 = 0;
            qword_197BD727C = (unsigned int)(qword_197BD727C + 1);
          }
          v45 = v15;
          v15 += 4;
          *(int *)((char *)dword_195999590 + v1) = *(_DWORD *)(&Src + v45);
          LODWORD(qword_197BD727C) = v15;
        }
        if ( v15 < 0x10000 && v15 + 4 <= v16 )
        {
          if ( v17 > 0 )
          {
            ++v15;
            v17 = 0;
            qword_197BD727C = (unsigned int)v15;
          }
          v46 = v15;
          v15 += 4;
          *(int *)((char *)&dword_195999594 + v1) = *(_DWORD *)(&Src + v46);
          LODWORD(qword_197BD727C) = v15;
        }
      }
    }
    v47 = *v32;
    if ( *v32 == 10 )
    {
      sub_1400AFB00(v37, 8);
      sub_1400AFB00((_DWORD *)(0x140000000LL + v1 + 1436128644), 1);
      v47 = *v32;
      v17 = HIDWORD(qword_197BD727C);
      v15 = qword_197BD727C;
      v16 = dword_197BD7278;
    }
    else
    {
      v37 = (_DWORD *)(0x140000000LL + v1 + 1436128640);
    }
    if ( v47 == 11 && v15 < 0x10000 )
    {
      if ( v15 + 4 <= v16 )
      {
        if ( v17 > 0 )
        {
          ++v15;
          v17 = 0;
          qword_197BD727C = (unsigned int)v15;
        }
        v48 = v15;
        v15 += 4;
        *(int *)((char *)&dword_195999580 + v1) = *(_DWORD *)(&Src + v48);
        LODWORD(qword_197BD727C) = v15;
      }
      if ( v15 < 0x10000 )
      {
        if ( v15 + 4 <= v16 )
        {
          if ( v17 > 0 )
          {
            ++v15;
            v17 = 0;
            qword_197BD727C = (unsigned int)v15;
          }
          v49 = v15;
          v15 += 4;
          *(int *)((char *)dword_195999584 + v1) = *(_DWORD *)(&Src + v49);
          LODWORD(qword_197BD727C) = v15;
        }
        if ( v15 < 0x10000 )
        {
          if ( v15 + 4 <= v16 )
          {
            if ( v17 > 0 )
            {
              ++v15;
              v17 = 0;
              qword_197BD727C = (unsigned int)v15;
            }
            v50 = v15;
            v15 += 4;
            *(int *)((char *)dword_195999588 + v1) = *(_DWORD *)(&Src + v50);
            LODWORD(qword_197BD727C) = v15;
          }
          if ( v15 < 0x10000 && v15 + 4 <= v16 )
          {
            if ( v17 > 0 )
            {
              ++v15;
              v17 = 0;
              qword_197BD727C = (unsigned int)v15;
            }
            v51 = v15;
            v15 += 4;
            *(_DWORD *)((char *)&unk_19599958C + v1) = *(_DWORD *)(&Src + v51);
            LODWORD(qword_197BD727C) = v15;
          }
        }
      }
    }
    if ( *v32 == 12 && v15 < 0x10000 )
    {
      if ( v15 + 4 <= v16 )
      {
        if ( v17 > 0 )
        {
          ++v15;
          v17 = 0;
          qword_197BD727C = (unsigned int)v15;
        }
        v52 = v15;
        v15 += 4;
        *(int *)((char *)&dword_195999580 + v1) = *(_DWORD *)(&Src + v52);
        LODWORD(qword_197BD727C) = v15;
      }
      if ( v15 < 0x10000 )
      {
        if ( v15 + 4 <= v16 )
        {
          if ( v17 > 0 )
          {
            ++v15;
            v17 = 0;
            qword_197BD727C = (unsigned int)v15;
          }
          v53 = v15;
          v15 += 4;
          *(int *)((char *)dword_195999584 + v1) = *(_DWORD *)(&Src + v53);
          LODWORD(qword_197BD727C) = v15;
        }
        if ( v15 < 0x10000 )
        {
          if ( v15 + 4 <= v16 )
          {
            if ( v17 > 0 )
            {
              ++v15;
              v17 = 0;
              qword_197BD727C = (unsigned int)v15;
            }
            v54 = v15;
            v15 += 4;
            *(int *)((char *)dword_195999588 + v1) = *(_DWORD *)(&Src + v54);
            LODWORD(qword_197BD727C) = v15;
          }
          if ( v15 < 0x10000 && v15 + 4 <= v16 )
          {
            if ( v17 > 0 )
            {
              ++v15;
              v17 = 0;
              qword_197BD727C = (unsigned int)v15;
            }
            v55 = v15;
            v15 += 4;
            *(_DWORD *)((char *)&unk_19599958C + v1) = *(_DWORD *)(&Src + v55);
            LODWORD(qword_197BD727C) = v15;
          }
        }
      }
    }
    if ( *v32 == 22 )
    {
      sub_1400AFB00((_DWORD *)(0x140000000LL + v1 + 1436128640), 16);
      sub_1400AFB00((_DWORD *)(0x140000000LL + v1 + 1436128644), 6);
      sub_1400AFB00((_DWORD *)(0x140000000LL + v1 + 1436128648), 7);
      v15 = qword_197BD727C;
      v16 = dword_197BD7278;
      if ( (int)qword_197BD727C >= 0x10000 )
      {
        v17 = HIDWORD(qword_197BD727C);
      }
      else
      {
        v56 = *(int *)(0x140000000LL + v1 + 1436128648);
        v17 = HIDWORD(qword_197BD727C);
        if ( (int)qword_197BD727C + (int)v56 <= dword_197BD7278 )
        {
          if ( SHIDWORD(qword_197BD727C) > 0 )
          {
            v15 = qword_197BD727C + 1;
            v17 = 0;
            qword_197BD727C = (unsigned int)(qword_197BD727C + 1);
          }
          memcpy(&byte_1959995A0[v1], &Src + v15, v56);
          v15 += v56;
          LODWORD(qword_197BD727C) = v15;
        }
      }
    }
    if ( *v32 == 21 )
    {
      sub_1400AFB00(v37, 10);
      sub_1400AFB00((_DWORD *)(0x140000000LL + v1 + 1436128644), 4);
      sub_1400AFB00((_DWORD *)(0x140000000LL + v1 + 1436128648), 4);
      sub_1400AFB00((_DWORD *)(0x140000000LL + v1 + 1436128652), 30);
      v15 = qword_197BD727C;
      v16 = dword_197BD7278;
      v17 = HIDWORD(qword_197BD727C);
      if ( (int)qword_197BD727C < 0x10000 && (int)qword_197BD727C + 12 <= dword_197BD7278 )
      {
        if ( SHIDWORD(qword_197BD727C) > 0 )
        {
          v15 = qword_197BD727C + 1;
          v17 = 0;
          qword_197BD727C = (unsigned int)(qword_197BD727C + 1);
        }
        v57 = v15;
        v15 += 12;
        v58 = *(_QWORD *)(&Src + v57);
        LODWORD(v57) = *(_DWORD *)((char *)&unk_197BD728C + v57);
        *(__int64 *)((char *)&qword_195999568 + v1) = v58;
        *(int *)((char *)&dword_195999570 + v1) = v57;
        LODWORD(qword_197BD727C) = v15;
      }
    }
    if ( *v32 == 13 && v15 < 0x10000 )
    {
      if ( v15 + 4 <= v16 )
      {
        if ( v17 > 0 )
        {
          ++v15;
          v17 = 0;
          qword_197BD727C = (unsigned int)v15;
        }
        v59 = v15;
        v15 += 4;
        *(int *)((char *)&dword_195999580 + v1) = *(_DWORD *)(&Src + v59);
        LODWORD(qword_197BD727C) = v15;
      }
      if ( v15 < 0x10000 )
      {
        if ( v15 + 4 <= v16 )
        {
          if ( v17 > 0 )
          {
            ++v15;
            v17 = 0;
            qword_197BD727C = (unsigned int)v15;
          }
          v60 = v15;
          v15 += 4;
          *(int *)((char *)dword_195999584 + v1) = *(_DWORD *)(&Src + v60);
          LODWORD(qword_197BD727C) = v15;
        }
        if ( v15 < 0x10000 && v15 + 4 <= v16 )
        {
          if ( v17 > 0 )
          {
            ++v15;
            v17 = 0;
            qword_197BD727C = (unsigned int)v15;
          }
          v61 = v15;
          v15 += 4;
          *(int *)((char *)dword_195999588 + v1) = *(_DWORD *)(&Src + v61);
          LODWORD(qword_197BD727C) = v15;
        }
      }
    }
    result = *v32;
    if ( (_DWORD)result == 14 )
    {
      sub_1400AFB00(v37, 8);
      sub_1400AFB00((_DWORD *)(0x140000000LL + v1 + 1436128644), 8);
      sub_1400AFB00((_DWORD *)(0x140000000LL + v1 + 1436128648), 8);
      sub_1400AFB00((_DWORD *)(0x140000000LL + v1 + 1436128652), 20);
      result = *v32;
      v17 = HIDWORD(qword_197BD727C);
      v15 = qword_197BD727C;
      v16 = dword_197BD7278;
    }
    if ( (_DWORD)result == 15 )
    {
      if ( v15 < 0x10000 )
      {
        if ( v15 + 4 <= v16 )
        {
          if ( v17 > 0 )
          {
            ++v15;
            v17 = 0;
            qword_197BD727C = (unsigned int)v15;
          }
          v62 = v15;
          v15 += 4;
          *(int *)((char *)&dword_195999580 + v1) = *(_DWORD *)(&Src + v62);
          LODWORD(qword_197BD727C) = v15;
        }
        if ( v15 < 0x10000 )
        {
          if ( v15 + 4 <= v16 )
          {
            if ( v17 > 0 )
            {
              ++v15;
              v17 = 0;
              qword_197BD727C = (unsigned int)v15;
            }
            v63 = v15;
            v15 += 4;
            *(int *)((char *)dword_195999584 + v1) = *(_DWORD *)(&Src + v63);
            LODWORD(qword_197BD727C) = v15;
          }
          if ( v15 < 0x10000 && v15 + 4 <= v16 )
          {
            if ( v17 > 0 )
            {
              ++v15;
              HIDWORD(qword_197BD727C) = 0;
              LODWORD(qword_197BD727C) = v15;
            }
            *(int *)((char *)dword_195999588 + v1) = *(_DWORD *)(&Src + v15);
            LODWORD(qword_197BD727C) = v15 + 4;
          }
        }
      }
      result = sub_1400AFB00((_DWORD *)(0x140000000LL + v1 + 1436128652), 2);
      v17 = HIDWORD(qword_197BD727C);
      v15 = qword_197BD727C;
      v16 = dword_197BD7278;
    }
    if ( *v32 == 16 )
    {
      if ( v15 >= 0x10000 )
        goto LABEL_240;
      if ( v15 + 4 <= v16 )
      {
        if ( v17 > 0 )
        {
          ++v15;
          v17 = 0;
          qword_197BD727C = (unsigned int)v15;
        }
        v64 = v15;
        v15 += 4;
        *(int *)((char *)&dword_195999580 + v1) = *(_DWORD *)(&Src + v64);
        LODWORD(qword_197BD727C) = v15;
      }
      if ( v15 >= 0x10000 )
        goto LABEL_240;
      if ( v15 + 4 <= v16 )
      {
        if ( v17 > 0 )
        {
          ++v15;
          v17 = 0;
          qword_197BD727C = (unsigned int)v15;
        }
        v65 = v15;
        v15 += 4;
        *(int *)((char *)dword_195999584 + v1) = *(_DWORD *)(&Src + v65);
        LODWORD(qword_197BD727C) = v15;
      }
      if ( v15 >= 0x10000 )
        goto LABEL_240;
      if ( v15 + 4 <= v16 )
      {
        if ( v17 > 0 )
        {
          ++v15;
          v17 = 0;
          qword_197BD727C = (unsigned int)v15;
        }
        v66 = v15;
        v15 += 4;
        *(int *)((char *)dword_195999588 + v1) = *(_DWORD *)(&Src + v66);
        LODWORD(qword_197BD727C) = v15;
      }
      if ( v15 >= 0x10000 || v15 + 1 > v16 )
      {
LABEL_240:
        v67 = v77;
      }
      else
      {
        v67 = 0;
        v68 = 0;
        while ( 1 )
        {
          v69 = 8 - v17;
          v67 |= (~(-1 << v6) & ((unsigned __int8)*(&Src + v15) >> SBYTE4(qword_197BD727C))) << v68;
          if ( v6 < (unsigned int)(8 - v17) )
            break;
          if ( v6 == v69 )
          {
            ++v15;
            v17 = 0;
            qword_197BD727C = (unsigned int)v15;
            goto LABEL_241;
          }
          ++v15;
          v17 = 0;
          v6 -= v69;
          v68 += v69;
          qword_197BD727C = (unsigned int)v15;
          if ( v6 <= 0 )
            goto LABEL_241;
        }
        v17 += v6;
        HIDWORD(qword_197BD727C) = v17;
      }
LABEL_241:
      result = 0xFFFFFFFFLL;
      if ( v67 == 1023 )
        v67 = -1;
      *(_DWORD *)((char *)&unk_19599958C + v1) = v67;
      if ( v15 < 0x10000 )
      {
        result = (unsigned int)(v15 + 12);
        if ( (int)result <= v16 )
        {
          if ( v17 > 0 )
          {
            ++v15;
            v17 = 0;
            qword_197BD727C = (unsigned int)v15;
          }
          v70 = v15;
          v15 += 12;
          v71 = *(_QWORD *)(&Src + v70);
          result = *(unsigned int *)((char *)&unk_197BD728C + v70);
          *(__int64 *)((char *)&qword_195999568 + v1) = v71;
          *(int *)((char *)&dword_195999570 + v1) = result;
          LODWORD(qword_197BD727C) = v15;
        }
        if ( v15 < 0x10000 )
        {
          result = (unsigned int)(v15 + 12);
          if ( (int)result <= v16 )
          {
            if ( v17 > 0 )
            {
              ++v15;
              v17 = 0;
              qword_197BD727C = (unsigned int)v15;
            }
            v72 = v15;
            v15 += 12;
            v73 = *(_QWORD *)(&Src + v72);
            result = *(unsigned int *)((char *)&unk_197BD728C + v72);
            *(__int64 *)((char *)&qword_195999574 + v1) = v73;
            *(int *)((char *)&dword_19599957C + v1) = result;
            LODWORD(qword_197BD727C) = v15;
          }
        }
      }
    }
    if ( *v32 == 18 && v15 < 0x10000 )
    {
      result = (unsigned int)(v15 + 4);
      if ( (int)result <= v16 )
      {
        if ( v17 > 0 )
        {
          ++v15;
          v17 = 0;
          qword_197BD727C = (unsigned int)v15;
        }
        v74 = v15;
        v15 += 4;
        result = *(unsigned int *)(&Src + v74);
        *(int *)((char *)&dword_195999580 + v1) = result;
        LODWORD(qword_197BD727C) = v15;
      }
      if ( v15 < 0x10000 )
      {
        result = (unsigned int)(v15 + 4);
        if ( (int)result <= v16 )
        {
          if ( v17 > 0 )
          {
            ++v15;
            v17 = 0;
            qword_197BD727C = (unsigned int)v15;
          }
          v75 = v15;
          v15 += 4;
          result = *(unsigned int *)(&Src + v75);
          *(int *)((char *)dword_195999584 + v1) = result;
          LODWORD(qword_197BD727C) = v15;
        }
        if ( v15 < 0x10000 )
        {
          result = (unsigned int)(v15 + 4);
          if ( (int)result <= v16 )
          {
            if ( v17 > 0 )
            {
              ++v15;
              HIDWORD(qword_197BD727C) = 0;
              LODWORD(qword_197BD727C) = v15;
            }
            result = *(unsigned int *)(&Src + v15);
            *(int *)((char *)dword_195999588 + v1) = result;
            LODWORD(qword_197BD727C) = v15 + 4;
          }
        }
      }
    }
    if ( *v32 == 20 )
    {
      result = sub_1400AFB00((_DWORD *)(0x140000000LL + v1 + 1436128640), 8);
      v76 = qword_197BD727C;
      if ( (int)qword_197BD727C < 0x10000 )
      {
        result = (unsigned int)(qword_197BD727C + 12);
        if ( (int)result <= dword_197BD7278 )
        {
          if ( SHIDWORD(qword_197BD727C) > 0 )
          {
            v76 = qword_197BD727C + 1;
            LODWORD(qword_197BD727C) = qword_197BD727C + 1;
            qword_197BD727C = (unsigned int)qword_197BD727C;
          }
          result = *(unsigned int *)((char *)&unk_197BD728C + v76);
          *(__int64 *)((char *)&qword_195999568 + v1) = *(_QWORD *)(&Src + v76);
          *(int *)((char *)&dword_195999570 + v1) = result;
          LODWORD(qword_197BD727C) = v76 + 12;
        }
      }
    }
  }
  return result;
}

