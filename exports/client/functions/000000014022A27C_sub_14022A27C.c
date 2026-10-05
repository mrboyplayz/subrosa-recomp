/* Address: 0x14022a27c | Name: sub_14022A27C | Size: 736 bytes */
__int64 __fastcall sub_14022A27C(unsigned __int64 a1, _QWORD **a2, _QWORD *a3)
{
  _WORD *v3; // r14
  __int64 i; // rdi
  unsigned __int64 v6; // rax
  _QWORD *v7; // rsi
  unsigned __int16 v8; // ax
  _QWORD *v9; // r9
  unsigned __int64 v10; // r8
  _QWORD *v11; // rdx
  _QWORD *v12; // rax
  _QWORD *v13; // rdx
  _QWORD *v14; // rdx
  __int16 v15; // ax
  _QWORD *v17; // rdi
  unsigned __int64 v18; // rax
  __int16 v19; // ax
  _QWORD *v20; // rdi
  __int64 v21; // rcx
  unsigned __int64 v22; // rax
  _QWORD *v23; // rdx
  char v24; // al
  __int64 v25; // rcx
  unsigned __int64 v26; // rax
  _QWORD *v27; // rdx
  unsigned __int64 v28; // rax
  _QWORD *v29; // rdi
  __int16 v30; // ax
  _QWORD v31[4]; // [rsp+20h] [rbp-48h] BYREF
  _QWORD *v32; // [rsp+80h] [rbp+18h] BYREF

  v32 = a3;
  v31[1] = a1;
  v31[0] = a2;
  v3 = (_WORD *)a1;
  v31[2] = &v32;
  LOWORD(a1) = *(_WORD *)a1;
  for ( i = 0; i != 6; i += 2 )
  {
    if ( (_WORD)a1 != *(_WORD *)&byte_1402858D4[i + 80] && (_WORD)a1 != *(_WORD *)&byte_1402858D4[i + 88] )
    {
      _lambda_2869a9057330eafa474e853b0696fc23_::operator()(v31);
      return 7;
    }
    v6 = (unsigned __int64)a2[2] + 1;
    a2[2] = (_QWORD *)v6;
    if ( a2[1] && v6 > (unsigned __int64)a2[1] )
    {
      a1 = 0;
    }
    else
    {
      v7 = *a2;
      v8 = j__fgetwc_nolock(**a2);
      if ( v8 == 0xFFFF )
      {
        a1 = 0;
      }
      else
      {
        ++v7[1];
        a1 = v8;
      }
    }
    *v3 = a1;
  }
  v9 = a2[1];
  v10 = (unsigned __int64)a2[2] - 1;
  a2[2] = (_QWORD *)v10;
  if ( !v9 || (v11 = (_QWORD *)v10, v12 = v9, v10 <= (unsigned __int64)v9) )
  {
    v11 = (_QWORD *)v10;
    v12 = v9;
    if ( (_WORD)a1 )
    {
      v13 = *a2;
      --v13[1];
      ungetwc_nolock(a1, *v13, v10);
      v11 = a2[2];
      v12 = a2[1];
    }
  }
  v32 = v11;
  v14 = (_QWORD *)((char *)v11 + 1);
  a2[2] = v14;
  if ( v12 && v14 > v12 )
  {
    v15 = 0;
  }
  else
  {
    v17 = *a2;
    v15 = j__fgetwc_nolock(**a2);
    if ( v15 == -1 )
      v15 = 0;
    else
      ++v17[1];
  }
  *v3 = v15;
  if ( v15 != 40 )
    return (unsigned __int8)_lambda_2869a9057330eafa474e853b0696fc23_::operator()(v31) != 0 ? 4 : 7;
  v18 = (unsigned __int64)a2[2] + 1;
  a2[2] = (_QWORD *)v18;
  if ( a2[1] && v18 > (unsigned __int64)a2[1] )
  {
    v19 = 0;
  }
  else
  {
    v20 = *a2;
    v19 = j__fgetwc_nolock(**a2);
    if ( v19 == -1 )
      v19 = 0;
    else
      ++v20[1];
  }
  *v3 = v19;
  if ( (unsigned __int8)sub_14022AC44(v3, a2) )
  {
    v21 = (unsigned __int16)*v3;
    v22 = (unsigned __int64)a2[2] - 1;
    a2[2] = (_QWORD *)v22;
    if ( (!a2[1] || v22 <= (unsigned __int64)a2[1]) && (unsigned __int16)(v21 - 1) <= 0xFFFDu )
    {
      v23 = *a2;
      --v23[1];
      ungetwc_nolock(v21, *v23, 65533);
    }
    return 5;
  }
  else
  {
    v24 = sub_14022AA00(v3, a2);
    v25 = (unsigned __int16)*v3;
    if ( v24 )
    {
      v26 = (unsigned __int64)a2[2] - 1;
      a2[2] = (_QWORD *)v26;
      if ( (!a2[1] || v26 <= (unsigned __int64)a2[1]) && (unsigned __int16)(v25 - 1) <= 0xFFFDu )
      {
        v27 = *a2;
        --v27[1];
        ungetwc_nolock(v25, *v27, 65533);
      }
      return 6;
    }
    else
    {
      while ( (_WORD)v25 != 41 )
      {
        if ( !(_WORD)v25
          || (unsigned int)(unsigned __int16)v25 - 48 > 9
          && (unsigned int)(unsigned __int16)v25 - 97 > 0x19
          && (unsigned int)(unsigned __int16)v25 - 65 > 0x19
          && (_WORD)v25 != 95 )
        {
          return (unsigned __int8)_lambda_2869a9057330eafa474e853b0696fc23_::operator()(v31) != 0 ? 4 : 7;
        }
        v28 = (unsigned __int64)a2[2] + 1;
        a2[2] = (_QWORD *)v28;
        if ( a2[1] && v28 > (unsigned __int64)a2[1] )
        {
          LOWORD(v25) = 0;
        }
        else
        {
          v29 = *a2;
          v30 = j__fgetwc_nolock(**a2);
          if ( v30 == -1 )
          {
            LOWORD(v25) = 0;
          }
          else
          {
            ++v29[1];
            LOWORD(v25) = v30;
          }
        }
        *v3 = v25;
      }
      return 4;
    }
  }
}

