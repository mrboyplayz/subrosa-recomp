/* Address: 0x14016ca90 | Name: sub_14016CA90 | Size: 224 bytes */
__int64 __fastcall sub_14016CA90(__int64 a1, __int64 a2)
{
  int v3; // ebx
  __int64 v4; // rdx
  __int64 v5; // rdx
  __int64 v6; // rdx
  _QWORD *v7; // rbx
  int v8; // ecx
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rdx

  v3 = sub_1401604F0(a1, a2);
  if ( (v3 << 16) + (unsigned int)sub_1401604F0(a1, v4) == 943870035 && (unsigned int)sub_1401604F0(a1, v5) == 1 )
  {
    v7 = (_QWORD *)(a1 + 192);
    if ( *(_QWORD *)(a1 + 16) && (v8 = *(_DWORD *)(a1 + 200) - *(_DWORD *)v7, v8 < 6) )
    {
      *v7 = *(_QWORD *)(a1 + 200);
      (*(void (__fastcall **)(_QWORD, _QWORD))(a1 + 24))(*(_QWORD *)(a1 + 40), (unsigned int)(6 - v8));
    }
    else
    {
      *v7 += 6LL;
    }
    if ( (unsigned int)sub_1401604F0(a1, v6) <= 0x10 )
    {
      sub_140160670(a1, v9);
      sub_140160670(a1, v10);
      if ( (unsigned int)sub_1401604F0(a1, v11) == 16 )
        return 1;
    }
    *v7 = *(_QWORD *)(a1 + 208);
  }
  else
  {
    *(_QWORD *)(a1 + 192) = *(_QWORD *)(a1 + 208);
  }
  *(_QWORD *)(a1 + 200) = *(_QWORD *)(a1 + 216);
  return 0;
}

