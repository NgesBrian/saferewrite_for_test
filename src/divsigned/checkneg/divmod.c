#include <inttypes.h>

void divmod(int64_t *q,int64_t *r,int64_t a,int64_t b)
{
  b |= !b;
  if (b > 0) {
    if (a >= 0) {
      *q = a/b;
      *r = a%b;
    } else {
      a = -a;
      *q = -(a/b);
      *r = -(a%b);
    }
  } else {
    b = -b;
    if (a >= 0) {
      *q = -(a/b);
      *r = a%b;
    } else {
      a = -a;
      *q = a/b;
      *r = -(a%b);
    }
  }
}
