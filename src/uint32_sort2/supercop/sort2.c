#include "fromsupercop.h"

void uint32_sort2(crypto_uint32 *x)
{
  return crypto_uint32_minmax(x,x+1);
}
