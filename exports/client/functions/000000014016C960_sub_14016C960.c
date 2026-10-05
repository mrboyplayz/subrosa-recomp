/* Address: 0x14016c960 | Name: sub_14016C960 | Size: 299 bytes */
__int64 __fastcall sub_14016C960(__int64 a1, __int64 a2, char *a3, char *a4)
{
  char *v4; // r14
  char *v5; // r15
  char *v7; // rsi
  int v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rdx
  _QWORD *v12; // rbx
  int v13; // ecx
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // rdx
  char v19; // [rsp+48h] [rbp+10h] BYREF

  v4 = &v19;
  v5 = &v19;
  if ( a2 )
    v4 = (char *)a2;
  v7 = &v19;
  if ( a3 )
    v5 = a3;
  if ( a4 )
    v7 = a4;
  v8 = sub_1401604F0(a1, a2);
  if ( (v8 << 16) + (unsigned int)sub_1401604F0(a1, v9) == 943870035 && (unsigned int)sub_1401604F0(a1, v10) == 1 )
  {
    v12 = (_QWORD *)(a1 + 192);
    if ( *(_QWORD *)(a1 + 16) && (v13 = *(_DWORD *)(a1 + 200) - *(_DWORD *)v12, v13 < 6) )
    {
      *v12 = *(_QWORD *)(a1 + 200);
      (*(void (__fastcall **)(_QWORD, _QWORD))(a1 + 24))(*(_QWORD *)(a1 + 40), (unsigned int)(6 - v13));
    }
    else
    {
      *v12 += 6LL;
    }
    if ( (unsigned int)sub_1401604F0(a1, v11) <= 0x10 )
    {
      *(_DWORD *)v5 = sub_140160670(a1, v14);
      *(_DWORD *)v4 = sub_140160670(a1, v15);
      if ( (((unsigned int)sub_1401604F0(a1, v16) - 8) & 0xFFFFFFF7) == 0 && (unsigned int)sub_1401604F0(a1, v17) == 3 )
      {
        *(_DWORD *)v7 = 4;
        return 1;
      }
    }
    *v12 = *(_QWORD *)(a1 + 208);
  }
  else
  {
    *(_QWORD *)(a1 + 192) = *(_QWORD *)(a1 + 208);
  }
  *(_QWORD *)(a1 + 200) = *(_QWORD *)(a1 + 216);
  return 0;
}

