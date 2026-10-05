/* Address: 0x14007c660 | Name: sub_14007C660 | Size: 703 bytes */
__int64 __fastcall sub_14007C660(int a1, int a2, unsigned int a3, unsigned __int16 a4)
{
  __int64 result; // rax
  __int64 v5; // rdi
  int v8; // ebx
  __int64 v9; // rbx
  __int16 v10; // ax
  __int64 v11; // rcx
  __int64 v12; // r8
  signed int v13; // esi
  __int64 v14; // rax
  signed int v15; // ebp
  __int64 v16; // rax
  unsigned int *v17; // r14
  _WORD *v18; // r15
  __int64 v19; // rdi
  __int16 v20; // ax
  __int64 v21; // r8
  unsigned int *v22; // [rsp+30h] [rbp-58h]
  _WORD *v23; // [rsp+38h] [rbp-50h]
  int *v24; // [rsp+40h] [rbp-48h]
  unsigned int *v25; // [rsp+48h] [rbp-40h]
  struct sockaddr *v26; // [rsp+50h] [rbp-38h]
  __int64 v27; // [rsp+58h] [rbp-30h]

  result = a2;
  v5 = 16387LL * a2;
  if ( (int)dword_140404A6C[v5 + 135184966] > 0 )
  {
    ++dword_140404A6C[v5 + 135184965];
    dword_140404A6C[v5 + 135184966] = 0;
  }
  v8 = dword_140404A6C[v5 + 135184965];
  if ( v8 > 1400 )
  {
    if ( v8 <= 0x10000 )
    {
      v13 = 0;
      v14 = a1;
      v27 = a1;
      v15 = ((int)((unsigned __int64)(1570730897LL * v8) >> 32) >> 9)
          + ((unsigned int)((unsigned __int64)(1570730897LL * v8) >> 32) >> 31)
          + 1;
      if ( v15 > 0 )
      {
        v16 = 1048782LL * a1;
        v17 = &dword_140404A6C[v16 + 112673942];
        v22 = &dword_140404A6C[v16 + 112673946];
        v18 = (_WORD *)&dword_140404A6C[v16 + 112673952] + 1;
        v23 = (_WORD *)&dword_140404A6C[v16 + 112673945] + 1;
        v25 = &dword_140404A6C[v16 + 112673949];
        v26 = (struct sockaddr *)&dword_140404A6C[v16 + 112673945];
        v24 = (int *)(0x140000000LL + v16 * 4 + 454909132);
        v19 = 0x140000000LL + v5 * 4 + 544953228;
        do
        {
          dword_140404A6C[135316064] = *v17;
          LOWORD(dword_140404A6C[135316065]) = *v18;
          *(_QWORD *)&dword_140404A6C[135316061] = 8;
          HIBYTE(dword_140404A6C[135316064]) = 102;
          BYTE2(dword_140404A6C[135316065]) = v13;
          HIBYTE(dword_140404A6C[135316065]) = v15;
          if ( v8 <= 1400 )
          {
            if ( v8 + 8 < 0x10000 )
            {
              MEMORY[0x1401FC920](&dword_140404A6C[135316066], v19);
              dword_140404A6C[135316061] += v8;
            }
            v8 = 0;
          }
          else
          {
            MEMORY[0x1401FC920](&dword_140404A6C[135316066], v19);
            v8 -= 1400;
            dword_140404A6C[135316061] = 1408;
          }
          *v22 = htonl(a3);
          v20 = htons(a4);
          v21 = dword_140404A6C[135316061];
          *v23 = v20;
          sendto(*v24, &dword_140404A6C[135316064], v21, 0, v26, *v25);
          ++v13;
          v19 += 1400;
        }
        while ( v13 < v15 );
        v14 = v27;
      }
      result = 4195128 * v14;
      ++*(_WORD *)((char *)&dword_140404A6C[112673952] + result + 2);
    }
  }
  else
  {
    v9 = 1048782LL * a1;
    HIBYTE(dword_140404A6C[v5 + 135184968]) = 80;
    dword_140404A6C[v9 + 112673946] = htonl(a3);
    v10 = htons(a4);
    v11 = (int)dword_140404A6C[v9 + 112673944];
    v12 = dword_140404A6C[v5 + 135184965];
    HIWORD(dword_140404A6C[v9 + 112673945]) = v10;
    return sendto(
             v11,
             &dword_140404A6C[v5 + 135184968],
             v12,
             0,
             &dword_140404A6C[v9 + 112673945],
             dword_140404A6C[v9 + 112673949]);
  }
  return result;
}

