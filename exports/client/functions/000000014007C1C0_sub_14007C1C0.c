/* Address: 0x14007c1c0 | Name: sub_14007C1C0 | Size: 480 bytes */
__int64 __fastcall sub_14007C1C0(int a1, unsigned int a2)
{
  __int64 v2; // r13
  __int64 v4; // rdi
  __int64 v5; // rbx
  unsigned int *v6; // r14
  __int64 result; // rax
  unsigned int i; // esi
  char v9; // al
  unsigned int v10; // eax
  __int64 v11; // rcx

  v2 = a1;
  v4 = 1048782 * v2;
  v5 = 16387LL * (int)a2;
  dword_140404A6C[1048782 * a1 + 112673946] = 0;
  v6 = &dword_140404A6C[1048782 * a1 + 112673949];
  result = recvfrom(
             (int)dword_140404A6C[1048782 * a1 + 112673944],
             &dword_140404A6C[v5 + 135184968],
             0x10000,
             0,
             &dword_140404A6C[1048782 * v2 + 112673945],
             &dword_140404A6C[1048782 * v2 + 112673949]);
  for ( i = result; (int)result > 0; i = result )
  {
    if ( LOBYTE(dword_140404A6C[v5 + 135184968]) == LOBYTE(dword_140404A6C[v4 + 112673942])
      && BYTE1(dword_140404A6C[v5 + 135184968]) == BYTE1(dword_140404A6C[v4 + 112673942])
      && BYTE2(dword_140404A6C[v5 + 135184968]) == BYTE2(dword_140404A6C[v4 + 112673942]) )
    {
      v9 = HIBYTE(dword_140404A6C[v5 + 135184968]);
      if ( v9 == 80 )
      {
        v10 = ntohl(dword_140404A6C[v4 + 112673946]);
        v11 = HIWORD(dword_140404A6C[v4 + 112673945]);
        dword_140404A6C[v4 + 112673951] = v10;
        LOWORD(dword_140404A6C[v4 + 112673952]) = ntohs(v11);
        *(_QWORD *)&dword_140404A6C[v5 + 135184965] = 4;
        dword_140404A6C[v5 + 135184967] = i;
        return i;
      }
      if ( v9 == 102 )
      {
        dword_140404A6C[v4 + 112673951] = ntohl(dword_140404A6C[v4 + 112673946]);
        LOWORD(dword_140404A6C[v4 + 112673952]) = ntohs(HIWORD(dword_140404A6C[v4 + 112673945]));
        *(_QWORD *)&dword_140404A6C[v5 + 135184965] = 4;
        dword_140404A6C[v5 + 135184967] = i;
        result = sub_14007C3A0((unsigned int)v2, a2);
        if ( (_DWORD)result )
          return result;
      }
    }
    dword_140404A6C[v4 + 112673946] = 0;
    result = recvfrom(
               (int)dword_140404A6C[v4 + 112673944],
               &dword_140404A6C[v5 + 135184968],
               0x10000,
               0,
               &dword_140404A6C[1048782 * v2 + 112673945],
               v6);
  }
  return result;
}

