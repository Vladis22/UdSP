#ifndef CH_HEX_H
#define CH_HEX_H

void ch_hexdump(const void *data, size_t size);
void ch_hexdump_to(FILE* out, const char* label, const void *data, size_t size);

#endif 
