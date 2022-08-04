#include <inttypes.h>

int32_t int32_negative_mask(int32_t x)
{
  return x >> 31;
}

int32_t int32_positive_mask(int32_t x)
{
  int32_t c = -x;
  c ^= x & c;
  return int32_negative_mask(c);
}
