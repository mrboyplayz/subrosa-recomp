/* Address: 0x1401fe7ec | Name: sub_1401FE7EC | Size: 41 bytes */
__int64 __fastcall sub_1401FE7EC(__int64 a1, __int64 a2, char a3)
{
  __int64 v3; // rbx
  int v4; // eax
  __int64 v5; // rcx

  v3 = a2;
  *(_QWORD *)a2 = *(_QWORD *)a1;
  v4 = *(_DWORD *)(a1 + 8);
  v5 = a2;
  *(_DWORD *)(a2 + 8) = v4;
  LOBYTE(a2) = a3;
  sub_1401FE9BC(v5, a2);
  return v3;
}

