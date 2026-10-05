/* Address: 0x140229798 | Name: sub_140229798 | Size: 663 bytes */
__int64 __fastcall sub_140229798(unsigned __int64 a1, _QWORD **a2, _QWORD *a3)
{
  _WORD *v3; // r14
  __int64 v6; // rdi
  unsigned __int16 v7; // r9
  unsigned __int64 v8; // rax
  _QWORD *v9; // rsi
  unsigned __int16 v10; // ax
  _QWORD *v11; // r8
  unsigned __int64 v12; // rdx
  _QWORD *v13; // rbp
  unsigned __int64 v14; // rax
  _QWORD *v15; // rdx
  unsigned __int64 v16; // rax
  _QWORD *v17; // rdx
  unsigned __int16 v19; // ax
  _QWORD *v20; // rdi
  __int64 v21; // rdi
  __int64 v22; // rcx
  unsigned __int64 v23; // rax
  _QWORD *v24; // rsi
  unsigned __int16 v25; // ax
  unsigned __int64 v26; // rax
  _QWORD *v27; // rdx
  unsigned __int64 v28; // rax
  _QWORD *v29; // rdx

  v3 = (_WORD *)a1;
  LOWORD(a1) = *(_WORD *)a1;
  v6 = 0;
  v7 = a1;
  while ( (_WORD)a1 == *(_WORD *)&byte_1402858D4[v6 + 32] || (_WORD)a1 == *(_WORD *)&byte_1402858D4[v6 + 40] )
  {
    v8 = (unsigned __int64)a2[2] + 1;
    a2[2] = (_QWORD *)v8;
    if ( a2[1] && v8 > (unsigned __int64)a2[1] )
    {
      a1 = 0;
    }
    else
    {
      v9 = *a2;
      v10 = j__fgetwc_nolock(**a2);
      if ( v10 == 0xFFFF )
      {
        a1 = 0;
      }
      else
      {
        ++v9[1];
        a1 = v10;
      }
    }
    v6 += 2;
    *v3 = a1;
    v7 = a1;
    if ( v6 == 6 )
    {
      v11 = a2[1];
      v12 = (unsigned __int64)a2[2] - 1;
      a2[2] = (_QWORD *)v12;
      if ( !v11 || (v13 = (_QWORD *)v12, v14 = (unsigned __int64)v11, v12 <= (unsigned __int64)v11) )
      {
        v13 = (_QWORD *)v12;
        v14 = (unsigned __int64)v11;
        if ( (_WORD)a1 )
        {
          v15 = *a2;
          --v15[1];
          ungetwc_nolock(a1, *v15, v11);
          v14 = (unsigned __int64)a2[1];
          v13 = a2[2];
        }
      }
      a2[2] = (_QWORD *)((char *)v13 + 1);
      if ( v14 && (unsigned __int64)v13 + 1 > v14 )
      {
        v19 = 0;
      }
      else
      {
        v20 = *a2;
        v19 = j__fgetwc_nolock(**a2);
        if ( v19 == 0xFFFF )
          v19 = 0;
        else
          ++v20[1];
      }
      *v3 = v19;
      v21 = 0;
      v22 = v19;
      while ( v19 == *(_WORD *)&byte_1402858D4[v21 + 52] || v19 == *(_WORD *)&byte_1402858D4[v21 + 68] )
      {
        v23 = (unsigned __int64)a2[2] + 1;
        a2[2] = (_QWORD *)v23;
        if ( a2[1] && v23 > (unsigned __int64)a2[1] )
        {
          v22 = 0;
        }
        else
        {
          v24 = *a2;
          v25 = j__fgetwc_nolock(**a2);
          if ( v25 == 0xFFFF )
          {
            v22 = 0;
          }
          else
          {
            ++v24[1];
            v22 = v25;
          }
        }
        v21 += 2;
        *v3 = v22;
        v19 = v22;
        if ( v21 == 10 )
        {
          v26 = (unsigned __int64)a2[2] - 1;
          a2[2] = (_QWORD *)v26;
          if ( (!a2[1] || v26 <= (unsigned __int64)a2[1]) && (unsigned __int16)(v22 - 1) <= 0xFFFDu )
          {
            v27 = *a2;
            --v27[1];
            ungetwc_nolock(v22, *v27, v11);
          }
          return 3;
        }
      }
      v28 = (unsigned __int64)a2[2] - 1;
      a2[2] = (_QWORD *)v28;
      if ( (!a2[1] || v28 <= (unsigned __int64)a2[1]) && (unsigned __int16)(v22 - 1) <= 0xFFFDu )
      {
        v29 = *a2;
        --v29[1];
        ungetwc_nolock(v22, *v29, v11);
      }
      *v3 = 0;
      if ( v13 == a2[2] )
        return 3;
      goto LABEL_20;
    }
  }
  v16 = (unsigned __int64)a2[2] - 1;
  a2[2] = (_QWORD *)v16;
  if ( (!a2[1] || v16 <= (unsigned __int64)a2[1]) && (unsigned __int16)(v7 - 1) <= 0xFFFDu )
  {
    v17 = *a2;
    --v17[1];
    ungetwc_nolock(v7, *v17, a3);
  }
  *v3 = 0;
  if ( a3 != a2[2] )
LABEL_20:
    *(_BYTE *)a2[3] = 0;
  return 7;
}

