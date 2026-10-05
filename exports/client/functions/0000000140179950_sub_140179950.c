/* Address: 0x140179950 | Name: sub_140179950 | Size: 169 bytes */
int __fastcall sub_140179950(__int64 a1, _DWORD *a2, _DWORD *a3, _DWORD *a4)
{
  int result; // eax

  if ( a2 )
  {
    result = (__int16)((*(unsigned __int8 *)(*(int *)(a1 + 36) + *(_QWORD *)(a1 + 8) + 4LL) << 8)
                     + *(unsigned __int8 *)(*(int *)(a1 + 36) + *(_QWORD *)(a1 + 8) + 5LL));
    *a2 = result;
  }
  if ( a3 )
  {
    result = (__int16)((*(unsigned __int8 *)(*(int *)(a1 + 36) + *(_QWORD *)(a1 + 8) + 6LL) << 8)
                     + *(unsigned __int8 *)(*(int *)(a1 + 36) + *(_QWORD *)(a1 + 8) + 7LL));
    *a3 = result;
  }
  if ( a4 )
  {
    result = (__int16)((*(unsigned __int8 *)(*(int *)(a1 + 36) + *(_QWORD *)(a1 + 8) + 8LL) << 8)
                     + *(unsigned __int8 *)(*(int *)(a1 + 36) + *(_QWORD *)(a1 + 8) + 9LL));
    *a4 = result;
  }
  return result;
}

