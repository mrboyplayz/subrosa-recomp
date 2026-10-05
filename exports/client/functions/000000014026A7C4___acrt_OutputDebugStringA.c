/* Address: 0x14026a7c4 | Name: __acrt_OutputDebugStringA | Size: 156 bytes */
__int64 __fastcall _acrt_OutputDebugStringA(__int64 a1)
{
  __int64 v1; // r8
  signed __int64 v2; // rcx
  void *v3; // rsp
  __int64 v4; // r8
  int v5; // r9d
  _QWORD OutputString[2]; // [rsp+30h] [rbp+0h] BYREF

  if ( a1 )
  {
    v1 = -1;
    do
      ++v1;
    while ( *(_BYTE *)(a1 + v1) );
    if ( v1 != -1 )
    {
      sub_1401F89D0();
      v3 = alloca(v2);
      if ( !(unsigned int)mbstowcs_s((unsigned int)OutputString, (unsigned int)OutputString, v4, v5, v4 - 1) )
        ((void (__fastcall *)(_QWORD *))OutputDebugStringW)(OutputString);
    }
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)OutputString ^ OutputString[1]);
}

