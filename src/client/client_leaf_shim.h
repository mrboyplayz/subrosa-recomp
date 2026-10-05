#ifndef SR_CLIENT_LEAF_SHIM_H
#define SR_CLIENT_LEAF_SHIM_H

#include "client_leaf.h"
typedef struct CHtmlStream CHtmlStream;
/* Exported at 0x1403025a0 after an earlier pointer initializer. */
extern char unk_1403025A0;
extern unsigned char sr_mem_140302270[];
uint32_t sub_1402370D4(void);

void CHtmlStream__Abort(CHtmlStream *self, uintptr_t payload, uintptr_t failure, uintptr_t call_id);
uint32_t sub_140205C34(const void *object);
char initialize_global_variables(void);
uint32_t sub_140247CFC(void);
size_t sub_1400012A0(FILE *stream, void *destination, int count);
uint64_t sr_client_static_tls(void);

#endif
