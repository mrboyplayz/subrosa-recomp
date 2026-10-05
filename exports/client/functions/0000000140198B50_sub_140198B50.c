/* Address: 0x140198b50 | Name: sub_140198B50 | Size: 127 bytes */
__int64 __fastcall sub_140198B50(__int64 a1)
{
  _QWORD *v2; // rax
  __int64 v4; // [rsp+0h] [rbp-48h] BYREF
  _BYTE v5[24]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v6; // [rsp+38h] [rbp-10h]

  if ( dword_140404A6C[19063857] )
  {
    v2 = (_QWORD *)SteamInternal_ContextInit(&off_140301E70);
    (*(void (__fastcall **)(_QWORD, __int64, _BYTE *))(*(_QWORD *)*v2 + 48LL))(*v2, a1, v5);
    *(_DWORD *)(*(_QWORD *)&dword_140404A6C[19063859] + 28LL) = v5[0];
    *(_DWORD *)(*(_QWORD *)&dword_140404A6C[19063859] + 32LL) = v5[1];
    *(_DWORD *)(*(_QWORD *)&dword_140404A6C[19063859] + 36LL) = v5[2];
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&v4 ^ v6);
}

