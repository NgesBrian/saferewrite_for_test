#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <inttypes.h>

extern const void evalPoly(uint64_t,uint64_t);

uint64_t static_i[1];
uint64_t static_m[1];

int main(int argc,char **argv)
{
  uint64_t *alloc_i = (uint64_t *) malloc(8);
  uint64_t *alloc_m = (uint64_t *) malloc(8);

  for (long long i = 0;i < 1;++i) {
    unsigned long long x;
    if (scanf("%llu",&x) != 1) abort();
    static_i[i] = x;
  }
  for (long long i = 0;i < 1;++i) {
    unsigned long long x;
    if (scanf("%llu",&x) != 1) abort();
    static_m[i] = x;
  }

  for (long long i = 0;i < 1;++i)
    alloc_i[i] = static_i[i];
  for (long long i = 0;i < 1;++i)
    alloc_m[i] = static_m[i];

  evalPoly(*alloc_i,*alloc_m);



  return 0;
}
