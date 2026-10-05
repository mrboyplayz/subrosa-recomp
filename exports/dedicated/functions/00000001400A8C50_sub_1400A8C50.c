/* Address: 0x1400a8c50 | Name: sub_1400A8C50 | Size: 495 bytes */
__int64 __fastcall sub_1400A8C50(int a1, int a2, int a3)
{
  __int64 v3; // r14
  __int64 v4; // rdi
  _DWORD *v5; // rbx
  __int64 v6; // rdx
  int v7; // r8d
  __int64 v8; // rax
  int v9; // ebp
  __int64 v10; // rsi
  __int64 v11; // rbx
  __int64 v12; // rbx
  __int64 result; // rax
  int *v14; // rcx
  __int64 v15; // rdx

  v3 = a3;
  v4 = a2;
  v5 = (_DWORD *)((char *)&unk_160F2B708 + 188896 * a1 + 20 * a3);
  sub_1400AFDB0(v5, 8);
  v6 = 36 * v3;
  v7 = dword_163D75FAC - *v5;
  v8 = (unsigned __int8)*v5;
  v9 = 0;
  if ( v7 >= 192 )
    v8 = 0;
  LOBYTE(v9) = v7 < 192;
  v10 = v6 + 318464 * v8;
  v11 = v6 + 318464 * v4;
  sub_1400A86E0((char *)&unk_16F11A7C8 + v11, *(_DWORD *)((char *)&unk_16F11A7C8 + v10), v9, 0x1Cu);
  sub_1400A86E0((char *)&unk_16F11A7CC + v11, *(_DWORD *)((char *)&unk_16F11A7CC + v10), v9, 0x1Cu);
  sub_1400A86E0((char *)&unk_16F11A7D0 + v11, *(_DWORD *)((char *)&unk_16F11A7D0 + v10), v9, 0x1Cu);
  sub_1400AFDB0((char *)&unk_16F11A7D4 + v11, 2);
  sub_1400A89D0((char *)&unk_16F11A7D8 + v11, *(_DWORD *)((char *)&unk_16F11A7D8 + v10), v9, 0xEu);
  sub_1400A89D0((char *)&unk_16F11A7DC + v11, *(_DWORD *)((char *)&unk_16F11A7DC + v10), v9, 0xEu);
  sub_1400A89D0((char *)&unk_16F11A7E0 + v11, *(_DWORD *)((char *)&unk_16F11A7E0 + v10), v9, 0xEu);
  v12 = 7040 * v3;
  result = (unsigned int)dword_19025F0D4[1760 * v3];
  switch ( (_DWORD)result )
  {
    case 0x12:
      sub_1400AFDB0((char *)&unk_19025F364 + v12, 4);
      sub_1400AFDB0((char *)&unk_19025F360 + v12, 4);
      v14 = (int *)&unk_19025F368;
      v15 = 30;
      break;
    case 0x1A:
      v14 = (int *)qword_19025F428 + 1;
      v15 = 1;
      break;
    case 0x27:
      v14 = dword_19025F430;
      v15 = 12;
      break;
    default:
      return result;
  }
  return sub_1400AFDB0(&v14[(unsigned __int64)v12 / 4], v15);
}

