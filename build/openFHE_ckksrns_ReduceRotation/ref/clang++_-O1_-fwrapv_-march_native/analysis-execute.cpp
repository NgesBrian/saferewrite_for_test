#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <inttypes.h>

extern const uint32_t ReduceRotation(uint32_t,uint32_t);

uint32_t static_index[1];
uint32_t static_slots[1];
uint32_t static_d[1];

int main(int argc,char **argv)
{
  uint32_t *alloc_index = (uint32_t *) malloc(4);
  uint32_t *alloc_slots = (uint32_t *) malloc(4);
  uint32_t *alloc_d = (uint32_t *) malloc(4);

  for (long long i = 0;i < 1;++i) {
    unsigned long long x;
    if (scanf("%llu",&x) != 1) abort();
    static_index[i] = x;
  }
  for (long long i = 0;i < 1;++i) {
    unsigned long long x;
    if (scanf("%llu",&x) != 1) abort();
    static_slots[i] = x;
  }

  for (long long i = 0;i < 1;++i)
    alloc_index[i] = static_index[i];
  for (long long i = 0;i < 1;++i)
    alloc_slots[i] = static_slots[i];

  alloc_d[0] = ReduceRotation(*alloc_index,*alloc_slots);

  for (long long i = 0;i < 1;++i)
    static_d[i] = alloc_d[i];

  for (long long i = 0;i < 1;++i) {
    unsigned long long x = static_d[i];
    printf("%llu\n",x);
  }
  fflush(stdout);

  return 0;
}
