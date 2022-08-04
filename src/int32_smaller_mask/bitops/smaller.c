#include <inttypes.h>

int32_t int32_negative_mask(int32_t x)
{
  return x >> 31;
}

int32_t int32_smaller_mask(int32_t x,int32_t y)
{
  int32_t xy = x ^ y;
  int32_t c = x - y;
  c ^= xy & (c ^ x);
  return int32_negative_mask(c);
}
