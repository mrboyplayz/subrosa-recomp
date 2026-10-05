watch -location dword_140404A6C[18219337]
condition $bpnum (dword_140404A6C[18219337] & 0x7f800000) == 0x7f800000
commands
printf "FIRST INVALID BODY77 VELOCITY\n"
info locals
info args
x/47wx &dword_140404A6C[18219328]
end
