#include <inttypes.h>

#include "uint32.h"

void divmod14(uint32_t *q,uint16_t *r,uint32_t a,uint16_t b)
{
  b = 1+(b%16384);
  uint32_divmod_uint14(q,r,a,b);
}
