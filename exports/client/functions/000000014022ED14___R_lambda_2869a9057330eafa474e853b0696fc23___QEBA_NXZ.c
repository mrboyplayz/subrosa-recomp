/* Address: 0x14022ed14 | Name: ??R_lambda_2869a9057330eafa474e853b0696fc23_@@QEBA_NXZ | Size: 124 bytes */
char __fastcall _lambda_2869a9057330eafa474e853b0696fc23_::operator()(__int64 a1)
{
  char v2; // bl
  _QWORD *v3; // rdx
  __int64 v4; // rcx
  unsigned __int64 v5; // rax
  _QWORD *v6; // rdx

  v2 = 0;
  v3 = *(_QWORD **)a1;
  v4 = **(unsigned __int16 **)(a1 + 8);
  v5 = v3[2] - 1LL;
  v3[2] = v5;
  if ( (!v3[1] || v5 <= v3[1]) && (unsigned __int16)(v4 - 1) <= 0xFFFDu )
  {
    v6 = (_QWORD *)*v3;
    --v6[1];
    ungetwc_nolock(v4, *v6, 65533);
  }
  **(_WORD **)(a1 + 8) = 0;
  if ( **(_QWORD **)(a1 + 16) == *(_QWORD *)(*(_QWORD *)a1 + 16LL) )
    return 1;
  **(_BYTE **)(*(_QWORD *)a1 + 24LL) = 0;
  return v2;
}

