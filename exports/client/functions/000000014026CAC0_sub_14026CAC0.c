/* Address: 0x14026cac0 | Name: sub_14026CAC0 | Size: 133 bytes */
__int64 __fastcall sub_14026CAC0(unsigned int *a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v8; // rbx
  __int64 result; // rax

  v8 = *(_QWORD *)(a4 + 56) + 16LL * **(unsigned int **)(a4 + 56);
  sub_1401F8958(a2, a4, v8 + 4);
  result = 1;
  if ( ((((a1[1] & 0x66) != 0) + 1) & *(_DWORD *)(v8 + 4)) != 0 )
    return sub_1401FCF80(a1, a2, a3, a4);
  return result;
}

