/* Address: 0x14016f1b0 | Name: sub_14016F1B0 | Size: 696 bytes */
__int64 __fastcall sub_14016F1B0(__int64 a1, __int64 a2)
{
  unsigned int v3; // ebp
  unsigned __int8 *v4; // rcx
  unsigned __int64 v5; // rax
  unsigned __int8 v6; // si
  unsigned __int8 *v7; // rax
  unsigned __int8 v8; // di
  unsigned __int8 *v9; // rax
  int v10; // r14d
  int v11; // r8d
  __int64 v12; // rcx
  unsigned __int8 *v13; // rcx
  int v14; // r9d
  unsigned __int8 *v15; // r8
  unsigned __int8 *v16; // rax
  int v17; // ecx
  unsigned int v18; // edi
  __int64 v19; // rcx
  _BYTE *v20; // rax
  int v21; // r8d
  __int64 v22; // rcx
  __int64 v23; // rdx
  unsigned __int8 *v24; // rax
  unsigned __int8 v25; // cl

  v3 = 0;
  v4 = *(unsigned __int8 **)(a1 + 192);
  v5 = *(_QWORD *)(a1 + 200);
  if ( (unsigned __int64)v4 >= v5 )
  {
    if ( !*(_DWORD *)(a1 + 48) )
      goto LABEL_11;
    sub_14016D910(a1);
    v4 = (unsigned __int8 *)++*(_QWORD *)(a1 + 192);
    v5 = *(_QWORD *)(a1 + 200);
  }
  else
  {
    *(_QWORD *)(a1 + 192) = ++v4;
  }
  if ( (unsigned __int64)v4 < v5 )
  {
    v6 = *v4++;
    goto LABEL_9;
  }
  if ( !*(_DWORD *)(a1 + 48) )
  {
LABEL_11:
    v6 = 0;
    v8 = 0;
    goto LABEL_12;
  }
  sub_14016D910(a1);
  v7 = *(unsigned __int8 **)(a1 + 192);
  v6 = *v7;
  v4 = v7 + 1;
LABEL_9:
  *(_QWORD *)(a1 + 192) = v4;
  v8 = v6;
  if ( v6 > 1u )
    goto LABEL_56;
LABEL_12:
  if ( (unsigned __int64)v4 >= *(_QWORD *)(a1 + 200) )
  {
    if ( *(_DWORD *)(a1 + 48) )
    {
      sub_14016D910(a1);
      v9 = *(unsigned __int8 **)(a1 + 192);
      a2 = *v9;
      v4 = v9 + 1;
    }
    else
    {
      LOBYTE(a2) = 0;
    }
  }
  else
  {
    a2 = *v4++;
  }
  v10 = 16875776;
  if ( v8 != 1 )
  {
    if ( ((((_BYTE)a2 - 2) & 0xF6) != 0 || (_BYTE)a2 == 11) && (_BYTE)a2 != 11 )
      goto LABEL_56;
    if ( *(_QWORD *)(a1 + 16) )
    {
      v21 = *(_DWORD *)(a1 + 200) - (_DWORD)v4;
      if ( v21 < 9 )
      {
        v22 = *(_QWORD *)(a1 + 40);
        *(_QWORD *)(a1 + 192) = *(_QWORD *)(a1 + 200);
        (*(void (__fastcall **)(__int64, _QWORD))(a1 + 24))(v22, (unsigned int)(9 - v21));
        goto LABEL_42;
      }
    }
    v20 = v4 + 9;
LABEL_41:
    *(_QWORD *)(a1 + 192) = v20;
LABEL_42:
    if ( (int)sub_1401605B0(a1, a2) >= 1 && (int)sub_1401605B0(a1, v23) >= 1 )
    {
      v24 = *(unsigned __int8 **)(a1 + 192);
      if ( (unsigned __int64)v24 >= *(_QWORD *)(a1 + 200) )
      {
        if ( *(_DWORD *)(a1 + 48) )
        {
          sub_14016D910(a1);
          v25 = **(_BYTE **)(a1 + 192);
        }
        else
        {
          v25 = 0;
        }
      }
      else
      {
        v25 = *v24;
      }
      if ( v6 != 1 )
        goto LABEL_54;
      if ( v25 == 8 )
      {
LABEL_55:
        v3 = 1;
        goto LABEL_56;
      }
      if ( v25 == 16 )
      {
LABEL_54:
        if ( v25 <= 0x18u && _bittest(&v10, v25) || v25 == 32 )
          goto LABEL_55;
      }
    }
    goto LABEL_56;
  }
  if ( (((_BYTE)a2 - 1) & 0xF7) == 0 )
  {
    if ( *(_QWORD *)(a1 + 16) && (v11 = *(_DWORD *)(a1 + 200) - (_DWORD)v4, v11 < 4) )
    {
      v12 = *(_QWORD *)(a1 + 40);
      *(_QWORD *)(a1 + 192) = *(_QWORD *)(a1 + 200);
      (*(void (__fastcall **)(__int64, _QWORD))(a1 + 24))(v12, (unsigned int)(4 - v11));
      v13 = *(unsigned __int8 **)(a1 + 192);
    }
    else
    {
      v13 = v4 + 4;
      *(_QWORD *)(a1 + 192) = v13;
    }
    if ( (unsigned __int64)v13 >= *(_QWORD *)(a1 + 200) )
    {
      if ( !*(_DWORD *)(a1 + 48) )
        goto LABEL_56;
      sub_14016D910(a1);
      v16 = *(unsigned __int8 **)(a1 + 192);
      a2 = *v16;
      v15 = v16 + 1;
      v14 = (_DWORD)v16 + 1;
    }
    else
    {
      a2 = *v13;
      v14 = (_DWORD)v13 + 1;
      v15 = v13 + 1;
    }
    if ( (unsigned __int8)a2 <= 0x18u && _bittest(&v10, (unsigned __int8)a2) || (_BYTE)a2 == 32 )
    {
      if ( *(_QWORD *)(a1 + 16) )
      {
        v17 = *(_DWORD *)(a1 + 200) - v14;
        if ( v17 < 4 )
        {
          v18 = 4 - v17;
          v19 = *(_QWORD *)(a1 + 40);
          *(_QWORD *)(a1 + 192) = *(_QWORD *)(a1 + 200);
          (*(void (__fastcall **)(__int64, _QWORD, unsigned __int8 *))(a1 + 24))(v19, v18, v15);
          goto LABEL_42;
        }
      }
      v20 = v15 + 4;
      goto LABEL_41;
    }
  }
LABEL_56:
  *(_QWORD *)(a1 + 192) = *(_QWORD *)(a1 + 208);
  *(_QWORD *)(a1 + 200) = *(_QWORD *)(a1 + 216);
  return v3;
}

