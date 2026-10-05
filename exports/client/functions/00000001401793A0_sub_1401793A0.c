/* Address: 0x1401793a0 | Name: sub_1401793A0 | Size: 357 bytes */
__int64 __fastcall sub_1401793A0(__int64 a1, int a2, int a3)
{
  unsigned int v6; // ebp
  unsigned int v7; // eax
  int v8; // esi
  unsigned int v9; // ebx
  unsigned int v10; // r11d
  __int64 v11; // rax
  unsigned __int8 *v12; // r10
  int v13; // r9d
  unsigned int v14; // ebx
  int v15; // r8d
  int v16; // edx
  __int64 v17; // rdi
  unsigned int v18; // ecx

  if ( !*(_DWORD *)(a1 + 44) && !*(_DWORD *)(a1 + 48) )
    return 0;
  v6 = sub_140178410(a1, a3);
  v7 = sub_140178410(a1, a2);
  v8 = 0;
  v9 = v7;
  v10 = 0;
  if ( *(_DWORD *)(a1 + 48) )
    v10 = sub_14017DCC0(a1, v7, v6);
  v11 = *(int *)(a1 + 44);
  if ( (_DWORD)v11 )
  {
    v12 = (unsigned __int8 *)(*(_QWORD *)(a1 + 8) + v11);
    if ( v12[3] + (v12[2] << 8) )
    {
      if ( v12[9] + (v12[8] << 8) == 1 )
      {
        v13 = 0;
        v14 = v6 | (v9 << 16);
        v15 = (v12[10] << 8) + v12[11] - 1;
        if ( v15 >= 0 )
        {
          do
          {
            v16 = (v15 + v13) >> 1;
            v17 = 6 * v16;
            v18 = v12[v17 + 21] + (v12[v17 + 18] << 24) + (v12[v17 + 20] << 8) + (v12[v17 + 19] << 16);
            if ( v14 >= v18 )
            {
              if ( v14 <= v18 )
              {
                v8 = (__int16)(v12[v17 + 23] + (v12[v17 + 22] << 8));
                break;
              }
              v13 = v16 + 1;
            }
            else
            {
              v15 = v16 - 1;
            }
          }
          while ( v13 <= v15 );
        }
      }
    }
    v10 += v8;
  }
  return v10;
}

