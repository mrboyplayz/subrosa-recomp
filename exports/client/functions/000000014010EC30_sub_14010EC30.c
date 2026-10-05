/* Address: 0x14010ec30 | Name: sub_14010EC30 | Size: 495 bytes */
__int64 __fastcall sub_14010EC30(int a1, int a2, int a3)
{
  __int64 v3; // r14
  __int64 v4; // rdi
  unsigned int *v5; // rbx
  __int64 v6; // rdx
  signed int v7; // r8d
  __int64 v8; // rax
  int v9; // ebp
  __int64 v10; // rsi
  __int64 v11; // rbx
  __int64 v12; // rbx
  __int64 result; // rax
  unsigned int *v14; // rcx
  __int64 v15; // rdx

  v3 = a3;
  v4 = a2;
  v5 = &dword_140404A6C[47224 * a1 + 438889303 + 5 * a3];
  sub_140115D90(v5, 8);
  v6 = 36 * v3;
  v7 = dword_140404A6C[456202728] - *v5;
  v8 = (unsigned __int8)*v5;
  v9 = 0;
  if ( v7 >= 192 )
    v8 = 0;
  LOBYTE(v9) = v7 < 192;
  v10 = v6 + 318464 * v8;
  v11 = v6 + 318464 * v4;
  sub_14010E6C0(
    (unsigned int *)((char *)&dword_140404A6C[137358015] + v11),
    *(unsigned int *)((char *)&dword_140404A6C[137358015] + v10),
    v9,
    0x1Cu);
  sub_14010E6C0(
    (unsigned int *)((char *)&dword_140404A6C[137358016] + v11),
    *(unsigned int *)((char *)&dword_140404A6C[137358016] + v10),
    v9,
    0x1Cu);
  sub_14010E6C0(
    (unsigned int *)((char *)&dword_140404A6C[137358017] + v11),
    *(unsigned int *)((char *)&dword_140404A6C[137358017] + v10),
    v9,
    0x1Cu);
  sub_140115D90((char *)&dword_140404A6C[137358018] + v11, 2);
  sub_14010E9B0(
    (unsigned int *)((char *)&dword_140404A6C[137358019] + v11),
    *(unsigned int *)((char *)&dword_140404A6C[137358019] + v10),
    v9,
    0xEu);
  sub_14010E9B0(
    (unsigned int *)((char *)&dword_140404A6C[137358020] + v11),
    *(unsigned int *)((char *)&dword_140404A6C[137358020] + v10),
    v9,
    0xEu);
  sub_14010E9B0(
    (unsigned int *)((char *)&dword_140404A6C[137358021] + v11),
    *(unsigned int *)((char *)&dword_140404A6C[137358021] + v10),
    v9,
    0xEu);
  v12 = 1760 * v3;
  result = dword_140404A6C[1760 * v3 + 278845898];
  switch ( (_DWORD)result )
  {
    case 0x12:
      sub_140115D90(&dword_140404A6C[v12 + 278846062], 4);
      sub_140115D90(&dword_140404A6C[v12 + 278846061], 4);
      v14 = &dword_140404A6C[278846063];
      v15 = 30;
      break;
    case 0x1A:
      v14 = &dword_140404A6C[278846112];
      v15 = 1;
      break;
    case 0x27:
      v14 = &dword_140404A6C[278846113];
      v15 = 12;
      break;
    default:
      return result;
  }
  return sub_140115D90(&v14[v12], v15);
}

