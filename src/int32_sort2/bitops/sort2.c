#include <inttypes.h>

void int32_minmax(int32_t *x,int32_t *y)
{
  int32_t a = *x;
  int32_t b = *y;
  int32_t ab = b ^ a;
  int32_t c = b - a;
  c ^= ab & (c ^ b);
  c >>= 31;
  c &= ab;
  *x = a ^ c;
  *y = b ^ c;
}

void int32_sort2(int32_t *x)
{
  int32_minmax(x,x + 1);
}
