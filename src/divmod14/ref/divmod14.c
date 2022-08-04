#include <inttypes.h>

void divmod14(uint32_t *q,uint16_t *r,uint32_t a,uint16_t b)
{
  b = 1+(b%16384);
  *q = a/b;
  *r = a%b;
}
