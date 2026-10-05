/* Address: 0x1401e9360 | Name: sub_1401E9360 | Size: 1596 bytes */
__int64 __fastcall sub_1401E9360(
        int *a1,
        _BYTE *a2,
        int a3,
        __int64 a4,
        int a5,
        unsigned int a6,
        int a7,
        __int64 a8,
        int a9)
{
  __int64 v10; // [rsp+0h] [rbp-108h] BYREF
  int v11; // [rsp+50h] [rbp-B8h]
  int v12; // [rsp+54h] [rbp-B4h]
  int v13; // [rsp+58h] [rbp-B0h]
  int v14; // [rsp+5Ch] [rbp-ACh]
  int i; // [rsp+60h] [rbp-A8h]
  int v16; // [rsp+64h] [rbp-A4h]
  char v17; // [rsp+68h] [rbp-A0h] BYREF
  int v18; // [rsp+6Ch] [rbp-9Ch]
  int v19; // [rsp+70h] [rbp-98h]
  int v20; // [rsp+74h] [rbp-94h]
  int v21; // [rsp+78h] [rbp-90h]
  int v22; // [rsp+7Ch] [rbp-8Ch]
  int v23; // [rsp+80h] [rbp-88h]
  int v24; // [rsp+84h] [rbp-84h] BYREF
  int v25; // [rsp+88h] [rbp-80h]
  _WORD v26[48]; // [rsp+90h] [rbp-78h] BYREF
  __int64 v27; // [rsp+F0h] [rbp-18h]
  int v30; // [rsp+118h] [rbp+10h]

  if ( a6 < 2 )
  {
    if ( !a6 && a3 && a2 || (v23 = a1[3] / 400, !(a5 % v23)) )
    {
      if ( a3 && a2 )
      {
        if ( a3 >= 0 )
        {
          v19 = sub_1401F2A30(a2);
          v21 = sub_1401E2CB0(a2);
          v11 = sub_1401E2D90(a2, a1[3]);
          v22 = sub_1401E2EB0(a2);
          v16 = sub_1401E99E0((_DWORD)a2, a3, a7, (unsigned int)&v17, 0, (__int64)v26, (__int64)&v24, a8);
          if ( v16 >= 0 )
          {
            v30 = v24 + (_DWORD)a2;
            if ( a6 )
            {
              if ( a5 < v11 || v19 == 1002 || a1[14] == 1002 )
              {
                sub_1401E9360((_DWORD)a1, 0, 0, a4, a5, 0, 0, 0, a9);
              }
              else
              {
                v25 = a1[18];
                if ( a5 == v11 || (v14 = sub_1401E9360((_DWORD)a1, 0, 0, a4, a5 - v11, 0, 0, 0, a9), v14 >= 0) )
                {
                  a1[14] = v19;
                  a1[13] = v21;
                  a1[16] = v11;
                  a1[12] = v22;
                  v14 = sub_1401F2AA0((_DWORD)a1, v30, v26[0], (int)a4 + 4 * (a5 - v11) * a1[2], v11, 1);
                  if ( v14 >= 0 )
                  {
                    sub_1401A2600();
                    a1[18] = a5;
                  }
                }
                else
                {
                  a1[18] = v25;
                }
              }
            }
            else if ( v11 * v16 <= a5 )
            {
              a1[14] = v19;
              a1[13] = v21;
              a1[16] = v11;
              a1[12] = v22;
              v13 = 0;
              for ( i = 0; i < v16; ++i )
              {
                v20 = sub_1401F2AA0((_DWORD)a1, v30, (__int16)v26[i], (int)a4 + 4 * a1[2] * v13, a5 - v13, 0);
                if ( v20 < 0 )
                  return MEMORY[0x1401F8B20]((unsigned __int64)&v10 ^ v27);
                v30 += (__int16)v26[i];
                v13 += v20;
              }
              a1[18] = v13;
              sub_1401A2600();
              if ( a9 )
              {
                sub_1401E3040(a4, v13, a1[2], (__int64)(a1 + 19));
              }
              else
              {
                a1[20] = 0;
                a1[19] = 0;
              }
            }
          }
        }
      }
      else
      {
        v12 = 0;
        while ( 1 )
        {
          v18 = sub_1401F2AA0((_DWORD)a1, 0, 0, (int)a4 + 4 * a1[2] * v12, a5 - v12, 0);
          if ( v18 < 0 )
            break;
          v12 += v18;
          if ( v12 >= a5 )
          {
            sub_1401A2600();
            a1[18] = v12;
            return MEMORY[0x1401F8B20]((unsigned __int64)&v10 ^ v27);
          }
        }
      }
    }
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&v10 ^ v27);
}

