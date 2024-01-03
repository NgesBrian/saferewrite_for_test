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

  evalPoly(*alloc_i,*alloc_m);

  return 0;
}
