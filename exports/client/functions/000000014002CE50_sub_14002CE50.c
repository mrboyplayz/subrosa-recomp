/* Address: 0x14002ce50 | Name: sub_14002CE50 | Size: 180 bytes */
__int64 sub_14002CE50()
{
  __int64 result; // rax
  int v1; // r8d
  unsigned int *v2; // r9
  int v3; // edx
  __int64 v4; // rdx

  result = dword_140404A6C[438881242];
  v1 = 0;
  if ( (int)dword_140404A6C[438881242] > 0 )
  {
    v2 = &dword_140404A6C[437914582];
    while ( 1 )
    {
      v3 = *v2;
      if ( (int)*v2 < 0x10000 )
        *v2 = --v3;
      if ( v3 > 0 )
      {
        ++v1;
        v2 += 23;
      }
      else if ( v1 >= 0 )
      {
        if ( v1 >= (int)result || (result = (unsigned int)(result - 1), v1 == (_DWORD)result) )
        {
LABEL_12:
          dword_140404A6C[438881242] = result;
          return result;
        }
        v4 = 23LL * (int)result;
        *(_OWORD *)(v2 - 1) = *(_OWORD *)&dword_140404A6C[v4 + 437914581];
        *(_OWORD *)(v2 + 3) = *(_OWORD *)&dword_140404A6C[v4 + 437914585];
        *(_OWORD *)(v2 + 7) = *(_OWORD *)&dword_140404A6C[v4 + 437914589];
        *(_OWORD *)(v2 + 11) = *(_OWORD *)&dword_140404A6C[v4 + 437914593];
        *(_OWORD *)(v2 + 15) = *(_OWORD *)&dword_140404A6C[v4 + 437914597];
        *(_QWORD *)(v2 + 19) = *(_QWORD *)&dword_140404A6C[v4 + 437914601];
        v2[21] = dword_140404A6C[v4 + 437914603];
      }
      if ( v1 >= (int)result )
        goto LABEL_12;
    }
  }
  return result;
}

