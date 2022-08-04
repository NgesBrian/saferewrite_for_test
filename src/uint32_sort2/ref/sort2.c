#include <inttypes.h>

void uint32_sort2(uint32_t *x)
{
  uint32_t x0 = x[0];
  uint32_t x1 = x[1];
  if (x1 < x0) {
    x[0] = x1;
    x[1] = x0;
  }
}
