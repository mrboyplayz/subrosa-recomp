/* Address: 0x14020753c | Name: sub_14020753C | Size: 58 bytes */
_QWORD *__fastcall sub_14020753C(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rcx

  *a1 = a2;
  if ( (unsigned __int64)a1 >= *(_QWORD *)(sub_1401FD83C() + 88) )
    v3 = 0;
  else
    v3 = *(_QWORD *)(sub_1401FD83C() + 88);
  a1[1] = v3;
  *(_QWORD *)(sub_1401FD83C() + 88) = a1;
  return a1;
}

