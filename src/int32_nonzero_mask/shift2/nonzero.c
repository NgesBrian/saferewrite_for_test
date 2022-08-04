#include <inttypes.h>

int32_t int32_negative_mask(int32_t x)
{
  return x >> 31;
}

int32_t int32_nonzero_mask(int32_t x)
{
  if (int32_negative_mask(x)) return -1;
  return int32_negative_mask(-x);
}
