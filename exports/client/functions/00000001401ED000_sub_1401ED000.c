/* Address: 0x1401ed000 | Name: sub_1401ED000 | Size: 712 bytes */
__int64 __fastcall sub_1401ED000(
        void (__fastcall *a1)(__int64, int *, _QWORD, _QWORD, int, int, int),
        __int64 a2,
        __int64 a3,
        float *a4,
        int a5,
        unsigned int a6,
        int a7,
        int a8,
        int a9,
        int a10)
{
  unsigned __int64 v10; // rcx
  void *v11; // rsp
  __int64 v12; // rdx
  unsigned __int64 v13; // rcx
  void *v14; // rsp
  int i; // [rsp+40h] [rbp+0h] BYREF
  float v17; // [rsp+44h] [rbp+4h]
  void *Src; // [rsp+48h] [rbp+8h]
  float v19; // [rsp+50h] [rbp+10h]
  int *p_i; // [rsp+58h] [rbp+18h]
  __int64 v21; // [rsp+60h] [rbp+20h]
  __int64 v23; // [rsp+88h] [rbp+48h]

  v23 = a2;
  v19 = 0.0;
  if ( a5 )
  {
    if ( a10 == 48000 )
    {
      a5 *= 2;
      a6 *= 2;
    }
    else if ( a10 == 16000 )
    {
      a5 = 2 * a5 / 3;
      a2 = (unsigned int)((int)(2 * a6) >> 31);
      LODWORD(a2) = (int)(2 * a6) % 3;
      a6 = (int)(2 * a6) / 3;
    }
    v10 = 4LL * a5 + 15;
    if ( v10 <= 4LL * a5 )
      v10 = 0xFFFFFFFFFFFFFF0LL;
    v11 = alloca(sub_1401F89D0(v10 & 0xFFFFFFFFFFFFFFF0uLL, a2));
    Src = &i;
    a1(v23, &i, (unsigned int)a5, a6, a7, a8, a9);
    v17 = 0.000030517578;
    if ( a8 == -2 )
    {
      v17 = v17 / (float)a9;
    }
    else if ( a8 > -1 )
    {
      v17 = v17 / 2.0;
    }
    for ( i = 0; i < a5; ++i )
      *((float *)Src + i) = *((float *)Src + i) * v17;
    switch ( a10 )
    {
      case 48000:
        v19 = sub_1401ECD80(a4, a3, (__int64)Src, a5);
        break;
      case 24000:
        MEMORY[0x1401FC920](a3, Src);
        break;
      case 16000:
        v13 = 12LL * a5 + 15;
        if ( v13 <= 12LL * a5 )
          v13 = 0xFFFFFFFFFFFFFF0LL;
        v14 = alloca(sub_1401F89D0(v13 & 0xFFFFFFFFFFFFFFF0uLL, v12));
        p_i = &i;
        for ( i = 0; i < a5; ++i )
        {
          p_i[3 * i] = *((_DWORD *)Src + i);
          p_i[3 * i + 1] = *((_DWORD *)Src + i);
          p_i[3 * i + 2] = *((_DWORD *)Src + i);
        }
        sub_1401ECD80(a4, a3, (__int64)p_i, 3 * a5);
        break;
    }
  }
  return MEMORY[0x1401F8B20]((unsigned __int64)&i ^ v21);
}

