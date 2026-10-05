/* Address: 0x1401643b0 | Name: sub_1401643B0 | Size: 322 bytes */
__int64 __fastcall sub_1401643B0(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // rdx
  _QWORD *v7; // rbx
  __int64 v8; // rdx
  int v9; // ecx
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v15[4]; // [rsp+20h] [rbp-38h] BYREF
  int v16; // [rsp+40h] [rbp-18h]

  v15[0] = a1;
  if ( (unsigned int)sub_140167D10(v15, 2, 0) )
  {
    if ( v16 == 16 )
      return 1;
    v3 = v15[0];
    *(_QWORD *)(v15[0] + 192) = *(_QWORD *)(v15[0] + 208);
    *(_QWORD *)(v3 + 200) = *(_QWORD *)(v3 + 216);
  }
  else
  {
    v2 = v15[0];
    *(_QWORD *)(v15[0] + 192) = *(_QWORD *)(v15[0] + 208);
    *(_QWORD *)(v2 + 200) = *(_QWORD *)(v2 + 216);
  }
  v4 = sub_1401604F0(a1, v2);
  if ( (v4 << 16) + (unsigned int)sub_1401604F0(a1, v5) != 943870035 || (unsigned int)sub_1401604F0(a1, v6) != 1 )
  {
    v7 = (_QWORD *)(a1 + 192);
LABEL_14:
    v13 = *(_QWORD *)(a1 + 216);
    *v7 = *(_QWORD *)(a1 + 208);
    *(_QWORD *)(a1 + 200) = v13;
    return 0;
  }
  v7 = (_QWORD *)(a1 + 192);
  if ( *(_QWORD *)(a1 + 16) && (v9 = *(_DWORD *)(a1 + 200) - *(_DWORD *)v7, v9 < 6) )
  {
    *v7 = *(_QWORD *)(a1 + 200);
    (*(void (__fastcall **)(_QWORD, _QWORD))(a1 + 24))(*(_QWORD *)(a1 + 40), (unsigned int)(6 - v9));
  }
  else
  {
    *v7 += 6LL;
  }
  if ( (unsigned int)sub_1401604F0(a1, v8) > 0x10 )
    goto LABEL_14;
  sub_140160670(a1, v10);
  sub_140160670(a1, v11);
  if ( (unsigned int)sub_1401604F0(a1, v12) != 16 )
    goto LABEL_14;
  return 1;
}

