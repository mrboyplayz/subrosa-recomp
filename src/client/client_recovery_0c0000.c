#include "shared_client.h"

// 1400BF580: conditional instruction was optimized away because edi.4==D
// 1400C1E41: variable 'v376' is possibly undefined
// 140278D30: using guessed type __int128 xmmword_140278D30;
// 140279870: using guessed type __int128 xmmword_140279870;
// 1402F6188: using guessed type int dword_1402F6188;
// 1402F618C: using guessed type int dword_1402F618C;
// 1402F6190: using guessed type int dword_1402F6190;
// 140404A6C: using guessed type unsigned int dword_140404A6C[487416165];
// 151A8488C: using guessed type unsigned int;
// 151A84890: using guessed type unsigned int;
// 151A84894: using guessed type unsigned int;
// 16B27ECFC: using guessed type unsigned int;
// 18399E2D8: using guessed type unsigned int;
// 18399E3A4: using guessed type unsigned int;
// 18399E404: using guessed type unsigned int;
// 18399E4D0: using guessed type unsigned int;
// 183EBFAAC: using guessed type unsigned int;
// 183EBFCD4: using guessed type unsigned int;
// 183EBFD34: using guessed type unsigned int;
// 189C1DC64: using guessed type unsigned int;

//----- (00000001400C6AB0) ----------------------------------------------------
unsigned int *           sub_1400C6AB0(int a1, int a2, char *a3, char a4, int a5)
{
    extern char *computer_write_padded_line(int, int, const char *, unsigned char, int);
    return (unsigned int *)computer_write_padded_line(a1, a2, a3, (unsigned char)a4, a5);
}
