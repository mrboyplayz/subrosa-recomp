/* Address: 0x140266430 | Name: _wsopen_nolock | Size: 999 bytes */
__int64 __fastcall wsopen_nolock(_DWORD *a1, int *a2, __int64 a3, int a4, int a5, char a6)
{
  __m128i *v10; // rax
  __int64 v11; // xmm1_8
  unsigned __int64 v12; // xmm0_8
  int v14; // eax
  __int32 v15; // ecx
  unsigned __int64 v16; // rdx
  __int64 v17; // r14
  __int64 v18; // rax
  __int32 v19; // ebx
  __int64 v20; // r13
  unsigned int v21; // eax
  int v22; // eax
  unsigned int v23; // ebx
  __int8 v24; // r14
  __int8 v25; // r14
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rcx
  unsigned int v29; // ecx
  unsigned int v30; // eax
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rdx
  unsigned int v35; // eax
  char v36[4]; // [rsp+48h] [rbp-51h] BYREF
  unsigned int v37; // [rsp+4Ch] [rbp-4Dh]
  __m128i v38; // [rsp+50h] [rbp-49h]
  __int64 v39; // [rsp+60h] [rbp-39h]
  __int64 v40; // [rsp+68h] [rbp-31h]
  __int64 v41; // [rsp+70h] [rbp-29h]
  unsigned __int64 dwShareMode; // [rsp+78h] [rbp-21h]
  _QWORD SecurityAttributes[3]; // [rsp+80h] [rbp-19h] BYREF
  __m128i v44; // [rsp+98h] [rbp-1h] BYREF
  __int64 v45; // [rsp+A8h] [rbp+Fh]

  v10 = (__m128i *)decode_options((__int64)&v44, a4, a5, a6);
  v11 = v10[1].m128i_i64[0];
  v38 = *v10;
  v12 = _mm_srli_si128(v38, 8).m128i_u64[0];
  v40 = v11;
  v39 = v11;
  dwShareMode = HIDWORD(v12);
  if ( HIDWORD(v12) == -1 )
  {
    *(_DWORD *)sub_14024D19C() = 0;
    *a2 = -1;
    return (unsigned int)*errno();
  }
  v14 = alloc_osfhnd();
  *a2 = v14;
  if ( v14 == -1 )
  {
    *(_DWORD *)sub_14024D19C() = 0;
    *a2 = -1;
    *errno() = 24;
    return (unsigned int)*errno();
  }
  v15 = v38.m128i_i32[2];
  v16 = v38.m128i_i64[0];
  v17 = (unsigned int)v39 | HIDWORD(v39);
  *a1 = 1;
  LODWORD(SecurityAttributes[0]) = 24;
  SecurityAttributes[1] = 0;
  LODWORD(SecurityAttributes[2]) = (a4 & 0x80) == 0;
  v41 = v17;
  v18 = ((__int64 (__fastcall *)(__int64, unsigned __int64, _QWORD, _QWORD *, __int32, _DWORD, _QWORD))CreateFileW)(
          a3,
          HIDWORD(v16),
          HIDWORD(v12),
          SecurityAttributes,
          v15,
          v17,
          0);
  v19 = v38.m128i_i32[1];
  v20 = v18;
  if ( v18 == -1 )
  {
    if ( (v38.m128i_i32[1] & 0xC0000000) != 0xC0000000
      || (a4 & 1) == 0
      || (v19 = v38.m128i_i32[1] & 0x7FFFFFFF,
          v38.m128i_i32[1] &= ~0x80000000,
          v20 = ((__int64 (__fastcall *)(__int64, unsigned __int64, _QWORD, _QWORD *, __int32, _DWORD, _QWORD))CreateFileW)(
                  a3,
                  HIDWORD(v38.m128i_i64[0]),
                  HIDWORD(v12),
                  SecurityAttributes,
                  v38.m128i_i32[2],
                  v17,
                  0),
          v20 == -1) )
    {
      *(_BYTE *)(*(_QWORD *)&dword_140404A6C[2 * ((__int64)*a2 >> 6) + 19065401] + 72LL * (*a2 & 0x3F) + 56) &= ~1u;
      v21 = ((__int64 (*)(void))GetLastError)();
      sub_14024D14C(v21);
      return (unsigned int)*errno();
    }
  }
  v22 = ((__int64 (__fastcall *)(__int64))GetFileType)(v20);
  if ( !v22 )
  {
    v23 = ((__int64 (*)(void))GetLastError)();
    sub_14024D14C(v23);
    *(_BYTE *)(*(_QWORD *)&dword_140404A6C[2 * ((__int64)*a2 >> 6) + 19065401] + 72LL * (*a2 & 0x3F) + 56) &= ~1u;
    ((void (__fastcall *)(__int64))CloseHandle)(v20);
    if ( !v23 )
      *errno() = 13;
    return (unsigned int)*errno();
  }
  v24 = v38.m128i_i8[0];
  if ( v22 == 2 )
  {
    v24 = v38.m128i_i8[0] | 0x40;
  }
  else if ( v22 == 3 )
  {
    v24 = v38.m128i_i8[0] | 8;
  }
  sub_140261090(*a2, v20);
  v25 = v24 | 1;
  v26 = (__int64)*a2 >> 6;
  v27 = *a2 & 0x3F;
  v38.m128i_i8[0] = v25;
  *(_BYTE *)(*(_QWORD *)&dword_140404A6C[2 * v26 + 19065401] + 72 * v27 + 56) = v25;
  *(_BYTE *)(*(_QWORD *)&dword_140404A6C[2 * ((__int64)*a2 >> 6) + 19065401] + 72LL * (*a2 & 0x3F) + 57) = 0;
  if ( (a4 & 2) != 0 )
  {
    v37 = truncate_ctrl_z_if_present(*a2);
    if ( v37 )
    {
      LODWORD(v28) = *a2;
LABEL_21:
      close_nolock(v28);
      return v37;
    }
  }
  v29 = *a2;
  v44 = v38;
  v36[0] = 0;
  v45 = v40;
  v30 = sub_140265AEC(v29, (__int64)&v44, a4, v36);
  v28 = *a2;
  v37 = v30;
  if ( v30 )
    goto LABEL_21;
  *(_BYTE *)(*(_QWORD *)&dword_140404A6C[2 * (v28 >> 6) + 19065401] + 72 * (v28 & 0x3F) + 57) = v36[0];
  v31 = *a2;
  v32 = 9 * (v31 & 0x3F);
  v33 = *(_QWORD *)&dword_140404A6C[2 * (v31 >> 6) + 19065401];
  *(_BYTE *)(v33 + 8 * v32 + 61) &= ~1u;
  *(_BYTE *)(v33 + 8 * v32 + 61) |= BYTE2(a4) & 1;
  if ( (v25 & 0x48) == 0 && (a4 & 8) != 0 )
    *(_BYTE *)(*(_QWORD *)&dword_140404A6C[2 * ((__int64)*a2 >> 6) + 19065401] + 72LL * (*a2 & 0x3F) + 56) |= 0x20u;
  if ( (v19 & 0xC0000000) == 0xC0000000 && (a4 & 1) != 0 )
  {
    ((void (__fastcall *)(__int64))CloseHandle)(v20);
    v38.m128i_i32[1] = v19 & 0x7FFFFFFF;
    v34 = ((__int64 (__fastcall *)(__int64, unsigned __int64, _QWORD, _QWORD *, __int32, _DWORD, _QWORD))CreateFileW)(
            a3,
            HIDWORD(v38.m128i_i64[0]),
            (unsigned int)dwShareMode,
            SecurityAttributes,
            v38.m128i_i32[2],
            v41,
            0);
    if ( v34 == -1 )
    {
      v35 = ((__int64 (*)(void))GetLastError)();
      sub_14024D14C(v35);
      *(_BYTE *)(*(_QWORD *)&dword_140404A6C[2 * ((__int64)*a2 >> 6) + 19065401] + 72LL * (*a2 & 0x3F) + 56) &= ~1u;
      free_osfhnd(*a2);
      return (unsigned int)*errno();
    }
    *(_QWORD *)(*(_QWORD *)&dword_140404A6C[2 * ((__int64)*a2 >> 6) + 19065401] + 72LL * (*a2 & 0x3F) + 40) = v34;
  }
  return 0;
}

