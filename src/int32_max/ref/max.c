#include <inttypes.h>

int32_t int32_max(int32_t x,int32_t y)
{
  if (x < y) return y;
  return x;
}
