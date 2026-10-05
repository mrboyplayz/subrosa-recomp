/* Address: 0x14015dd00 | Name: sub_14015DD00 | Size: 1272 bytes */
char *__fastcall sub_14015DD00(char *Block, int a2, int a3, int a4, int a5)
{
  char *v10; // r14
  int v11; // r11d
  char *v12; // r9
  char *v13; // rax
  int i; // edx
  int j; // edx
  __int16 v16; // cx
  int k; // edx
  __int16 v18; // cx
  int m; // edx
  int n; // edx
  __int16 v21; // cx
  int ii; // edx
  __int16 v23; // cx
  int mm; // edx
  __int16 v25; // cx
  int jj; // r10d
  int v27; // r8d
  int v28; // ecx
  int kk; // r10d
  int v30; // r8d
  int v31; // ecx
  int v32; // edx
  int v33; // ecx
  int nn; // r10d
  int v35; // r8d
  int v36; // ecx
  int i1; // r10d
  int v38; // r8d
  int v39; // ecx
  int i2; // edx
  __int16 v41; // cx

  if ( a3 == a2 )
    return Block;
  if ( (unsigned int)(a3 - 1) > 3 )
    sub_14023E640(L"req_comp >= 1 && req_comp <= 4", L"C:\\visualc2010\\code\\csl03\\stb/stb_image.h", 1757);
  v10 = (char *)j__malloc_base((unsigned int)(2 * a5 * a4 * a3));
  if ( v10 )
  {
    v11 = 0;
    if ( a5 > 0 )
    {
      while ( 2 )
      {
        v12 = &Block[2 * a4 * a2 * v11];
        v13 = &v10[2 * a4 * a3 * v11];
        switch ( a3 + 8 * a2 - 10 )
        {
          case 0:
            for ( i = a4 - 1; i >= 0; v13 += 4 )
            {
              --i;
              *(_WORD *)v13 = *(_WORD *)v12;
              v12 += 2;
              *((_WORD *)v13 + 1) = -1;
            }
            goto LABEL_44;
          case 1:
            for ( j = a4 - 1; j >= 0; v13 += 6 )
            {
              --j;
              v16 = *(_WORD *)v12;
              *((_WORD *)v13 + 2) = *(_WORD *)v12;
              v12 += 2;
              *((_WORD *)v13 + 1) = v16;
              *(_WORD *)v13 = v16;
            }
            goto LABEL_44;
          case 2:
            for ( k = a4 - 1; k >= 0; v13 += 8 )
            {
              --k;
              v18 = *(_WORD *)v12;
              *((_WORD *)v13 + 2) = *(_WORD *)v12;
              v12 += 2;
              *((_WORD *)v13 + 1) = v18;
              *(_WORD *)v13 = v18;
              *((_WORD *)v13 + 3) = -1;
            }
            goto LABEL_44;
          case 7:
            for ( m = a4 - 1; m >= 0; v12 += 4 )
            {
              --m;
              *(_WORD *)v13 = *(_WORD *)v12;
              v13 += 2;
            }
            goto LABEL_44;
          case 9:
            for ( n = a4 - 1; n >= 0; v13 += 6 )
            {
              --n;
              v21 = *(_WORD *)v12;
              *((_WORD *)v13 + 2) = *(_WORD *)v12;
              v12 += 4;
              *((_WORD *)v13 + 1) = v21;
              *(_WORD *)v13 = v21;
            }
            goto LABEL_44;
          case 10:
            for ( ii = a4 - 1; ii >= 0; *((_WORD *)v13 - 1) = *((_WORD *)v12 - 1) )
            {
              --ii;
              v23 = *(_WORD *)v12;
              *((_WORD *)v13 + 2) = *(_WORD *)v12;
              v12 += 4;
              *((_WORD *)v13 + 1) = v23;
              *(_WORD *)v13 = v23;
              v13 += 8;
            }
            goto LABEL_44;
          case 15:
            for ( jj = a4 - 1;
                  jj >= 0;
                  *((_WORD *)v13 - 1) = (77 * (unsigned int)*((unsigned __int16 *)v12 - 3) + 29 * v28 + v27) >> 8 )
            {
              v13 += 2;
              v27 = 150 * *((unsigned __int16 *)v12 + 1);
              v28 = *((unsigned __int16 *)v12 + 2);
              v12 += 6;
              --jj;
            }
            goto LABEL_44;
          case 16:
            for ( kk = a4 - 1; kk >= 0; *((_WORD *)v13 - 2) = (unsigned int)(77 * v33 + v32 + v30) >> 8 )
            {
              v13 += 4;
              v30 = 150 * *((unsigned __int16 *)v12 + 1);
              v31 = *((unsigned __int16 *)v12 + 2);
              v12 += 6;
              v32 = 29 * v31;
              v33 = *((unsigned __int16 *)v12 - 3);
              *((_WORD *)v13 - 1) = -1;
              --kk;
            }
            goto LABEL_44;
          case 18:
            for ( mm = a4 - 1; mm >= 0; *((_WORD *)v13 - 1) = -1 )
            {
              --mm;
              *(_WORD *)v13 = *(_WORD *)v12;
              v13 += 8;
              v25 = *((_WORD *)v12 + 1);
              v12 += 6;
              *((_WORD *)v13 - 3) = v25;
              *((_WORD *)v13 - 2) = *((_WORD *)v12 - 1);
            }
            goto LABEL_44;
          case 23:
            for ( nn = a4 - 1;
                  nn >= 0;
                  *((_WORD *)v13 - 1) = (77 * (unsigned int)*((unsigned __int16 *)v12 - 4) + 29 * v36 + v35) >> 8 )
            {
              v13 += 2;
              v35 = 150 * *((unsigned __int16 *)v12 + 1);
              v36 = *((unsigned __int16 *)v12 + 2);
              v12 += 8;
              --nn;
            }
            goto LABEL_44;
          case 24:
            for ( i1 = a4 - 1; i1 >= 0; *((_WORD *)v13 - 1) = *((_WORD *)v12 - 1) )
            {
              v13 += 4;
              v38 = 150 * *((unsigned __int16 *)v12 + 1);
              v39 = *((unsigned __int16 *)v12 + 2);
              v12 += 8;
              --i1;
              *((_WORD *)v13 - 2) = (77 * (unsigned int)*((unsigned __int16 *)v12 - 4) + 29 * v39 + v38) >> 8;
            }
            goto LABEL_44;
          case 25:
            for ( i2 = a4 - 1; i2 >= 0; *((_WORD *)v13 - 1) = *((_WORD *)v12 - 2) )
            {
              --i2;
              *(_WORD *)v13 = *(_WORD *)v12;
              v13 += 6;
              v41 = *((_WORD *)v12 + 1);
              v12 += 8;
              *((_WORD *)v13 - 2) = v41;
            }
LABEL_44:
            if ( ++v11 >= a5 )
              break;
            continue;
          default:
            sub_14023E640(L"0", L"C:\\visualc2010\\code\\csl03\\stb/stb_image.h", 1786);
            free(Block);
            free(v10);
            *(_QWORD *)(*(_QWORD *)(__readgsqword(0x58u) + 8LL * dword_140404A6C[19064470]) + 16LL) = "unsupported";
            return nullptr;
        }
        break;
      }
    }
    free(Block);
    return v10;
  }
  else
  {
    free(Block);
    *(_QWORD *)(*(_QWORD *)(__readgsqword(0x58u) + 8LL * dword_140404A6C[19064470]) + 16LL) = "outofmem";
    return nullptr;
  }
}

