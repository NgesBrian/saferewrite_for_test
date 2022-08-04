#include <inttypes.h>

void flip(const int8_t *a,int8_t *b)
{
  b[0] = a[1];
  b[1] = a[0];
}
