/* Address: 0x14017dcc0 | Name: sub_14017DCC0 | Size: 1066 bytes */
int __fastcall sub_14017DCC0(__int64 a1, int a2, int a3)
{
  __int64 v3; // rax
  int v5; // r14d
  unsigned __int8 *v6; // r9
  unsigned __int8 *v7; // rdx
  signed __int64 v8; // r9
  unsigned __int8 *v9; // rcx
  unsigned __int8 *v10; // r8
  __int64 v11; // r15
  unsigned __int8 *v12; // rsi
  int v13; // ebx
  int v14; // edi
  int v15; // eax
  int v16; // r8d
  unsigned int v17; // ebx
  __int64 v18; // rdi
  __int16 v19; // r12
  __int16 v20; // r13
  int v21; // r14d
  int v22; // edi
  int v23; // ebx
  int v24; // ebx
  __int64 v25; // rcx
  unsigned __int8 *v26; // rax
  unsigned __int64 v27; // rdx
  int v28; // edi
  unsigned __int64 v29; // rbx
  int v30; // r14d
  int v31; // r10d
  int v32; // r9d
  int v33; // eax
  unsigned __int8 *v34; // r8
  int v35; // edx
  signed __int64 v37; // [rsp+20h] [rbp-68h]
  unsigned __int8 *i; // [rsp+28h] [rbp-60h]
  signed __int64 v39; // [rsp+30h] [rbp-58h]
  unsigned __int8 *v40; // [rsp+38h] [rbp-50h]
  signed __int64 v41; // [rsp+40h] [rbp-48h]
  unsigned __int8 *v42; // [rsp+48h] [rbp-40h]
  unsigned __int8 v43; // [rsp+90h] [rbp+8h]
  int v45; // [rsp+A8h] [rbp+20h]

  v3 = *(int *)(a1 + 48);
  v5 = a2;
  if ( (_DWORD)v3 )
  {
    v6 = (unsigned __int8 *)(*(_QWORD *)(a1 + 8) + v3);
    if ( v6[1] + (*v6 << 8) == 1 && !(v6[3] + (v6[2] << 8)) )
    {
      v7 = &v6[256 * (unsigned __int64)v6[8] + v6[9]];
      v42 = v7;
      v41 = ((unsigned __int64)*v7 << 8) + v7[1];
      if ( v41 )
      {
        v8 = 0;
        v9 = v7 + 2;
        v37 = 0;
        for ( i = v7 + 2; ; i += 2 )
        {
          v10 = &v7[256 * (unsigned __int64)*v9 + v9[1]];
          v40 = v10;
          if ( v10[1] + (*v10 << 8) == 2 )
          {
            v11 = 0;
            v39 = ((unsigned __int64)v10[4] << 8) + v10[5];
            if ( v39 )
              break;
          }
LABEL_25:
          ++v8;
          v9 = i + 2;
          v37 = v8;
          if ( v8 >= v41 )
            return 0;
          v7 = v42;
        }
        while ( 1 )
        {
          v12 = &v10[256 * (unsigned __int64)v10[2 * v11 + 6] + v10[2 * v11 + 7]];
          v13 = *v12;
          v14 = v12[1];
          v15 = sub_14017D900(&v12[256 * (unsigned __int64)v12[2] + v12[3]], v5);
          v16 = v15;
          if ( v15 != -1 )
          {
            if ( v14 + (v13 << 8) == 1 )
            {
              v25 = 2 * v15;
              v26 = &v12[v12[v25 + 11]];
              v27 = (unsigned __int64)v12[v25 + 10] << 8;
              v28 = v26[v27];
              v29 = (unsigned __int64)&v26[v27 + 2];
              v30 = v26[v27 + 1];
              if ( v12[5] + (v12[4] << 8) != 4 || v12[7] + (v12[6] << 8) )
                return 0;
              if ( v16 >= v12[9] + (v12[8] << 8) )
                sub_14023E640(
                  L"coverageIndex < pairSetCount",
                  L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h",
                  2465);
              v31 = 0;
              v32 = (v28 << 8) + v30 - 1;
              if ( v32 >= 0 )
              {
                do
                {
                  v33 = (v31 + v32) >> 1;
                  v34 = (unsigned __int8 *)(v29 + 4 * v33);
                  v35 = (*v34 << 8) + v34[1];
                  if ( a3 >= v35 )
                  {
                    if ( a3 <= v35 )
                      return (__int16)((v34[2] << 8) + v34[3]);
                    v31 = v33 + 1;
                  }
                  else
                  {
                    v32 = v33 - 1;
                  }
                }
                while ( v31 <= v32 );
              }
LABEL_22:
              v5 = a2;
              goto LABEL_23;
            }
            if ( v14 + (v13 << 8) == 2 )
            {
              v17 = v12[10];
              v18 = v12[11];
              v19 = v12[5] + (v12[4] << 8);
              v20 = v12[7] + (v12[6] << 8);
              v21 = sub_14017DB90(&v12[256 * (unsigned __int64)v12[8] + v12[9]], v5);
              v22 = sub_14017DB90(&v12[256 * (unsigned __int64)v17 + v18], a3);
              v23 = v12[14];
              v43 = v12[15];
              v45 = v12[13] + (v12[12] << 8);
              if ( v21 >= v45 )
                sub_14023E640(L"glyph1class < class1Count", L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h", 2501);
              v24 = v43 + (v23 << 8);
              if ( v22 >= v24 )
                sub_14023E640(L"glyph2class < class2Count", L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h", 2502);
              if ( v19 != 4 || v20 )
                return 0;
              if ( v21 >= 0 && v21 < v45 && v22 >= 0 && v22 < v24 )
                return (__int16)(v12[2 * v21 * v24 + 17 + 2 * v22] + (v12[2 * v21 * v24 + 16 + 2 * v22] << 8));
              goto LABEL_22;
            }
            sub_14023E640(L"0", L"C:\\visualc2010\\code\\csl03\\stb/stb_truetype.h", 2520);
          }
LABEL_23:
          v10 = v40;
          if ( ++v11 >= v39 )
          {
            v8 = v37;
            goto LABEL_25;
          }
        }
      }
    }
  }
  return 0;
}

