/* Address: 0x140256ea0 | Name: _isctype_l | Size: 264 bytes */
__int64 __fastcall isctype_l(int a1, __int64 a2, struct __crt_locale_pointers *a3)
{
  _QWORD v5[5]; // [rsp+0h] [rbp-80h] BYREF
  int v6; // [rsp+28h] [rbp-58h]
  int v7; // [rsp+30h] [rbp-50h]
  char v8; // [rsp+40h] [rbp-40h] BYREF
  char v9; // [rsp+41h] [rbp-3Fh]
  char v10; // [rsp+42h] [rbp-3Eh]
  __int64 v11; // [rsp+48h] [rbp-38h] BYREF
  __int64 v12; // [rsp+50h] [rbp-30h] BYREF
  char v13; // [rsp+60h] [rbp-20h]
  int v14; // [rsp+68h] [rbp-18h] BYREF
  __int16 v15; // [rsp+6Ch] [rbp-14h]
  __int64 v16; // [rsp+70h] [rbp-10h]

  sub_140213644((_LocaleUpdate *)&v11, a3);
  if ( (unsigned int)(a1 + 1) <= 0x100 )
    goto LABEL_9;
  if ( *(__int16 *)(*(_QWORD *)v12 + 2LL * BYTE1(a1)) >= 0 )
  {
    v8 = a1;
    v9 = 0;
  }
  else
  {
    v8 = BYTE1(a1);
    v9 = a1;
    v10 = 0;
  }
  v7 = 1;
  v14 = 0;
  v15 = 0;
  v6 = *(_DWORD *)(v12 + 12);
  v5[4] = &v14;
  if ( (unsigned int)sub_140262618(&v12, 1, &v8) )
  {
LABEL_9:
    if ( v13 )
      *(_DWORD *)(v11 + 936) &= ~2u;
  }
  else if ( v13 )
  {
    *(_DWORD *)(v11 + 936) &= ~2u;
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)v5 ^ v16);
}

