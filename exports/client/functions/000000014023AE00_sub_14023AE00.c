/* Address: 0x14023ae00 | Name: sub_14023AE00 | Size: 941 bytes */
__int64 __fastcall sub_14023AE00(
        unsigned __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        int (__fastcall *a4)(unsigned __int64, _BYTE *))
{
  unsigned __int64 v6; // r13
  __int64 v7; // rcx
  _BYTE *v8; // r15
  __int64 v9; // rcx
  unsigned __int64 v10; // rbx
  _BYTE *v11; // rbx
  unsigned __int64 i; // rdi
  unsigned __int64 v13; // r8
  _BYTE *v14; // rdx
  __int64 v15; // rbx
  char v16; // cl
  __int64 v17; // rax
  unsigned __int64 v18; // rbx
  _BYTE *v19; // rdi
  _BYTE *v20; // r8
  unsigned __int64 v21; // r9
  char v22; // cl
  unsigned __int64 v23; // r8
  _BYTE *v24; // rdx
  unsigned __int64 v25; // r9
  char v26; // cl
  unsigned __int64 v27; // r8
  _BYTE *v28; // rdx
  __int64 v29; // r9
  char v30; // cl
  unsigned __int64 v31; // rbx
  _BYTE *v32; // rsi
  _BYTE *v33; // rbp
  _BYTE *v34; // rdx
  unsigned __int64 v35; // r9
  char v36; // cl
  _BYTE *v37; // rax
  __int64 v39; // [rsp+0h] [rbp-468h] BYREF
  __int64 v40; // [rsp+20h] [rbp-448h]
  _QWORD v41[127]; // [rsp+30h] [rbp-438h]

  v6 = a1;
  if ( (a1 || !a2) && a3 && a4 )
  {
    if ( a2 >= 2 )
    {
      v8 = (_BYTE *)(a1 + a3 * (a2 - 1));
      v9 = 0;
      v40 = 0;
      while ( 1 )
      {
        while ( 1 )
        {
          v10 = (unsigned __int64)&v8[-v6] / a3 + 1;
          if ( v10 <= 8 )
          {
            if ( (unsigned __int64)v8 > v6 )
            {
              do
              {
                v11 = (_BYTE *)v6;
                for ( i = a3 + v6; i <= (unsigned __int64)v8; i += a3 )
                {
                  if ( a4(i, v11) > 0 )
                    v11 = (_BYTE *)i;
                }
                v13 = a3;
                v14 = v8;
                if ( v11 != v8 )
                {
                  v15 = v11 - v8;
                  do
                  {
                    v16 = v14[v15];
                    v14[v15] = *v14;
                    *v14++ = v16;
                    --v13;
                  }
                  while ( v13 );
                }
                v8 -= a3;
              }
              while ( (unsigned __int64)v8 > v6 );
              v9 = v40;
            }
            goto LABEL_19;
          }
          v18 = a3 * (v10 >> 1);
          v19 = (_BYTE *)(v18 + v6);
          if ( a4(v6, (_BYTE *)(v18 + v6)) > 0 )
          {
            v21 = a3;
            v20 = (_BYTE *)(v18 + v6);
            if ( (_BYTE *)v6 != v19 )
            {
              do
              {
                v22 = v20[-v18];
                v20[-v18] = *v20;
                *v20++ = v22;
                --v21;
              }
              while ( v21 );
            }
          }
          if ( ((int (__fastcall *)(unsigned __int64, _BYTE *, _BYTE *, unsigned __int64))a4)(v6, v8, v20, v21) > 0 )
          {
            v23 = a3;
            v24 = v8;
            if ( (_BYTE *)v6 != v8 )
            {
              v25 = v6 - (_QWORD)v8;
              do
              {
                v26 = v24[v25];
                v24[v25] = *v24;
                *v24++ = v26;
                --v23;
              }
              while ( v23 );
            }
          }
          if ( ((int (__fastcall *)(unsigned __int64, _BYTE *, unsigned __int64))a4)(v18 + v6, v8, v23) > 0 )
          {
            v27 = a3;
            v28 = v8;
            if ( v19 != v8 )
            {
              v29 = v19 - v8;
              do
              {
                v30 = v28[v29];
                v28[v29] = *v28;
                *v28++ = v30;
                --v27;
              }
              while ( v27 );
            }
          }
          v31 = v6;
          v32 = v8;
          while ( 1 )
          {
            if ( (unsigned __int64)v19 > v31 )
            {
              while ( 1 )
              {
                v31 += a3;
                if ( v31 >= (unsigned __int64)v19 )
                  break;
                if ( ((int (__fastcall *)(unsigned __int64, _BYTE *, unsigned __int64))a4)(v31, v19, v27) > 0 )
                {
                  if ( (unsigned __int64)v19 > v31 )
                    goto LABEL_39;
                  goto LABEL_37;
                }
              }
            }
            do
LABEL_37:
              v31 += a3;
            while ( v31 <= (unsigned __int64)v8
                 && ((int (__fastcall *)(unsigned __int64, _BYTE *, unsigned __int64))a4)(v31, v19, v27) <= 0 );
            do
            {
LABEL_39:
              v33 = v32;
              v32 -= a3;
            }
            while ( v32 > v19 && a4((unsigned __int64)v32, v19) > 0 );
            if ( (unsigned __int64)v32 < v31 )
              break;
            v27 = a3;
            v34 = v32;
            if ( v32 != (_BYTE *)v31 )
            {
              v35 = v31 - (_QWORD)v32;
              do
              {
                v36 = v34[v35];
                v34[v35] = *v34;
                *v34++ = v36;
                --v27;
              }
              while ( v27 );
            }
            v37 = (_BYTE *)v31;
            if ( v19 != v32 )
              v37 = v19;
            v19 = v37;
          }
          if ( v19 < v33 )
          {
            while ( 1 )
            {
              v33 -= a3;
              if ( v33 <= v19 )
                break;
              if ( a4((unsigned __int64)v33, v19) )
              {
                if ( v19 < v33 )
                  goto LABEL_54;
                goto LABEL_52;
              }
            }
          }
          do
LABEL_52:
            v33 -= a3;
          while ( (unsigned __int64)v33 > v6 && !a4((unsigned __int64)v33, v19) );
LABEL_54:
          v9 = v40;
          if ( (__int64)&v33[-v6] >= (__int64)&v8[-v31] )
            break;
          if ( v31 < (unsigned __int64)v8 )
          {
            v41[v40] = v31;
            v41[v9++ + 62] = v8;
            v40 = v9;
          }
          if ( v6 >= (unsigned __int64)v33 )
          {
LABEL_19:
            v17 = v9--;
            v40 = v9;
            if ( v17 <= 0 )
              return MEMORY[0x1401F8B20]((unsigned __int64)&v39 ^ v41[124]);
            v6 = v41[v9];
            v8 = (_BYTE *)v41[v9 + 62];
          }
          else
          {
            v8 = v33;
          }
        }
        if ( v6 < (unsigned __int64)v33 )
        {
          v41[v40] = v6;
          v41[v9++ + 62] = v33;
          v40 = v9;
        }
        if ( v31 >= (unsigned __int64)v8 )
          goto LABEL_19;
        v6 = v31;
      }
    }
  }
  else
  {
    *errno() = 22;
    sub_14024CF6C(v7);
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&v39 ^ v41[124]);
}

