#include <inttypes.h>

void int32_sort2(int32_t *x)
{
  int32_t x0 = x[0];
  int32_t x1 = x[1];
  if (x1 < x0) {
    x[0] = x1;
    x[1] = x0;
  } else {
    x[0] = x0;
    x[1] = x1;
  }
}
