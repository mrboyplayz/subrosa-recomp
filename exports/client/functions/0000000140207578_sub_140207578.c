/* Address: 0x140207578 | Name: sub_140207578 | Size: 83 bytes */
__int64 __fastcall sub_140207578(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rbx
  __int64 result; // rax

  if ( a1 != *(_QWORD *)(sub_1401FD83C() + 88) || (v2 = *(_QWORD *)(sub_1401FD83C() + 88)) == 0 )
LABEL_7:
    abort();
  while ( 1 )
  {
    v3 = *(_QWORD *)(v2 + 8);
    if ( a1 == v2 )
      break;
    v2 = *(_QWORD *)(v2 + 8);
    if ( !v3 )
      goto LABEL_7;
  }
  result = sub_1401FD83C();
  *(_QWORD *)(result + 88) = v3;
  return result;
}

