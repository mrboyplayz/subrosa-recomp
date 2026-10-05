/* Address: 0x1400ef1f0 | Name: sub_1400EF1F0 | Size: 501 bytes */
int __fastcall sub_1400EF1F0(int a1, int a2)
{
  __int64 v2; // r15
  __int64 v3; // rsi
  FILE *v4; // rax
  FILE *v5; // r9
  int v6; // eax
  unsigned int v7; // ebx
  char *v8; // r14
  _DWORD *v9; // rdi
  char FileName[512]; // [rsp+20h] [rbp-238h] BYREF

  v2 = a1;
  v3 = 1060912LL * a1;
  strcpy(FileName, "test.csx");
  if ( a2 )
  {
    v4 = fopen(FileName, "wb");
    *(FILE **)((char *)&Stream + v3) = v4;
    v5 = v4;
    if ( v4 )
    {
      v6 = dword_140146A34;
      *(_DWORD *)((char *)&Stream + v3 + 8) = 1;
      *(FILE **)((char *)&Stream + v3 + 16) = (FILE *)12;
      *(_DWORD *)&algn_1407A92AC[v3] = v6;
      fwrite(&algn_1407A92AC[v3], 0xCu, 1u, v5);
      LODWORD(v4) = (unsigned int)memset((char *)&unk_1408A92B8 + v3, 0, 0x3014u);
    }
  }
  else
  {
    v4 = fopen(FileName, "rb");
    *(FILE **)((char *)&Stream + v3) = v4;
    if ( v4 )
    {
      v7 = 0;
      *(_DWORD *)((char *)&Stream + v3 + 8) = 0;
      fread((char *)&Stream + v3 + 12, 0xCu, 1u, v4);
      memset((char *)&unk_1408A92B8 + v3, 0, 0x3014u);
      v8 = (char *)&Stream + v3;
      if ( *(_DWORD *)((char *)&Stream + v3 + 12) == dword_140146A34 )
      {
        LODWORD(v4) = fseek(*(FILE **)((char *)&Stream + v3), *(_DWORD *)((char *)&Stream + v3 + 16), 0);
        if ( *((_DWORD *)v8 + 5) )
        {
          v9 = (_DWORD *)((char *)&unk_1407A92B8 + v3);
          do
          {
            LODWORD(v4) = fread(
                            (char *)&unk_1407A92B8 + 64 * (__int64)(int)v7 + v3,
                            0x40u,
                            1u,
                            *(FILE **)((char *)&Stream + v3));
            if ( *v9 == 1482293250 )
            {
              v4 = (FILE *)*(int *)((char *)&Stream + v3 + 1052700);
              *((_DWORD *)&Stream + (_QWORD)v4 + 265228 * v2 + 263176) = v7;
              ++*(_DWORD *)((char *)&Stream + v3 + 1052700);
            }
            ++v7;
            v9 += 16;
          }
          while ( v7 < *((_DWORD *)v8 + 5) );
        }
      }
      else
      {
        *((_DWORD *)v8 + 5) = 0;
        LODWORD(v4) = sub_1400EF000(v2);
      }
    }
  }
  return (int)v4;
}

