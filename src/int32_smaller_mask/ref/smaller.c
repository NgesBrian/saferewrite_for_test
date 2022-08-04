#include <inttypes.h>

int32_t int32_smaller_mask(int32_t x,int32_t y)
{
  if (x < y) return -1;
  return 0;
}
