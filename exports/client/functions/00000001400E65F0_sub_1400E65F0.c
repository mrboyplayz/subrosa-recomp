/* Address: 0x1400e65f0 | Name: sub_1400E65F0 | Size: 865 bytes */
__int64 sub_1400E65F0()
{
  int v0; // esi
  unsigned int *i; // r15
  __int64 v2; // rdi
  __int64 v3; // rbx
  const char *v4; // r12
  __int64 v5; // rax
  __int64 v6; // r14
  FILE *v7; // rbp
  __int64 v8; // rax
  __int64 v9; // r8
  int v10; // edx
  __int64 v11; // rdi
  unsigned int v12; // ecx
  __int64 v13; // rax
  FILE *v14; // rbp
  __int64 v15; // rax
  __int64 v16; // r8
  int v17; // edx
  unsigned int v18; // ecx
  __int64 v20; // [rsp+0h] [rbp-298h] BYREF
  _BYTE v21[512]; // [rsp+50h] [rbp-248h] BYREF
  __int64 v22; // [rsp+250h] [rbp-48h]

  v0 = 0;
  if ( (int)dword_140404A6C[421784474] > 0 )
  {
    for ( i = &dword_140404A6C[421784475]; ; ++i )
    {
      v2 = (int)*i;
      v3 = 46 * v2;
      v4 = (const char *)&dword_140404A6C[46 * v2 + 421784739];
      sub_140158AB0(v21, "texture/%s.png", v4);
      v5 = MEMORY[0x14020B8D8](v21, "rb");
      v6 = 46 * v2;
      v7 = (FILE *)v5;
      if ( v5 )
      {
        MEMORY[0x14020C4A8](v5, 0, 2);
        dword_140404A6C[v6 + 421784755] = ftell(v7);
        MEMORY[0x14020C4A8](v7, 0, 0);
        v8 = j__malloc_base((int)dword_140404A6C[v3 + 421784755]);
        v9 = (int)dword_140404A6C[v3 + 421784755];
        *(_QWORD *)&dword_140404A6C[v3 + 421784757] = v8;
        fread(v8, 1, v9, v7);
        sub_14020B9E8(v7);
      }
      else
      {
        dword_140404A6C[v6 + 421784755] = 0;
      }
      v10 = dword_140404A6C[v3 + 421784755];
      v11 = 2 * v2;
      v12 = dword_140404A6C[2 * v11 + 283827814];
      if ( v10 <= 0 )
        sub_140138590(v12, 0, 10497, 10497, 9729, 9729, 255, 64, 128, 0);
      else
        sub_1400EE0A0(v12, v10, *(_QWORD *)&dword_140404A6C[v3 + 421784757], 1, 10497, 10497, 9729, 9987, 0);
      (*(void (__fastcall **)(__int64, __int64))&dword_140404A6C[18215073])(3553, 34046);
      sub_140158AB0(v21, "texturematerial/%s.png", v4);
      v13 = MEMORY[0x14020B8D8](v21, "rb");
      v14 = (FILE *)v13;
      if ( !v13 )
        break;
      MEMORY[0x14020C4A8](v13, 0, 2);
      dword_140404A6C[v3 + 421784759] = ftell(v14);
      MEMORY[0x14020C4A8](v14, 0, 0);
      v15 = j__malloc_base((int)dword_140404A6C[v3 + 421784759]);
      v16 = (int)dword_140404A6C[v3 + 421784759];
      *(_QWORD *)&dword_140404A6C[v3 + 421784761] = v15;
      fread(v15, 1, v16, v14);
      sub_14020B9E8(v14);
      v17 = dword_140404A6C[v3 + 421784759];
      v18 = dword_140404A6C[2 * v11 + 283827815];
      if ( v17 <= 0 )
        goto LABEL_13;
      sub_1400EE0A0(v18, v17, *(_QWORD *)&dword_140404A6C[v3 + 421784761], 1, 10497, 10497, 9729, 9987, 0);
LABEL_14:
      (*(void (__fastcall **)(__int64, __int64))&dword_140404A6C[18215073])(3553, 34046);
      if ( ++v0 >= (int)dword_140404A6C[421784474] )
        return MEMORY[0x1401F8B20]((unsigned __int64)&v20 ^ v22);
    }
    v18 = dword_140404A6C[2 * v11 + 283827815];
    dword_140404A6C[v3 + 421784759] = 0;
LABEL_13:
    sub_140138590(v18, 0, 10497, 10497, 9729, 9729, 32, 192, 0, 0);
    goto LABEL_14;
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&v20 ^ v22);
}

