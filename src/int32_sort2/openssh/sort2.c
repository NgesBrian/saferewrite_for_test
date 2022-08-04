#include "openssh.h"

void int32_sort2(int32_t *x)
{
  int32_t a = x[0];
  int32_t b = x[1];
  int32_MINMAX(a,b);
  x[0] = a;
  x[1] = b;
}
