#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <inttypes.h>

extern void shake256(uint8_t *,uint8_t *);

uint8_t static_out[16];
uint8_t static_outlen[8];

int main(int argc,char **argv)
{
  uint8_t *alloc_out = malloc(16);
  uint8_t *alloc_outlen = malloc(8);


  shake256(alloc_out,alloc_outlen);

  for (long long i = 0;i < 16;++i)
    static_out[i] = alloc_out[i];
  for (long long i = 0;i < 8;++i)
    static_outlen[i] = alloc_outlen[i];

  return 0;
}
