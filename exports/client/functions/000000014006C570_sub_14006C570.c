/* Address: 0x14006c570 | Name: sub_14006C570 | Size: 112 bytes */
__int64 __fastcall sub_14006C570(int a1, _DWORD *a2, char a3, int a4)
{
  __int64 result; // rax
  int v7; // [rsp+48h] [rbp+20h] BYREF

  if ( a4 )
    return sub_14006C360(a1, a2, a3, a4);
  sub_14006C360(a1, &v7, a3, 0);
  result = v7 & (unsigned int)(1 << (a3 - 1));
  if ( (_DWORD)result == 1 << (a3 - 1) )
  {
    result = v7 | (unsigned int)(-1 << a3);
    *a2 = result;
  }
  else
  {
    *a2 = v7;
  }
  return result;
}

