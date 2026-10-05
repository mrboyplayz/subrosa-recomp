/* Address: 0x14026b818 | Name: sub_14026B818 | Size: 39 bytes */
__int64 __fastcall sub_14026B818(__int64 a1)
{
  return ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))WriteConsoleW)(
           hObject,
           *(_QWORD *)a1,
           *(unsigned int *)(a1 + 8),
           *(_QWORD *)(a1 + 16),
           0);
}

