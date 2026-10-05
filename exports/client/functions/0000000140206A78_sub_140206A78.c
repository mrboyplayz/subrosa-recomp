/* Address: 0x140206a78 | Name: sub_140206A78 | Size: 83 bytes */
// Microsoft VisualC v14 64bit runtime
// Microsoft VisualC v14 64bit runtime
__int64 __fastcall sub_140206A78(__int64 a1, int a2)
{
  int v2; // ebx
  __int64 result; // rax

  v2 = *(_DWORD *)(a1 + 12);
  while ( v2 )
  {
    result = *(_QWORD *)(sub_1401FD83C() + 96) + 20LL * (unsigned int)--v2 + *(int *)(a1 + 16);
    if ( a2 > *(_DWORD *)(result + 4) && a2 <= *(_DWORD *)(result + 8) )
      return result;
  }
  return 0;
}

