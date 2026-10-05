/* Address: 0x14011c510 | Name: sub_14011C510 | Size: 304 bytes */
void __fastcall sub_14011C510(int a1, int a2, int a3, int a4)
{
  __int64 v4; // r10
  __int64 v5; // r10
  __int64 v6; // rax

  if ( a2 >= 0 )
  {
    v4 = 263004LL * a1;
    if ( a2 < (int)(dword_140404A6C[v4 + 111579650] << 6)
      && a3 >= 0
      && a3 < (int)(dword_140404A6C[v4 + 111579651] << 6)
      && a4 >= 0
      && a4 < (int)(dword_140404A6C[v4 + 111579652] << 6) )
    {
      v5 = *(int *)(*(_QWORD *)&dword_140404A6C[v4 + 111579655]
                  + 4LL
                  * (int)(((unsigned int)a2 >> 6)
                        + dword_140404A6C[v4 + 111579650]
                        * (((unsigned int)a4 >> 6) + dword_140404A6C[v4 + 111579652] * ((unsigned int)a3 >> 6))));
      if ( (_DWORD)v5 != -1 )
      {
        v6 = (int)dword_140404A6C[263004 * a1
                                + 111579985
                                + 513 * v5
                                + (int)((((unsigned int)a2 >> 3) & 7)
                                      + 8 * ((((unsigned int)a4 >> 3) & 7) + 8 * (((unsigned int)a3 >> 3) & 7)))];
        if ( (_DWORD)v6 != -1 )
        {
          dword_140404A6C[6930 * v6 + 83201282] = 1;
          dword_140404A6C[6930 * v6 + 83201283 + ((unsigned __int64)(a3 & 6) >> 1)] = 1;
        }
      }
    }
  }
}

