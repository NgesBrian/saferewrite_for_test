#include <inttypes.h>

void int32_sort2(int32_t *x)
{
  int32_t x0 = x[0];
  int32_t x1 = x[1];
  int32_t c = -(x1 < x0);
  c &= x0 ^ x1;
  x[0] = x0 ^ c;
  x[1] = x1 ^ c;
}
