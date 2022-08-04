#include <inttypes.h>

uint32_t uint32_max(uint32_t x,uint32_t y)
{
  if (x < y) return y;
  return x;
}
