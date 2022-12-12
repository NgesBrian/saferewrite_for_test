#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <inttypes.h>

extern void load64(uint8_t *);

uint8_t static_x[1];

int main(int argc,char **argv)
{
  uint8_t *alloc_x = malloc(1);

  for (long long i = 0;i < 1;++i) {
    unsigned long long x;
    if (scanf("%llu",&x) != 1) abort();
    static_x[i] = x;
  }

  for (long long i = 0;i < 1;++i)
    alloc_x[i] = static_x[i];

  load64(alloc_x);



  return 0;
}
