# Recovery of `wctype` Data and Its Interior Alias

The Hex-Rays export contains `const unsigned __int16 wctype[] = ;`, leaving
the sole unknown initializer in the client preparation report. Two client
functions, at `0x1402652e4` and `0x14026ae60`, load the same table address:
`0x14028bd10`. The installed executable stores 257 little-endian 16-bit
words at that address, through `0x14028bf11`. File offset is `0x28af10`.
The extra first word supports users that index as `wctype[character + 1]`.

The export also declares `byte_14028BD12[2]` separately and initializes a
pointer to it. That address is actually two bytes into `wctype`, at its
second word. Another client function indexes it by even byte offsets.
Treating it as an independent two-byte object would lose the table alias and
make indexed accesses leave its declared bounds. The preparation pass now
builds the 257-word initializer from the hash-pinned executable and rewrites
those two uses to point inside the single table.

The complete data words are generated only in ignored `work/rebuild/client/`
output. The tracked helper checks the executable hash, first and last words,
the exact source declarations, and both alias uses before rewriting. This
removes the last `sr_unknown_data` placeholder. The table's locale behavior
and lifetime still need comparison with the original client.
