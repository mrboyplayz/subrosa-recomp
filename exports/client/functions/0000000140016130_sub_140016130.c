/* Address: 0x140016130 | Name: sub_140016130 | Size: 788 bytes */
void __fastcall sub_140016130(
        signed int a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        _BYTE *a6)
{
  __int64 v6; // r14
  __int64 v10; // r10
  int v11; // edx
  signed int v12; // ecx
  int v13; // r8d
  signed int v14; // eax
  int v15; // r9d
  unsigned int v16; // r10d
  signed int v17; // r13d
  signed int v18; // esi
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rax
  signed int i; // edi
  signed int j; // ebx
  __int64 v24; // rdx
  __int64 v25; // [rsp+30h] [rbp-38h]

  v6 = a1;
  if ( (unsigned int)a1 <= 3 && (a2 & 0x80000000) == 0 && (a3 & 0x80000000) == 0 && (a4 & 0x80000000) == 0 )
  {
    v10 = 263004LL * a1;
    v11 = a2 >> 6;
    v12 = dword_140404A6C[v10 + 111579650];
    if ( v11 < v12 )
    {
      v13 = a3 >> 6;
      if ( v13 < (int)dword_140404A6C[v10 + 111579651] )
      {
        v14 = dword_140404A6C[v10 + 111579652];
        v15 = a4 >> 6;
        if ( v15 < v14 )
        {
          v16 = *(_DWORD *)(*(_QWORD *)&dword_140404A6C[v10 + 111579655] + 4LL * (v11 + v12 * (v15 + v13 * v14)));
          if ( v16 != -1 || (v16 = sub_140010020(v6, v11, v13, v15), v16 != -1) )
          {
            v17 = dword_140404A6C[263004 * v6
                                + 111579985
                                + 513 * (int)v16
                                + (int)(((a2 >> 3) & 7) + 8 * (((a4 >> 3) & 7) + 8 * ((a3 >> 3) & 7)))];
            if ( v17 != -1 || (v17 = sub_140012490(v6, v16, a2 >> 3, a3 >> 3, a4 >> 3), v17 != -1) )
            {
              if ( (a5 & 0xE0000000) == 0x80000000 )
              {
                v18 = 0;
                v19 = (a2 & 7) + 8 * ((a4 & 7) + 8 * (a3 & 7));
                dword_140404A6C[6930 * v17 + 83197431 + v19] = a5;
                v20 = 2 * (v19 + 3465LL * v17);
                LOBYTE(dword_140404A6C[v20 + 83197943]) = *a6;
                BYTE1(dword_140404A6C[v20 + 83197943]) = a6[2];
                BYTE2(dword_140404A6C[v20 + 83197943]) = a6[4];
                HIBYTE(dword_140404A6C[v20 + 83197943]) = a6[6];
                LOBYTE(dword_140404A6C[v20 + 83197944]) = a6[8];
                BYTE1(dword_140404A6C[v20 + 83197944]) = a6[10];
                BYTE2(dword_140404A6C[v20 + 83197944]) = a6[12];
                HIBYTE(dword_140404A6C[v20 + 83197944]) = a6[14];
                v21 = 232LL * (unsigned __int16)a5;
                v25 = v21;
                if ( *(int *)((char *)&dword_140404A6C[20074646] + v21) > 0 )
                {
                  do
                  {
                    for ( i = 0; i < *(int *)((char *)&dword_140404A6C[20074647] + v21); ++i )
                    {
                      for ( j = 0; j < *(int *)((char *)&dword_140404A6C[20074645] + v21); ++j )
                      {
                        if ( v18 || i || j )
                        {
                          sub_140016C80(v6, j + a2, v18 + a3, i + a4, j | ((i | (v18 << 8)) << 8) | 0xC0000000);
                          v21 = v25;
                        }
                      }
                    }
                    ++v18;
                  }
                  while ( v18 < *(int *)((char *)&dword_140404A6C[20074646] + v21) );
                }
              }
              v24 = (a3 >> 1) & 3;
              if ( (dword_140404A6C[6930 * v17 + 83200503 + v24] & 0x80000000) == 0 )
                sub_140012940(v17, v24);
              sub_1400173C0((unsigned int)v6, a2, a3, a4);
            }
          }
        }
      }
    }
  }
}

