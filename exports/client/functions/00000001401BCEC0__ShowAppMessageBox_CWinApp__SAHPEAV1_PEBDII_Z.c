/* Address: 0x1401bcec0 | Name: ?ShowAppMessageBox@CWinApp@@SAHPEAV1@PEBDII@Z | Size: 777 bytes */
__int64 __fastcall CWinApp::ShowAppMessageBox(struct CWinApp *a1, const char *a2, int a3)
{
  __int64 v4; // [rsp+0h] [rbp-1B8h] BYREF
  int i; // [rsp+30h] [rbp-188h]
  int j; // [rsp+34h] [rbp-184h]
  int v7; // [rsp+38h] [rbp-180h]
  int v8; // [rsp+3Ch] [rbp-17Ch]
  int v9; // [rsp+40h] [rbp-178h]
  int v10; // [rsp+44h] [rbp-174h]
  int v11; // [rsp+48h] [rbp-170h]
  int v12; // [rsp+4Ch] [rbp-16Ch]
  int v13; // [rsp+50h] [rbp-168h]
  int v14; // [rsp+54h] [rbp-164h]
  unsigned __int8 *v15; // [rsp+58h] [rbp-160h]
  unsigned __int8 *v16; // [rsp+60h] [rbp-158h]
  _DWORD v17[14]; // [rsp+68h] [rbp-150h] BYREF
  _DWORD v18[16]; // [rsp+A0h] [rbp-118h] BYREF
  _DWORD v19[24]; // [rsp+E0h] [rbp-D8h] BYREF
  int v20; // [rsp+140h] [rbp-78h] BYREF
  _BYTE v21[116]; // [rsp+144h] [rbp-74h] BYREF

  if ( a3 == 16 )
    v15 = (unsigned __int8 *)&unk_14027E788;
  else
    v15 = (unsigned __int8 *)&unk_1402820F0;
  v16 = v15;
  for ( i = 0; i < a3; ++i )
  {
    v7 = *(__int16 *)&a2[2 * i] >> 8;
    v13 = *(__int16 *)&a2[2 * i] - (v7 << 8);
    v9 = word_140282900[v7];
    v12 = word_140282900[v7 + 1] - v9;
    *(_DWORD *)&v21[4 * v16[i] - 4] = (((v13 * v12 + (v9 << 8)) >> 3) + 1) >> 1;
  }
  v8 = a3 >> 1;
  sub_1401DCE10(v17, &v20, (unsigned int)(a3 >> 1));
  sub_1401DCE10(v18, v21, (unsigned int)(a3 >> 1));
  for ( i = 0; i < v8; ++i )
  {
    v10 = v17[i] + v17[i + 1];
    v11 = v18[i + 1] - v18[i];
    v19[i] = -v11 - v10;
    v19[a3 - i - 1] = v11 - v10;
  }
  sub_1401BD1D0((_DWORD)a1, (unsigned int)v19, 12, 17, a3);
  for ( j = 0; !(unsigned int)sub_1401BBF70((__int64)a1, a3) && j < 16; ++j )
  {
    v14 = 2;
    sub_1401BBEB0((__int64)v19, a3, 0x10000 - (2 << j));
    for ( i = 0; i < a3; ++i )
      *((_WORD *)a1 + i) = (((int)v19[i] >> 4) + 1) >> 1;
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&v4 ^ *(_QWORD *)&v21[92]);
}

