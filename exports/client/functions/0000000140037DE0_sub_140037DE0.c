/* Address: 0x140037de0 | Name: sub_140037DE0 | Size: 504 bytes */
void __fastcall sub_140037DE0(signed int a1, int a2, unsigned int a3, unsigned int a4, unsigned __int16 a5)
{
  __int64 v8; // r9
  __int64 v9; // rax
  signed int v10; // edx
  signed int v11; // r10d
  signed int v12; // eax
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
    v11 = dword_140404A6C[v9 + 111579650];
    if ( v10 < v11 && (int)(a3 >> 6) < (int)dword_140404A6C[v9 + 111579651] )
    {
      v12 = dword_140404A6C[v9 + 111579652];
      if ( (int)(a4 >> 6) < v12 )
      {
        v13 = 4LL * (int)(v10 + v11 * ((a4 >> 6) + (a3 >> 6) * v12));
        LODWORD(v14) = *(_DWORD *)(v13 + *(_QWORD *)&dword_140404A6C[2 * v8 + 421506981]);
        if ( (_DWORD)v14 != -1
          || (v14 = (int)dword_140404A6C[421506989],
              ++dword_140404A6C[421506989],
              *(_DWORD *)(v13 + *(_QWORD *)&dword_140404A6C[2 * v8 + 421506981]) = v14,
              MEMORY[0x1401FCD30](&dword_140404A6C[512 * v14 + 421506990], 0xFFFFFFFFLL, 2048),
              (_DWORD)v14 != -1) )
        {
          v15 = ((__int64)(int)v14 << 9) + (((unsigned int)a2 >> 3) & 7) + 8 * (((a4 >> 3) & 7) + 8 * ((a3 >> 3) & 7));
          LODWORD(v16) = dword_140404A6C[v15 + 421506990];
          if ( (_DWORD)v16 != -1 )
            goto LABEL_15;
          v16 = (int)dword_140404A6C[421769134];
          if ( (int)dword_140404A6C[421769134] < 2048 )
          {
            v17 = 512;
            ++dword_140404A6C[421769134];
            dword_140404A6C[v15 + 421506990] = v16;
            v18 = 67584 * v16;
            do
            {
              v18 += 132;
              *(_DWORD *)(v18 + *(_QWORD *)&dword_140404A6C[421769135] - 132) = 0;
              --v17;
            }
            while ( v17 );
            if ( (_DWORD)v16 != -1 )
            {
LABEL_15:
              v19 = (a2 & 7) + 8 * ((a4 & 7) + 8 * (a3 & 7)) + ((__int64)(int)v16 << 9);
              v20 = *(int *)(132 * v19 + *(_QWORD *)&dword_140404A6C[421769135]);
              if ( (int)v20 < 32 )
              {
                *(_DWORD *)(*(_QWORD *)&dword_140404A6C[421769135] + 4 * (v20 + 33 * v19) + 4) = a5;
                ++*(_DWORD *)(132 * v19 + *(_QWORD *)&dword_140404A6C[421769135]);
              }
            }
          }
        }
      }
    }
  }
}

