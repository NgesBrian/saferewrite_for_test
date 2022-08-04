#include <inttypes.h>
#include "crypto_hash.h"

void sha512_300bytes(uint8_t *h,uint8_t *x)
{
  crypto_hash(h,x,300);
}
