/* Address: 0x1401e27c0 | Name: sub_1401E27C0 | Size: 1127 bytes */
__int64 __fastcall sub_1401E27C0(int *a1, int a2, int *a3)
{
  int *v3; // r8
  unsigned int v5; // [rsp+28h] [rbp-60h]
  _DWORD *v6; // [rsp+48h] [rbp-40h]
  __int64 v7; // [rsp+78h] [rbp-10h]

  v5 = 0;
  v7 = (__int64)a1 + a1[1];
  v6 = (int *)((char *)a1 + *a1);
  switch ( a2 )
  {
    case 4009:
      if ( !a3 )
        return 0xFFFFFFFFLL;
      *a3 = a1[13];
      return v5;
    case 4028:
      MEMORY[0x1401FCD30](a1 + 12, 0, 40);
      sub_140199AA0(v6, 4028, v3);
      sub_1401CCAC0(v7);
      a1[12] = a1[2];
      a1[16] = a1[3] / 400;
      return v5;
    case 4029:
      if ( !a3 )
        return 0xFFFFFFFFLL;
      *a3 = a1[3];
      return v5;
    case 4031:
      if ( !a3 )
        return 0xFFFFFFFFLL;
      *a3 = a1[21];
      return v5;
    case 4033:
      if ( !a3 )
        return 0xFFFFFFFFLL;
      if ( a1[15] == 1002 )
        return (unsigned int)sub_140199AA0(v6, 4033, a3);
      else
        *a3 = a1[9];
      return v5;
    case 4034:
      if ( (int)a3 < -32768 || (int)a3 > 0x7FFF )
        return 0xFFFFFFFFLL;
      a1[10] = (int)a3;
      return v5;
    case 4039:
      if ( !a3 )
        return 0xFFFFFFFFLL;
      *a3 = a1[18];
      return v5;
    case 4045:
      if ( !a3 )
        return 0xFFFFFFFFLL;
      *a3 = a1[10];
      return v5;
    case 4046:
      if ( (unsigned int)a3 >= 2 )
        return 0xFFFFFFFFLL;
      return (unsigned int)sub_140199AA0(v6, 4046, (int *)(unsigned int)a3);
    case 4047:
      if ( !a3 )
        return 0xFFFFFFFFLL;
      return (unsigned int)sub_140199AA0(v6, 4047, a3);
    default:
      return (unsigned int)-5;
  }
}

