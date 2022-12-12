#include <stddef.h>
#include <stdint.h>

void store64(uint8_t x[8], uint64_t u) {
  unsigned int i;
  //unsigned int t;

  for(i=1;i<5;i++)
    x[i] = (uint8_t)(u >> 8*i);
}
