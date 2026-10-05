/* Address: 0x14006d1f0 | Name: sub_14006D1F0 | Size: 939 bytes */
__int64 __fastcall sub_14006D1F0(unsigned int a1)
{
  unsigned __int64 v2; // rdi
  __int64 v3; // rbp
  __int64 result; // rax
  int v5; // eax
  char *v6; // rdx
  int v7; // ebx
  unsigned int *v8; // r14
  unsigned __int64 v9; // r8
  int v10; // r10d
  __int64 v11; // rcx
  __int64 v12; // rdx
  char *v13; // rcx
  _DWORD *v15; // r14
  int v16; // ebx
  unsigned int *v17; // rdi

  v2 = 7040LL * (int)a1;
  v3 = (int)a1;
  result = *(unsigned int *)((char *)&unk_1902605DC + v2);
  if ( (int)result > 0 )
  {
    result = (unsigned int)(result - 1);
    *(_DWORD *)((char *)&unk_1902605DC + v2) = result;
    if ( !(_DWORD)result )
    {
      if ( !*(_DWORD *)((char *)&unk_1902605D8 + v2) )
      {
        v5 = sub_140037580(a1, *(_DWORD *)((char *)&unk_1902605E0 + v2));
        if ( v5 == -1 )
        {
          v6 = "DISK ERROR";
        }
        else
        {
          sub_14004C820(
            v5,
            *(_DWORD *)((char *)&unk_1902605E4 + v2),
            &byte_1902605F0[v2],
            *(_DWORD *)&byte_1902605F0[v2 + 32]);
          v6 = "  1 FILE(S) COPIED.";
        }
        sub_1400DBB30(&byte_19025F434[64 * (110 * v3 + SLODWORD(qword_19025F428[v2 / 8]))], v6);
        sub_14006D120(a1);
        result = *(unsigned int *)((char *)&unk_190260614 + v2);
        if ( (_DWORD)result )
        {
          v7 = 0;
          if ( (int)result > 0 )
          {
            v8 = (unsigned int *)((char *)&unk_190260618 + v2);
            do
            {
              result = sub_140070100(a1, *v8);
              ++v7;
              ++v8;
            }
            while ( v7 < *(_DWORD *)((char *)&unk_190260614 + v2) );
          }
          *(_DWORD *)((char *)&unk_190260614 + v2) = 0;
        }
        else
        {
          result = sub_140070100(a1, 8);
        }
      }
      if ( *(_DWORD *)((char *)&unk_1902605D8 + v2) == 1 )
      {
        LODWORD(result) = sub_140037580(a1, *(_DWORD *)((char *)&unk_1902605E0 + v2));
        if ( (_DWORD)result == -1 )
        {
          sub_1400DBB30(&byte_19025F434[64 * (110 * v3 + SLODWORD(qword_19025F428[v2 / 8]))], "DISK ERROR");
          result = sub_14006D120(a1);
        }
        else
        {
          result = (int)result;
          v9 = 2570LL * (int)result;
          v10 = dword_18F7174C8[v9];
          while ( 1 )
          {
            while ( 1 )
            {
              v11 = *(int *)((char *)&unk_1902605E8 + v2);
              if ( (int)v11 < v10 )
                break;
              v12 = *(int *)((char *)&unk_1902605EC + v2);
              if ( (int)v12 >= *(_DWORD *)((char *)&unk_18F7184CC + v9 * 4) )
                goto LABEL_27;
              if ( dword_18F7184E4[6 * v12 + v9] == *(_DWORD *)((char *)&unk_1902605E4 + v2) )
              {
                sub_1400DBB30(&byte_19025F434[64 * (110 * v3 + SLODWORD(qword_19025F428[v2 / 8]))], "%s");
                sub_14006D120(a1);
                result = (110 * v3 + SLODWORD(qword_19025F428[v2 / 8])) << 6;
                byte_19025F434[result] = 0;
                ++*(_DWORD *)((char *)&unk_1902605EC + v2);
                *(_DWORD *)((char *)&unk_1902605DC + v2) = 4;
                goto LABEL_27;
              }
              result = (unsigned int)(v12 + 1);
              *(_DWORD *)((char *)&unk_1902605EC + v2) = result;
            }
            if ( dword_18F7174D8[4 * v11 + v9] == *(_DWORD *)((char *)&unk_1902605E4 + v2) )
              break;
            result = (unsigned int)(v11 + 1);
            *(_DWORD *)((char *)&unk_1902605E8 + v2) = result;
          }
          sub_1400DBB30(&byte_19025F434[64 * (110 * v3 + SLODWORD(qword_19025F428[v2 / 8]))], "%s            ");
          byte_19025F434[64 * (110 * v3 + SLODWORD(qword_19025F428[v2 / 8])) + 11] = 0;
          v13 = &byte_19025F434[64 * (110 * v3 + SLODWORD(qword_19025F428[v2 / 8])) - 1];
          while ( *++v13 != 0 )
            ;
          strcpy(v13, "<DIR>");
          sub_14006D120(a1);
          result = (110 * v3 + SLODWORD(qword_19025F428[v2 / 8])) << 6;
          byte_19025F434[result] = 0;
          ++*(_DWORD *)((char *)&unk_1902605E8 + v2);
          *(_DWORD *)((char *)&unk_1902605DC + v2) = 4;
        }
LABEL_27:
        if ( !*(_DWORD *)((char *)&unk_1902605DC + v2) )
        {
          sub_14006D120(a1);
          v15 = (_DWORD *)((char *)&unk_190260614 + v2);
          byte_19025F434[64 * (110 * v3 + SLODWORD(qword_19025F428[v2 / 8]))] = 0;
          byte_190260474[v2] = 0;
          result = *(unsigned int *)((char *)&unk_190260614 + v2);
          if ( (_DWORD)result )
          {
            v16 = 0;
            if ( (int)result > 0 )
            {
              v17 = (unsigned int *)(0x140000000LL + v2 + 1344669208);
              do
              {
                result = sub_140070100(a1, *v17);
                ++v16;
                ++v17;
              }
              while ( v16 < *v15 );
            }
            *v15 = 0;
          }
          else
          {
            return sub_140070100(a1, 8);
          }
        }
      }
    }
  }
  return result;
}

