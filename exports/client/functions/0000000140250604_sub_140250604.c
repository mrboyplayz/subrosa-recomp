/* Address: 0x140250604 | Name: sub_140250604 | Size: 86 bytes */
__int64 *__fastcall sub_140250604(__int64 *a1)
{
  __int64 *v2; // rax
  __int64 v3; // rdx
  char v5; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0;
  sub_140258B64(8);
  v2 = (__int64 *)find_or_allocate_unused_stream_nolock(&v5);
  v3 = *v2;
  *a1 = *v2;
  if ( v3 )
  {
    *(_DWORD *)(v3 + 16) = 0;
    *(_QWORD *)(v3 + 40) = 0;
    *(_QWORD *)v3 = 0;
    *(_QWORD *)(v3 + 8) = 0;
    *(_DWORD *)(v3 + 24) = -1;
  }
  sub_140258BB8(8);
  return a1;
}

