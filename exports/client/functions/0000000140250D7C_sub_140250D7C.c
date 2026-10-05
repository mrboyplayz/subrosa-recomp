/* Address: 0x140250d7c | Name: sub_140250D7C | Size: 150 bytes */
__int64 __fastcall sub_140250D7C(char *FileName, char *a2, int a3, __int64 a4)
{
  int v4; // esi
  __int64 v7; // rax
  __int64 v8; // xmm0_8
  int v9; // eax
  int FileHandle; // [rsp+30h] [rbp-38h] BYREF
  int OpenFlag[2]; // [rsp+38h] [rbp-30h]
  int v13; // [rsp+40h] [rbp-28h]
  _BYTE v14[32]; // [rsp+48h] [rbp-20h] BYREF

  v4 = (int)FileName;
  v7 = sub_1402507BC((__int64)v14, a2);
  v8 = *(_QWORD *)v7;
  LODWORD(v7) = *(_DWORD *)(v7 + 8);
  *(_QWORD *)OpenFlag = v8;
  v13 = v7;
  if ( !(_BYTE)v7 || (unsigned int)sopen_s((unsigned int)&FileHandle, v4, OpenFlag[0], a3, 384) )
    return 0;
  ++dword_140404A6C[19064595];
  _InterlockedOr((volatile signed __int32 *)(a4 + 20), OpenFlag[1]);
  v9 = FileHandle;
  *(_DWORD *)(a4 + 16) = 0;
  *(_QWORD *)(a4 + 40) = 0;
  *(_QWORD *)(a4 + 8) = 0;
  *(_QWORD *)a4 = 0;
  *(_DWORD *)(a4 + 24) = v9;
  return a4;
}

