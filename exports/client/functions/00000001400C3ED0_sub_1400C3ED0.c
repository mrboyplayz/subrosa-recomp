/* Address: 0x1400c3ed0 | Name: sub_1400C3ED0 | Size: 939 bytes */
__int64 __fastcall sub_1400C3ED0(unsigned int a1)
{
  __int64 v2; // rdi
  __int64 v3; // rbp
  __int64 result; // rax
  unsigned int v5; // eax
  __int64 v6; // rbx
  signed int v7; // ebx
  unsigned int *v8; // r14
  __int64 v9; // r8
  int v10; // r10d
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // r9
  char *v15; // rcx
  unsigned int *v17; // r14
  signed int v18; // ebx
  unsigned int *v19; // rdi

  v2 = 1760LL * (int)a1;
  v3 = (int)a1;
  result = dword_140404A6C[v2 + 278847244];
  if ( (int)result > 0 )
  {
    result = (unsigned int)(result - 1);
    dword_140404A6C[v2 + 278847244] = result;
    if ( !(_DWORD)result )
    {
      if ( !dword_140404A6C[v2 + 278847243] )
      {
        v5 = sub_14004C960(a1, dword_140404A6C[v2 + 278847245]);
        v6 = 110 * v3;
        if ( v5 == -1 )
        {
          sub_140158AB0(&dword_140404A6C[16 * (v6 + (int)dword_140404A6C[v2 + 278846111]) + 278846114], "DISK ERROR");
        }
        else
        {
          sub_140080690(
            v5,
            dword_140404A6C[v2 + 278847246],
            &dword_140404A6C[v2 + 278847249],
            dword_140404A6C[v2 + 278847257]);
          sub_140158AB0(
            &dword_140404A6C[16 * (v6 + (int)dword_140404A6C[v2 + 278846111]) + 278846114],
            "  1 FILE(S) COPIED.");
        }
        sub_1400C3E00(a1);
        result = dword_140404A6C[v2 + 278847258];
        if ( (_DWORD)result )
        {
          v7 = 0;
          if ( (int)result > 0 )
          {
            v8 = &dword_140404A6C[v2 + 278847259];
            do
            {
              result = sub_1400C6D90(a1, *v8);
              ++v7;
              ++v8;
            }
            while ( v7 < (int)dword_140404A6C[v2 + 278847258] );
          }
          dword_140404A6C[v2 + 278847258] = 0;
        }
        else
        {
          result = sub_1400C6D90(a1, 8);
        }
      }
      if ( dword_140404A6C[v2 + 278847243] == 1 )
      {
        LODWORD(result) = sub_14004C960(a1, dword_140404A6C[v2 + 278847245]);
        if ( (_DWORD)result == -1 )
        {
          sub_140158AB0(
            &dword_140404A6C[16 * (110 * v3 + (int)dword_140404A6C[v2 + 278846111]) + 278846114],
            "DISK ERROR");
          result = sub_1400C3E00(a1);
        }
        else
        {
          result = (int)result;
          v9 = 2570LL * (int)result;
          v10 = dword_140404A6C[v9 + 275753047];
          while ( 1 )
          {
            while ( 1 )
            {
              v11 = (int)dword_140404A6C[v2 + 278847247];
              if ( (int)v11 < v10 )
                break;
              v13 = (int)dword_140404A6C[v2 + 278847248];
              if ( (int)v13 >= (int)dword_140404A6C[v9 + 275754072] )
                goto LABEL_27;
              v14 = v9 * 4 + 24 * v13;
              if ( *(unsigned int *)((char *)&dword_140404A6C[275754078] + v14) == dword_140404A6C[v2 + 278847246] )
              {
                sub_140158AB0(
                  &dword_140404A6C[16 * (110 * v3 + (int)dword_140404A6C[v2 + 278846111]) + 278846114],
                  "%s",
                  (const char *)&dword_140404A6C[275754074] + v14);
                sub_1400C3E00(a1);
                result = (110 * v3 + (int)dword_140404A6C[v2 + 278846111]) << 6;
                *((_BYTE *)&dword_140404A6C[278846114] + result) = 0;
                ++dword_140404A6C[v2 + 278847248];
                dword_140404A6C[v2 + 278847244] = 4;
                goto LABEL_27;
              }
              result = (unsigned int)(v13 + 1);
              dword_140404A6C[v2 + 278847248] = result;
            }
            v12 = v9 * 4 + 16 * v11;
            if ( *(unsigned int *)((char *)&dword_140404A6C[275753051] + v12) == dword_140404A6C[v2 + 278847246] )
              break;
            result = (unsigned int)(v11 + 1);
            dword_140404A6C[v2 + 278847247] = result;
          }
          sub_140158AB0(
            &dword_140404A6C[16 * (110 * v3 + (int)dword_140404A6C[v2 + 278846111]) + 278846114],
            "%s            ",
            (const char *)&dword_140404A6C[275753048] + v12);
          HIBYTE(dword_140404A6C[16 * (110 * v3 + (int)dword_140404A6C[v2 + 278846111]) + 278846116]) = 0;
          v15 = (char *)&dword_140404A6C[16 * (110 * v3 + (int)dword_140404A6C[v2 + 278846111]) + 278846113] + 3;
          while ( *++v15 != 0 )
            ;
          strcpy(v15, "<DIR>");
          sub_1400C3E00(a1);
          result = (110 * v3 + (int)dword_140404A6C[v2 + 278846111]) << 6;
          *((_BYTE *)&dword_140404A6C[278846114] + result) = 0;
          ++dword_140404A6C[v2 + 278847247];
          dword_140404A6C[v2 + 278847244] = 4;
        }
LABEL_27:
        if ( !dword_140404A6C[v2 + 278847244] )
        {
          sub_1400C3E00(a1);
          v17 = &dword_140404A6C[v2 + 278847258];
          LOBYTE(dword_140404A6C[16 * (110 * v3 + (int)dword_140404A6C[v2 + 278846111]) + 278846114]) = 0;
          LOBYTE(dword_140404A6C[v2 + 278847154]) = 0;
          result = dword_140404A6C[v2 + 278847258];
          if ( (_DWORD)result )
          {
            v18 = 0;
            if ( (int)result > 0 )
            {
              v19 = (unsigned int *)(0x140000000LL + v2 * 4 + 1119602392);
              do
              {
                result = sub_1400C6D90(a1, *v19);
                ++v18;
                ++v19;
              }
              while ( v18 < (int)*v17 );
            }
            *v17 = 0;
          }
          else
          {
            return sub_1400C6D90(a1, 8);
          }
        }
      }
    }
  }
  return result;
}

