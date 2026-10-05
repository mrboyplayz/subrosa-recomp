/* Address: 0x140179590 | Name: sub_140179590 | Size: 187 bytes */
_DWORD *__fastcall sub_140179590(__int64 a1, _DWORD *a2, _DWORD *a3, _DWORD *a4, _DWORD *a5)
{
  __int64 v5; // rbx

  v5 = *(_QWORD *)(a1 + 8) + *(int *)(a1 + 28);
  *a2 = (__int16)((*(unsigned __int8 *)(v5 + 36) << 8) + *(unsigned __int8 *)(v5 + 37));
  *a3 = (__int16)((*(unsigned __int8 *)(*(int *)(a1 + 28) + *(_QWORD *)(a1 + 8) + 38LL) << 8)
                + *(unsigned __int8 *)(*(int *)(a1 + 28) + *(_QWORD *)(a1 + 8) + 39LL));
  *a4 = (__int16)((*(unsigned __int8 *)(*(int *)(a1 + 28) + *(_QWORD *)(a1 + 8) + 40LL) << 8)
                + *(unsigned __int8 *)(*(int *)(a1 + 28) + *(_QWORD *)(a1 + 8) + 41LL));
  *a5 = (__int16)(*(unsigned __int8 *)(*(int *)(a1 + 28) + *(_QWORD *)(a1 + 8) + 43LL)
                + (*(unsigned __int8 *)(*(int *)(a1 + 28) + *(_QWORD *)(a1 + 8) + 42LL) << 8));
  return a5;
}

