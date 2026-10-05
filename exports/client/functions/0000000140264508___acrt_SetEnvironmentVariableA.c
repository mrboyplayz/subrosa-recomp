/* Address: 0x140264508 | Name: __acrt_SetEnvironmentVariableA | Size: 407 bytes */
__int64 __fastcall _acrt_SetEnvironmentVariableA(_BYTE *a1, _BYTE *a2)
{
  void *v4; // rdi
  unsigned int v5; // ebx
  unsigned int v6; // r8d
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v10; // [rsp+28h] [rbp-39h] BYREF
  __int64 v11; // [rsp+30h] [rbp-31h]
  char v12; // [rsp+40h] [rbp-21h]
  _QWORD v13[2]; // [rsp+48h] [rbp-19h] BYREF
  void *lpValue; // [rsp+58h] [rbp-9h]
  __int64 v15; // [rsp+60h] [rbp-1h]
  __int64 v16; // [rsp+68h] [rbp+7h]
  char v17; // [rsp+70h] [rbp+Fh]
  _QWORD v18[2]; // [rsp+78h] [rbp+17h] BYREF
  void *lpName; // [rsp+88h] [rbp+27h]
  __int64 v20; // [rsp+90h] [rbp+2Fh]
  __int64 v21; // [rsp+98h] [rbp+37h]
  char v22; // [rsp+A0h] [rbp+3Fh]

  v18[0] = 0;
  v18[1] = 0;
  lpName = nullptr;
  v20 = 0;
  v4 = nullptr;
  v21 = 0;
  v22 = 0;
  v13[0] = 0;
  v13[1] = 0;
  lpValue = nullptr;
  v15 = 0;
  v16 = 0;
  v17 = 0;
  sub_140213644((_LocaleUpdate *)&v10, nullptr);
  v5 = 65001;
  if ( *(_DWORD *)(v11 + 12) == 65001 )
  {
    if ( v12 )
      *(_DWORD *)(v10 + 936) &= ~2u;
    v6 = 65001;
  }
  else if ( (unsigned int)sub_14024EDA4() )
  {
    if ( v12 )
      *(_DWORD *)(v10 + 936) &= ~2u;
    v6 = 0;
  }
  else
  {
    if ( v12 )
      *(_DWORD *)(v10 + 936) &= ~2u;
    v6 = 1;
  }
  if ( (unsigned int)sub_140238394(a1, (__int64)v18, v6) )
    goto LABEL_25;
  sub_140213644((_LocaleUpdate *)&v10, nullptr);
  if ( *(_DWORD *)(v11 + 12) == 65001 )
  {
    if ( v12 )
      *(_DWORD *)(v10 + 936) &= ~2u;
  }
  else if ( (unsigned int)sub_14024EDA4() )
  {
    if ( v12 )
      *(_DWORD *)(v10 + 936) &= ~2u;
    v5 = 0;
  }
  else
  {
    if ( v12 )
      *(_DWORD *)(v10 + 936) &= ~2u;
    v5 = 1;
  }
  v7 = sub_140238394(a2, (__int64)v13, v5);
  v4 = lpValue;
  if ( v7 )
LABEL_25:
    v8 = 0;
  else
    v8 = ((__int64 (__fastcall *)(void *, void *))SetEnvironmentVariableW)(lpName, lpValue);
  if ( v17 )
    free_base(v4);
  if ( v22 )
    free_base(lpName);
  return v8;
}

