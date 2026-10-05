/* Address: 0x14006f8e0 | Name: sub_14006F8E0 | Size: 1029 bytes */
int __fastcall sub_14006F8E0(signed int a1, __int16 a2)
{
  signed int v2; // edi
  __int64 v4; // rax
  __int64 v5; // rsi
  __int64 v6; // rax
  int v7; // r15d
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // rdi
  __int64 v10; // r14
  int v11; // xmm1_4
  float v12; // xmm0_4
  int v13; // eax
  int v14; // edi
  __int64 v15; // rsi
  __int64 v16; // r15
  char *v17; // rcx
  __int64 v19; // rax
  char *v20; // rsi
  __int64 v21; // r8
  __int64 v22; // rax
  unsigned int v23; // edx
  __int64 v25; // [rsp+0h] [rbp-868h] BYREF
  int v26[4]; // [rsp+20h] [rbp-848h] BYREF
  _BYTE v27[1024]; // [rsp+30h] [rbp-838h] BYREF
  char Buffer[1024]; // [rsp+430h] [rbp-438h] BYREF

  v2 = 0;
  LOBYTE(v4) = a2;
  v5 = a1;
  if ( (a2 & 0x100) == 0 )
    goto LABEL_4;
  LODWORD(v4) = toupper((unsigned __int8)a2);
  if ( (_DWORD)v4 == 82 )
  {
    v4 = 1760 * v5;
    *(__int64 *)((char *)qword_190260AA8 + 4 * v4) = -1;
    *(__int64 *)((char *)qword_190260AB0 + 4 * v4) = -1;
    *(__int64 *)((char *)qword_190260AB8 + 4 * v4) = -1;
    *(__int64 *)((char *)qword_190260AC0 + 4 * v4) = -1;
    *(__int64 *)((char *)qword_190260AC8 + 4 * v4) = -1;
    *(__int64 *)((char *)qword_190260AD0 + 4 * v4) = -1;
    *(__int64 *)((char *)qword_190260AD8 + 4 * v4) = -1;
    *(__int64 *)((char *)qword_190260AE0 + 4 * v4) = -1;
    *(__int64 *)((char *)qword_190260AE8 + 4 * v4) = -1;
    *(__int64 *)((char *)qword_190260AF0 + 4 * v4) = -1;
    *(__int64 *)((char *)qword_190260AF8 + 4 * v4) = -1;
    *(__int64 *)((char *)qword_190260B00 + 4 * v4) = -1;
    *(__int64 *)((char *)qword_190260B08 + 4 * v4) = -1;
    LOBYTE(v4) = 0;
LABEL_4:
    LODWORD(v6) = toupper((unsigned __int8)v4);
    v7 = v6;
    if ( (_DWORD)v6 == 10 )
    {
      v8 = 7040 * v5;
      if ( dword_190260B2C[1760 * v5] )
      {
        byte_19025F434[v8 + 64] = 0;
        LODWORD(v6) = sub_1400395A0(a1, 1u);
        dword_190260B2C[v8 / 4] = 0;
      }
      else
      {
        *(_OWORD *)&byte_19025F434[v8 + 64] = xmmword_1400F5960;
        *(_WORD *)&byte_19025F434[v8 + 80] = 11822;
        byte_19025F434[v8 + 82] = 0;
        sub_1400395A0(a1, 1u);
        LODWORD(v6) = (int)(float)((float)((float)(1.0 - sub_14006EC10(a1)) * 600.0) + 20.0);
        dword_190260B2C[v8 / 4] = v6;
      }
    }
    v21 = 7040 * v5;
    if ( dword_190260B2C[1760 * v5] <= 0 )
    {
      v22 = *(int *)((char *)&unk_190260B28 + v21);
      v23 = v7 - 65;
      if ( (_DWORD)v22 == -1 )
      {
        if ( v23 <= 0x19 )
          *(_DWORD *)((char *)&unk_190260B28 + v21) = v23;
      }
      else
      {
        if ( v23 > 0x19 )
        {
          if ( v7 == 32 )
            *((_DWORD *)&qword_190260AA8[880 * v5] + v22) = -1;
        }
        else
        {
          *((_DWORD *)&qword_190260AA8[880 * v5] + v22) = v23;
        }
        *(_DWORD *)((char *)&unk_190260B28 + v21) = -1;
      }
      LODWORD(v6) = sub_14006EA80(a1);
    }
    return v6;
  }
  if ( (_DWORD)v4 != 80 )
  {
    if ( (_DWORD)v4 == 88 )
    {
      v19 = 7040 * v5;
      v20 = &byte_19025F434[7040 * v5];
      *(_DWORD *)&algn_19026071C[v19] = 0;
      do
      {
        *v20 = 0;
        LODWORD(v6) = sub_1400395A0(a1, v2++);
        v20 += 64;
      }
      while ( v2 < 24 );
      return v6;
    }
    goto LABEL_4;
  }
  v9 = 7040 * v5;
  v6 = dword_190260718[1760 * v5];
  if ( (_DWORD)v6 != -1 )
  {
    v10 = 5 * v6;
    if ( dword_17AE3AD50[5 * v6] < 4 )
    {
      *(float *)&v11 = (float)(*(float *)&dword_19025F164[v9 / 4 + 2] * 0.5) + *(float *)&dword_19025F124[v9 / 4];
      *(float *)v26 = (float)(*(float *)&dword_19025F164[v9 / 4] * 0.5) + *(float *)&dword_19025F11C[v9 / 4];
      v12 = *(float *)&dword_19025F164[v9 / 4 + 1];
      v26[2] = v11;
      *(float *)&v26[1] = (float)(v12 * 0.5) + *(float *)&dword_19025F120[v9 / 4];
      v13 = sub_14003B080(34, v26, nullptr, &dword_19025F164[v9 / 4]);
      v14 = HIDWORD(qword_19025F428[v9 / 8]);
      v15 = 23;
      v16 = v13;
      v27[0] = 0;
      do
      {
        sub_1400DBB30(Buffer, "%s\n");
        v17 = (char *)&v25 + 47;
        while ( *++v17 != 0 )
          ;
        strcpy(v17, Buffer);
        LOBYTE(v14) = (v14 + 1) & 0x1F;
        --v15;
      }
      while ( v15 );
      LODWORD(v6) = (unsigned int)sub_14003E1A0(v16, v27);
      ++dword_17AE3AD50[v10];
      dword_19025F0C8[1760 * v16] = 1;
    }
  }
  return v6;
}

