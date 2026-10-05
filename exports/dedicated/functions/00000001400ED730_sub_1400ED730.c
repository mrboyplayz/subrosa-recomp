/* Address: 0x1400ed730 | Name: sub_1400ED730 | Size: 842 bytes */
__int64 __fastcall sub_1400ED730(int a1, unsigned int a2)
{
  __int64 result; // rax
  unsigned __int64 v3; // r12
  __int64 v4; // r15
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // rbx
  int v7; // edx
  char *v8; // rcx
  int *v9; // r13
  __int64 v10; // rsi
  _DWORD *v11; // rbx
  char *v12; // rdi
  __int64 v13; // r14
  int v14; // edi
  int *v15; // rbx
  const char **v16; // r14
  __int64 v17; // rsi
  int v18; // r9d
  int v19; // eax
  __int64 v21; // [rsp+20h] [rbp-458h]
  unsigned __int64 v22; // [rsp+28h] [rbp-450h]
  char Buffer[1024]; // [rsp+30h] [rbp-448h] BYREF

  result = a1;
  v3 = 138612LL * a1;
  v4 = (int)a2;
  v5 = 2156LL * (int)a2;
  v22 = v5;
  v6 = v5 + v3;
  if ( !dword_178C5B8E0[v5 / 4 + 8220 + v3 / 4] )
  {
    *(int *)((char *)&dword_178C5B8E0[8220] + v6) = 1;
    if ( dword_178C5B8E0[v3 / 4 + 8218] < 2 )
    {
      v7 = *(int *)((char *)&dword_178C5B8E0[8221] + v6);
      v8 = &byte_178C6397C[v6];
      v9 = (int *)((char *)&unk_178C63978 + v6);
      if ( v7 <= 0 )
      {
        *v9 = 0;
        sub_1400DBB30(v8, "TRADE");
        ++*v9;
        sub_1400DBB30(&byte_178C6417C[v6], "Trade");
        result = a2;
        v14 = 0;
        v15 = (int *)((char *)&unk_178C63978 + v3);
        v16 = (const char **)off_140146AB0;
        v17 = 0;
        do
        {
          if ( v14 != (_DWORD)result )
          {
            v18 = *(v15 - 9);
            if ( v18 > 0 )
            {
              if ( dword_178C5B8E0[v3 / 4 + 8218] )
              {
                v19 = *v15;
              }
              else
              {
                *v15 = 0;
                v19 = 0;
              }
              sub_1400DBB30(
                &byte_178C6397C[256 * (__int64)v19 + v17 + v3],
                "%s HAS THE FILE  VALUE: $%d",
                off_140146AB0[v4],
                v18);
              ++*v15;
              sub_1400DBB30(&byte_178C6417C[v3 + v17], "Trade");
              sub_1400DBB30(
                Buffer,
                "%s has obtained the file for the\n%s project",
                off_140146AB0[v4],
                &byte_178C85670[v3]);
              sub_1400ED4A0(v14, Buffer);
              sub_1400DBB30(&byte_178C6397C[256 * (__int64)*v9 + v3 + v22], "%s WANTS THE FILE", *v16);
              ++*v9;
              result = a2;
            }
          }
          ++v14;
          v17 += 2156;
          v15 += 539;
          ++v16;
        }
        while ( v14 < 6 );
        dword_178C5B8E0[v3 / 4 + 8218] = 1;
      }
      else
      {
        dword_178C5B8E0[5 * v4 + 8879384] += v7;
        v21 = 5 * v4;
        *v9 = 0;
        sub_1400DBB30(v8, "MISSION SUCCESS");
        sub_1400DBB30(
          &byte_178C6397C[256 * (__int64)++*v9 + v3 + v5],
          "VALUE: $%d",
          *(int *)((char *)&dword_178C5B8E0[8221] + v6));
        ++*v9;
        sub_1400DBB30(&byte_178C6417C[v6], "Success");
        v10 = 0;
        v11 = (_DWORD *)((char *)&unk_178C63978 + v3);
        v12 = &byte_178C6417C[v3];
        v13 = 6;
        do
        {
          if ( v10 != v4 )
          {
            *v11 = 0;
            sub_1400DBB30(v12 - 2048, "MISSION CLOSED");
            ++*v11;
            sub_1400DBB30(v12, "Closed");
          }
          v12 += 2156;
          ++v10;
          v11 += 539;
          --v13;
        }
        while ( v13 );
        result = 20 * v4;
        dword_178C5B8E0[v3 / 4 + 8218] = 2;
        if ( dword_178C5B8E0[v21 + 8879387] > 0 )
          dword_178C5B8E0[v21 + 8879387] = 1;
      }
    }
  }
  return result;
}

