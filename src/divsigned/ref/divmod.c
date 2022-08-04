#include <inttypes.h>

void divmod(int64_t *q,int64_t *r,int64_t a,int64_t b)
{
  b |= !b;
  *q = a/b;
  *r = a%b;
}
