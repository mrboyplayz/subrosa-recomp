/* Address: 0x14019a7c0 | Name: sub_14019A7C0 | Size: 289 bytes */
unsigned __int8 **__fastcall sub_14019A7C0(unsigned __int8 **a1, int a2, char a3)
{
  unsigned __int8 **result; // rax
  char v4; // [rsp+0h] [rbp-18h]
  int v5; // [rsp+4h] [rbp-14h]

  v4 = 8 - a3;
  v5 = ((1 << a3) - 1) << (8 - a3);
  if ( *((_DWORD *)a1 + 7) )
  {
    result = (unsigned __int8 **)((a2 << v4) | ~v5 & (unsigned int)**a1);
    **a1 = ((_BYTE)a2 << v4) | ~(_BYTE)v5 & **a1;
  }
  else if ( *((int *)a1 + 11) < 0 )
  {
    if ( *((_DWORD *)a1 + 8) > 0x80000000 >> a3 )
    {
      *((_DWORD *)a1 + 12) = -1;
      return a1;
    }
    else
    {
      result = (unsigned __int8 **)((a2 << (v4 + 23)) | (unsigned int)~(v5 << 23) & *((_DWORD *)a1 + 9));
      *((_DWORD *)a1 + 9) = (_DWORD)result;
    }
  }
  else
  {
    result = (unsigned __int8 **)((a2 << v4) | (unsigned int)~v5 & *((_DWORD *)a1 + 11));
    *((_DWORD *)a1 + 11) = (_DWORD)result;
  }
  return result;
}

