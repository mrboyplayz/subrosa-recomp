/* Address: 0x140251044 | Name: sub_140251044 | Size: 156 bytes */
__int64 __fastcall sub_140251044(char *FileName, char *a2, int a3, __int64 a4)
{
  int v4; // ebp
  __int64 v7; // rax
  __int64 v8; // rbx
  int v9; // eax
  int OpenFlag[2]; // [rsp+30h] [rbp-28h]
  __int64 v12; // [rsp+40h] [rbp-18h] BYREF
  int FileHandle; // [rsp+70h] [rbp+18h] BYREF

  v4 = (int)FileName;
  v7 = sub_1402507BC((__int64)&v12, a2);
  v8 = 0;
  *(_QWORD *)OpenFlag = *(_QWORD *)v7;
  if ( (unsigned __int8)*(_DWORD *)(v7 + 8)
    && !(unsigned int)sopen_s((unsigned int)&FileHandle, v4, OpenFlag[0], a3, 384) )
  {
    ++dword_140404A6C[19064595];
    _InterlockedOr((volatile signed __int32 *)(a4 + 20), OpenFlag[1]);
    v9 = FileHandle;
    *(_DWORD *)(a4 + 16) = 0;
    *(_QWORD *)(a4 + 40) = 0;
    *(_QWORD *)(a4 + 8) = 0;
    *(_QWORD *)a4 = 0;
    v8 = a4;
    *(_DWORD *)(a4 + 24) = v9;
  }
  return v8;
}

