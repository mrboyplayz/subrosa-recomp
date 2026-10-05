/* Address: 0x14020285c | Name: sub_14020285C | Size: 2119 bytes */
_DWORD *__fastcall sub_14020285C(_DWORD *a1, char a2, _BYTE *a3)
{
  char v5; // cl
  char *v6; // rsi
  int v7; // ebx
  __int64 v8; // rdx
  DName *v9; // rax
  int v10; // eax
  __int64 v12; // r14
  __int64 v13; // rbx
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rax
  __int64 v16; // rax
  const char *v17; // rcx
  char *v18; // rax
  int v19; // ecx
  char *v20; // rdx
  int v21; // eax
  int v22; // ecx
  __int64 v23; // rdx
  __int64 v24; // r8
  char v25; // cl
  int v26; // ecx
  int v27; // ecx
  __int64 v28; // rcx
  char v29; // cl
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  _QWORD *v40; // rcx
  __int64 v41; // rax
  int v42; // edx
  char v43; // al
  __int64 v44; // rdx
  __int64 v45; // rax
  __int64 v46; // rax
  char v47; // dl
  char v48; // cl
  const char *v49; // [rsp+20h] [rbp-50h] BYREF
  int v50; // [rsp+28h] [rbp-48h]
  __int64 v51; // [rsp+30h] [rbp-40h] BYREF
  int v52; // [rsp+38h] [rbp-38h]
  __int64 v53; // [rsp+40h] [rbp-30h] BYREF
  int v54; // [rsp+48h] [rbp-28h]
  const char *v55; // [rsp+50h] [rbp-20h] BYREF
  int v56; // [rsp+58h] [rbp-18h]
  _BYTE v57[16]; // [rsp+60h] [rbp-10h] BYREF

  v49 = nullptr;
  v50 = 0;
  v51 = 0;
  v5 = **(_BYTE **)&dword_140404A6C[19064555];
  v6 = (char *)(*(_QWORD *)&dword_140404A6C[19064555] + 1LL);
  v52 = 0;
  v7 = 0;
  ++*(_QWORD *)&dword_140404A6C[19064555];
  if ( v5 <= 65 )
  {
    if ( v5 != 65 )
    {
      if ( v5 )
      {
        if ( v5 <= 47 )
          goto LABEL_66;
        if ( v5 > 49 )
        {
          if ( v5 <= 57 )
          {
            v8 = *(v6 - 1) - 50LL;
LABEL_8:
            sub_1401FDF84((__int64)&v49, (&off_1402835A0)[2 * v8], (int)(&off_1402835A0)[2 * v8 + 1]);
            goto LABEL_9;
          }
LABEL_66:
          a1[2] = 0;
          *((_BYTE *)a1 + 8) = 2;
          *(_QWORD *)a1 = 0;
          return a1;
        }
        v51 = 0;
        v12 = 0;
        v52 = 0;
        if ( !a2 )
        {
LABEL_35:
          v16 = sub_140205810(v57, 0, 0);
          v17 = *(const char **)v16;
          LODWORD(v16) = *(_DWORD *)(v16 + 8);
          v49 = v17;
          v50 = v16;
          *(_QWORD *)&dword_140404A6C[19064555] = v6;
          if ( v17 && *(v6 - 1) == 49 )
          {
            v53 = 0;
            v54 = 0;
            sub_1401FFB98((#89 *)&v53, 126);
            sub_1401FE7C0((__int64)&v53, (__int64)&v55, (__int64)&v49);
            v49 = v55;
            v50 = v56;
          }
          if ( v12 )
            sub_1401FE908((__int64)&v49, (__int64)&v51);
          goto LABEL_11;
        }
        v53 = 0;
        v54 = 0;
        v13 = sub_140204368(v57);
        sub_1401FFB98((#89 *)&v53, 60);
        sub_1401FE7C0((__int64)&v53, (__int64)&v55, v13);
        sub_1401FE908((__int64)&v51, (__int64)&v55);
        v12 = v51;
        if ( v51 && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v51 + 16LL))(v51) == 62 )
        {
          if ( (char)v52 > 1 )
          {
LABEL_30:
            if ( a3 )
              *a3 = 1;
            if ( !**(_BYTE **)&dword_140404A6C[19064555] )
            {
              v10 = v52;
              *(_QWORD *)a1 = v12;
              goto LABEL_12;
            }
            v6 = (char *)++*(_QWORD *)&dword_140404A6C[19064555];
            goto LABEL_35;
          }
          v14 = sub_1402026E0((_HeapManager *)&dword_140404A6C[19064565], 16);
          if ( v14 )
          {
            *(_QWORD *)v14 = off_1402846F0;
            *(_BYTE *)(v14 + 8) = 32;
          }
          else
          {
            v14 = 0;
          }
          sub_1401FDE58(&v51, v14);
          v12 = v51;
        }
        if ( (char)v52 <= 1 )
        {
          if ( v12 )
          {
            v15 = sub_1402026E0((_HeapManager *)&dword_140404A6C[19064565], 16);
            if ( v15 )
            {
              *(_QWORD *)v15 = off_1402846F0;
              *(_BYTE *)(v15 + 8) = 62;
            }
            else
            {
              v15 = 0;
            }
            sub_1401FDE58(&v51, v15);
          }
          else
          {
            v51 = 0;
            v52 = 0;
            sub_1401FFB98((#89 *)&v51, 62);
          }
          v12 = v51;
        }
        goto LABEL_30;
      }
      v18 = v6 - 1;
      goto LABEL_41;
    }
LABEL_118:
    sub_1401FDF84((__int64)&v49, (&off_1402835A0)[2 * *(v6 - 1) - 114], (int)(&off_1402835A0)[2 * *(v6 - 1) - 113]);
    if ( v7 )
    {
      if ( v49 )
        v50 |= 0x200u;
      goto LABEL_11;
    }
    goto LABEL_9;
  }
  if ( v5 == 66 )
  {
    v7 = 1;
    goto LABEL_118;
  }
  if ( v5 <= 90 )
    goto LABEL_118;
  if ( v5 != 95 )
    goto LABEL_66;
  v19 = *v6;
  v20 = v6 + 1;
  *(_QWORD *)&dword_140404A6C[19064555] = v6 + 1;
  if ( v19 <= 79 )
  {
    if ( v19 < 68 )
    {
      if ( v19 <= 57 )
      {
        if ( v19 != 57 )
        {
          if ( !v19 )
          {
            *(_QWORD *)&dword_140404A6C[19064555] = v6;
            goto LABEL_42;
          }
          if ( v19 <= 47 )
            goto LABEL_66;
          if ( v19 <= 54 )
          {
            v8 = *v6 - 14LL;
            goto LABEL_8;
          }
          v21 = *v6 - 14;
LABEL_54:
          sub_1401FE248((DName *)a1, (const struct StringLiteral *)&(&off_1402835A0)[2 * v21]);
          return a1;
        }
        sub_1401FE248((DName *)&v55, (const struct StringLiteral *)&(&off_1402835A0)[2 * *v6 - 28]);
        v22 = v56 | 0x8000;
LABEL_58:
        *(_QWORD *)a1 = v55;
        a1[2] = v22;
        return a1;
      }
      if ( v19 == 63 )
      {
        v25 = *v20;
        *(_QWORD *)&dword_140404A6C[19064555] = v6 + 2;
        if ( !v25 )
        {
          *(_QWORD *)&dword_140404A6C[19064555] = v6 + 1;
          goto LABEL_42;
        }
        if ( v25 != 48 )
          goto LABEL_66;
        v24 = 0;
        v23 = 1;
        goto LABEL_63;
      }
      if ( v19 <= 64 )
        goto LABEL_66;
      if ( v19 > 66 )
      {
        v23 = 0;
        v24 = 1;
LABEL_63:
        sub_1402041A0(&v55, v23, v24);
        v22 = v56 | 0x1000;
        goto LABEL_58;
      }
    }
LABEL_115:
    v21 = *v6 - 21;
    goto LABEL_54;
  }
  if ( v19 > 84 )
  {
    if ( v19 <= 86 )
    {
      v8 = *v6 - 21LL;
      goto LABEL_8;
    }
    if ( v19 <= 87 )
      goto LABEL_66;
    if ( v19 <= 89 )
      goto LABEL_115;
    if ( v19 != 95 )
      goto LABEL_66;
    v43 = *v20;
    *(_QWORD *)&dword_140404A6C[19064555] = v6 + 2;
    if ( v43 <= 75 )
    {
      if ( v43 == 75 )
      {
        sub_1401FE248((DName *)&v53, (const struct StringLiteral *)&(&off_1402835A0)[2 * v6[1] + 8]);
        while ( **(_BYTE **)&dword_140404A6C[19064555] )
        {
          if ( **(_BYTE **)&dword_140404A6C[19064555] == 64 )
          {
            ++*(_QWORD *)&dword_140404A6C[19064555];
            break;
          }
          v47 = **(_BYTE **)&dword_140404A6C[19064555];
          ++*(_QWORD *)&dword_140404A6C[19064555];
          sub_1401FE9BC((__int64)&v53, v47);
        }
      }
      else
      {
        if ( v43 < 65 )
          goto LABEL_66;
        if ( v43 <= 68 || v43 > 70 )
          goto LABEL_98;
        sub_1401FE248((DName *)&v53, (const struct StringLiteral *)&(&off_1402835A0)[2 * v6[1] + 8]);
        if ( **(_BYTE **)&dword_140404A6C[19064555] == 63 )
        {
          v45 = sub_1402014E4((__int64)v57, v44);
          sub_1401FE908((__int64)&v53, v45);
          if ( **(_BYTE **)&dword_140404A6C[19064555] == 64 )
            ++*(_QWORD *)&dword_140404A6C[19064555];
        }
        else
        {
          v46 = sub_14020431C(v57);
          sub_1401FE908((__int64)&v53, v46);
        }
        v56 = 2;
        v55 = "''";
        sub_1401FE888((__int64)&v53, (__int64)&v55);
      }
      *(_QWORD *)a1 = v53;
      v10 = v54;
      goto LABEL_12;
    }
    if ( v43 > 77 )
    {
      if ( v43 == 78 )
      {
        v48 = v6[2];
        *(_QWORD *)&dword_140404A6C[19064555] = v6 + 3;
        if ( v48 == 50 )
        {
          sub_140205440(a1);
          return a1;
        }
      }
      goto LABEL_66;
    }
LABEL_98:
    v21 = v6[1] + 4;
    goto LABEL_54;
  }
  if ( v19 >= 83 )
    goto LABEL_115;
  v26 = v19 - 80;
  if ( !v26 )
  {
    sub_1401FDF84((__int64)&v49, (&off_1402835A0)[2 * *v6 - 42], (int)(&off_1402835A0)[2 * *v6 - 41]);
    v41 = sub_14020285C(v57, 0, 0);
    v42 = *(_DWORD *)(v41 + 8);
    v51 = *(_QWORD *)v41;
    v52 = v42;
    if ( v51 && (v42 & 0x400) != 0 )
      goto LABEL_66;
    goto LABEL_88;
  }
  v27 = v26 - 1;
  if ( v27 )
  {
    if ( v27 != 1 )
      goto LABEL_66;
    sub_1401FDF84((__int64)&v49, (&off_1402835A0)[2 * *v6 - 42], (int)(&off_1402835A0)[2 * *v6 - 41]);
    v28 = (char)**(_BYTE **)&dword_140404A6C[19064555];
    if ( !(_BYTE)v28 )
    {
      sub_1401FE844((__int64)&v49, (__int64)a1, 1u);
      return a1;
    }
    if ( (char)v28 < 48 || (unsigned __int64)(v28 - 48) >= 5 )
      goto LABEL_66;
    sub_1401FDF84((__int64)&v51, (&off_140283AD0)[2 * v28 - 96], (int)(&off_140283AD0)[2 * v28 - 95]);
    v29 = **(_BYTE **)&dword_140404A6C[19064555];
    v30 = ++*(_QWORD *)&dword_140404A6C[19064555];
    if ( v29 == 48 )
    {
      sub_1402013D0((DName *)&v55, nullptr);
      v39 = sub_1401FE7EC((__int64)&v55, (__int64)v57, 32);
      v40 = (_QWORD *)sub_1401FE7C0(v39, (__int64)&v53, (__int64)&v49);
LABEL_85:
      sub_1401FE7C0((__int64)v40, (__int64)a1, (__int64)&v51);
      return a1;
    }
    if ( v29 == 49 )
    {
      sub_1401FE7C0((__int64)&v49, (__int64)&v53, (__int64)&v51);
      v31 = sub_140203F1C(v57);
      v32 = sub_1401FE7EC(v31, (__int64)&v55, 44);
      sub_1401FE908((__int64)&v53, v32);
      v33 = sub_140203F1C(v57);
      v34 = sub_1401FE7EC(v33, (__int64)&v55, 44);
      sub_1401FE908((__int64)&v53, v34);
      v35 = sub_140203F1C(v57);
      v36 = sub_1401FE7EC(v35, (__int64)&v55, 44);
      sub_1401FE908((__int64)&v53, v36);
      v37 = sub_1402017C8((__int64)v57, 0);
      v38 = sub_1401FE7EC(v37, (__int64)&v55, 41);
      sub_1401FE908((__int64)&v53, v38);
      sub_1401FE7EC((__int64)&v53, (__int64)a1, 39);
      return a1;
    }
    if ( v29 <= 49 || v29 > 52 )
    {
      v18 = (char *)(v30 - 1);
LABEL_41:
      *(_QWORD *)&dword_140404A6C[19064555] = v18;
LABEL_42:
      a1[2] = 0;
      *(_QWORD *)a1 = &off_1402848D0;
      return a1;
    }
LABEL_88:
    v40 = &v49;
    goto LABEL_85;
  }
LABEL_9:
  if ( v49 )
  {
    v56 = 8;
    v55 = "operator";
    v9 = sub_1401FE248((DName *)v57, (const struct StringLiteral *)&v55);
    sub_1401FE7C0((__int64)v9, (__int64)&v55, (__int64)&v49);
    v49 = v55;
    v50 = v56;
  }
LABEL_11:
  *(_QWORD *)a1 = v49;
  v10 = v50;
LABEL_12:
  a1[2] = v10;
  return a1;
}

