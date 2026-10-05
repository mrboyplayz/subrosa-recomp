/* Address: 0x14020ac30 | Name: sub_14020AC30 | Size: 206 bytes */
struct FH4::UWMap4::iterator *__fastcall sub_14020AC30(
        FH4::UWMap4 *this,
        int a2,
        int a3,
        struct FH4::UWMap4::iterator *a4,
        struct FH4::UWMap4::iterator *a5)
{
  unsigned __int8 *v5; // rax
  char v6; // bp
  char v7; // r14
  int v8; // edi
  struct FH4::UWMap4::iterator *v9; // r12
  unsigned __int8 *v12; // rsi
  unsigned __int8 *v13; // r15
  int v14; // r12d
  _OWORD *v15; // rax
  struct FH4::UWMap4::iterator *result; // rax
  _OWORD *v17; // rcx
  unsigned __int8 *v18; // [rsp+60h] [rbp+8h] BYREF
  int v19; // [rsp+68h] [rbp+10h]
  struct FH4::UWMap4::iterator *v20; // [rsp+78h] [rbp+20h]

  v20 = a4;
  v19 = a2;
  v5 = *((unsigned __int8 **)this + 1);
  v6 = 0;
  v7 = 0;
  v18 = v5;
  v8 = 0;
  v9 = a4;
  v12 = v5 - 1;
  v13 = v5 - 1;
  if ( *(int *)this > 0 )
  {
    v14 = v19;
    while ( 1 )
    {
      if ( v8 == v14 )
      {
        v12 = v5;
        v6 = 1;
      }
      if ( v8 == a3 )
      {
        v13 = v5;
        v7 = 1;
      }
      if ( v6 && v7 )
        break;
      MEMORY[0x14020A9E4](this, &v18);
      if ( ++v8 >= *(_DWORD *)this )
        break;
      v5 = v18;
    }
    v9 = v20;
  }
  v15 = *(_OWORD **)v9;
  *((_QWORD *)v9 + 1) = v12;
  *v15 = *(_OWORD *)this;
  v15[1] = *((_OWORD *)this + 1);
  result = a5;
  v17 = *(_OWORD **)a5;
  *((_QWORD *)a5 + 1) = v13;
  *v17 = *(_OWORD *)this;
  v17[1] = *((_OWORD *)this + 1);
  return result;
}

