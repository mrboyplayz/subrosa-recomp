/* Address: 0x14024d7d8 | Name: _raise_exc_ex | Size: 781 bytes */
__int64 __fastcall raise_exc_ex(_DWORD *a1, _QWORD *a2, char a3, __int16 a4, _DWORD *a5, _DWORD *a6, int a7)
{
  unsigned int v9; // edi
  char v10; // al
  __int64 v11; // rax
  _DWORD *v12; // rsi
  _DWORD *v13; // rcx
  int v14; // eax
  __int64 result; // rax
  _DWORD *Arguments; // [rsp+30h] [rbp+10h] BYREF

  Arguments = a1;
  v9 = -1073741811;
  a1[1] = 0;
  Arguments[2] = 0;
  Arguments[3] = 0;
  if ( (a3 & 0x10) != 0 )
  {
    v9 = -1073741681;
    Arguments[1] |= 1u;
  }
  if ( (a3 & 2) != 0 )
  {
    v9 = -1073741677;
    Arguments[1] |= 2u;
  }
  if ( (a3 & 1) != 0 )
  {
    v9 = -1073741679;
    Arguments[1] |= 4u;
  }
  if ( (a3 & 4) != 0 )
  {
    v9 = -1073741682;
    Arguments[1] |= 8u;
  }
  if ( (a3 & 8) != 0 )
  {
    v9 = -1073741680;
    Arguments[1] |= 0x10u;
  }
  Arguments[2] ^= (Arguments[2] ^ ~(16 * (*a2 >> 7))) & 0x10;
  Arguments[2] ^= (Arguments[2] ^ ~(8 * (*a2 >> 9))) & 8;
  Arguments[2] ^= (Arguments[2] ^ ~(4 * (*a2 >> 10))) & 4;
  Arguments[2] ^= (Arguments[2] ^ ~(2 * (*a2 >> 11))) & 2;
  Arguments[2] ^= (Arguments[2] ^ ~(*(_DWORD *)a2 >> 12)) & 1;
  v10 = statfp();
  if ( (v10 & 1) != 0 )
    Arguments[3] |= 0x10u;
  if ( (v10 & 4) != 0 )
    Arguments[3] |= 8u;
  if ( (v10 & 8) != 0 )
    Arguments[3] |= 4u;
  if ( (v10 & 0x10) != 0 )
    Arguments[3] |= 2u;
  if ( (v10 & 0x20) != 0 )
    Arguments[3] |= 1u;
  v11 = *(_DWORD *)a2 & 0x6000LL;
  if ( v11 )
  {
    switch ( v11 )
    {
      case 8192LL:
        *Arguments &= ~2u;
        *Arguments |= 1u;
        break;
      case 16384LL:
        *Arguments &= ~1u;
        *Arguments |= 2u;
        break;
      case 24576LL:
        *Arguments |= 3u;
        break;
    }
  }
  else
  {
    *Arguments &= 0xFFFFFFFC;
  }
  *Arguments &= 0xFFFE001F;
  *Arguments |= 32 * (a4 & 0xFFF);
  v12 = a6;
  Arguments[8] |= 1u;
  if ( a7 )
  {
    Arguments[8] &= 0xFFFFFFE1;
    Arguments[4] = *a5;
    Arguments[24] |= 1u;
    Arguments[24] &= 0xFFFFFFE1;
    Arguments[20] = *v12;
  }
  else
  {
    Arguments[8] = Arguments[8] & 0xFFFFFFE1 | 2;
    *((_QWORD *)Arguments + 2) = *(_QWORD *)a5;
    Arguments[24] |= 1u;
    Arguments[24] = Arguments[24] & 0xFFFFFFE1 | 2;
    *((_QWORD *)Arguments + 10) = *(_QWORD *)v12;
  }
  clrfp();
  ((void (__fastcall *)(_QWORD, _QWORD, __int64, _DWORD **))RaiseException)(v9, 0, 1, &Arguments);
  v13 = Arguments;
  v14 = Arguments[2];
  if ( (v14 & 0x10) != 0 )
  {
    *a2 &= ~0x80uLL;
    v14 = v13[2];
  }
  if ( (v14 & 8) != 0 )
  {
    *a2 &= ~0x200uLL;
    v14 = v13[2];
  }
  if ( (v14 & 4) != 0 )
  {
    *a2 &= ~0x400uLL;
    v14 = v13[2];
  }
  if ( (v14 & 2) != 0 )
  {
    *a2 &= ~0x800uLL;
    v14 = v13[2];
  }
  if ( (v14 & 1) != 0 )
    *a2 &= ~0x1000uLL;
  if ( (*v13 & 3) != 0 )
  {
    switch ( *v13 & 3 )
    {
      case 1:
        *a2 &= ~0x4000uLL;
        *a2 |= 0x2000uLL;
        break;
      case 2:
        *a2 &= ~0x2000uLL;
        *a2 |= 0x4000uLL;
        break;
      case 3:
        *a2 |= 0x6000uLL;
        break;
    }
  }
  else
  {
    *a2 &= 0xFFFFFFFFFFFF9FFFuLL;
  }
  if ( a7 )
  {
    result = (unsigned int)v13[20];
    *v12 = result;
  }
  else
  {
    result = *((_QWORD *)v13 + 10);
    *(_QWORD *)v12 = result;
  }
  return result;
}

