/* Address: 0x140199aa0 | Name: sub_140199AA0 | Size: 1400 bytes */
__int64 __fastcall sub_140199AA0(_DWORD *a1, int a2, int *a3)
{
  int v3; // eax
  int i; // [rsp+2Ch] [rbp-7Ch]
  __int64 v6; // [rsp+58h] [rbp-50h]
  __int64 v7; // [rsp+90h] [rbp-18h]

  if ( a2 <= 10007 )
  {
    if ( a2 != 10007 )
    {
      switch ( a2 )
      {
        case 4027:
          if ( !a3 )
            return 0xFFFFFFFFLL;
          *a3 = a1[2] / a1[5];
          break;
        case 4028:
          v6 = (__int64)&a1[24 * a1[3] + 24 + 2 * *(_DWORD *)(*(_QWORD *)a1 + 8LL) + a1[3] * (a1[2] + 2048)];
          v7 = v6 + 8LL * *(_DWORD *)(*(_QWORD *)a1 + 8LL);
          v3 = sub_1401B38C0(*(_QWORD *)a1, (unsigned int)a1[3]);
          MEMORY[0x1401FCD30](a1 + 11, 0, v3 - 44LL);
          for ( i = 0; i < 2 * *(_DWORD *)(*(_QWORD *)a1 + 8LL); ++i )
          {
            *(_DWORD *)(v7 + 4LL * i) = -1042284544;
            *(_DWORD *)(v6 + 4LL * i) = -1042284544;
          }
          a1[15] = 1;
          return 0;
        case 4031:
          if ( !a3 )
            return 0xFFFFFFFFLL;
          *a3 = a1[11];
          break;
        case 4033:
          if ( !a3 )
            return 0xFFFFFFFFLL;
          *a3 = a1[16];
          break;
        case 4046:
          if ( (unsigned int)a3 >= 2 )
            return 0xFFFFFFFFLL;
          a1[9] = (_DWORD)a3;
          break;
        case 4047:
          if ( !a3 )
            return 0xFFFFFFFFLL;
          *a3 = a1[9];
          break;
        default:
          return 4294967291LL;
      }
      return 0;
    }
    if ( a3 )
    {
      *a3 = a1[12];
      a1[12] = 0;
      return 0;
    }
    return 0xFFFFFFFFLL;
  }
  switch ( a2 )
  {
    case 10008:
      if ( (int)a3 < 1 || (int)a3 > 2 )
        return 0xFFFFFFFFLL;
      a1[4] = (_DWORD)a3;
      return 0;
    case 10010:
      if ( (int)a3 < 0 || (int)a3 >= *(_DWORD *)(*(_QWORD *)a1 + 8LL) )
        return 0xFFFFFFFFLL;
      a1[6] = (_DWORD)a3;
      return 0;
    case 10012:
      if ( (int)a3 < 1 || (int)a3 > *(_DWORD *)(*(_QWORD *)a1 + 8LL) )
        return 0xFFFFFFFFLL;
      a1[7] = (_DWORD)a3;
      return 0;
    case 10015:
      if ( a3 )
      {
        *(_QWORD *)a3 = *(_QWORD *)a1;
        return 0;
      }
      return 0xFFFFFFFFLL;
    case 10016:
      a1[8] = (_DWORD)a3;
      return 0;
  }
  return 4294967291LL;
}

