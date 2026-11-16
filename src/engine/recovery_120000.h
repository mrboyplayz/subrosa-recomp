/* Routines recovered from the 0x140120000 block of the original client.
 *
 * The client keeps entry points for them in src/client/client_recovery_120000.c,
 * each named after its original address; the bodies live here.
 */
#ifndef SR_ENGINE_RECOVERY_120000_H
#define SR_ENGINE_RECOVERY_120000_H

/* 0x140127900: returns its second argument. */
long long recovery_return_second(long long first, long long second);

/* 0x14012C450: two directory changes back to the game directories. The
   paths live in the shared game state; the second result is returned. */
long long recovery_reset_dirs(void);

#endif
