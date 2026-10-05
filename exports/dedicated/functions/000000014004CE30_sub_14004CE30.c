/* Address: 0x14004ce30 | Name: sub_14004CE30 | Size: 1268 bytes */
int *sub_14004CE30()
{
  int *result; // rax
  int v1; // ecx
  int v2; // r8d
  int v3; // r10d
  __int64 v4; // r9
  int v5; // ebx
  int v6; // ebp
  int v7; // esi
  int v8; // edi
  int v9; // r12d
  int v10; // r13d
  int v11; // r14d
  int v12; // r15d
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // rdx
  int v22; // r11d
  __int64 v23; // rdx
  __int64 v24; // rdx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = (int *)&retaddr;
  v1 = dword_183A7E074;
  v2 = 0;
  if ( dword_183A7E074 > 0 )
  {
    v3 = qword_190133624;
    v4 = 0;
    v5 = qword_190130E84;
    v6 = qword_19012D314;
    v7 = qword_19012E6E4;
    v8 = qword_19012FAB4;
    v9 = qword_190127004;
    v10 = qword_190125C34;
    result = dword_183A8AAAC;
    v11 = qword_19012BF44;
    v12 = qword_19012AB74;
    do
    {
      if ( *(result - 12925) == 8 )
      {
        *result = 0;
        result[1] = 11;
        dword_183989E80[3 * v4 + 262925] = v8;
        dword_183989E80[3 * v4 + 262926 + 3 * *result] = 0;
        v13 = *result;
        *result = v13 + 1;
        dword_183989E80[3 * v4 + 262927 + 3 * v13] = 12;
        dword_183989E80[3 * v4 + 262925 + 3 * *result] = v5;
        dword_183989E80[3 * v4 + 262926 + 3 * *result] = 0;
        v14 = *result;
        *result = v14 + 1;
        dword_183989E80[3 * v4 + 262927 + 3 * v14] = 7;
        dword_183989E80[3 * v4 + 262925 + 3 * *result] = v12;
        dword_183989E80[3 * v4 + 262926 + 3 * *result] = 0;
        v15 = *result;
        *result = v15 + 1;
        dword_183989E80[3 * v4 + 262927 + 3 * v15] = 8;
        dword_183989E80[3 * v4 + 262925 + 3 * *result] = v11;
        dword_183989E80[3 * v4 + 262926 + 3 * *result] = 0;
        v16 = *result;
        *result = v16 + 1;
        dword_183989E80[3 * v4 + 262927 + 3 * v16] = 1;
        dword_183989E80[3 * v4 + 262925 + 3 * *result] = qword_190123494;
        dword_183989E80[3 * v4 + 262926 + 3 * *result] = 0;
        v17 = *result;
        *result = v17 + 1;
        dword_183989E80[3 * v4 + 262927 + 3 * v17] = 2;
        dword_183989E80[3 * v4 + 262925 + 3 * *result] = qword_190124864;
        dword_183989E80[3 * v4 + 262926 + 3 * *result] = 0;
        v18 = *result;
        *result = v18 + 1;
        dword_183989E80[3 * v4 + 262927 + 3 * v18] = 3;
        dword_183989E80[3 * v4 + 262925 + 3 * *result] = v10;
        dword_183989E80[3 * v4 + 262926 + 3 * *result] = 0;
        v19 = *result;
        *result = v19 + 1;
        dword_183989E80[3 * v4 + 262927 + 3 * v19] = 4;
        dword_183989E80[3 * v4 + 262925 + 3 * *result] = v9;
        dword_183989E80[3 * v4 + 262926 + 3 * *result] = 0;
        v20 = *result;
        *result = v20 + 1;
        dword_183989E80[3 * v4 + 262927 + 3 * v20] = 9;
        dword_183989E80[3 * v4 + 262925 + 3 * *result] = v6;
        dword_183989E80[3 * v4 + 262926 + 3 * *result] = 0;
        v21 = *result;
        *result = v21 + 1;
        dword_183989E80[3 * v4 + 262927 + 3 * v21] = 10;
        dword_183989E80[3 * v4 + 262925 + 3 * *result] = v7;
        v22 = qword_190132254;
        dword_183989E80[3 * v4 + 262926 + 3 * *result] = 0;
        v23 = *result;
        *result = v23 + 1;
        dword_183989E80[3 * v4 + 262927 + 3 * v23] = 14;
        dword_183989E80[3 * v4 + 262925 + 3 * *result] = v3;
        dword_183989E80[3 * v4 + 262926 + 3 * *result] = 0;
        v24 = *result;
        *result = v24 + 1;
        dword_183989E80[3 * v4 + 262927 + 3 * v24] = 13;
        dword_183989E80[3 * v4 + 262925 + 3 * *result] = v22;
        dword_183989E80[3 * v4 + 262926 + 3 * (*result)++] = 0;
        v1 = dword_183A7E074;
      }
      ++v2;
      v4 += 4673;
      result += 14019;
    }
    while ( v2 < v1 );
  }
  return result;
}

