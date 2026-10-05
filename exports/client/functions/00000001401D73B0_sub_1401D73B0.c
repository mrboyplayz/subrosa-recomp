/* Address: 0x1401d73b0 | Name: sub_1401D73B0 | Size: 412 bytes */
__int64 __fastcall sub_1401D73B0(int *a1, int *a2, __int16 *a3, int a4)
{
  int v5; // [rsp+0h] [rbp-18h]
  int v6; // [rsp+0h] [rbp-18h]
  int i; // [rsp+4h] [rbp-14h]
  int v8; // [rsp+8h] [rbp-10h]
  int v9; // [rsp+8h] [rbp-10h]
  int v10; // [rsp+Ch] [rbp-Ch]

  v8 = *a1;
  v10 = *a2;
  *a2 = *a1;
  v5 = ((*a3 * (__int64)v8) >> 16) + (a4 >> 1);
  for ( i = 2; i < a4; i += 2 )
  {
    v9 = a2[i - 1];
    a2[i - 1] = v10;
    v6 = ((a3[i - 1] * (__int64)v10) >> 16) + v5;
    v10 = a2[i];
    a2[i] = v9;
    v5 = ((a3[i] * (__int64)v9) >> 16) + v6;
  }
  a2[a4 - 1] = v10;
  return 2 * ((unsigned int)((a3[a4 - 1] * (__int64)v10) >> 16) + v5);
}

