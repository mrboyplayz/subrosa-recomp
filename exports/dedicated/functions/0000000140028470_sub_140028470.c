/* Address: 0x140028470 | Name: sub_140028470 | Size: 504 bytes */
void __fastcall sub_140028470(signed int a1, int a2, unsigned int a3, unsigned int a4, unsigned __int16 a5)
{
  __int64 v8; // r9
  __int64 v9; // rax
  signed int v10; // edx
  int v11; // r10d
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rbp
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rax

  if ( (unsigned int)a1 <= 3 && a2 >= 0 && (a3 & 0x80000000) == 0 && (a4 & 0x80000000) == 0 )
  {
    v8 = a1;
    v9 = 263004LL * a1;
    v10 = (unsigned int)a2 >> 6;
    v11 = dword_16CDE9ED4[v9];
    if ( v10 < v11 && (int)(a3 >> 6) < dword_16CDE9ED8[v9] )
    {
      v12 = dword_16CDE9EDC[v9];
      if ( (int)(a4 >> 6) < v12 )
      {
        v13 = 4LL * (int)(v10 + v11 * ((a4 >> 6) + (a3 >> 6) * v12));
        LODWORD(v14) = *(_DWORD *)(v13 + qword_196AC5980[v8]);
        if ( (_DWORD)v14 != -1
          || (v14 = dword_196AC59A0,
              ++dword_196AC59A0,
              *(_DWORD *)(v13 + qword_196AC5980[v8]) = v14,
              memset(&dword_196AC59A4[512 * v14], -1, 0x800u),
              (_DWORD)v14 != -1) )
        {
          v15 = ((__int64)(int)v14 << 9) + (((unsigned int)a2 >> 3) & 7) + 8 * (((a4 >> 3) & 7) + 8 * ((a3 >> 3) & 7));
          LODWORD(v16) = dword_196AC59A4[v15];
          if ( (_DWORD)v16 != -1 )
            goto LABEL_15;
          v16 = dword_196BC59A4;
          if ( dword_196BC59A4 < 2048 )
          {
            v17 = 512;
            ++dword_196BC59A4;
            dword_196AC59A4[v15] = v16;
            v18 = 67584 * v16;
            do
            {
              v18 += 132;
              *(_DWORD *)(v18 + qword_196BC59A8 - 132) = 0;
              --v17;
            }
            while ( v17 );
            if ( (_DWORD)v16 != -1 )
            {
LABEL_15:
              v19 = (a2 & 7) + 8 * ((a4 & 7) + 8 * (a3 & 7)) + ((__int64)(int)v16 << 9);
              v20 = *(int *)(132 * v19 + qword_196BC59A8);
              if ( (int)v20 < 32 )
              {
                *(_DWORD *)(qword_196BC59A8 + 4 * (v20 + 33 * v19) + 4) = a5;
                ++*(_DWORD *)(132 * v19 + qword_196BC59A8);
              }
            }
          }
        }
      }
    }
  }
}

