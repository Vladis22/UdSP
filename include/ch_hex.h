<<<<<<< HEAD
#ifndef CH_HEX_H
#define CH_HEX_H

void ch_hexdump(const void *data, size_t size);
void ch_hexdump_to(FILE* out, const char* label, const void *data, size_t size);

#endif 
=======
#ifndef CV4_CH_HEX_H
#define CV4_CH_HEX_H
#include <stddef.h>
#include <stdio.h>


void ch_hexdump(const void* data, size_t size);

void ch_hexdump_to(FILE* out, const char* label, const void* data, size_t size);


#endif //CV4_CH_HEX_H
>>>>>>> cac68c8ed0e7621f34ebd0fa2f86a5f154d26142
