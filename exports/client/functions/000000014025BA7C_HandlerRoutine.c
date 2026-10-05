/* Address: 0x14025ba7c | Name: HandlerRoutine | Size: 146 bytes */
__int64 __fastcall HandlerRoutine(__m256 *CtrlType)
{
  int v1; // ebx
  unsigned int *v2; // rdx
  __int64 v3; // rbx
  unsigned int v4; // edi
  void (__fastcall *v5)(_QWORD); // rbx

  v1 = (int)CtrlType;
  sub_140258B64(3);
  if ( v1 )
  {
    v2 = &dword_140404A6C[19065817];
    v3 = *(_QWORD *)&dword_140404A6C[19065817] ^ _security_cookie;
    v4 = 21;
  }
  else
  {
    v2 = &dword_140404A6C[19065815];
    v3 = *(_QWORD *)&dword_140404A6C[19065815] ^ _security_cookie;
    v4 = 2;
  }
  v5 = (void (__fastcall *)(_QWORD))__ROR8__(v3, _security_cookie & 0x3F);
  if ( (unsigned __int64)v5 >= 2 )
    *(_QWORD *)v2 = _security_cookie;
  sub_140258BB8(3);
  if ( !v5 )
    return 0;
  if ( v5 != (void (__fastcall *)(_QWORD))1 )
    v5(v4);
  return 1;
}

