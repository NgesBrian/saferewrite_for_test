#include <inttypes.h>

uint32_t uint32_smaller_mask(uint32_t x,uint32_t y)
{
  if (x < y) return -1;
  return 0;
}
