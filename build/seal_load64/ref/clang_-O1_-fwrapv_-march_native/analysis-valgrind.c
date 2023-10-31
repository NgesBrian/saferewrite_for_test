#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <inttypes.h>

extern uint64_t load64(uint8_t *);

uint8_t static_x[1];
uint64_t static_r[1];

int main(int argc,char **argv)
{
  uint8_t *alloc_x = malloc(1);
  uint64_t *alloc_r = malloc(8);

  alloc_r[0] = load64(alloc_x);

  return 0;
}
