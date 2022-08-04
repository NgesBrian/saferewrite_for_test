#include <inttypes.h>

int32_t int32_negative_mask(int32_t x)
{
  return x >> 31;
}

int32_t int32_positive_mask(int32_t x)
{
  return int32_negative_mask(-x) & ~int32_negative_mask(x);
}
