/* Address: 0x140260fc0 | Name: sub_140260FC0 | Size: 168 bytes */
__int64 __fastcall sub_140260FC0(unsigned int a1)
{
  unsigned int v3; // edi
  __int64 v4; // rbx
  signed int v5; // eax
  __int64 v6; // rax

  if ( a1 < 0x2000 )
  {
    v3 = 0;
    sub_140258B64(7);
    v4 = 0;
    v5 = dword_140404A6C[19065657];
    while ( (int)a1 >= v5 )
    {
      if ( !*(_QWORD *)&dword_140404A6C[2 * v4 + 19065401] )
      {
        v6 = sub_140260EC8();
        *(_QWORD *)&dword_140404A6C[2 * v4 + 19065401] = v6;
        if ( !v6 )
        {
          v3 = 12;
          break;
        }
        v5 = dword_140404A6C[19065657] + 64;
        dword_140404A6C[19065657] += 64;
      }
      ++v4;
    }
    sub_140258BB8(7);
    return v3;
  }
  else
  {
    *errno() = 9;
    sub_14024CF6C();
    return 9;
  }
}

