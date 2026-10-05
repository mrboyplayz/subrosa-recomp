/* Address: 0x14000fb20 | Name: sub_14000FB20 | Size: 705 bytes */
unsigned __int64 __fastcall sub_14000FB20(
        unsigned int a1,
        float a2,
        float a3,
        float a4,
        float a5,
        float a6,
        float a7,
        int a8,
        int *a9)
{
  int *v10; // r14
  int v11; // ebx
  int v12; // edi
  unsigned __int64 result; // rax
  __int64 v15; // rcx
  __int64 v16; // rax
  float v17; // xmm0_4
  __int64 v18; // rcx
  __int64 v19; // rax
  float v20; // xmm0_4
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rdx
  int v24; // eax
  int v25; // edx

  v10 = dword_140147804;
  v11 = 0;
  v12 = 1;
  do
  {
    result = a8 & (unsigned int)v12;
    if ( (_DWORD)result == v12 )
    {
      v15 = 3LL * *(v10 - 1);
      v16 = *v10;
      *(float *)&qword_15ADEF160 = (float)(a5 * *(float *)&dword_140147690[3 * *(v10 - 1)]) + a2;
      *((float *)&qword_15ADEF160 + 1) = (float)(a6 * *(float *)&dword_140147690[v15 + 1]) + a3;
      v17 = a7 * *(float *)&dword_140147690[v15 + 2];
      v18 = 3 * v16;
      v19 = v10[1];
      *(float *)&dword_15ADEF168 = v17 + a4;
      *(float *)&qword_15ADEF184 = (float)(a5 * *(float *)&dword_140147690[v18]) + a2;
      *((float *)&qword_15ADEF184 + 1) = (float)(a6 * *(float *)&dword_140147690[v18 + 1]) + a3;
      v20 = a7 * *(float *)&dword_140147690[v18 + 2];
      v21 = 3 * v19;
      v22 = v10[2];
      *(float *)&dword_15ADEF18C = v20 + a4;
      *(float *)&xmmword_15ADEF214 = (float)(a5 * *(float *)&dword_140147690[v21]) + a2;
      *((float *)&xmmword_15ADEF214 + 1) = (float)(a6 * *(float *)&dword_140147690[v21 + 1]) + a3;
      *((float *)&xmmword_15ADEF214 + 2) = (float)(a7 * *(float *)&dword_140147690[v21 + 2]) + a4;
      *(float *)&qword_15ADEF1F0 = (float)(a5 * *(float *)&dword_140147690[3 * v22]) + a2;
      *((float *)&qword_15ADEF1F0 + 1) = (float)(a6 * *(float *)&dword_140147690[3 * v22 + 1]) + a3;
      *(float *)&dword_15ADEF1F8 = (float)(a7 * *(float *)&dword_140147690[3 * v22 + 2]) + a4;
      if ( v11 )
      {
        switch ( v11 )
        {
          case 1:
            v23 = 393216;
            break;
          case 2:
            v23 = 0x10000;
            break;
          case 3:
            v23 = 327680;
            break;
          default:
            v23 = 0x40000;
            if ( v11 == 4 )
              v23 = 0x20000;
            break;
        }
      }
      else
      {
        v23 = 196608;
      }
      v24 = sub_1400117A0(a1, v23);
      v25 = *a9;
      if ( (unsigned int)(*a9 - 1) <= 3 )
        v25 = (((_BYTE)a1 + (_BYTE)v25 - 1) & 3) + 1;
      if ( (unsigned int)(v25 - 9) <= 3 )
        v25 = (((_BYTE)a1 + (_BYTE)v25 - 1) & 3) + 9;
      result = sub_140001320(
                 (__int64)&qword_15ADEF160,
                 (__int64)&xmmword_15ADEF214 + 12,
                 1,
                 1,
                 1,
                 1,
                 v24 | (unsigned int)v25);
    }
    ++v11;
    v12 = __ROL4__(v12, 1);
    v10 += 4;
    ++a9;
  }
  while ( v11 < 6 );
  return result;
}

