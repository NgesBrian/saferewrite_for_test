#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <inttypes.h>

extern void load64(uint8_t *);

uint8_t static_x[1];

int main(int argc,char **argv)
{
  uint8_t *alloc_x = malloc(1);

  load64(alloc_x);

  return 0;
}
