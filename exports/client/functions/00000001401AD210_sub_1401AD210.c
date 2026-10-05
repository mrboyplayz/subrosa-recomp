/* Address: 0x1401ad210 | Name: sub_1401AD210 | Size: 397 bytes */
__int64 __fastcall sub_1401AD210(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, int a6)
{
  __int64 result; // rax
  int v7; // [rsp+20h] [rbp-28h]
  int v8; // [rsp+24h] [rbp-24h]
  __int64 v9; // [rsp+28h] [rbp-20h]

  v9 = *(_QWORD *)(a1 + 32);
  v7 = (*(__int16 *)(v9 + 2LL * (a4 + 1)) - *(__int16 *)(v9 + 2LL * a4)) * a5;
  v8 = (*(__int16 *)(v9 + 2LL * (a4 + 2)) - *(__int16 *)(v9 + 2LL * (a4 + 1))) * a5;
  result = MEMORY[0x1401FC920](a2 + 4LL * v7, a2 + 4LL * (2 * v7 - v8));
  if ( a6 )
    return MEMORY[0x1401FC920](a3 + 4LL * v7, a3 + 4LL * (2 * v7 - v8));
  return result;
}

