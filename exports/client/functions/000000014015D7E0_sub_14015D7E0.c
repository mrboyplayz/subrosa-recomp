/* Address: 0x14015d7e0 | Name: sub_14015D7E0 | Size: 1308 bytes */
char *__fastcall sub_14015D7E0(char *Block, int a2, int a3, int a4, int a5)
{
  int v10; // ecx
  char *v11; // r14
  int i; // r11d
  char *v13; // r9
  char *v14; // rax
  int j; // edx
  int k; // edx
  char v17; // cl
  int m; // edx
  char v19; // cl
  int n; // edx
  int ii; // edx
  char v22; // cl
  int jj; // edx
  char v24; // cl
  int nn; // edx
  char v26; // cl
  int kk; // r10d
  __int16 v28; // r8
  __int16 v29; // cx
  int mm; // r10d
  __int16 v31; // r8
  __int16 v32; // cx
  __int16 v33; // dx
  __int16 v34; // cx
  int i1; // r10d
  __int16 v36; // r8
  __int16 v37; // cx
  int i2; // r10d
  __int16 v39; // r8
  __int16 v40; // cx
  int i3; // edx
  char v42; // cl

  if ( a3 == a2 )
    return Block;
  if ( (unsigned int)(a3 - 1) > 3
    && (sub_14023E640(L"req_comp >= 1 && req_comp <= 4", L"C:\\visualc2010\\code\\csl03\\stb/stb_image.h", 1700), a3 < 0)
    || a4 < 0
    || a4 && a3 > (int)(0x7FFFFFFFu / a4)
    || (v10 = a4 * a3, a4 * a3 < 0)
    || a5 < 0
    || a5 && v10 > (int)(0x7FFFFFFFu / a5)
    || (v11 = (char *)j__malloc_base(a5 * v10)) == nullptr )
  {
    free(Block);
    *(_QWORD *)(*(_QWORD *)(__readgsqword(0x58u) + 8LL * dword_140404A6C[19064470]) + 16LL) = "outofmem";
    return nullptr;
  }
  else
  {
    for ( i = 0; i < a5; ++i )
    {
      v13 = &Block[a4 * a2 * i];
      v14 = &v11[a4 * a3 * i];
      switch ( a3 + 8 * a2 - 10 )
      {
        case 0:
          for ( j = a4 - 1; j >= 0; v14 += 2 )
          {
            --j;
            *v14 = *v13++;
            v14[1] = -1;
          }
          break;
        case 1:
          for ( k = a4 - 1; k >= 0; v14 += 3 )
          {
            --k;
            v17 = *v13;
            v14[2] = *v13++;
            v14[1] = v17;
            *v14 = v17;
          }
          break;
        case 2:
          for ( m = a4 - 1; m >= 0; v14 += 4 )
          {
            --m;
            v19 = *v13;
            v14[2] = *v13++;
            v14[1] = v19;
            *v14 = v19;
            v14[3] = -1;
          }
          break;
        case 7:
          for ( n = a4 - 1; n >= 0; v13 += 2 )
          {
            --n;
            *v14++ = *v13;
          }
          break;
        case 9:
          for ( ii = a4 - 1; ii >= 0; v14 += 3 )
          {
            --ii;
            v22 = *v13;
            v14[2] = *v13;
            v13 += 2;
            v14[1] = v22;
            *v14 = v22;
          }
          break;
        case 10:
          for ( jj = a4 - 1; jj >= 0; *(v14 - 1) = *(v13 - 1) )
          {
            --jj;
            v24 = *v13;
            v14[2] = *v13;
            v13 += 2;
            v14[1] = v24;
            *v14 = v24;
            v14 += 4;
          }
          break;
        case 15:
          for ( kk = a4 - 1;
                kk >= 0;
                *(v14 - 1) = (unsigned __int16)(77 * (unsigned __int8)*(v13 - 3) + 29 * v29 + v28) >> 8 )
          {
            ++v14;
            v28 = 150 * (unsigned __int8)v13[1];
            v29 = (unsigned __int8)v13[2];
            v13 += 3;
            --kk;
          }
          break;
        case 16:
          for ( mm = a4 - 1; mm >= 0; *(v14 - 2) = (unsigned __int16)(77 * v34 + v33 + v31) >> 8 )
          {
            v14 += 2;
            v31 = 150 * (unsigned __int8)v13[1];
            v32 = (unsigned __int8)v13[2];
            v13 += 3;
            v33 = 29 * v32;
            v34 = (unsigned __int8)*(v13 - 3);
            *(v14 - 1) = -1;
            --mm;
          }
          break;
        case 18:
          for ( nn = a4 - 1; nn >= 0; *(v14 - 1) = -1 )
          {
            --nn;
            *v14 = *v13;
            v14 += 4;
            v26 = v13[1];
            v13 += 3;
            *(v14 - 3) = v26;
            *(v14 - 2) = *(v13 - 1);
          }
          break;
        case 23:
          for ( i1 = a4 - 1;
                i1 >= 0;
                *(v14 - 1) = (unsigned __int16)(77 * (unsigned __int8)*(v13 - 4) + 29 * v37 + v36) >> 8 )
          {
            ++v14;
            v36 = 150 * (unsigned __int8)v13[1];
            v37 = (unsigned __int8)v13[2];
            v13 += 4;
            --i1;
          }
          break;
        case 24:
          for ( i2 = a4 - 1; i2 >= 0; *(v14 - 1) = *(v13 - 1) )
          {
            v14 += 2;
            v39 = 150 * (unsigned __int8)v13[1];
            v40 = (unsigned __int8)v13[2];
            v13 += 4;
            --i2;
            *(v14 - 2) = (unsigned __int16)(77 * (unsigned __int8)*(v13 - 4) + 29 * v40 + v39) >> 8;
          }
          break;
        case 25:
          for ( i3 = a4 - 1; i3 >= 0; *(v14 - 1) = *(v13 - 2) )
          {
            --i3;
            *v14 = *v13;
            v14 += 3;
            v42 = v13[1];
            v13 += 4;
            *(v14 - 2) = v42;
          }
          break;
        default:
          sub_14023E640(L"0", L"C:\\visualc2010\\code\\csl03\\stb/stb_image.h", 1729);
          free(Block);
          free(v11);
          JUMPOUT(0x14015DC4DLL);
      }
    }
    free(Block);
    return v11;
  }
}

