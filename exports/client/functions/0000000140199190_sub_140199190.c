/* Address: 0x140199190 | Name: sub_140199190 | Size: 2304 bytes */
__int64 __fastcall sub_140199190(_DWORD *a1, int a2, _QWORD *a3)
{
  int v3; // eax
  int i; // [rsp+30h] [rbp-98h]
  int v6; // [rsp+5Ch] [rbp-6Ch]
  __int64 v7; // [rsp+88h] [rbp-40h]
  __int64 v8; // [rsp+B0h] [rbp-18h]

  if ( a2 > 10002 )
  {
    switch ( a2 )
    {
      case 10008:
        if ( (int)a3 < 1 || (int)a3 > 2 )
          return 0xFFFFFFFFLL;
        a1[3] = (_DWORD)a3;
        return 0;
      case 10010:
        if ( (int)a3 < 0 || (int)a3 >= *(_DWORD *)(*(_QWORD *)a1 + 8LL) )
          return 0xFFFFFFFFLL;
        a1[9] = (_DWORD)a3;
        return 0;
      case 10012:
        if ( (int)a3 < 1 || (int)a3 > *(_DWORD *)(*(_QWORD *)a1 + 8LL) )
          return 0xFFFFFFFFLL;
        a1[10] = (_DWORD)a3;
        return 0;
      case 10015:
        if ( !a3 )
          return 0xFFFFFFFFLL;
        *a3 = *(_QWORD *)a1;
        return 0;
      case 10016:
        a1[13] = (_DWORD)a3;
        return 0;
      case 10022:
        if ( a3 )
          MEMORY[0x1401FC920](a1 + 31, a3);
        return 0;
      case 10024:
        a1[17] = (_DWORD)a3;
        return 0;
      case 10026:
        *((_QWORD *)a1 + 30) = a3;
        return 0;
      case 10028:
        if ( a3 )
          MEMORY[0x1401FC920](a1 + 47, a3);
        return 0;
      default:
        return 4294967291LL;
    }
  }
  if ( a2 != 10002 )
  {
    switch ( a2 )
    {
      case 4002:
        if ( (int)a3 <= 500 && (_DWORD)a3 != -1 )
          return 0xFFFFFFFFLL;
        if ( (int)a3 >= 260000 * a1[2] )
          v6 = 260000 * a1[2];
        else
          v6 = (int)a3;
        a1[11] = v6;
        break;
      case 4006:
        a1[12] = (_DWORD)a3;
        return 0;
      case 4010:
        if ( (unsigned int)a3 > 0xA )
          return 0xFFFFFFFFLL;
        a1[7] = (_DWORD)a3;
        break;
      case 4014:
        if ( (unsigned int)a3 > 0x64 )
          return 0xFFFFFFFFLL;
        a1[15] = (_DWORD)a3;
        break;
      case 4020:
        a1[14] = (_DWORD)a3;
        return 0;
      case 4028:
        v7 = (__int64)&a1[(*(_DWORD *)(*(_QWORD *)a1 + 4LL) + 1024) * a1[2]
                        + 63
                        + *(_DWORD *)(*(_QWORD *)a1 + 8LL) * a1[2]];
        v8 = v7 + 4LL * *(_DWORD *)(*(_QWORD *)a1 + 8LL) * a1[2];
        v3 = sub_1401AE360(*(_QWORD *)a1, (unsigned int)a1[2]);
        MEMORY[0x1401FCD30](a1 + 20, 0, v3 - 80LL);
        for ( i = 0; i < *(_DWORD *)(*(_QWORD *)a1 + 8LL) * a1[2]; ++i )
        {
          *(_DWORD *)(v8 + 4LL * i) = -1042284544;
          *(_DWORD *)(v7 + 4LL * i) = -1042284544;
        }
        a1[55] = 0;
        a1[22] = 1065353216;
        a1[21] = 2;
        a1[23] = 256;
        a1[25] = 0;
        a1[26] = 0;
        return 0;
      case 4031:
        if ( !a3 )
          return 0xFFFFFFFFLL;
        *(_DWORD *)a3 = a1[20];
        break;
      case 4036:
        if ( (int)a3 < 8 || (int)a3 > 24 )
          return 0xFFFFFFFFLL;
        a1[16] = (_DWORD)a3;
        break;
      case 4037:
        *(_DWORD *)a3 = a1[16];
        return 0;
      case 4046:
        if ( (unsigned int)a3 >= 2 )
          return 0xFFFFFFFFLL;
        a1[18] = (_DWORD)a3;
        break;
      case 4047:
        if ( !a3 )
          return 0xFFFFFFFFLL;
        *(_DWORD *)a3 = a1[18];
        break;
      default:
        return 4294967291LL;
    }
    return 0;
  }
  if ( (unsigned int)a3 <= 2 )
  {
    a1[6] = (int)a3 <= 1;
    a1[4] = (_DWORD)a3 == 0;
    return 0;
  }
  return 0xFFFFFFFFLL;
}

