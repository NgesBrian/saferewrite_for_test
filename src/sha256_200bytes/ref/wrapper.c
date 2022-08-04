#include <inttypes.h>

extern int crypto_hash(unsigned char *,const unsigned char *,long long inlen);

void sha256_200bytes(uint8_t *h,uint8_t *x)
{
  crypto_hash(h,x,200);
}
