/* Address: 0x14007ca90 | Name: input_get_keyboard_state_candidate | Size: 155 bytes */
// Candidate keyboard snapshot wrapper: copies 323 bytes from SDL_GetKeyboardState(NULL) into caller buffer.
__int64 __fastcall input_get_keyboard_state_candidate(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rcx
  __int128 v4; // xmm0

  result = MEMORY[0x140198EF9](0);
  v3 = 2;
  do
  {
    a1 += 128;
    v4 = *(_OWORD *)result;
    result += 128;
    *(_OWORD *)(a1 - 128) = v4;
    *(_OWORD *)(a1 - 112) = *(_OWORD *)(result - 112);
    *(_OWORD *)(a1 - 96) = *(_OWORD *)(result - 96);
    *(_OWORD *)(a1 - 80) = *(_OWORD *)(result - 80);
    *(_OWORD *)(a1 - 64) = *(_OWORD *)(result - 64);
    *(_OWORD *)(a1 - 48) = *(_OWORD *)(result - 48);
    *(_OWORD *)(a1 - 32) = *(_OWORD *)(result - 32);
    *(_OWORD *)(a1 - 16) = *(_OWORD *)(result - 16);
    --v3;
  }
  while ( v3 );
  *(_OWORD *)a1 = *(_OWORD *)result;
  *(_OWORD *)(a1 + 16) = *(_OWORD *)(result + 16);
  *(_OWORD *)(a1 + 32) = *(_OWORD *)(result + 32);
  *(_OWORD *)(a1 + 48) = *(_OWORD *)(result + 48);
  *(_WORD *)(a1 + 64) = *(_WORD *)(result + 64);
  *(_BYTE *)(a1 + 66) = *(_BYTE *)(result + 66);
  return result;
}

