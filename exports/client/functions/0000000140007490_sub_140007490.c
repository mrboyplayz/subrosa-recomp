/* Address: 0x140007490 | Name: sub_140007490 | Size: 180 bytes */
__int64 __fastcall sub_140007490(
        unsigned int a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7)
{
  __int64 v10; // rbx
  __int64 result; // rax
  __int64 v12; // rcx
  __int64 v13; // r8

  v10 = (int)a1;
  result = sub_1400A4620(a1);
  if ( (_DWORD)result != -1 )
  {
    v12 = 5LL * (int)result;
    v13 = 188896 * v10 + 8 * v12;
    *(unsigned int *)((char *)&dword_140404A6C[438887436] + v13) = a6;
    *(unsigned int *)((char *)&dword_140404A6C[438887437] + v13) = a7;
    *(unsigned int *)((char *)&dword_140404A6C[438887428] + v13) = 1;
    *(unsigned int *)((char *)&dword_140404A6C[438887429] + v13) = a2;
    *(unsigned int *)((char *)&dword_140404A6C[438887430] + v13) = a3;
    *(unsigned int *)((char *)&dword_140404A6C[438887431] + v13) = a4;
    *(unsigned int *)((char *)&dword_140404A6C[438887432] + v13) = a5;
    return a5;
  }
  return result;
}

