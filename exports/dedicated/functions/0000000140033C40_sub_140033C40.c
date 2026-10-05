/* Address: 0x140033c40 | Name: sub_140033C40 | Size: 423 bytes */
__int64 __fastcall sub_140033C40(int a1, int *a2)
{
  __int64 result; // rax
  __int64 v4; // rsi
  int v5; // r8d
  __int64 v6; // r11
  int v7; // ebx
  int v8; // r9d
  int v9; // r10d
  int v10; // ecx
  int v11; // edx

  result = dword_196ABF904;
  v4 = a1;
  if ( dword_196ABF904 < 512 )
  {
    dword_196ABD900[9 * dword_196ABF904 + 2051] = a1;
    dword_196ABD900[9 * dword_196ABF904 + 2052] = *a2;
    dword_196ABD900[9 * dword_196ABF904 + 2053] = a2[1];
    dword_196ABD900[9 * dword_196ABF904 + 2054] = a2[2];
    dword_196ABD900[9 * dword_196ABF904 + 2055] = a2[3];
    result = sub_140047CD0(
               &dword_196ABD900[8 * dword_196ABF904 + 2056 + dword_196ABF904],
               (char *)&unk_196ABD904 + 16 * *a2,
               (char *)&unk_196ABD904 + 16 * a2[1],
               (char *)&unk_196ABD904 + 16 * a2[2]);
    if ( (int)v4 > 0 )
    {
      v5 = dword_196AC4108;
      v6 = 0;
      v7 = 1;
      do
      {
        v8 = a2[v6];
        result = v7 % (int)v4;
        v9 = a2[result];
        if ( v5 < 512 )
        {
          v10 = 0;
          if ( v5 <= 0 )
          {
LABEL_12:
            dword_196ABD900[3 * v5 + 6659] = v8;
            result = dword_196AC4108;
            dword_196ABD900[3 * dword_196AC4108 + 6660] = v9;
            v5 = ++dword_196AC4108;
          }
          else
          {
            result = (__int64)&unk_196AC4110;
            while ( 1 )
            {
              v11 = *(_DWORD *)(result - 4);
              if ( v11 == v8 && *(_DWORD *)result == v9 )
                break;
              if ( v11 == v9 && *(_DWORD *)result == v8 )
                break;
              ++v10;
              result += 12;
              if ( v10 >= v5 )
                goto LABEL_12;
            }
          }
        }
        ++v7;
        ++v6;
      }
      while ( v6 < v4 );
    }
    ++dword_196ABF904;
  }
  return result;
}

