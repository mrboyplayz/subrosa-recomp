/* Address: 0x1400e1ca0 | Name: sub_1400E1CA0 | Size: 261 bytes */
__int64 __fastcall sub_1400E1CA0(__int64 a1, unsigned __int8 *a2, __int64 a3)
{
  __int64 result; // rax
  unsigned __int8 *v4; // rsi
  __int64 v6; // rbx
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // ecx
  __int16 *v11; // rdx
  __int64 v12; // r8
  int v13; // eax
  int v14; // eax
  int v15; // [rsp+20h] [rbp-18h] BYREF
  char v16; // [rsp+48h] [rbp+10h] BYREF
  __int16 v17; // [rsp+58h] [rbp+20h] BYREF

  result = *a2;
  v4 = a2;
  if ( (_BYTE)result )
  {
    v6 = a3 - 8;
    do
    {
      ++v4;
      v7 = (char)result - 32;
      if ( v7 )
      {
        v8 = v7 - 17;
        if ( v8 )
        {
          v9 = v8 - 1;
          if ( v9 )
          {
            if ( v9 != 2 )
              _wassert(L"0", L"C:\\visualc2010\\code\\subrosa12\\stb/stb_image_write.h", 0x173u);
            v10 = *(_DWORD *)(v6 + 8);
            v11 = (__int16 *)&v15;
            v6 += 8;
            v15 = v10;
            v12 = 4;
          }
          else
          {
            v13 = *(_DWORD *)(v6 + 8);
            v11 = &v17;
            v6 += 8;
            v17 = v13;
            v12 = 2;
          }
        }
        else
        {
          v14 = *(unsigned __int8 *)(v6 + 8);
          v11 = (__int16 *)&v16;
          v6 += 8;
          v16 = v14;
          v12 = 1;
        }
        (*(void (__fastcall **)(_QWORD, __int16 *, __int64))a1)(*(_QWORD *)(a1 + 8), v11, v12);
      }
      result = *v4;
    }
    while ( (_BYTE)result );
  }
  return result;
}

