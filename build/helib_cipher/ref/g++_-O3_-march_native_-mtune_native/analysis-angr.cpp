#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <inttypes.h>

extern const void Cipher(uint8_t *,uint8_t *,uint8_t *);

uint8_t static_in[16];
uint8_t static_out[16];
uint8_t static_roundkey[240];

int main(int argc,char **argv)
{
  uint8_t *alloc_in = (uint8_t *) malloc(16);
  uint8_t *alloc_out = (uint8_t *) malloc(16);
  uint8_t *alloc_roundkey = (uint8_t *) malloc(240);

  for (long long i = 0;i < 16;++i)
    alloc_in[i] = static_in[i];

  Cipher(alloc_in,alloc_out,alloc_roundkey);

  for (long long i = 0;i < 16;++i)
    static_out[i] = alloc_out[i];
  for (long long i = 0;i < 240;++i)
    static_roundkey[i] = alloc_roundkey[i];

  return 0;
}
