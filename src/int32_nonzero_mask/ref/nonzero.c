#include <inttypes.h>

int32_t int32_nonzero_mask(int32_t x)
{
  if (x != 0) return -1;
  return 0;
}
