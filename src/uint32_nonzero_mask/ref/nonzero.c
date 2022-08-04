#include <inttypes.h>

uint32_t uint32_nonzero_mask(uint32_t x)
{
  if (x != 0) return -1;
  return 0;
}
