#include <inttypes.h>

int32_t int32_min(int32_t a,int32_t b)
{
  int32_t ab = b ^ a;
  int32_t c = b - a;
  c ^= ab & (c ^ b);
  c >>= 31;
  c &= ab;
  return a ^ c;
}
