/* Address: 0x1401baa30 | Name: sub_1401BAA30 | Size: 707 bytes */
__int64 __fastcall sub_1401BAA30(_DWORD *a1, __int64 a2, __int64 a3, int a4)
{
  int v5; // [rsp+20h] [rbp-28h]
  int v6; // [rsp+24h] [rbp-24h]

  v5 = a1[71] - a1[73];
  MEMORY[0x1401FC920]((char *)a1 + 2 * a1[73] + 168, a3);
  v6 = a1[66];
  switch ( v6 )
  {
    case 1:
      sub_1401DD350(a1, a2, a1 + 42, (unsigned int)a1[71]);
      sub_1401DD350(a1, a2 + 2LL * (int)a1[72], a3 + 2LL * v5, (unsigned int)(a4 - a1[71]));
      break;
    case 2:
      sub_1401DCF80(a1, a2, a1 + 42, (unsigned int)a1[71]);
      sub_1401DCF80(a1, a2 + 2LL * (int)a1[72], a3 + 2LL * v5, (unsigned int)(a4 - a1[71]));
      break;
    case 3:
      sub_1401DD130(a1, a2, a1 + 42, (unsigned int)a1[71]);
      sub_1401DD130(a1, a2 + 2LL * (int)a1[72], a3 + 2LL * v5, (unsigned int)(a4 - a1[71]));
      break;
    default:
      MEMORY[0x1401FC920](a2, a1 + 42);
      MEMORY[0x1401FC920](a2 + 2LL * (int)a1[72], a3 + 2LL * v5);
      break;
  }
  MEMORY[0x1401FC920](a1 + 42, a3 + 2LL * (a4 - a1[73]));
  return 0;
}

