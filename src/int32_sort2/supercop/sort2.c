#include "fromsupercop.h"

void int32_sort2(crypto_int32 *x)
{
  return crypto_int32_minmax(x,x+1);
}
