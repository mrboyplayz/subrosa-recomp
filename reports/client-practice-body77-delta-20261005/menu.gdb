watch -location dword_140404A6C[18219340]
condition $bpnum (dword_140404A6C[18219340] & 0x7f800000) == 0x7f800000
commands
printf "FIRST INVALID BODY77 DELTA\n"
info locals
info args
end
