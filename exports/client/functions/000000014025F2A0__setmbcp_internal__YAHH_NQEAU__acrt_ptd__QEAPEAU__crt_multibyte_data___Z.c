/* Address: 0x14025f2a0 | Name: ?setmbcp_internal@@YAHH_NQEAU__acrt_ptd@@QEAPEAU__crt_multibyte_data@@@Z | Size: 450 bytes */
__int64 __fastcall setmbcp_internal(
        unsigned int a1,
        char a2,
        struct __acrt_ptd *const a3,
        struct __crt_multibyte_data **const a4)
{
  unsigned int SystemCP; // edi
  __int64 v8; // rax
  _DWORD *v9; // rbx
  __int64 v10; // rdx
  _OWORD *v11; // rcx
  _OWORD *v12; // rax
  __int128 v13; // xmm1
  unsigned int v14; // edi
  void *v15; // rcx
  _DWORD *v16; // rcx
  _BYTE v17[4]; // [rsp+20h] [rbp-20h] BYREF
  unsigned int v18; // [rsp+24h] [rbp-1Ch] BYREF
  unsigned int v19; // [rsp+28h] [rbp-18h] BYREF
  volatile signed __int32 ***v20[2]; // [rsp+30h] [rbp-10h] BYREF
  struct __acrt_ptd *v21; // [rsp+70h] [rbp+30h] BYREF
  void **v22; // [rsp+78h] [rbp+38h] BYREF

  v22 = (void **)a4;
  v21 = a3;
  update_thread_multibyte_data_internal(a3, a4);
  SystemCP = getSystemCP(a1);
  if ( SystemCP == *(_DWORD *)(*((_QWORD *)v21 + 17) + 4LL) )
    return 0;
  v8 = malloc_base(0x228u);
  v9 = (_DWORD *)v8;
  if ( v8 )
  {
    v10 = 4;
    v11 = (_OWORD *)v8;
    v12 = *((_OWORD **)v21 + 17);
    do
    {
      *v11 = *v12;
      v11[1] = v12[1];
      v11[2] = v12[2];
      v11[3] = v12[3];
      v11[4] = v12[4];
      v11[5] = v12[5];
      v11[6] = v12[6];
      v11 += 8;
      v13 = v12[7];
      v12 += 8;
      *(v11 - 1) = v13;
      --v10;
    }
    while ( v10 );
    *v11 = *v12;
    v11[1] = v12[1];
    *((_QWORD *)v11 + 4) = *((_QWORD *)v12 + 4);
    *v9 = 0;
    v14 = setmbcp_nolock(SystemCP, v9);
    if ( v14 != -1 )
    {
      if ( !a2 )
        MEMORY[0x14024868C]();
      if ( _InterlockedExchangeAdd(*((volatile signed __int32 **)v21 + 17), 0xFFFFFFFF) == 1 )
      {
        v15 = *((void **)v21 + 17);
        if ( v15 != &unk_1403025A0 )
          free_base(v15);
      }
      *v9 = 1;
      v16 = v9;
      v9 = nullptr;
      *((_QWORD *)v21 + 17) = v16;
      if ( (*((_BYTE *)v21 + 936) & 2) == 0 && (dword_140302B88 & 1) == 0 )
      {
        v20[0] = (volatile signed __int32 ***)&v21;
        v20[1] = (volatile signed __int32 ***)&v22;
        v18 = 5;
        v19 = 5;
        sub_14025EB88((__int64)v17, &v19, v20, &v18);
        if ( a2 )
          off_140302580 = *v22;
      }
      goto LABEL_9;
    }
    *errno() = 22;
  }
  v14 = -1;
LABEL_9:
  free_base(v9);
  return v14;
}

